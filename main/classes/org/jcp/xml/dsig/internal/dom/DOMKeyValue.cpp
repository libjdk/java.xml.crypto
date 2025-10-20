#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue.h>

#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/KeyException.h>
#include <java/security/KeyFactory.h>
#include <java/security/PublicKey.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/spec/KeySpec.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyValue.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$DSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$EC.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$RSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$Unknown.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef XMLDSIG_11_XMLNS
#undef XMLNS

using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BigInteger = ::java::math::BigInteger;
using $KeyException = ::java::security::KeyException;
using $KeyFactory = ::java::security::KeyFactory;
using $PublicKey = ::java::security::PublicKey;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $KeyValue = ::javax::xml::crypto::dsig::keyinfo::KeyValue;
using $DOMKeyValue$DSA = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$DSA;
using $DOMKeyValue$EC = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$EC;
using $DOMKeyValue$RSA = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$RSA;
using $DOMKeyValue$Unknown = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$Unknown;
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

$FieldInfo _DOMKeyValue_FieldInfo_[] = {
	{"XMLDSIG_11_XMLNS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMKeyValue, XMLDSIG_11_XMLNS)},
	{"publicKey", "Ljava/security/PublicKey;", "TK;", $PRIVATE | $FINAL, $field(DOMKeyValue, publicKey)},
	{}
};

$MethodInfo _DOMKeyValue_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/security/PublicKey;)V", "(TK;)V", $PUBLIC, $method(static_cast<void(DOMKeyValue::*)($PublicKey*)>(&DOMKeyValue::init$)), "java.security.KeyException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMKeyValue::*)($Element*)>(&DOMKeyValue::init$)), "javax.xml.crypto.MarshalException"},
	{"bigInt", "(Ljava/lang/String;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BigInteger*(*)($String*)>(&DOMKeyValue::bigInt))},
	{"decode", "(Lorg/w3c/dom/Element;)Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$BigInteger*(*)($Element*)>(&DOMKeyValue::decode)), "javax.xml.crypto.MarshalException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"generatePublicKey", "(Ljava/security/KeyFactory;Ljava/security/spec/KeySpec;)Ljava/security/PublicKey;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PublicKey*(*)($KeyFactory*,$KeySpec*)>(&DOMKeyValue::generatePublicKey))},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC, nullptr, "java.security.KeyException"},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"marshalPublicKey", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Document;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $ABSTRACT, nullptr, "javax.xml.crypto.MarshalException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unmarshal", "(Lorg/w3c/dom/Element;)Ljavax/xml/crypto/dsig/keyinfo/KeyValue;", nullptr, $STATIC, $method(static_cast<$KeyValue*(*)($Element*)>(&DOMKeyValue::unmarshal)), "javax.xml.crypto.MarshalException"},
	{"unmarshalKeyValue", "(Lorg/w3c/dom/Element;)Ljava/security/PublicKey;", "(Lorg/w3c/dom/Element;)TK;", $ABSTRACT, nullptr, "javax.xml.crypto.MarshalException"},
	{}
};

$InnerClassInfo _DOMKeyValue_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$Unknown", "org.jcp.xml.dsig.internal.dom.DOMKeyValue", "Unknown", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC", "org.jcp.xml.dsig.internal.dom.DOMKeyValue", "EC", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$DSA", "org.jcp.xml.dsig.internal.dom.DOMKeyValue", "DSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$RSA", "org.jcp.xml.dsig.internal.dom.DOMKeyValue", "RSA", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMKeyValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.DOMKeyValue",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.keyinfo.KeyValue",
	_DOMKeyValue_FieldInfo_,
	_DOMKeyValue_MethodInfo_,
	"<K::Ljava/security/PublicKey;>Lorg/jcp/xml/dsig/internal/dom/DOMStructure;Ljavax/xml/crypto/dsig/keyinfo/KeyValue;",
	nullptr,
	_DOMKeyValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMKeyValue$Unknown,org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC,org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC$Curve,org.jcp.xml.dsig.internal.dom.DOMKeyValue$DSA,org.jcp.xml.dsig.internal.dom.DOMKeyValue$RSA"
};

$Object* allocate$DOMKeyValue($Class* clazz) {
	return $of($alloc(DOMKeyValue));
}

bool DOMKeyValue::isFeatureSupported($String* feature) {
	 return this->$DOMStructure::isFeatureSupported(feature);
}

$Object* DOMKeyValue::clone() {
	 return this->$DOMStructure::clone();
}

$String* DOMKeyValue::toString() {
	 return this->$DOMStructure::toString();
}

