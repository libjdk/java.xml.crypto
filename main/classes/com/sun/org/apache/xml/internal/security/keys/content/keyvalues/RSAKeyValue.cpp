#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/RSAKeyValue.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/Key.h>
#include <java/security/KeyFactory.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PublicKey.h>
#include <java/security/interfaces/RSAPublicKey.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/spec/KeySpec.h>
#include <java/security/spec/RSAPublicKeySpec.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef _TAG_EXPONENT
#undef _TAG_MODULUS
#undef _TAG_RSAKEYVALUE

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $KeyValueContent = ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::KeyValueContent;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $I18n = ::com::sun::org::apache::xml::internal::security::utils::I18n;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Key = ::java::security::Key;
using $KeyFactory = ::java::security::KeyFactory;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PublicKey = ::java::security::PublicKey;
using $RSAKey = ::java::security::interfaces::RSAKey;
using $RSAPublicKey = ::java::security::interfaces::RSAPublicKey;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $RSAPublicKeySpec = ::java::security::spec::RSAPublicKeySpec;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace content {
									namespace keyvalues {

$MethodInfo _RSAKeyValue_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RSAKeyValue::*)($Element*,$String*)>(&RSAKeyValue::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(RSAKeyValue::*)($Document*,$BigInteger*,$BigInteger*)>(&RSAKeyValue::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/security/Key;)V", nullptr, $PUBLIC, $method(static_cast<void(RSAKeyValue::*)($Document*,$Key*)>(&RSAKeyValue::init$)), "java.lang.IllegalArgumentException"},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RSAKeyValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.RSAKeyValue",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.KeyValueContent",
	nullptr,
	_RSAKeyValue_MethodInfo_
};

$Object* allocate$RSAKeyValue($Class* clazz) {
	return $of($alloc(RSAKeyValue));
}

int32_t RSAKeyValue::hashCode() {
	 return this->$SignatureElementProxy::hashCode();
}

bool RSAKeyValue::equals(Object$* arg0) {
	 return this->$SignatureElementProxy::equals(arg0);
}

$Object* RSAKeyValue::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* RSAKeyValue::toString() {
	 return this->$SignatureElementProxy::toString();
}

void RSAKeyValue::finalize() {
	this->$SignatureElementProxy::finalize();
}

void RSAKeyValue::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

void RSAKeyValue::init$($Document* doc, $BigInteger* modulus, $BigInteger* exponent) {
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
	$init($Constants);
	this->addBigIntegerElement(modulus, $Constants::_TAG_MODULUS);
	this->addBigIntegerElement(exponent, $Constants::_TAG_EXPONENT);
}

void RSAKeyValue::init$($Document* doc, $Key* key) {
	$useLocalCurrentObjectStackCache();
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
	if ($instanceOf($RSAPublicKey, key)) {
		$init($Constants);
		this->addBigIntegerElement($($nc(($cast($RSAPublicKey, key)))->getModulus()), $Constants::_TAG_MODULUS);
		this->addBigIntegerElement($($nc(($cast($RSAPublicKey, key)))->getPublicExponent()), $Constants::_TAG_EXPONENT);
	} else {
			$init($Constants);
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of($Constants::_TAG_RSAKEYVALUE),
			$($of($nc($of(key))->getClass()->getName()))
		}));
		$throwNew($IllegalArgumentException, $($I18n::translate("KeyValue.IllegalArgument"_s, exArgs)));
	}
}

$PublicKey* RSAKeyValue::getPublicKey() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($KeyFactory, rsaFactory, $KeyFactory::getInstance("RSA"_s));
		$init($Constants);
		$var($BigInteger, var$0, this->getBigIntegerFromChildElement($Constants::_TAG_MODULUS, $Constants::SignatureSpecNS));
		$var($RSAPublicKeySpec, rsaKeyspec, $new($RSAPublicKeySpec, var$0, $(this->getBigIntegerFromChildElement($Constants::_TAG_EXPONENT, $Constants::SignatureSpecNS))));
		$var($PublicKey, pk, $nc(rsaFactory)->generatePublic(rsaKeyspec));
		return pk;
	} catch ($NoSuchAlgorithmException&) {
		$var($GeneralSecurityException, ex, $catch());
		$throwNew($XMLSecurityException, static_cast<$Exception*>(ex));
	} catch ($InvalidKeySpecException&) {
		$var($GeneralSecurityException, ex, $catch());
		$throwNew($XMLSecurityException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

$String* RSAKeyValue::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_RSAKEYVALUE;
}

RSAKeyValue::RSAKeyValue() {
}

$Class* RSAKeyValue::load$($String* name, bool initialize) {
	$loadClass(RSAKeyValue, name, initialize, &_RSAKeyValue_ClassInfo_, allocate$RSAKeyValue);
	return class$;
}

$Class* RSAKeyValue::class$ = nullptr;

									} // keyvalues
								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com