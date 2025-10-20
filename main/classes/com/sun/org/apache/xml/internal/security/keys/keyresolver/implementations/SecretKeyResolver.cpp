#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/SecretKeyResolver.h>

#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <java/security/KeyStore.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/crypto/SecretKey.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef LOG
#undef _TAG_KEYNAME

using $KeyResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi;
using $StorageResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $KeyStore = ::java::security::KeyStore;
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

$FieldInfo _SecretKeyResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SecretKeyResolver, LOG)},
	{"keyStore", "Ljava/security/KeyStore;", nullptr, $PRIVATE | $FINAL, $field(SecretKeyResolver, keyStore)},
	{"password", "[C", nullptr, $PRIVATE | $FINAL, $field(SecretKeyResolver, password)},
	{}
};

$MethodInfo _SecretKeyResolver_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyStore;[C)V", nullptr, $PUBLIC, $method(static_cast<void(SecretKeyResolver::*)($KeyStore*,$chars*)>(&SecretKeyResolver::init$))},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PROTECTED},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{}
};

$ClassInfo _SecretKeyResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.SecretKeyResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_SecretKeyResolver_FieldInfo_,
	_SecretKeyResolver_MethodInfo_
};

$Object* allocate$SecretKeyResolver($Class* clazz) {
	return $of($alloc(SecretKeyResolver));
}

$Logger* SecretKeyResolver::LOG = nullptr;

void SecretKeyResolver::init$($KeyStore* keyStore, $chars* password) {
	$KeyResolverSpi::init$();
	$set(this, keyStore, keyStore);
	$set(this, password, password);
}

bool SecretKeyResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$init($Constants);
	return $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_KEYNAME);
}

$PublicKey* SecretKeyResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$X509Certificate* SecretKeyResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$SecretKey* SecretKeyResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	$nc(SecretKeyResolver::LOG)->debug("Can I resolve {}?"_s, $$new($ObjectArray, {$($of($nc(element)->getTagName()))}));
	$init($Constants);
	if ($XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_KEYNAME)) {
		$var($String, keyName, $nc($($nc(element)->getFirstChild()))->getNodeValue());
		try {
			$var($Key, key, $nc(this->keyStore)->getKey(keyName, this->password));
			if ($instanceOf($SecretKey, key)) {
				return $cast($SecretKey, key);
			}
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$nc(SecretKeyResolver::LOG)->debug("Cannot recover the key"_s, static_cast<$Throwable*>(e));
		}
	}
	$nc(SecretKeyResolver::LOG)->debug("I can\'t"_s);
	return nullptr;
}

$PrivateKey* SecretKeyResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

void clinit$SecretKeyResolver($Class* class$) {
	$assignStatic(SecretKeyResolver::LOG, $LoggerFactory::getLogger(SecretKeyResolver::class$));
}

SecretKeyResolver::SecretKeyResolver() {
}

$Class* SecretKeyResolver::load$($String* name, bool initialize) {
	$loadClass(SecretKeyResolver, name, initialize, &_SecretKeyResolver_ClassInfo_, clinit$SecretKeyResolver, allocate$SecretKeyResolver);
	return class$;
}

$Class* SecretKeyResolver::class$ = nullptr;

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