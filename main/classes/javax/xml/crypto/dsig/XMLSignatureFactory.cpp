#include <javax/xml/crypto/dsig/XMLSignatureFactory.h>

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
#include <java/security/GeneralSecurityException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/Security.h>
#include <java/util/List.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/NoSuchMechanismException.h>
#include <javax/xml/crypto/URIDereferencer.h>
#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <javax/xml/crypto/dsig/DigestMethod.h>
#include <javax/xml/crypto/dsig/Manifest.h>
#include <javax/xml/crypto/dsig/Reference.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <javax/xml/crypto/dsig/SignatureProperties.h>
#include <javax/xml/crypto/dsig/SignatureProperty.h>
#include <javax/xml/crypto/dsig/SignedInfo.h>
#include <javax/xml/crypto/dsig/XMLObject.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfoFactory.h>
#include <javax/xml/crypto/dsig/spec/C14NMethodParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/DigestMethodParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/SignatureMethodParameterSpec.h>
#include <jcpp.h>

using $ProviderArray = $Array<::java::security::Provider>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $Security = ::java::security::Security;
using $List = ::java::util::List;
using $Data = ::javax::xml::crypto::Data;
using $NoSuchMechanismException = ::javax::xml::crypto::NoSuchMechanismException;
using $URIDereferencer = ::javax::xml::crypto::URIDereferencer;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $CanonicalizationMethod = ::javax::xml::crypto::dsig::CanonicalizationMethod;
using $DigestMethod = ::javax::xml::crypto::dsig::DigestMethod;
using $Manifest = ::javax::xml::crypto::dsig::Manifest;
using $Reference = ::javax::xml::crypto::dsig::Reference;
using $SignatureMethod = ::javax::xml::crypto::dsig::SignatureMethod;
using $SignatureProperties = ::javax::xml::crypto::dsig::SignatureProperties;
using $SignatureProperty = ::javax::xml::crypto::dsig::SignatureProperty;
using $SignedInfo = ::javax::xml::crypto::dsig::SignedInfo;
using $Transform = ::javax::xml::crypto::dsig::Transform;
using $XMLObject = ::javax::xml::crypto::dsig::XMLObject;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;
using $KeyInfo = ::javax::xml::crypto::dsig::keyinfo::KeyInfo;
using $KeyInfoFactory = ::javax::xml::crypto::dsig::keyinfo::KeyInfoFactory;
using $C14NMethodParameterSpec = ::javax::xml::crypto::dsig::spec::C14NMethodParameterSpec;
using $DigestMethodParameterSpec = ::javax::xml::crypto::dsig::spec::DigestMethodParameterSpec;
using $SignatureMethodParameterSpec = ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$FieldInfo _XMLSignatureFactory_FieldInfo_[] = {
	{"mechanismType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XMLSignatureFactory, mechanismType)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(XMLSignatureFactory, provider)},
	{}
};

$MethodInfo _XMLSignatureFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(XMLSignatureFactory::*)()>(&XMLSignatureFactory::init$))},
	{"getInstance", "(Ljava/lang/String;)Ljavax/xml/crypto/dsig/XMLSignatureFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XMLSignatureFactory*(*)($String*)>(&XMLSignatureFactory::getInstance))},
	{"getInstance", "(Ljava/lang/String;Ljava/security/Provider;)Ljavax/xml/crypto/dsig/XMLSignatureFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XMLSignatureFactory*(*)($String*,$Provider*)>(&XMLSignatureFactory::getInstance))},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/XMLSignatureFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XMLSignatureFactory*(*)($String*,$String*)>(&XMLSignatureFactory::getInstance)), "java.security.NoSuchProviderException"},
	{"getInstance", "()Ljavax/xml/crypto/dsig/XMLSignatureFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XMLSignatureFactory*(*)()>(&XMLSignatureFactory::getInstance))},
	{"getKeyInfoFactory", "()Ljavax/xml/crypto/dsig/keyinfo/KeyInfoFactory;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$KeyInfoFactory*(XMLSignatureFactory::*)()>(&XMLSignatureFactory::getKeyInfoFactory))},
	{"getMechanismType", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(XMLSignatureFactory::*)()>(&XMLSignatureFactory::getMechanismType))},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(XMLSignatureFactory::*)()>(&XMLSignatureFactory::getProvider))},
	{"getURIDereferencer", "()Ljavax/xml/crypto/URIDereferencer;", nullptr, $PUBLIC | $ABSTRACT},
	{"isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"newCanonicalizationMethod", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/spec/C14NMethodParameterSpec;)Ljavax/xml/crypto/dsig/CanonicalizationMethod;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{"newCanonicalizationMethod", "(Ljava/lang/String;Ljavax/xml/crypto/XMLStructure;)Ljavax/xml/crypto/dsig/CanonicalizationMethod;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{"newDigestMethod", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/spec/DigestMethodParameterSpec;)Ljavax/xml/crypto/dsig/DigestMethod;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{"newManifest", "(Ljava/util/List;)Ljavax/xml/crypto/dsig/Manifest;", "(Ljava/util/List<+Ljavax/xml/crypto/dsig/Reference;>;)Ljavax/xml/crypto/dsig/Manifest;", $PUBLIC | $ABSTRACT},
	{"newManifest", "(Ljava/util/List;Ljava/lang/String;)Ljavax/xml/crypto/dsig/Manifest;", "(Ljava/util/List<+Ljavax/xml/crypto/dsig/Reference;>;Ljava/lang/String;)Ljavax/xml/crypto/dsig/Manifest;", $PUBLIC | $ABSTRACT},
	{"newReference", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;)Ljavax/xml/crypto/dsig/Reference;", nullptr, $PUBLIC | $ABSTRACT},
	{"newReference", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/Reference;", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List<+Ljavax/xml/crypto/dsig/Transform;>;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/Reference;", $PUBLIC | $ABSTRACT},
	{"newReference", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;[B)Ljavax/xml/crypto/dsig/Reference;", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List<+Ljavax/xml/crypto/dsig/Transform;>;Ljava/lang/String;Ljava/lang/String;[B)Ljavax/xml/crypto/dsig/Reference;", $PUBLIC | $ABSTRACT},
	{"newReference", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List;Ljavax/xml/crypto/Data;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/Reference;", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List<+Ljavax/xml/crypto/dsig/Transform;>;Ljavax/xml/crypto/Data;Ljava/util/List<+Ljavax/xml/crypto/dsig/Transform;>;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/Reference;", $PUBLIC | $ABSTRACT},
	{"newSignatureMethod", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/spec/SignatureMethodParameterSpec;)Ljavax/xml/crypto/dsig/SignatureMethod;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{"newSignatureProperties", "(Ljava/util/List;Ljava/lang/String;)Ljavax/xml/crypto/dsig/SignatureProperties;", "(Ljava/util/List<+Ljavax/xml/crypto/dsig/SignatureProperty;>;Ljava/lang/String;)Ljavax/xml/crypto/dsig/SignatureProperties;", $PUBLIC | $ABSTRACT},
	{"newSignatureProperty", "(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/SignatureProperty;", "(Ljava/util/List<+Ljavax/xml/crypto/XMLStructure;>;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/SignatureProperty;", $PUBLIC | $ABSTRACT},
	{"newSignedInfo", "(Ljavax/xml/crypto/dsig/CanonicalizationMethod;Ljavax/xml/crypto/dsig/SignatureMethod;Ljava/util/List;)Ljavax/xml/crypto/dsig/SignedInfo;", "(Ljavax/xml/crypto/dsig/CanonicalizationMethod;Ljavax/xml/crypto/dsig/SignatureMethod;Ljava/util/List<+Ljavax/xml/crypto/dsig/Reference;>;)Ljavax/xml/crypto/dsig/SignedInfo;", $PUBLIC | $ABSTRACT},
	{"newSignedInfo", "(Ljavax/xml/crypto/dsig/CanonicalizationMethod;Ljavax/xml/crypto/dsig/SignatureMethod;Ljava/util/List;Ljava/lang/String;)Ljavax/xml/crypto/dsig/SignedInfo;", "(Ljavax/xml/crypto/dsig/CanonicalizationMethod;Ljavax/xml/crypto/dsig/SignatureMethod;Ljava/util/List<+Ljavax/xml/crypto/dsig/Reference;>;Ljava/lang/String;)Ljavax/xml/crypto/dsig/SignedInfo;", $PUBLIC | $ABSTRACT},
	{"newTransform", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;)Ljavax/xml/crypto/dsig/Transform;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{"newTransform", "(Ljava/lang/String;Ljavax/xml/crypto/XMLStructure;)Ljavax/xml/crypto/dsig/Transform;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{"newXMLObject", "(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/XMLObject;", "(Ljava/util/List<+Ljavax/xml/crypto/XMLStructure;>;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/XMLObject;", $PUBLIC | $ABSTRACT},
	{"newXMLSignature", "(Ljavax/xml/crypto/dsig/SignedInfo;Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;)Ljavax/xml/crypto/dsig/XMLSignature;", nullptr, $PUBLIC | $ABSTRACT},
	{"newXMLSignature", "(Ljavax/xml/crypto/dsig/SignedInfo;Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/XMLSignature;", "(Ljavax/xml/crypto/dsig/SignedInfo;Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;Ljava/util/List<+Ljavax/xml/crypto/dsig/XMLObject;>;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/XMLSignature;", $PUBLIC | $ABSTRACT},
	{"unmarshalXMLSignature", "(Ljavax/xml/crypto/dsig/XMLValidateContext;)Ljavax/xml/crypto/dsig/XMLSignature;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.MarshalException"},
	{"unmarshalXMLSignature", "(Ljavax/xml/crypto/XMLStructure;)Ljavax/xml/crypto/dsig/XMLSignature;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.MarshalException"},
	{}
};

$ClassInfo _XMLSignatureFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.crypto.dsig.XMLSignatureFactory",
	"java.lang.Object",
	nullptr,
	_XMLSignatureFactory_FieldInfo_,
	_XMLSignatureFactory_MethodInfo_
};

$Object* allocate$XMLSignatureFactory($Class* clazz) {
	return $of($alloc(XMLSignatureFactory));
}

void XMLSignatureFactory::init$() {
}

XMLSignatureFactory* XMLSignatureFactory::getInstance($String* mechanismType) {
	$useLocalCurrentObjectStackCache();
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
				$var($Provider$Service, s, $nc(p)->getService("XMLSignatureFactory"_s, mechanismType));
				if (s != nullptr) {
					$var($Object, obj, nullptr);
					try {
						$assign(obj, s->newInstance(nullptr));
					} catch ($NoSuchAlgorithmException&) {
						$var($NoSuchAlgorithmException, nsae, $catch());
						$throwNew($NoSuchMechanismException, static_cast<$Throwable*>(nsae));
					}
					if ($instanceOf(XMLSignatureFactory, obj)) {
						$var(XMLSignatureFactory, factory, $cast(XMLSignatureFactory, obj));
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

XMLSignatureFactory* XMLSignatureFactory::getInstance($String* mechanismType, $Provider* provider) {
	$useLocalCurrentObjectStackCache();
	if (mechanismType == nullptr) {
		$throwNew($NullPointerException, "mechanismType cannot be null"_s);
	} else if (provider == nullptr) {
		$throwNew($NullPointerException, "provider cannot be null"_s);
	}
	$var($Provider$Service, s, $nc(provider)->getService("XMLSignatureFactory"_s, mechanismType));
	if (s != nullptr) {
		$var($Object, obj, nullptr);
		try {
			$assign(obj, s->newInstance(nullptr));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$throwNew($NoSuchMechanismException, static_cast<$Throwable*>(nsae));
		}
		if ($instanceOf(XMLSignatureFactory, obj)) {
			$var(XMLSignatureFactory, factory, $cast(XMLSignatureFactory, obj));
			$set($nc(factory), mechanismType, mechanismType);
			$set(factory, provider, provider);
			return factory;
		}
	}
	$throwNew($NoSuchMechanismException, $$str({"Mechanism "_s, mechanismType, " not available from "_s, $(provider->getName())}));
}

XMLSignatureFactory* XMLSignatureFactory::getInstance($String* mechanismType, $String* provider) {
	$useLocalCurrentObjectStackCache();
	if (mechanismType == nullptr) {
		$throwNew($NullPointerException, "mechanismType cannot be null"_s);
	} else if (provider == nullptr) {
		$throwNew($NullPointerException, "provider cannot be null"_s);
	} else if ($nc(provider)->length() == 0) {
		$throwNew($NoSuchProviderException);
	}
	$var($Provider, p, $Security::getProvider(provider));
	if (p == nullptr) {
		$throwNew($NoSuchProviderException, $$str({"No such provider: "_s, provider}));
	}
	$var($Provider$Service, s, $nc(p)->getService("XMLSignatureFactory"_s, mechanismType));
	if (s != nullptr) {
		$var($Object, obj, nullptr);
		try {
			$assign(obj, s->newInstance(nullptr));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$throwNew($NoSuchMechanismException, static_cast<$Throwable*>(nsae));
		}
		if ($instanceOf(XMLSignatureFactory, obj)) {
			$var(XMLSignatureFactory, factory, $cast(XMLSignatureFactory, obj));
			$set($nc(factory), mechanismType, mechanismType);
			$set(factory, provider, p);
			return factory;
		}
	}
	$throwNew($NoSuchMechanismException, $$str({"Mechanism "_s, mechanismType, " not available from "_s, provider}));
}

XMLSignatureFactory* XMLSignatureFactory::getInstance() {
	return getInstance("DOM"_s);
}

$String* XMLSignatureFactory::getMechanismType() {
	return this->mechanismType;
}

$Provider* XMLSignatureFactory::getProvider() {
	return this->provider;
}

$KeyInfoFactory* XMLSignatureFactory::getKeyInfoFactory() {
	$useLocalCurrentObjectStackCache();
	$var($String, var$0, getMechanismType());
	return $KeyInfoFactory::getInstance(var$0, $(getProvider()));
}

XMLSignatureFactory::XMLSignatureFactory() {
}

$Class* XMLSignatureFactory::load$($String* name, bool initialize) {
	$loadClass(XMLSignatureFactory, name, initialize, &_XMLSignatureFactory_ClassInfo_, allocate$XMLSignatureFactory);
	return class$;
}

$Class* XMLSignatureFactory::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax