#include <org/jcp/xml/dsig/internal/dom/ApacheTransform.h>

#include <com/sun/org/apache/xml/internal/security/Init.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transform.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/NodeSetData.h>
#include <javax/xml/crypto/OctetStreamData.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <javax/xml/crypto/dsig/TransformException.h>
#include <javax/xml/crypto/dsig/TransformService.h>
#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheData.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheNodeSetData.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheOctetStreamData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/jcp/xml/dsig/internal/dom/Policy.h>
#include <org/jcp/xml/dsig/internal/dom/Utils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef LOG

using $Init = ::com::sun::org::apache::xml::internal::security::Init;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $Transform = ::com::sun::org::apache::xml::internal::security::transforms::Transform;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Data = ::javax::xml::crypto::Data;
using $NodeSetData = ::javax::xml::crypto::NodeSetData;
using $OctetStreamData = ::javax::xml::crypto::OctetStreamData;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $TransformException = ::javax::xml::crypto::dsig::TransformException;
using $TransformService = ::javax::xml::crypto::dsig::TransformService;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;
using $ApacheData = ::org::jcp::xml::dsig::internal::dom::ApacheData;
using $ApacheNodeSetData = ::org::jcp::xml::dsig::internal::dom::ApacheNodeSetData;
using $ApacheOctetStreamData = ::org::jcp::xml::dsig::internal::dom::ApacheOctetStreamData;
using $DOMSubTreeData = ::org::jcp::xml::dsig::internal::dom::DOMSubTreeData;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Policy = ::org::jcp::xml::dsig::internal::dom::Policy;
using $Utils = ::org::jcp::xml::dsig::internal::dom::Utils;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _ApacheTransform_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ApacheTransform, LOG)},
	{"transform", "Lcom/sun/org/apache/xml/internal/security/transforms/Transform;", nullptr, $PRIVATE, $field(ApacheTransform, transform$)},
	{"ownerDoc", "Lorg/w3c/dom/Document;", nullptr, $PROTECTED, $field(ApacheTransform, ownerDoc)},
	{"transformElem", "Lorg/w3c/dom/Element;", nullptr, $PROTECTED, $field(ApacheTransform, transformElem)},
	{"params", "Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;", nullptr, $PROTECTED, $field(ApacheTransform, params)},
	{}
};

$MethodInfo _ApacheTransform_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ApacheTransform::*)()>(&ApacheTransform::init$))},
	{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $FINAL},
	{"init", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshalParams", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.dsig.TransformException"},
	{"transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;Ljava/io/OutputStream;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.dsig.TransformException"},
	{"transformIt", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;Ljava/io/OutputStream;)Ljavax/xml/crypto/Data;", nullptr, $PRIVATE, $method(static_cast<$Data*(ApacheTransform::*)($Data*,$XMLCryptoContext*,$OutputStream*)>(&ApacheTransform::transformIt)), "javax.xml.crypto.dsig.TransformException"},
	{}
};

$ClassInfo _ApacheTransform_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.ApacheTransform",
	"javax.xml.crypto.dsig.TransformService",
	nullptr,
	_ApacheTransform_FieldInfo_,
	_ApacheTransform_MethodInfo_
};

$Object* allocate$ApacheTransform($Class* clazz) {
	return $of($alloc(ApacheTransform));
}

$Logger* ApacheTransform::LOG = nullptr;

void ApacheTransform::init$() {
	$TransformService::init$();
}

$AlgorithmParameterSpec* ApacheTransform::getParameterSpec() {
	return this->params;
}

void ApacheTransform::init($XMLStructure* parent, $XMLCryptoContext* context) {
	if (context != nullptr && !($instanceOf($DOMCryptoContext, context))) {
		$throwNew($ClassCastException, "context must be of type DOMCryptoContext"_s);
	}
	if (parent == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($DOMStructure, parent))) {
		$throwNew($ClassCastException, "parent must be of type DOMStructure"_s);
	}
	$set(this, transformElem, $cast($Element, $nc(($cast($DOMStructure, parent)))->getNode()));
	$set(this, ownerDoc, $DOMUtils::getOwnerDocument(this->transformElem));
}

void ApacheTransform::marshalParams($XMLStructure* parent, $XMLCryptoContext* context) {
	if (context != nullptr && !($instanceOf($DOMCryptoContext, context))) {
		$throwNew($ClassCastException, "context must be of type DOMCryptoContext"_s);
	}
	if (parent == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($DOMStructure, parent))) {
		$throwNew($ClassCastException, "parent must be of type DOMStructure"_s);
	}
	$set(this, transformElem, $cast($Element, $nc(($cast($DOMStructure, parent)))->getNode()));
	$set(this, ownerDoc, $DOMUtils::getOwnerDocument(this->transformElem));
}

