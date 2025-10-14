#include <org/jcp/xml/dsig/internal/dom/DOMX509IssuerSerial.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/keyinfo/X509IssuerSerial.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef XMLNS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BigInteger = ::java::math::BigInteger;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $X509IssuerSerial = ::javax::xml::crypto::dsig::keyinfo::X509IssuerSerial;
using $DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $Text = ::org::w3c::dom::Text;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMX509IssuerSerial_FieldInfo_[] = {
	{"issuerName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMX509IssuerSerial, issuerName)},
	{"serialNumber", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(DOMX509IssuerSerial, serialNumber)},
	{}
};

$MethodInfo _DOMX509IssuerSerial_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMX509IssuerSerial::*)($String*,$BigInteger*)>(&DOMX509IssuerSerial::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMX509IssuerSerial::*)($Element*)>(&DOMX509IssuerSerial::init$)), "javax.xml.crypto.MarshalException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getIssuerName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSerialNumber", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMX509IssuerSerial_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMX509IssuerSerial",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.keyinfo.X509IssuerSerial",
	_DOMX509IssuerSerial_FieldInfo_,
	_DOMX509IssuerSerial_MethodInfo_
};

$Object* allocate$DOMX509IssuerSerial($Class* clazz) {
	return $of($alloc(DOMX509IssuerSerial));
}

bool DOMX509IssuerSerial::isFeatureSupported($String* feature) {
	 return this->$DOMStructure::isFeatureSupported(feature);
}

$Object* DOMX509IssuerSerial::clone() {
	 return this->$DOMStructure::clone();
}

$String* DOMX509IssuerSerial::toString() {
	 return this->$DOMStructure::toString();
}

void DOMX509IssuerSerial::finalize() {
	this->$DOMStructure::finalize();
}

void DOMX509IssuerSerial::init$($String* issuerName, $BigInteger* serialNumber) {
	$DOMStructure::init$();
	if (issuerName == nullptr) {
		$throwNew($NullPointerException, "issuerName cannot be null"_s);
	}
	if (serialNumber == nullptr) {
		$throwNew($NullPointerException, "serialNumber cannot be null"_s);
	}
	$new($X500Principal, issuerName);
	$set(this, issuerName, issuerName);
	$set(this, serialNumber, serialNumber);
}

void DOMX509IssuerSerial::init$($Element* isElem) {
	$DOMStructure::init$();
	$init($XMLSignature);
	$var($Element, iNElem, $DOMUtils::getFirstChildElement(isElem, "X509IssuerName"_s, $XMLSignature::XMLNS));
	$var($Element, sNElem, $DOMUtils::getNextSiblingElement(iNElem, "X509SerialNumber"_s, $XMLSignature::XMLNS));
	$set(this, issuerName, $nc($($nc(iNElem)->getFirstChild()))->getNodeValue());
	$set(this, serialNumber, $new($BigInteger, $($nc($($nc(sNElem)->getFirstChild()))->getNodeValue())));
}

$String* DOMX509IssuerSerial::getIssuerName() {
	return this->issuerName;
}

$BigInteger* DOMX509IssuerSerial::getSerialNumber() {
	return this->serialNumber;
}

void DOMX509IssuerSerial::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, isElem, $DOMUtils::createElement(ownerDoc, "X509IssuerSerial"_s, $XMLSignature::XMLNS, dsPrefix));
	$var($Element, inElem, $DOMUtils::createElement(ownerDoc, "X509IssuerName"_s, $XMLSignature::XMLNS, dsPrefix));
	$var($Element, snElem, $DOMUtils::createElement(ownerDoc, "X509SerialNumber"_s, $XMLSignature::XMLNS, dsPrefix));
	$nc(inElem)->appendChild($($nc(ownerDoc)->createTextNode(this->issuerName)));
	$nc(snElem)->appendChild($($nc(ownerDoc)->createTextNode($($nc(this->serialNumber)->toString()))));
	$nc(isElem)->appendChild(inElem);
	isElem->appendChild(snElem);
	$nc(parent)->appendChild(isElem);
}

bool DOMX509IssuerSerial::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf($X509IssuerSerial, obj))) {
		return false;
	}
	$var($X509IssuerSerial, ois, $cast($X509IssuerSerial, obj));
	bool var$0 = $nc(this->issuerName)->equals($($nc(ois)->getIssuerName()));
	return var$0 && $nc(this->serialNumber)->equals($($nc(ois)->getSerialNumber()));
}

int32_t DOMX509IssuerSerial::hashCode() {
	int32_t result = 17;
	result = 31 * result + $nc(this->issuerName)->hashCode();
	result = 31 * result + $nc(this->serialNumber)->hashCode();
	return result;
}

DOMX509IssuerSerial::DOMX509IssuerSerial() {
}

$Class* DOMX509IssuerSerial::load$($String* name, bool initialize) {
	$loadClass(DOMX509IssuerSerial, name, initialize, &_DOMX509IssuerSerial_ClassInfo_, allocate$DOMX509IssuerSerial);
	return class$;
}

$Class* DOMX509IssuerSerial::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org