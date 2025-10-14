#include <javax/xml/crypto/dsig/TransformService.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/Security.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <jcpp.h>

using $ProviderArray = $Array<::java::security::Provider>;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $Security = ::java::security::Security;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $Transform = ::javax::xml::crypto::dsig::Transform;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$FieldInfo _TransformService_FieldInfo_[] = {
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransformService, algorithm)},
	{"mechanism", "Ljava/lang/String;", nullptr, $PRIVATE, $field(TransformService, mechanism)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(TransformService, provider)},
	{}
};

$MethodInfo _TransformService_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(TransformService::*)()>(&TransformService::init$))},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/TransformService;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TransformService*(*)($String*,$String*)>(&TransformService::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/Provider;)Ljavax/xml/crypto/dsig/TransformService;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TransformService*(*)($String*,$String*,$Provider*)>(&TransformService::getInstance)), "java.security.NoSuchAlgorithmException"},
	{"getInstance", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/TransformService;", nullptr, $PUBLIC | $STATIC, $method(static_cast<TransformService*(*)($String*,$String*,$String*)>(&TransformService::getInstance)), "java.security.NoSuchAlgorithmException,java.security.NoSuchProviderException"},
	{"getMechanismType", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(TransformService::*)()>(&TransformService::getMechanismType))},
	{"getProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Provider*(TransformService::*)()>(&TransformService::getProvider))},
	{"init", "(Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"init", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"marshalParams", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.MarshalException"},
	{}
};

$InnerClassInfo _TransformService_InnerClassesInfo_[] = {
	{"javax.xml.crypto.dsig.TransformService$MechanismMapEntry", "javax.xml.crypto.dsig.TransformService", "MechanismMapEntry", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransformService_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.crypto.dsig.TransformService",
	"java.lang.Object",
	"javax.xml.crypto.dsig.Transform",
	_TransformService_FieldInfo_,
	_TransformService_MethodInfo_,
	nullptr,
	nullptr,
	_TransformService_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.crypto.dsig.TransformService$MechanismMapEntry"
};

$Object* allocate$TransformService($Class* clazz) {
	return $of($alloc(TransformService));
}

void TransformService::init$() {
}

TransformService* TransformService::getInstance($String* algorithm, $String* mechanismType) {
	$init(TransformService);
	if (mechanismType == nullptr || algorithm == nullptr) {
		$throwNew($NullPointerException);
	}
	bool dom = false;
	if ($nc(mechanismType)->equals("DOM"_s)) {
		dom = true;
	}
	$var($ProviderArray, provs, $Security::getProviders());
	{
		$var($ProviderArray, arr$, provs);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Provider, p, arr$->get(i$));
			{
				$var($Provider$Service, s, $nc(p)->getService("TransformService"_s, algorithm));
				if (s != nullptr) {
					$var($String, value, s->getAttribute("MechanismType"_s));
					if ((value == nullptr && dom) || (value != nullptr && value->equals(mechanismType))) {
						$var($Object, obj, s->newInstance(nullptr));
						if ($instanceOf(TransformService, obj)) {
							$var(TransformService, ts, $cast(TransformService, obj));
							$set($nc(ts), algorithm, algorithm);
							$set(ts, mechanism, mechanismType);
							$set(ts, provider, p);
							return ts;
						}
					}
				}
			}
		}
	}
	$throwNew($NoSuchAlgorithmException, $$str({algorithm, " algorithm and "_s, mechanismType, " mechanism not available"_s}));
}

TransformService* TransformService::getInstance($String* algorithm, $String* mechanismType, $Provider* provider) {
	$init(TransformService);
	if (mechanismType == nullptr || algorithm == nullptr || provider == nullptr) {
		$throwNew($NullPointerException);
	}
	bool dom = false;
	if ($nc(mechanismType)->equals("DOM"_s)) {
		dom = true;
	}
	$var($Provider$Service, s, $nc(provider)->getService("TransformService"_s, algorithm));
	if (s != nullptr) {
		$var($String, value, s->getAttribute("MechanismType"_s));
		if ((value == nullptr && dom) || (value != nullptr && value->equals(mechanismType))) {
			$var($Object, obj, s->newInstance(nullptr));
			if ($instanceOf(TransformService, obj)) {
				$var(TransformService, ts, $cast(TransformService, obj));
				$set($nc(ts), algorithm, algorithm);
				$set(ts, mechanism, mechanismType);
				$set(ts, provider, provider);
				return ts;
			}
		}
	}
	$throwNew($NoSuchAlgorithmException, $$str({algorithm, " algorithm and "_s, mechanismType, " mechanism not available from "_s, $(provider->getName())}));
}

TransformService* TransformService::getInstance($String* algorithm, $String* mechanismType, $String* provider) {
	$init(TransformService);
	if (mechanismType == nullptr || algorithm == nullptr || provider == nullptr) {
		$throwNew($NullPointerException);
	} else if (provider->length() == 0) {
		$throwNew($NoSuchProviderException);
	}
	bool dom = false;
	if ($nc(mechanismType)->equals("DOM"_s)) {
		dom = true;
	}
	$var($Provider, p, $Security::getProvider(provider));
	if (p == nullptr) {
		$throwNew($NoSuchProviderException, $$str({"No such provider: "_s, provider}));
	}
	$var($Provider$Service, s, $nc(p)->getService("TransformService"_s, algorithm));
	if (s != nullptr) {
		$var($String, value, s->getAttribute("MechanismType"_s));
		if ((value == nullptr && dom) || (value != nullptr && value->equals(mechanismType))) {
			$var($Object, obj, s->newInstance(nullptr));
			if ($instanceOf(TransformService, obj)) {
				$var(TransformService, ts, $cast(TransformService, obj));
				$set($nc(ts), algorithm, algorithm);
				$set(ts, mechanism, mechanismType);
				$set(ts, provider, p);
				return ts;
			}
		}
	}
	$throwNew($NoSuchAlgorithmException, $$str({algorithm, " algorithm and "_s, mechanismType, " mechanism not available from "_s, provider}));
}

$String* TransformService::getMechanismType() {
	return this->mechanism;
}

$String* TransformService::getAlgorithm() {
	return this->algorithm;
}

$Provider* TransformService::getProvider() {
	return this->provider;
}

TransformService::TransformService() {
}

$Class* TransformService::load$($String* name, bool initialize) {
	$loadClass(TransformService, name, initialize, &_TransformService_ClassInfo_, allocate$TransformService);
	return class$;
}

$Class* TransformService::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax