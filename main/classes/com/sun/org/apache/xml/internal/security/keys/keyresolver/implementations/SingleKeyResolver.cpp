#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/SingleKeyResolver.h>

#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/crypto/SecretKey.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef _TAG_KEYNAME

using $KeyResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi;
using $StorageResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $SecretKey = ::javax::crypto::SecretKey;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace keyresolver {
									namespace implementations {

$FieldInfo _SingleKeyResolver_FieldInfo_[] = {
	{"keyName", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SingleKeyResolver, keyName)},
	{"publicKey", "Ljava/security/PublicKey;", nullptr, $PRIVATE | $FINAL, $field(SingleKeyResolver, publicKey)},
	{"privateKey", "Ljava/security/PrivateKey;", nullptr, $PRIVATE | $FINAL, $field(SingleKeyResolver, privateKey)},
	{"secretKey", "Ljavax/crypto/SecretKey;", nullptr, $PRIVATE | $FINAL, $field(SingleKeyResolver, secretKey)},
	{}
};

$MethodInfo _SingleKeyResolver_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/security/PublicKey;)V", nullptr, $PUBLIC, $method(static_cast<void(SingleKeyResolver::*)($String*,$PublicKey*)>(&SingleKeyResolver::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/security/PrivateKey;)V", nullptr, $PUBLIC, $method(static_cast<void(SingleKeyResolver::*)($String*,$PrivateKey*)>(&SingleKeyResolver::init$))},
	{"<init>", "(Ljava/lang/String;Ljavax/crypto/SecretKey;)V", nullptr, $PUBLIC, $method(static_cast<void(SingleKeyResolver::*)($String*,$SecretKey*)>(&SingleKeyResolver::init$))},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{}
};

$ClassInfo _SingleKeyResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.SingleKeyResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_SingleKeyResolver_FieldInfo_,
	_SingleKeyResolver_MethodInfo_
};

$Object* allocate$SingleKeyResolver($Class* clazz) {
	return $of($alloc(SingleKeyResolver));
}

void SingleKeyResolver::init$($String* keyName, $PublicKey* publicKey) {
	$KeyResolverSpi::init$();
	$set(this, keyName, keyName);
	$set(this, publicKey, publicKey);
	$set(this, privateKey, nullptr);
	$set(this, secretKey, nullptr);
}

void SingleKeyResolver::init$($String* keyName, $PrivateKey* privateKey) {
	$KeyResolverSpi::init$();
	$set(this, keyName, keyName);
	$set(this, privateKey, privateKey);
	$set(this, publicKey, nullptr);
	$set(this, secretKey, nullptr);
}

void SingleKeyResolver::init$($String* keyName, $SecretKey* secretKey) {
	$KeyResolverSpi::init$();
	$set(this, keyName, keyName);
	$set(this, secretKey, secretKey);
	$set(this, publicKey, nullptr);
	$set(this, privateKey, nullptr);
}

bool SingleKeyResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$init($Constants);
	return $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_KEYNAME);
}

$PublicKey* SingleKeyResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	if (this->publicKey != nullptr) {
		$var($String, name, $nc($($nc(element)->getFirstChild()))->getNodeValue());
		if ($nc(this->keyName)->equals(name)) {
			return this->publicKey;
		}
	}
	return nullptr;
}

$X509Certificate* SingleKeyResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$SecretKey* SingleKeyResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	if (this->secretKey != nullptr) {
		$var($String, name, $nc($($nc(element)->getFirstChild()))->getNodeValue());
		if ($nc(this->keyName)->equals(name)) {
			return this->secretKey;
		}
	}
	return nullptr;
}

$PrivateKey* SingleKeyResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	if (this->privateKey != nullptr) {
		$var($String, name, $nc($($nc(element)->getFirstChild()))->getNodeValue());
		if ($nc(this->keyName)->equals(name)) {
			return this->privateKey;
		}
	}
	return nullptr;
}

SingleKeyResolver::SingleKeyResolver() {
}

$Class* SingleKeyResolver::load$($String* name, bool initialize) {
	$loadClass(SingleKeyResolver, name, initialize, &_SingleKeyResolver_ClassInfo_, allocate$SingleKeyResolver);
	return class$;
}

$Class* SingleKeyResolver::class$ = nullptr;

									} // implementations
								} // keyresolver
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com