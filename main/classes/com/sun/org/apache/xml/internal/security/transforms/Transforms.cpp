#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>

#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/InvalidCanonicalizerException.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/InvalidTransformException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transform.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformationException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef ALGO_ID_C14N_EXCL_OMIT_COMMENTS
#undef ALGO_ID_C14N_EXCL_WITH_COMMENTS
#undef ALGO_ID_C14N_OMIT_COMMENTS
#undef ALGO_ID_C14N_WITH_COMMENTS
#undef LOG
#undef TRANSFORM_BASE64_DECODE
#undef TRANSFORM_C14N_EXCL_OMIT_COMMENTS
#undef TRANSFORM_C14N_EXCL_WITH_COMMENTS
#undef TRANSFORM_C14N_OMIT_COMMENTS
#undef TRANSFORM_C14N_WITH_COMMENTS
#undef TRANSFORM_ENVELOPED_SIGNATURE
#undef TRANSFORM_XPATH
#undef TRANSFORM_XPATH2FILTER
#undef TRANSFORM_XPOINTER
#undef TRANSFORM_XSLT
#undef _TAG_TRANSFORM
#undef _TAG_TRANSFORMS

using $ElementArray = $Array<::org::w3c::dom::Element>;
using $CanonicalizationException = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizationException;
using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $InvalidCanonicalizerException = ::com::sun::org::apache::xml::internal::security::c14n::InvalidCanonicalizerException;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $InvalidTransformException = ::com::sun::org::apache::xml::internal::security::transforms::InvalidTransformException;
using $Transform = ::com::sun::org::apache::xml::internal::security::transforms::Transform;
using $TransformationException = ::com::sun::org::apache::xml::internal::security::transforms::TransformationException;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {

$FieldInfo _Transforms_FieldInfo_[] = {
	{"TRANSFORM_C14N_OMIT_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transforms, TRANSFORM_C14N_OMIT_COMMENTS)},
	{"TRANSFORM_C14N_WITH_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transforms, TRANSFORM_C14N_WITH_COMMENTS)},
	{"TRANSFORM_C14N11_OMIT_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transforms, TRANSFORM_C14N11_OMIT_COMMENTS)},
	{"TRANSFORM_C14N11_WITH_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transforms, TRANSFORM_C14N11_WITH_COMMENTS)},
	{"TRANSFORM_C14N_EXCL_OMIT_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transforms, TRANSFORM_C14N_EXCL_OMIT_COMMENTS)},
	{"TRANSFORM_C14N_EXCL_WITH_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transforms, TRANSFORM_C14N_EXCL_WITH_COMMENTS)},
	{"TRANSFORM_XSLT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transforms, TRANSFORM_XSLT)},
	{"TRANSFORM_BASE64_DECODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transforms, TRANSFORM_BASE64_DECODE)},
	{"TRANSFORM_XPATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transforms, TRANSFORM_XPATH)},
	{"TRANSFORM_ENVELOPED_SIGNATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transforms, TRANSFORM_ENVELOPED_SIGNATURE)},
	{"TRANSFORM_XPOINTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transforms, TRANSFORM_XPOINTER)},
	{"TRANSFORM_XPATH2FILTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transforms, TRANSFORM_XPATH2FILTER)},
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Transforms, LOG)},
	{"transformsElement", "[Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(Transforms, transformsElement)},
	{"secureValidation", "Z", nullptr, $PRIVATE, $field(Transforms, secureValidation)},
	{}
};

$MethodInfo _Transforms_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Transforms::*)()>(&Transforms::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(Transforms::*)($Document*)>(&Transforms::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Transforms::*)($Element*,$String*)>(&Transforms::init$)), "org.w3c.dom.DOMException,com.sun.org.apache.xml.internal.security.signature.XMLSignatureException,com.sun.org.apache.xml.internal.security.transforms.InvalidTransformException,com.sun.org.apache.xml.internal.security.transforms.TransformationException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"addTransform", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{"addTransform", "(Ljava/lang/String;Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{"addTransform", "(Ljava/lang/String;Lorg/w3c/dom/NodeList;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{"addTransform", "(Lcom/sun/org/apache/xml/internal/security/transforms/Transform;)V", nullptr, $PRIVATE, $method(static_cast<void(Transforms::*)($Transform*)>(&Transforms::addTransform))},
	{"checkSecureValidation", "(Lcom/sun/org/apache/xml/internal/security/transforms/Transform;)V", nullptr, $PRIVATE, $method(static_cast<void(Transforms::*)($Transform*)>(&Transforms::checkSecureValidation)), "com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"initTransforms", "()V", nullptr, $PRIVATE, $method(static_cast<void(Transforms::*)()>(&Transforms::initTransforms))},
	{"item", "(I)Lcom/sun/org/apache/xml/internal/security/transforms/Transform;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{"performTransforms", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{"performTransforms", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/io/OutputStream;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{"setSecureValidation", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Transforms_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.Transforms",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	nullptr,
	_Transforms_FieldInfo_,
	_Transforms_MethodInfo_
};

$Object* allocate$Transforms($Class* clazz) {
	return $of($alloc(Transforms));
}


$String* Transforms::TRANSFORM_C14N_OMIT_COMMENTS = nullptr;

$String* Transforms::TRANSFORM_C14N_WITH_COMMENTS = nullptr;

$String* Transforms::TRANSFORM_C14N11_OMIT_COMMENTS = nullptr;

$String* Transforms::TRANSFORM_C14N11_WITH_COMMENTS = nullptr;

$String* Transforms::TRANSFORM_C14N_EXCL_OMIT_COMMENTS = nullptr;

$String* Transforms::TRANSFORM_C14N_EXCL_WITH_COMMENTS = nullptr;

$String* Transforms::TRANSFORM_XSLT = nullptr;

$String* Transforms::TRANSFORM_BASE64_DECODE = nullptr;

$String* Transforms::TRANSFORM_XPATH = nullptr;

$String* Transforms::TRANSFORM_ENVELOPED_SIGNATURE = nullptr;

$String* Transforms::TRANSFORM_XPOINTER = nullptr;

$String* Transforms::TRANSFORM_XPATH2FILTER = nullptr;
$Logger* Transforms::LOG = nullptr;

void Transforms::init$() {
	$SignatureElementProxy::init$();
}

void Transforms::init$($Document* doc) {
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
}

void Transforms::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
	int32_t numberOfTransformElems = this->getLength();
	if (numberOfTransformElems == 0) {
			$init($Constants);
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of($Constants::_TAG_TRANSFORM),
			$of($Constants::_TAG_TRANSFORMS)
		}));
		$throwNew($TransformationException, "xml.WrongContent"_s, exArgs);
	}
}

void Transforms::setSecureValidation(bool secureValidation) {
	this->secureValidation = secureValidation;
}

void Transforms::addTransform($String* transformURI) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(Transforms::LOG)->debug("Transforms.addTransform({})"_s, $$new($ObjectArray, {$of(transformURI)}));
		$var($Transform, transform, $new($Transform, $(getDocument()), transformURI));
		this->addTransform(transform);
	} catch ($InvalidTransformException&) {
		$var($InvalidTransformException, ex, $catch());
		$throwNew($TransformationException, static_cast<$Exception*>(ex));
	}
}

void Transforms::addTransform($String* transformURI, $Element* contextElement) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(Transforms::LOG)->debug("Transforms.addTransform({})"_s, $$new($ObjectArray, {$of(transformURI)}));
		$var($Transform, transform, $new($Transform, $(getDocument()), transformURI, contextElement));
		this->addTransform(transform);
	} catch ($InvalidTransformException&) {
		$var($InvalidTransformException, ex, $catch());
		$throwNew($TransformationException, static_cast<$Exception*>(ex));
	}
}

void Transforms::addTransform($String* transformURI, $NodeList* contextNodes) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Transform, transform, $new($Transform, $(getDocument()), transformURI, contextNodes));
		this->addTransform(transform);
	} catch ($InvalidTransformException&) {
		$var($InvalidTransformException, ex, $catch());
		$throwNew($TransformationException, static_cast<$Exception*>(ex));
	}
}

void Transforms::addTransform($Transform* transform) {
	$useLocalCurrentObjectStackCache();
	$nc(Transforms::LOG)->debug("Transforms.addTransform({})"_s, $$new($ObjectArray, {$($of($nc(transform)->getURI()))}));
	$var($Element, transformElement, $nc(transform)->getElement());
	appendSelf(static_cast<$Node*>(transformElement));
	addReturnToSelf();
}

$XMLSignatureInput* Transforms::performTransforms($XMLSignatureInput* xmlSignatureInput) {
	return performTransforms(xmlSignatureInput, nullptr);
}

$XMLSignatureInput* Transforms::performTransforms($XMLSignatureInput* xmlSignatureInput$renamed, $OutputStream* os) {
	$useLocalCurrentObjectStackCache();
	$var($XMLSignatureInput, xmlSignatureInput, xmlSignatureInput$renamed);
	try {
		int32_t last = this->getLength() - 1;
		for (int32_t i = 0; i < last; ++i) {
			$var($Transform, t, this->item(i));
			$nc(Transforms::LOG)->debug("Perform the ({})th {} transform"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(i))),
				$($of($nc(t)->getURI()))
			}));
			checkSecureValidation(t);
			$assign(xmlSignatureInput, $nc(t)->performTransform(xmlSignatureInput, this->secureValidation));
		}
		if (last >= 0) {
			$var($Transform, t, this->item(last));
			$nc(Transforms::LOG)->debug("Perform the ({})th {} transform"_s, $$new($ObjectArray, {
				$($of($Integer::valueOf(last))),
				$($of($nc(t)->getURI()))
			}));
			checkSecureValidation(t);
			$assign(xmlSignatureInput, $nc(t)->performTransform(xmlSignatureInput, os, this->secureValidation));
		}
		return xmlSignatureInput;
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($TransformationException, ex);
	} catch ($CanonicalizationException&) {
		$var($Exception, ex, $catch());
		$throwNew($TransformationException, ex);
	} catch ($InvalidCanonicalizerException&) {
		$var($Exception, ex, $catch());
		$throwNew($TransformationException, ex);
	}
	$shouldNotReachHere();
}

void Transforms::checkSecureValidation($Transform* transform) {
	$useLocalCurrentObjectStackCache();
	$var($String, uri, $nc(transform)->getURI());
	if (this->secureValidation && $nc(Transforms::TRANSFORM_XSLT)->equals(uri)) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(uri)}));
		$throwNew($TransformationException, "signature.Transform.ForbiddenTransform"_s, exArgs);
	}
}

int32_t Transforms::getLength() {
	initTransforms();
	return $nc(this->transformsElement)->length;
}

$Transform* Transforms::item(int32_t i) {
	try {
		initTransforms();
		return $new($Transform, $nc(this->transformsElement)->get(i), this->baseURI);
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$throwNew($TransformationException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

void Transforms::initTransforms() {
	if (this->transformsElement == nullptr) {
		$set(this, transformsElement, $XMLUtils::selectDsNodes($(getFirstChild()), "Transform"_s));
	}
}

$String* Transforms::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_TRANSFORMS;
}

void clinit$Transforms($Class* class$) {
	$init($Canonicalizer);
	$assignStatic(Transforms::TRANSFORM_C14N_OMIT_COMMENTS, $Canonicalizer::ALGO_ID_C14N_OMIT_COMMENTS);
	$assignStatic(Transforms::TRANSFORM_C14N_WITH_COMMENTS, $Canonicalizer::ALGO_ID_C14N_WITH_COMMENTS);
	$assignStatic(Transforms::TRANSFORM_C14N11_OMIT_COMMENTS, $Canonicalizer::ALGO_ID_C14N11_OMIT_COMMENTS);
	$assignStatic(Transforms::TRANSFORM_C14N11_WITH_COMMENTS, $Canonicalizer::ALGO_ID_C14N11_WITH_COMMENTS);
	$assignStatic(Transforms::TRANSFORM_C14N_EXCL_OMIT_COMMENTS, $Canonicalizer::ALGO_ID_C14N_EXCL_OMIT_COMMENTS);
	$assignStatic(Transforms::TRANSFORM_C14N_EXCL_WITH_COMMENTS, $Canonicalizer::ALGO_ID_C14N_EXCL_WITH_COMMENTS);
	$assignStatic(Transforms::TRANSFORM_XSLT, "http://www.w3.org/TR/1999/REC-xslt-19991116"_s);
	$init($Constants);
	$assignStatic(Transforms::TRANSFORM_BASE64_DECODE, $str({$Constants::SignatureSpecNS, "base64"_s}));
	$assignStatic(Transforms::TRANSFORM_XPATH, "http://www.w3.org/TR/1999/REC-xpath-19991116"_s);
	$assignStatic(Transforms::TRANSFORM_ENVELOPED_SIGNATURE, $str({$Constants::SignatureSpecNS, "enveloped-signature"_s}));
	$assignStatic(Transforms::TRANSFORM_XPOINTER, "http://www.w3.org/TR/2001/WD-xptr-20010108"_s);
	$assignStatic(Transforms::TRANSFORM_XPATH2FILTER, "http://www.w3.org/2002/06/xmldsig-filter2"_s);
	$assignStatic(Transforms::LOG, $LoggerFactory::getLogger(Transforms::class$));
}

Transforms::Transforms() {
}

$Class* Transforms::load$($String* name, bool initialize) {
	$loadClass(Transforms, name, initialize, &_Transforms_ClassInfo_, clinit$Transforms, allocate$Transforms);
	return class$;
}

$Class* Transforms::class$ = nullptr;

							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com