void DOMKeyValue::finalize() {
	this->$DOMStructure::finalize();
}

$String* DOMKeyValue::XMLDSIG_11_XMLNS = nullptr;

void DOMKeyValue::init$($PublicKey* key) {
	$DOMStructure::init$();
	if (key == nullptr) {
		$throwNew($NullPointerException, "key cannot be null"_s);
	}
	$set(this, publicKey, key);
}

void DOMKeyValue::init$($Element* kvtElem) {
	$DOMStructure::init$();
	$set(this, publicKey, unmarshalKeyValue(kvtElem));
}

$KeyValue* DOMKeyValue::unmarshal($Element* kvElem) {
	$init(DOMKeyValue);
	$useLocalCurrentObjectStackCache();
	$var($Element, kvtElem, $DOMUtils::getFirstChildElement(kvElem));
	if (kvtElem == nullptr) {
		$throwNew($MarshalException, "KeyValue must contain at least one type"_s);
	}
	$var($String, namespace$, $nc(kvtElem)->getNamespaceURI());
	bool var$0 = "DSAKeyValue"_s->equals($(kvtElem->getLocalName()));
	$init($XMLSignature);
	if (var$0 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
		return $new($DOMKeyValue$DSA, kvtElem);
	} else {
		bool var$2 = "RSAKeyValue"_s->equals($(kvtElem->getLocalName()));
		if (var$2 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
			return $new($DOMKeyValue$RSA, kvtElem);
		} else {
			bool var$4 = "ECKeyValue"_s->equals($(kvtElem->getLocalName()));
			if (var$4 && $nc(DOMKeyValue::XMLDSIG_11_XMLNS)->equals(namespace$)) {
				return $new($DOMKeyValue$EC, kvtElem);
			} else {
				return $new($DOMKeyValue$Unknown, kvtElem);
			}
		}
	}
}

$PublicKey* DOMKeyValue::getPublicKey() {
	if (this->publicKey == nullptr) {
		$throwNew($KeyException, "can\'t convert KeyValue to PublicKey"_s);
	} else {
		return this->publicKey;
	}
}

void DOMKeyValue::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, kvElem, $DOMUtils::createElement(ownerDoc, "KeyValue"_s, $XMLSignature::XMLNS, dsPrefix));
	marshalPublicKey(kvElem, ownerDoc, dsPrefix, context);
	$nc(parent)->appendChild(kvElem);
}

$PublicKey* DOMKeyValue::generatePublicKey($KeyFactory* kf, $KeySpec* keyspec) {
	$init(DOMKeyValue);
	try {
		return $nc(kf)->generatePublic(keyspec);
	} catch ($InvalidKeySpecException&) {
		$var($InvalidKeySpecException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

bool DOMKeyValue::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf($KeyValue, obj))) {
		return false;
	}
	try {
		$var($KeyValue, kv, $cast($KeyValue, obj));
		if (this->publicKey == nullptr) {
			if ($nc(kv)->getPublicKey() != nullptr) {
				return false;
			}
		} else if (!$nc($of(this->publicKey))->equals($($nc(kv)->getPublicKey()))) {
			return false;
		}
	} catch ($KeyException&) {
		$var($KeyException, ke, $catch());
		return false;
	}
	return true;
}

$BigInteger* DOMKeyValue::decode($Element* elem) {
	$init(DOMKeyValue);
	$useLocalCurrentObjectStackCache();
	try {
		$var($String, base64str, $nc($($nc(elem)->getFirstChild()))->getNodeValue());
		return $new($BigInteger, 1, $($XMLUtils::decode(base64str)));
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($MarshalException, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

int32_t DOMKeyValue::hashCode() {
	int32_t result = 17;
	if (this->publicKey != nullptr) {
		result = 31 * result + $nc($of(this->publicKey))->hashCode();
	}
	return result;
}

$BigInteger* DOMKeyValue::bigInt($String* s) {
	$init(DOMKeyValue);
	return $new($BigInteger, s, 16);
}

DOMKeyValue::DOMKeyValue() {
}

void clinit$DOMKeyValue($Class* class$) {
	$assignStatic(DOMKeyValue::XMLDSIG_11_XMLNS, "http://www.w3.org/2009/xmldsig11#"_s);
}

$Class* DOMKeyValue::load$($String* name, bool initialize) {
	$loadClass(DOMKeyValue, name, initialize, &_DOMKeyValue_ClassInfo_, clinit$DOMKeyValue, allocate$DOMKeyValue);
	return class$;
}

$Class* DOMKeyValue::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org