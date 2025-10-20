#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/DSAKeyValue.h>

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
#include <java/security/interfaces/DSAParams.h>
#include <java/security/interfaces/DSAPublicKey.h>
#include <java/security/spec/DSAPublicKeySpec.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/spec/KeySpec.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef G
#undef P
#undef Q
#undef Y
#undef _TAG_DSAKEYVALUE
#undef _TAG_G
#undef _TAG_P
#undef _TAG_Q
#undef _TAG_Y

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
using $DSAKey = ::java::security::interfaces::DSAKey;
using $DSAParams = ::java::security::interfaces::DSAParams;
using $DSAPublicKey = ::java::security::interfaces::DSAPublicKey;
using $DSAPublicKeySpec = ::java::security::spec::DSAPublicKeySpec;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $KeySpec = ::java::security::spec::KeySpec;
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

$MethodInfo _DSAKeyValue_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DSAKeyValue::*)($Element*,$String*)>(&DSAKeyValue::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(DSAKeyValue::*)($Document*,$BigInteger*,$BigInteger*,$BigInteger*,$BigInteger*)>(&DSAKeyValue::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/security/Key;)V", nullptr, $PUBLIC, $method(static_cast<void(DSAKeyValue::*)($Document*,$Key*)>(&DSAKeyValue::init$)), "java.lang.IllegalArgumentException"},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DSAKeyValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.DSAKeyValue",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.KeyValueContent",
	nullptr,
	_DSAKeyValue_MethodInfo_
};

$Object* allocate$DSAKeyValue($Class* clazz) {
	return $of($alloc(DSAKeyValue));
}

int32_t DSAKeyValue::hashCode() {
	 return this->$SignatureElementProxy::hashCode();
}

bool DSAKeyValue::equals(Object$* arg0) {
	 return this->$SignatureElementProxy::equals(arg0);
}

$Object* DSAKeyValue::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* DSAKeyValue::toString() {
	 return this->$SignatureElementProxy::toString();
}

void DSAKeyValue::finalize() {
	this->$SignatureElementProxy::finalize();
}

void DSAKeyValue::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

void DSAKeyValue::init$($Document* doc, $BigInteger* P, $BigInteger* Q, $BigInteger* G, $BigInteger* Y) {
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
	$init($Constants);
	this->addBigIntegerElement(P, $Constants::_TAG_P);
	this->addBigIntegerElement(Q, $Constants::_TAG_Q);
	this->addBigIntegerElement(G, $Constants::_TAG_G);
	this->addBigIntegerElement(Y, $Constants::_TAG_Y);
}

void DSAKeyValue::init$($Document* doc, $Key* key) {
	$useLocalCurrentObjectStackCache();
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
	if ($instanceOf($DSAPublicKey, key)) {
		$var($DSAParams, params, $nc(($cast($DSAPublicKey, key)))->getParams());
		$init($Constants);
		this->addBigIntegerElement($($nc(params)->getP()), $Constants::_TAG_P);
		this->addBigIntegerElement($($nc(params)->getQ()), $Constants::_TAG_Q);
		this->addBigIntegerElement($($nc(params)->getG()), $Constants::_TAG_G);
		this->addBigIntegerElement($(($cast($DSAPublicKey, key))->getY()), $Constants::_TAG_Y);
	} else {
			$init($Constants);
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of($Constants::_TAG_DSAKEYVALUE),
			$($of($nc($of(key))->getClass()->getName()))
		}));
		$throwNew($IllegalArgumentException, $($I18n::translate("KeyValue.IllegalArgument"_s, exArgs)));
	}
}

$PublicKey* DSAKeyValue::getPublicKey() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($Constants);
		$var($BigInteger, var$0, this->getBigIntegerFromChildElement($Constants::_TAG_Y, $Constants::SignatureSpecNS));
		$var($BigInteger, var$1, this->getBigIntegerFromChildElement($Constants::_TAG_P, $Constants::SignatureSpecNS));
		$var($BigInteger, var$2, this->getBigIntegerFromChildElement($Constants::_TAG_Q, $Constants::SignatureSpecNS));
		$var($DSAPublicKeySpec, pkspec, $new($DSAPublicKeySpec, var$0, var$1, var$2, $(this->getBigIntegerFromChildElement($Constants::_TAG_G, $Constants::SignatureSpecNS))));
		$var($KeyFactory, dsaFactory, $KeyFactory::getInstance("DSA"_s));
		return $nc(dsaFactory)->generatePublic(pkspec);
	} catch ($NoSuchAlgorithmException&) {
		$var($GeneralSecurityException, ex, $catch());
		$throwNew($XMLSecurityException, static_cast<$Exception*>(ex));
	} catch ($InvalidKeySpecException&) {
		$var($GeneralSecurityException, ex, $catch());
		$throwNew($XMLSecurityException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

$String* DSAKeyValue::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_DSAKEYVALUE;
}

DSAKeyValue::DSAKeyValue() {
}

$Class* DSAKeyValue::load$($String* name, bool initialize) {
	$loadClass(DSAKeyValue, name, initialize, &_DSAKeyValue_ClassInfo_, allocate$DSAKeyValue);
	return class$;
}

$Class* DSAKeyValue::class$ = nullptr;

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