$Data* ApacheTransform::transform($Data* data, $XMLCryptoContext* xc) {
	if (data == nullptr) {
		$throwNew($NullPointerException, "data must not be null"_s);
	}
	return transformIt(data, xc, nullptr);
}

$Data* ApacheTransform::transform($Data* data, $XMLCryptoContext* xc, $OutputStream* os) {
	if (data == nullptr) {
		$throwNew($NullPointerException, "data must not be null"_s);
	}
	if (os == nullptr) {
		$throwNew($NullPointerException, "output stream must not be null"_s);
	}
	return transformIt(data, xc, os);
}

$Data* ApacheTransform::transformIt($Data* data, $XMLCryptoContext* xc, $OutputStream* os) {
	if (this->ownerDoc == nullptr) {
		$throwNew($TransformException, "transform must be marshalled"_s);
	}
	if (this->transform$ == nullptr) {
		try {
			$var($Document, var$0, this->ownerDoc);
			$var($String, var$1, getAlgorithm());
			$set(this, transform$, $new($Transform, var$0, var$1, $($nc(this->transformElem)->getChildNodes())));
			$nc(this->transform$)->setElement(this->transformElem, $($nc(xc)->getBaseURI()));
			$nc(ApacheTransform::LOG)->debug("Created transform for algorithm: {}"_s, $$new($ObjectArray, {$($of(getAlgorithm()))}));
		} catch ($Exception&) {
			$var($Exception, ex, $catch());
			$throwNew($TransformException, $$str({"Couldn\'t find Transform for: "_s, $(getAlgorithm())}), ex);
		}
	}
	if ($Utils::secureValidation(xc)) {
		$var($String, algorithm, getAlgorithm());
		if ($Policy::restrictAlg(algorithm)) {
			$throwNew($TransformException, $$str({"Transform "_s, algorithm, " is forbidden when secure validation is enabled"_s}));
		}
	}
	$var($XMLSignatureInput, in, nullptr);
	if ($instanceOf($ApacheData, data)) {
		$nc(ApacheTransform::LOG)->debug("ApacheData = true"_s);
		$assign(in, $nc(($cast($ApacheData, data)))->getXMLSignatureInput());
	} else if ($instanceOf($NodeSetData, data)) {
		$nc(ApacheTransform::LOG)->debug("isNodeSet() = true"_s);
		if ($instanceOf($DOMSubTreeData, data)) {
			$nc(ApacheTransform::LOG)->debug("DOMSubTreeData = true"_s);
			$var($DOMSubTreeData, subTree, $cast($DOMSubTreeData, data));
			$assign(in, $new($XMLSignatureInput, $($nc(subTree)->getRoot())));
			in->setExcludeComments($nc(subTree)->excludeComments());
		} else {
			$var($Set, nodeSet, $Utils::toNodeSet($($nc(($cast($NodeSetData, data)))->iterator())));
			$assign(in, $new($XMLSignatureInput, nodeSet));
		}
	} else {
		$nc(ApacheTransform::LOG)->debug("isNodeSet() = false"_s);
		try {
			$assign(in, $new($XMLSignatureInput, $($nc(($cast($OctetStreamData, data)))->getOctetStream())));
		} catch ($Exception&) {
			$var($Exception, ex, $catch());
			$throwNew($TransformException, static_cast<$Throwable*>(ex));
		}
	}
	bool secVal = $Utils::secureValidation(xc);
	$nc(in)->setSecureValidation(secVal);
	try {
		if (os != nullptr) {
			$assign(in, $nc(this->transform$)->performTransform(in, os, secVal));
			bool var$2 = !$nc(in)->isNodeSet();
			if (var$2 && !in->isElement()) {
				return nullptr;
			}
		} else {
			$assign(in, $nc(this->transform$)->performTransform(in, secVal));
		}
		if (in->isOctetStream()) {
			return static_cast<$Data*>(static_cast<$OctetStreamData*>($new($ApacheOctetStreamData, in)));
		} else {
			return static_cast<$Data*>(static_cast<$ApacheData*>($new($ApacheNodeSetData, in)));
		}
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($TransformException, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

bool ApacheTransform::isFeatureSupported($String* feature) {
	if (feature == nullptr) {
		$throwNew($NullPointerException);
	} else {
		return false;
	}
}

void clinit$ApacheTransform($Class* class$) {
	{
		$Init::init();
	}
	$assignStatic(ApacheTransform::LOG, $LoggerFactory::getLogger(ApacheTransform::class$));
}

ApacheTransform::ApacheTransform() {
}

$Class* ApacheTransform::load$($String* name, bool initialize) {
	$loadClass(ApacheTransform, name, initialize, &_ApacheTransform_ClassInfo_, clinit$ApacheTransform, allocate$ApacheTransform);
	return class$;
}

$Class* ApacheTransform::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org