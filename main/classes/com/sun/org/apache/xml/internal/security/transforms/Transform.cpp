#include <com/sun/org/apache/xml/internal/security/transforms/Transform.h>

#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/AlgorithmAlreadyRegisteredException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/transforms/InvalidTransformException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformationException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformBase64Decode.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14N.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14N11.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14N11_WithComments.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14NExclusive.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14NExclusiveWithComments.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14NWithComments.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformEnvelopedSignature.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath2Filter.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXSLT.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/HelperNodeList.h>
#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef LOG
#undef TRANSFORM_BASE64_DECODE
#undef TRANSFORM_C14N_EXCL_OMIT_COMMENTS
#undef TRANSFORM_C14N_EXCL_WITH_COMMENTS
#undef TRANSFORM_C14N_OMIT_COMMENTS
#undef TRANSFORM_C14N_WITH_COMMENTS
#undef TRANSFORM_ENVELOPED_SIGNATURE
#undef TRANSFORM_XPATH
#undef TRANSFORM_XPATH2FILTER
#undef TRANSFORM_XSLT
#undef _ATT_ALGORITHM
#undef _TAG_TRANSFORM

using $CanonicalizationException = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizationException;
using $AlgorithmAlreadyRegisteredException = ::com::sun::org::apache::xml::internal::security::exceptions::AlgorithmAlreadyRegisteredException;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $ClassLoaderUtils = ::com::sun::org::apache::xml::internal::security::transforms::ClassLoaderUtils;
using $InvalidTransformException = ::com::sun::org::apache::xml::internal::security::transforms::InvalidTransformException;
using $TransformSpi = ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi;
using $TransformationException = ::com::sun::org::apache::xml::internal::security::transforms::TransformationException;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $TransformBase64Decode = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformBase64Decode;
using $TransformC14N = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14N;
using $TransformC14N11 = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14N11;
using $TransformC14N11_WithComments = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14N11_WithComments;
using $TransformC14NExclusive = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14NExclusive;
using $TransformC14NExclusiveWithComments = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14NExclusiveWithComments;
using $TransformC14NWithComments = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14NWithComments;
using $TransformEnvelopedSignature = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformEnvelopedSignature;
using $TransformXPath = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformXPath;
using $TransformXPath2Filter = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformXPath2Filter;
using $TransformXSLT = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformXSLT;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $HelperNodeList = ::com::sun::org::apache::xml::internal::security::utils::HelperNodeList;
using $JavaUtils = ::com::sun::org::apache::xml::internal::security::utils::JavaUtils;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {

$FieldInfo _Transform_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Transform, LOG)},
	{"transformSpiHash", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/transforms/TransformSpi;>;", $PRIVATE | $STATIC, $staticField(Transform, transformSpiHash)},
	{"transformSpi", "Lcom/sun/org/apache/xml/internal/security/transforms/TransformSpi;", nullptr, $PRIVATE | $FINAL, $field(Transform, transformSpi)},
	{}
};

$MethodInfo _Transform_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Transform::*)($Document*,$String*)>(&Transform::init$)), "com.sun.org.apache.xml.internal.security.transforms.InvalidTransformException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(Transform::*)($Document*,$String*,$Element*)>(&Transform::init$)), "com.sun.org.apache.xml.internal.security.transforms.InvalidTransformException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Lorg/w3c/dom/NodeList;)V", nullptr, $PUBLIC, $method(static_cast<void(Transform::*)($Document*,$String*,$NodeList*)>(&Transform::init$)), "com.sun.org.apache.xml.internal.security.transforms.InvalidTransformException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Transform::*)($Element*,$String*)>(&Transform::init$)), "com.sun.org.apache.xml.internal.security.transforms.InvalidTransformException,com.sun.org.apache.xml.internal.security.transforms.TransformationException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(Transform::*)()>(&Transform::getURI))},
	{"initializeTransform", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/transforms/TransformSpi;", nullptr, $PRIVATE, $method(static_cast<$TransformSpi*(Transform::*)($String*)>(&Transform::initializeTransform)), "com.sun.org.apache.xml.internal.security.transforms.InvalidTransformException"},
	{"performTransform", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Z)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, $method(static_cast<$XMLSignatureInput*(Transform::*)($XMLSignatureInput*,bool)>(&Transform::performTransform)), "java.io.IOException,com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,com.sun.org.apache.xml.internal.security.c14n.InvalidCanonicalizerException,com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{"performTransform", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/io/OutputStream;Z)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, $method(static_cast<$XMLSignatureInput*(Transform::*)($XMLSignatureInput*,$OutputStream*,bool)>(&Transform::performTransform)), "java.io.IOException,com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,com.sun.org.apache.xml.internal.security.c14n.InvalidCanonicalizerException,com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{"register", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&Transform::register$)), "com.sun.org.apache.xml.internal.security.exceptions.AlgorithmAlreadyRegisteredException,java.lang.ClassNotFoundException,com.sun.org.apache.xml.internal.security.transforms.InvalidTransformException"},
	{"register", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<+Lcom/sun/org/apache/xml/internal/security/transforms/TransformSpi;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$Class*)>(&Transform::register$)), "com.sun.org.apache.xml.internal.security.exceptions.AlgorithmAlreadyRegisteredException,com.sun.org.apache.xml.internal.security.transforms.InvalidTransformException"},
	{"registerDefaultAlgorithms", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Transform::registerDefaultAlgorithms))},
	{}
};

$ClassInfo _Transform_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.Transform",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	nullptr,
	_Transform_FieldInfo_,
	_Transform_MethodInfo_
};

$Object* allocate$Transform($Class* clazz) {
	return $of($alloc(Transform));
}

$Logger* Transform::LOG = nullptr;

$Map* Transform::transformSpiHash = nullptr;

void Transform::init$($Document* doc, $String* algorithmURI) {
	Transform::init$(doc, algorithmURI, ($NodeList*)nullptr);
}

void Transform::init$($Document* doc, $String* algorithmURI, $Element* contextChild) {
	$useLocalCurrentObjectStackCache();
	$SignatureElementProxy::init$(doc);
	$init($Constants);
	setLocalAttribute($Constants::_ATT_ALGORITHM, algorithmURI);
	$set(this, transformSpi, initializeTransform(algorithmURI));
	if (contextChild != nullptr) {
		$var($HelperNodeList, contextNodes, $new($HelperNodeList));
		$XMLUtils::addReturnToElement(doc, contextNodes);
		contextNodes->appendChild(contextChild);
		$XMLUtils::addReturnToElement(doc, contextNodes);
		int32_t length = contextNodes->getLength();
		for (int32_t i = 0; i < length; ++i) {
			appendSelf($($nc($(contextNodes->item(i)))->cloneNode(true)));
		}
		$nc(Transform::LOG)->debug("The NodeList is {}"_s, $$new($ObjectArray, {$of(contextNodes)}));
	}
}

void Transform::init$($Document* doc, $String* algorithmURI, $NodeList* contextNodes) {
	$useLocalCurrentObjectStackCache();
	$SignatureElementProxy::init$(doc);
	$init($Constants);
	setLocalAttribute($Constants::_ATT_ALGORITHM, algorithmURI);
	$set(this, transformSpi, initializeTransform(algorithmURI));
	if (contextNodes != nullptr) {
		int32_t length = contextNodes->getLength();
		for (int32_t i = 0; i < length; ++i) {
			appendSelf($($nc($(contextNodes->item(i)))->cloneNode(true)));
		}
		$nc(Transform::LOG)->debug("The NodeList is {}"_s, $$new($ObjectArray, {$of(contextNodes)}));
	}
}

void Transform::init$($Element* element, $String* baseURI) {
	$useLocalCurrentObjectStackCache();
	$SignatureElementProxy::init$(element, baseURI);
	$init($Constants);
	$var($String, algorithmURI, $nc(element)->getAttributeNS(nullptr, $Constants::_ATT_ALGORITHM));
	if (algorithmURI == nullptr || $nc(algorithmURI)->length() == 0) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of($Constants::_ATT_ALGORITHM),
			$of($Constants::_TAG_TRANSFORM)
		}));
		$throwNew($TransformationException, "xml.WrongContent"_s, exArgs);
	}
	$set(this, transformSpi, initializeTransform(algorithmURI));
}

void Transform::register$($String* algorithmURI, $String* implementingClass) {
	$init(Transform);
	$useLocalCurrentObjectStackCache();
	$JavaUtils::checkRegisterPermission();
	$var($TransformSpi, transformSpi, $cast($TransformSpi, $nc(Transform::transformSpiHash)->get(algorithmURI)));
	if (transformSpi != nullptr) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmURI),
			$of(transformSpi)
		}));
		$throwNew($AlgorithmAlreadyRegisteredException, "algorithm.alreadyRegistered"_s, exArgs);
	}
	$Class* transformSpiClass = $ClassLoaderUtils::loadClass(implementingClass, Transform::class$);
	try {
		$nc(Transform::transformSpiHash)->put(algorithmURI, $cast($TransformSpi, $($JavaUtils::newInstanceWithEmptyConstructor(transformSpiClass))));
	} catch ($InstantiationException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(algorithmURI)}));
		$throwNew($InvalidTransformException, static_cast<$Exception*>(ex), "signature.Transform.UnknownTransform"_s, exArgs);
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(algorithmURI)}));
		$throwNew($InvalidTransformException, static_cast<$Exception*>(ex), "signature.Transform.UnknownTransform"_s, exArgs);
	} catch ($InvocationTargetException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(algorithmURI)}));
		$throwNew($InvalidTransformException, static_cast<$Exception*>(ex), "signature.Transform.UnknownTransform"_s, exArgs);
	}
}

void Transform::register$($String* algorithmURI, $Class* implementingClass) {
	$init(Transform);
	$useLocalCurrentObjectStackCache();
	$JavaUtils::checkRegisterPermission();
	$var($TransformSpi, transformSpi, $cast($TransformSpi, $nc(Transform::transformSpiHash)->get(algorithmURI)));
	if (transformSpi != nullptr) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmURI),
			$of(transformSpi)
		}));
		$throwNew($AlgorithmAlreadyRegisteredException, "algorithm.alreadyRegistered"_s, exArgs);
	}
	try {
		$nc(Transform::transformSpiHash)->put(algorithmURI, $cast($TransformSpi, $($JavaUtils::newInstanceWithEmptyConstructor(implementingClass))));
	} catch ($InstantiationException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(algorithmURI)}));
		$throwNew($InvalidTransformException, static_cast<$Exception*>(ex), "signature.Transform.UnknownTransform"_s, exArgs);
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(algorithmURI)}));
		$throwNew($InvalidTransformException, static_cast<$Exception*>(ex), "signature.Transform.UnknownTransform"_s, exArgs);
	} catch ($InvocationTargetException&) {
		$var($ReflectiveOperationException, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(algorithmURI)}));
		$throwNew($InvalidTransformException, static_cast<$Exception*>(ex), "signature.Transform.UnknownTransform"_s, exArgs);
	}
}

void Transform::registerDefaultAlgorithms() {
	$init(Transform);
	$useLocalCurrentObjectStackCache();
	$init($Transforms);
	$nc(Transform::transformSpiHash)->put($Transforms::TRANSFORM_BASE64_DECODE, $$new($TransformBase64Decode));
	$nc(Transform::transformSpiHash)->put($Transforms::TRANSFORM_C14N_OMIT_COMMENTS, $$new($TransformC14N));
	$nc(Transform::transformSpiHash)->put($Transforms::TRANSFORM_C14N_WITH_COMMENTS, $$new($TransformC14NWithComments));
	$nc(Transform::transformSpiHash)->put($Transforms::TRANSFORM_C14N11_OMIT_COMMENTS, $$new($TransformC14N11));
	$nc(Transform::transformSpiHash)->put($Transforms::TRANSFORM_C14N11_WITH_COMMENTS, $$new($TransformC14N11_WithComments));
	$nc(Transform::transformSpiHash)->put($Transforms::TRANSFORM_C14N_EXCL_OMIT_COMMENTS, $$new($TransformC14NExclusive));
	$nc(Transform::transformSpiHash)->put($Transforms::TRANSFORM_C14N_EXCL_WITH_COMMENTS, $$new($TransformC14NExclusiveWithComments));
	$nc(Transform::transformSpiHash)->put($Transforms::TRANSFORM_XPATH, $$new($TransformXPath));
	$nc(Transform::transformSpiHash)->put($Transforms::TRANSFORM_ENVELOPED_SIGNATURE, $$new($TransformEnvelopedSignature));
	$nc(Transform::transformSpiHash)->put($Transforms::TRANSFORM_XSLT, $$new($TransformXSLT));
	$nc(Transform::transformSpiHash)->put($Transforms::TRANSFORM_XPATH2FILTER, $$new($TransformXPath2Filter));
}

$String* Transform::getURI() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ALGORITHM);
}

$XMLSignatureInput* Transform::performTransform($XMLSignatureInput* input, bool secureValidation) {
	return performTransform(input, nullptr, secureValidation);
}

$XMLSignatureInput* Transform::performTransform($XMLSignatureInput* input, $OutputStream* os, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	$var($XMLSignatureInput, result, nullptr);
	try {
		$assign(result, $nc(this->transformSpi)->enginePerformTransform(input, os, $(getElement()), this->baseURI, secureValidation));
	} catch ($ParserConfigurationException&) {
		$var($ParserConfigurationException, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$($of(this->getURI())),
			$of("ParserConfigurationException"_s)
		}));
		$throwNew($CanonicalizationException, static_cast<$Exception*>(ex), "signature.Transform.ErrorDuringTransform"_s, exArgs);
	} catch ($SAXException&) {
		$var($SAXException, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$($of(this->getURI())),
			$of("SAXException"_s)
		}));
		$throwNew($CanonicalizationException, static_cast<$Exception*>(ex), "signature.Transform.ErrorDuringTransform"_s, exArgs);
	}
	return result;
}

$String* Transform::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_TRANSFORM;
}

$TransformSpi* Transform::initializeTransform($String* algorithmURI) {
	$useLocalCurrentObjectStackCache();
	$var($TransformSpi, newTransformSpi, $cast($TransformSpi, $nc(Transform::transformSpiHash)->get(algorithmURI)));
	if (newTransformSpi == nullptr) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(algorithmURI)}));
		$throwNew($InvalidTransformException, "signature.Transform.UnknownTransform"_s, exArgs);
	}
	$nc(Transform::LOG)->debug("Create URI \"{}\" class \"{}\""_s, $$new($ObjectArray, {
		$of(algorithmURI),
		$of($nc($of(newTransformSpi))->getClass())
	}));
	return newTransformSpi;
}

void clinit$Transform($Class* class$) {
	$assignStatic(Transform::LOG, $LoggerFactory::getLogger(Transform::class$));
	$assignStatic(Transform::transformSpiHash, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

Transform::Transform() {
}

$Class* Transform::load$($String* name, bool initialize) {
	$loadClass(Transform, name, initialize, &_Transform_ClassInfo_, clinit$Transform, allocate$Transform);
	return class$;
}

$Class* Transform::class$ = nullptr;

							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com