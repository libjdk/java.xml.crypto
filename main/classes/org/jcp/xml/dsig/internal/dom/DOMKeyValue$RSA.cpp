#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$RSA.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/KeyFactory.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PublicKey.h>
#include <java/security/interfaces/RSAPublicKey.h>
#include <java/security/spec/KeySpec.h>
#include <java/security/spec/RSAPublicKeySpec.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <org/jcp/xml/dsig/internal/dom/DOMCryptoBinary.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef XMLNS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;
using $KeyFactory = ::java::security::KeyFactory;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PublicKey = ::java::security::PublicKey;
using $RSAKey = ::java::security::interfaces::RSAKey;
using $RSAPublicKey = ::java::security::interfaces::RSAPublicKey;
using $KeySpec = ::java::security::spec::KeySpec;
using $RSAPublicKeySpec = ::java::security::spec::RSAPublicKeySpec;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $DOMCryptoBinary = ::org::jcp::xml::dsig::internal::dom::DOMCryptoBinary;
using $DOMKeyValue = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue;
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

$FieldInfo _DOMKeyValue$RSA_FieldInfo_[] = {
	{"modulus", "Lorg/jcp/xml/dsig/internal/dom/DOMCryptoBinary;", nullptr, $PRIVATE, $field(DOMKeyValue$RSA, modulus)},
	{"exponent", "Lorg/jcp/xml/dsig/internal/dom/DOMCryptoBinary;", nullptr, $PRIVATE, $field(DOMKeyValue$RSA, exponent)},
	{"rsakf", "Ljava/security/KeyFactory;", nullptr, $PRIVATE, $field(DOMKeyValue$RSA, rsakf)},
	{}
};

$MethodInfo _DOMKeyValue$RSA_MethodInfo_[] = {
	{"<init>", "(Ljava/security/interfaces/RSAPublicKey;)V", nullptr, 0, $method(static_cast<void(DOMKeyValue$RSA::*)($RSAPublicKey*)>(&DOMKeyValue$RSA::init$)), "java.security.KeyException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMKeyValue$RSA::*)($Element*)>(&DOMKeyValue$RSA::init$)), "javax.xml.crypto.MarshalException"},
	{"marshalPublicKey", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Document;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{"unmarshalKeyValue", "(Lorg/w3c/dom/Element;)Ljava/security/interfaces/RSAPublicKey;", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{}
};

$InnerClassInfo _DOMKeyValue$RSA_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$RSA", "org.jcp.xml.dsig.internal.dom.DOMKeyValue", "RSA", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMKeyValue$RSA_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMKeyValue$RSA",
	"org.jcp.xml.dsig.internal.dom.DOMKeyValue",
	nullptr,
	_DOMKeyValue$RSA_FieldInfo_,
	_DOMKeyValue$RSA_MethodInfo_,
	"Lorg/jcp/xml/dsig/internal/dom/DOMKeyValue<Ljava/security/interfaces/RSAPublicKey;>;",
	nullptr,
	_DOMKeyValue$RSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMKeyValue"
};

$Object* allocate$DOMKeyValue$RSA($Class* clazz) {
	return $of($alloc(DOMKeyValue$RSA));
}

void DOMKeyValue$RSA::init$($RSAPublicKey* key) {
	$useLocalCurrentObjectStackCache();
	$DOMKeyValue::init$(static_cast<$PublicKey*>(key));
	$var($RSAPublicKey, rkey, key);
	$set(this, exponent, $new($DOMCryptoBinary, $($nc(rkey)->getPublicExponent())));
	$set(this, modulus, $new($DOMCryptoBinary, $($nc(rkey)->getModulus())));
}

void DOMKeyValue$RSA::init$($Element* elem) {
	$DOMKeyValue::init$(elem);
}

void DOMKeyValue$RSA::marshalPublicKey($Node* parent, $Document* doc, $String* dsPrefix, $DOMCryptoContext* context) {
	$useLocalCurrentObjectStackCache();
	$init($XMLSignature);
	$var($Element, rsaElem, $DOMUtils::createElement(doc, "RSAKeyValue"_s, $XMLSignature::XMLNS, dsPrefix));
	$var($Element, modulusElem, $DOMUtils::createElement(doc, "Modulus"_s, $XMLSignature::XMLNS, dsPrefix));
	$var($Element, exponentElem, $DOMUtils::createElement(doc, "Exponent"_s, $XMLSignature::XMLNS, dsPrefix));
	$nc(this->modulus)->marshal(modulusElem, dsPrefix, context);
	$nc(this->exponent)->marshal(exponentElem, dsPrefix, context);
	$nc(rsaElem)->appendChild(modulusElem);
	rsaElem->appendChild(exponentElem);
	$nc(parent)->appendChild(rsaElem);
}

$PublicKey* DOMKeyValue$RSA::unmarshalKeyValue($Element* kvtElem) {
	$useLocalCurrentObjectStackCache();
	if (this->rsakf == nullptr) {
		try {
			$set(this, rsakf, $KeyFactory::getInstance("RSA"_s));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, e, $catch());
			$throwNew($RuntimeException, $$str({"unable to create RSA KeyFactory: "_s, $(e->getMessage())}));
		}
	}
	$init($XMLSignature);
	$var($Element, modulusElem, $DOMUtils::getFirstChildElement(kvtElem, "Modulus"_s, $XMLSignature::XMLNS));
	$var($BigInteger, modulus, decode(modulusElem));
	$var($Element, exponentElem, $DOMUtils::getNextSiblingElement(modulusElem, "Exponent"_s, $XMLSignature::XMLNS));
	$var($BigInteger, exponent, decode(exponentElem));
	$var($RSAPublicKeySpec, spec, $new($RSAPublicKeySpec, modulus, exponent));
	return $cast($RSAPublicKey, $DOMKeyValue::generatePublicKey(this->rsakf, spec));
}

DOMKeyValue$RSA::DOMKeyValue$RSA() {
}

$Class* DOMKeyValue$RSA::load$($String* name, bool initialize) {
	$loadClass(DOMKeyValue$RSA, name, initialize, &_DOMKeyValue$RSA_ClassInfo_, allocate$DOMKeyValue$RSA);
	return class$;
}

$Class* DOMKeyValue$RSA::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org