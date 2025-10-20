#include <com/sun/org/apache/xml/internal/security/keys/content/DEREncodedKeyValue.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/Signature11ElementProxy.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/Key.h>
#include <java/security/KeyFactory.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PublicKey.h>
#include <java/security/spec/EncodedKeySpec.h>
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/spec/KeySpec.h>
#include <java/security/spec/X509EncodedKeySpec.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef _ATT_ID
#undef _TAG_DERENCODEDKEYVALUE

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $KeyInfoContent = ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $Signature11ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Key = ::java::security::Key;
using $KeyFactory = ::java::security::KeyFactory;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PublicKey = ::java::security::PublicKey;
using $EncodedKeySpec = ::java::security::spec::EncodedKeySpec;
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $X509EncodedKeySpec = ::java::security::spec::X509EncodedKeySpec;
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

$FieldInfo _DEREncodedKeyValue_FieldInfo_[] = {
	{"supportedKeyTypes", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DEREncodedKeyValue, supportedKeyTypes)},
	{}
};

$MethodInfo _DEREncodedKeyValue_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DEREncodedKeyValue::*)($Element*,$String*)>(&DEREncodedKeyValue::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/security/PublicKey;)V", nullptr, $PUBLIC, $method(static_cast<void(DEREncodedKeyValue::*)($Document*,$PublicKey*)>(&DEREncodedKeyValue::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;[B)V", nullptr, $PUBLIC, $method(static_cast<void(DEREncodedKeyValue::*)($Document*,$bytes*)>(&DEREncodedKeyValue::init$))},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEncodedDER", "(Ljava/security/PublicKey;)[B", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"setId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DEREncodedKeyValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.DEREncodedKeyValue",
	"com.sun.org.apache.xml.internal.security.utils.Signature11ElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent",
	_DEREncodedKeyValue_FieldInfo_,
	_DEREncodedKeyValue_MethodInfo_
};

$Object* allocate$DEREncodedKeyValue($Class* clazz) {
	return $of($alloc(DEREncodedKeyValue));
}

int32_t DEREncodedKeyValue::hashCode() {
	 return this->$Signature11ElementProxy::hashCode();
}

bool DEREncodedKeyValue::equals(Object$* arg0) {
	 return this->$Signature11ElementProxy::equals(arg0);
}

$Object* DEREncodedKeyValue::clone() {
	 return this->$Signature11ElementProxy::clone();
}

$String* DEREncodedKeyValue::toString() {
	 return this->$Signature11ElementProxy::toString();
}

void DEREncodedKeyValue::finalize() {
	this->$Signature11ElementProxy::finalize();
}


$StringArray* DEREncodedKeyValue::supportedKeyTypes = nullptr;

void DEREncodedKeyValue::init$($Element* element, $String* baseURI) {
	$Signature11ElementProxy::init$(element, baseURI);
}

void DEREncodedKeyValue::init$($Document* doc, $PublicKey* publicKey) {
	$Signature11ElementProxy::init$(doc);
	this->addBase64Text($(getEncodedDER(publicKey)));
}

void DEREncodedKeyValue::init$($Document* doc, $bytes* encodedKey) {
	$Signature11ElementProxy::init$(doc);
	this->addBase64Text(encodedKey);
}

void DEREncodedKeyValue::setId($String* id) {
	$init($Constants);
	setLocalIdAttribute($Constants::_ATT_ID, id);
}

$String* DEREncodedKeyValue::getId() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ID);
}

$String* DEREncodedKeyValue::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_DERENCODEDKEYVALUE;
}

$PublicKey* DEREncodedKeyValue::getPublicKey() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, encodedKey, getBytesFromTextChild());
	{
		$var($StringArray, arr$, DEREncodedKeyValue::supportedKeyTypes);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, keyType, arr$->get(i$));
			{
				try {
					$var($KeyFactory, keyFactory, $KeyFactory::getInstance(keyType));
					$var($X509EncodedKeySpec, keySpec, $new($X509EncodedKeySpec, encodedKey));
					$var($PublicKey, publicKey, $nc(keyFactory)->generatePublic(keySpec));
					if (publicKey != nullptr) {
						return publicKey;
					}
				} catch ($NoSuchAlgorithmException&) {
					$var($GeneralSecurityException, e, $catch());
				} catch ($InvalidKeySpecException&) {
					$var($GeneralSecurityException, e, $catch());
				}
			}
		}
	}
	$throwNew($XMLSecurityException, "DEREncodedKeyValue.UnsupportedEncodedKey"_s);
	$shouldNotReachHere();
}

$bytes* DEREncodedKeyValue::getEncodedDER($PublicKey* publicKey) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($KeyFactory, keyFactory, $KeyFactory::getInstance($($nc(publicKey)->getAlgorithm())));
		$load($X509EncodedKeySpec);
		$var($X509EncodedKeySpec, keySpec, $cast($X509EncodedKeySpec, $nc(keyFactory)->getKeySpec(publicKey, $X509EncodedKeySpec::class$)));
		return $nc(keySpec)->getEncoded();
	} catch ($NoSuchAlgorithmException&) {
		$var($GeneralSecurityException, e, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$($of($nc(publicKey)->getAlgorithm())),
			$($of(publicKey->getFormat())),
			$($of($of(publicKey)->getClass()->getName()))
		}));
		$throwNew($XMLSecurityException, static_cast<$Exception*>(e), "DEREncodedKeyValue.UnsupportedPublicKey"_s, exArgs);
	} catch ($InvalidKeySpecException&) {
		$var($GeneralSecurityException, e, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$($of($nc(publicKey)->getAlgorithm())),
			$($of(publicKey->getFormat())),
			$($of($of(publicKey)->getClass()->getName()))
		}));
		$throwNew($XMLSecurityException, static_cast<$Exception*>(e), "DEREncodedKeyValue.UnsupportedPublicKey"_s, exArgs);
	}
	$shouldNotReachHere();
}

void clinit$DEREncodedKeyValue($Class* class$) {
	$assignStatic(DEREncodedKeyValue::supportedKeyTypes, $new($StringArray, {
		"RSA"_s,
		"DSA"_s,
		"EC"_s
	}));
}

DEREncodedKeyValue::DEREncodedKeyValue() {
}

$Class* DEREncodedKeyValue::load$($String* name, bool initialize) {
	$loadClass(DEREncodedKeyValue, name, initialize, &_DEREncodedKeyValue_ClassInfo_, clinit$DEREncodedKeyValue, allocate$DEREncodedKeyValue);
	return class$;
}

$Class* DEREncodedKeyValue::class$ = nullptr;

								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com