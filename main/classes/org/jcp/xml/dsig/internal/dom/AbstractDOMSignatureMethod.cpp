#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/Key.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/xml/crypto/AlgorithmMethod.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <javax/xml/crypto/dsig/SignedInfo.h>
#include <javax/xml/crypto/dsig/XMLSignContext.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <javax/xml/crypto/dsig/spec/SignatureMethodParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef XMLNS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $Key = ::java::security::Key;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $SignatureMethod = ::javax::xml::crypto::dsig::SignatureMethod;
using $SignedInfo = ::javax::xml::crypto::dsig::SignedInfo;
using $XMLSignContext = ::javax::xml::crypto::dsig::XMLSignContext;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;
using $SignatureMethodParameterSpec = ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec;
using $AbstractDOMSignatureMethod$Type = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type;
using $DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _AbstractDOMSignatureMethod_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(AbstractDOMSignatureMethod::*)()>(&AbstractDOMSignatureMethod::init$))},
	{"checkParams", "(Ljavax/xml/crypto/dsig/spec/SignatureMethodParameterSpec;)V", nullptr, 0, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAlgorithmType", "()Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $ABSTRACT},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, $ABSTRACT},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"marshalParams", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{"paramsEqual", "(Ljava/security/spec/AlgorithmParameterSpec;)Z", nullptr, 0},
	{"sign", "(Ljava/security/Key;Ljavax/xml/crypto/dsig/SignedInfo;Ljavax/xml/crypto/dsig/XMLSignContext;)[B", nullptr, $ABSTRACT, nullptr, "java.security.InvalidKeyException,javax.xml.crypto.dsig.XMLSignatureException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unmarshalParams", "(Lorg/w3c/dom/Element;)Ljavax/xml/crypto/dsig/spec/SignatureMethodParameterSpec;", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{"verify", "(Ljava/security/Key;Ljavax/xml/crypto/dsig/SignedInfo;[BLjavax/xml/crypto/dsig/XMLValidateContext;)Z", nullptr, $ABSTRACT, nullptr, "java.security.InvalidKeyException,java.security.SignatureException,javax.xml.crypto.dsig.XMLSignatureException"},
	{}
};

$InnerClassInfo _AbstractDOMSignatureMethod_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod$Type", "org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod", "Type", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _AbstractDOMSignatureMethod_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.SignatureMethod",
	nullptr,
	_AbstractDOMSignatureMethod_MethodInfo_,
	nullptr,
	nullptr,
	_AbstractDOMSignatureMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod$Type"
};

$Object* allocate$AbstractDOMSignatureMethod($Class* clazz) {
	return $of($alloc(AbstractDOMSignatureMethod));
}

bool AbstractDOMSignatureMethod::isFeatureSupported($String* feature) {
	 return this->$DOMStructure::isFeatureSupported(feature);
}

$Object* AbstractDOMSignatureMethod::clone() {
	 return this->$DOMStructure::clone();
}

$String* AbstractDOMSignatureMethod::toString() {
	 return this->$DOMStructure::toString();
}

void AbstractDOMSignatureMethod::finalize() {
	this->$DOMStructure::finalize();
}

void AbstractDOMSignatureMethod::init$() {
	$DOMStructure::init$();
}

void AbstractDOMSignatureMethod::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, smElem, $DOMUtils::createElement(ownerDoc, "SignatureMethod"_s, $XMLSignature::XMLNS, dsPrefix));
	$DOMUtils::setAttribute(smElem, "Algorithm"_s, $(getAlgorithm()));
	if (getParameterSpec() != nullptr) {
		marshalParams(smElem, dsPrefix);
	}
	$nc(parent)->appendChild(smElem);
}

void AbstractDOMSignatureMethod::marshalParams($Element* parent, $String* paramsPrefix) {
	$throwNew($MarshalException, $$str({"no parameters should be specified for the "_s, $(getAlgorithm()), " SignatureMethod algorithm"_s}));
}

$SignatureMethodParameterSpec* AbstractDOMSignatureMethod::unmarshalParams($Element* paramsElem) {
	$throwNew($MarshalException, $$str({"no parameters should be specified for the "_s, $(getAlgorithm()), " SignatureMethod algorithm"_s}));
	$shouldNotReachHere();
}

void AbstractDOMSignatureMethod::checkParams($SignatureMethodParameterSpec* params) {
	if (params != nullptr) {
		$throwNew($InvalidAlgorithmParameterException, $$str({"no parameters should be specified for the "_s, $(getAlgorithm()), " SignatureMethod algorithm"_s}));
	}
}

bool AbstractDOMSignatureMethod::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($SignatureMethod, o))) {
		return false;
	}
	$var($SignatureMethod, osm, $cast($SignatureMethod, o));
	bool var$0 = $nc($(getAlgorithm()))->equals($($nc(osm)->getAlgorithm()));
	return var$0 && paramsEqual($($nc(osm)->getParameterSpec()));
}

int32_t AbstractDOMSignatureMethod::hashCode() {
	int32_t result = 17;
	result = 31 * result + $nc($(getAlgorithm()))->hashCode();
	$var($AlgorithmParameterSpec, spec, getParameterSpec());
	if (spec != nullptr) {
		result = 31 * result + $of(spec)->hashCode();
	}
	return result;
}

bool AbstractDOMSignatureMethod::paramsEqual($AlgorithmParameterSpec* spec) {
	return getParameterSpec() == spec;
}

AbstractDOMSignatureMethod::AbstractDOMSignatureMethod() {
}

$Class* AbstractDOMSignatureMethod::load$($String* name, bool initialize) {
	$loadClass(AbstractDOMSignatureMethod, name, initialize, &_AbstractDOMSignatureMethod_ClassInfo_, allocate$AbstractDOMSignatureMethod);
	return class$;
}

$Class* AbstractDOMSignatureMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org