#include <javax/xml/crypto/dsig/keyinfo/KeyInfoFactory.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/PublicKey.h>
#include <java/security/Security.h>
#include <java/util/List.h>
#include <javax/xml/crypto/NoSuchMechanismException.h>
#include <javax/xml/crypto/URIDereferencer.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyName.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyValue.h>
#include <javax/xml/crypto/dsig/keyinfo/PGPData.h>
#include <javax/xml/crypto/dsig/keyinfo/RetrievalMethod.h>
#include <javax/xml/crypto/dsig/keyinfo/X509Data.h>
#include <javax/xml/crypto/dsig/keyinfo/X509IssuerSerial.h>
#include <jcpp.h>

using $ProviderArray = $Array<::java::security::Provider>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BigInteger = ::java::math::BigInteger;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $PublicKey = ::java::security::PublicKey;
using $Security = ::java::security::Security;
using $List = ::java::util::List;
using $NoSuchMechanismException = ::javax::xml::crypto::NoSuchMechanismException;
using $URIDereferencer = ::javax::xml::crypto::URIDereferencer;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $KeyInfo = ::javax::xml::crypto::dsig::keyinfo::KeyInfo;
using $KeyName = ::javax::xml::crypto::dsig::keyinfo::KeyName;
using $KeyValue = ::javax::xml::crypto::dsig::keyinfo::KeyValue;
using $PGPData = ::javax::xml::crypto::dsig::keyinfo::PGPData;
using $RetrievalMethod = ::javax::xml::crypto::dsig::keyinfo::RetrievalMethod;
using $X509Data = ::javax::xml::crypto::dsig::keyinfo::X509Data;
using $X509IssuerSerial = ::javax::xml::crypto::dsig::keyinfo::X509IssuerSerial;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

$FieldInfo _KeyInfoFactory_FieldInfo_[] = {
	{"mechanismType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(KeyInfoFactory, mechanismType)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(KeyInfoFactory, provider)},
	{}
};

$MethodInfo _KeyInfoFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(KeyInfoFactory::*)()>(&KeyInfoFactory::init$))},
	{"getInstance", "(Ljava/lang/String;)Ljavax/xml/crypto/dsig/keyinfo/KeyInfoFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyInfoFactory*(*)($String*)>(&KeyInfoFactory::getInstance))},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/xml/crypto/dsig/keyinfo/KeyInfoFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyInfoFactory*(*)($String*,$Provider*)>(&KeyInfoFactory::getInstance))},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/keyinfo/KeyInfoFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyInfoFactory*(*)($String*,$String*)>(&KeyInfoFactory::getInstance)), "java.security.NoSuchProviderException"},
	{"getInstance", "()Ljavax/xml/crypto/dsig/keyinfo/KeyInfoFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeyInfoFactory*(*)()>(&KeyInfoFactory::getInstance))},
	{"getMechanismType", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(KeyInfoFactory::*)()>(&KeyInfoFactory::getMechanismType))},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(KeyInfoFactory::*)()>(&KeyInfoFactory::getProvider))},
	{"getURIDereferencer", "()Ljavax/xml/crypto/URIDereferencer;", nullptr, $PUBLIC | $ABSTRACT},
	{"isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"newKeyInfo", "(Ljava/util/List;)Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;", "(Ljava/util/List<+Ljavax/xml/crypto/XMLStructure;>;)Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;", $PUBLIC | $ABSTRACT},
	{"newKeyInfo", "(Ljava/util/List;Ljava/lang/String;)Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;", "(Ljava/util/List<+Ljavax/xml/crypto/XMLStructure;>;Ljava/lang/String;)Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;", $PUBLIC | $ABSTRACT},
	{"newKeyName", "(Ljava/lang/String;)Ljavax/xml/crypto/dsig/keyinfo/KeyName;", nullptr, $PUBLIC | $ABSTRACT},
	{"newKeyValue", "(Ljava/security/PublicKey;)Ljavax/xml/crypto/dsig/keyinfo/KeyValue;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.KeyException"},
	{"newPGPData", "([B)Ljavax/xml/crypto/dsig/keyinfo/PGPData;", nullptr, $PUBLIC | $ABSTRACT},
	{"newPGPData", "([B[BLjava/util/List;)Ljavax/xml/crypto/dsig/keyinfo/PGPData;", "([B[BLjava/util/List<+Ljavax/xml/crypto/XMLStructure;>;)Ljavax/xml/crypto/dsig/keyinfo/PGPData;", $PUBLIC | $ABSTRACT},
	{"newPGPData", "([BLjava/util/List;)Ljavax/xml/crypto/dsig/keyinfo/PGPData;", "([BLjava/util/List<+Ljavax/xml/crypto/XMLStructure;>;)Ljavax/xml/crypto/dsig/keyinfo/PGPData;", $PUBLIC | $ABSTRACT},
	{"newRetrievalMethod", "(Ljava/lang/String;)Ljavax/xml/crypto/dsig/keyinfo/RetrievalMethod;", nullptr, $PUBLIC | $ABSTRACT},
	{"newRetrievalMethod", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)Ljavax/xml/crypto/dsig/keyinfo/RetrievalMethod;", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List<+Ljavax/xml/crypto/dsig/Transform;>;)Ljavax/xml/crypto/dsig/keyinfo/RetrievalMethod;", $PUBLIC | $ABSTRACT},
	{"newX509Data", "(Ljava/util/List;)Ljavax/xml/crypto/dsig/keyinfo/X509Data;", "(Ljava/util/List<*>;)Ljavax/xml/crypto/dsig/keyinfo/X509Data;", $PUBLIC | $ABSTRACT},
	{"newX509IssuerSerial", "(Ljava/lang/String;Ljava/math/BigInteger;)Ljavax/xml/crypto/dsig/keyinfo/X509IssuerSerial;", nullptr, $PUBLIC | $ABSTRACT},
	{"unmarshalKeyInfo", "(Ljavax/xml/crypto/XMLStructure;)Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.MarshalException"},
	{}
};

$ClassInfo _KeyInfoFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.crypto.dsig.keyinfo.KeyInfoFactory",
	"java.lang.Object",
	nullptr,
	_KeyInfoFactory_FieldInfo_,
	_KeyInfoFactory_MethodInfo_
};

$Object* allocate$KeyInfoFactory($Class* clazz) {
	return $of($alloc(KeyInfoFactory));
}

void KeyInfoFactory::init$() {
}

KeyInfoFactory* KeyInfoFactory::getInstance($String* mechanismType) {
	if (mechanismType == nullptr) {
		$throwNew($NullPointerException, "mechanismType cannot be null"_s);
	}
	$var($ProviderArray, provs, $Security::getProviders());
	{
		$var($ProviderArray, arr$, provs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Provider, p, arr$->get(i$));
			{
				$var($Provider$Service, s, $nc(p)->getService("KeyInfoFactory"_s, mechanismType));
				if (s != nullptr) {
					$var($Object, obj, nullptr);
					try {
						$assign(obj, s->newInstance(nullptr));
					} catch ($NoSuchAlgorithmException&) {
						$var($NoSuchAlgorithmException, nsae, $catch());
						$throwNew($NoSuchMechanismException, static_cast<$Throwable*>(nsae));
					}
					if ($instanceOf(KeyInfoFactory, obj)) {
						$var(KeyInfoFactory, factory, $cast(KeyInfoFactory, obj));
						$set($nc(factory), mechanismType, mechanismType);
						$set(factory, provider, p);
						return factory;
					}
				}
			}
		}
	}
	$throwNew($NoSuchMechanismException, $$str({"Mechanism "_s, mechanismType, " not available"_s}));
}

KeyInfoFactory* KeyInfoFactory::getInstance($String* mechanismType, $Provider* provider) {
	if (mechanismType == nullptr) {
		$throwNew($NullPointerException, "mechanismType cannot be null"_s);
	} else if (provider == nullptr) {
		$throwNew($NullPointerException, "provider cannot be null"_s);
	}
	$var($Provider$Service, s, $nc(provider)->getService("KeyInfoFactory"_s, mechanismType));
	if (s != nullptr) {
		$var($Object, obj, nullptr);
		try {
			$assign(obj, s->newInstance(nullptr));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$throwNew($NoSuchMechanismException, static_cast<$Throwable*>(nsae));
		}
		if ($instanceOf(KeyInfoFactory, obj)) {
			$var(KeyInfoFactory, factory, $cast(KeyInfoFactory, obj));
			$set($nc(factory), mechanismType, mechanismType);
			$set(factory, provider, provider);
			return factory;
		}
	}
	$throwNew($NoSuchMechanismException, $$str({"Mechanism "_s, mechanismType, " not available from "_s, $(provider->getName())}));
}

KeyInfoFactory* KeyInfoFactory::getInstance($String* mechanismType, $String* provider) {
	if (mechanismType == nullptr) {
		$throwNew($NullPointerException, "mechanismType cannot be null"_s);
	} else if (provider == nullptr) {
		$throwNew($NullPointerException, "provider cannot be null"_s);
	} else if (provider->length() == 0) {
		$throwNew($NoSuchProviderException);
	}
	$var($Provider, p, $Security::getProvider(provider));
	if (p == nullptr) {
		$throwNew($NoSuchProviderException, $$str({"No such provider: "_s, provider}));
	}
	$var($Provider$Service, s, $nc(p)->getService("KeyInfoFactory"_s, mechanismType));
	if (s != nullptr) {
		$var($Object, obj, nullptr);
		try {
			$assign(obj, s->newInstance(nullptr));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$throwNew($NoSuchMechanismException, static_cast<$Throwable*>(nsae));
		}
		if ($instanceOf(KeyInfoFactory, obj)) {
			$var(KeyInfoFactory, factory, $cast(KeyInfoFactory, obj));
			$set($nc(factory), mechanismType, mechanismType);
			$set(factory, provider, p);
			return factory;
		}
	}
	$throwNew($NoSuchMechanismException, $$str({"Mechanism "_s, mechanismType, " not available from "_s, provider}));
}

KeyInfoFactory* KeyInfoFactory::getInstance() {
	return getInstance("DOM"_s);
}

$String* KeyInfoFactory::getMechanismType() {
	return this->mechanismType;
}

$Provider* KeyInfoFactory::getProvider() {
	return this->provider;
}

KeyInfoFactory::KeyInfoFactory() {
}

$Class* KeyInfoFactory::load$($String* name, bool initialize) {
	$loadClass(KeyInfoFactory, name, initialize, &_KeyInfoFactory_ClassInfo_, allocate$KeyInfoFactory);
	return class$;
}

$Class* KeyInfoFactory::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax