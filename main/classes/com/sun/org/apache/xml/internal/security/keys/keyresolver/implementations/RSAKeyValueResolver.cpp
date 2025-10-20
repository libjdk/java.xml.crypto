#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/RSAKeyValueResolver.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/RSAKeyValue.h>
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
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/crypto/SecretKey.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef LOG
#undef _TAG_KEYVALUE
#undef _TAG_RSAKEYVALUE

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $RSAKeyValue = ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::RSAKeyValue;
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

$FieldInfo _RSAKeyValueResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RSAKeyValueResolver, LOG)},
	{}
};

$MethodInfo _RSAKeyValueResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RSAKeyValueResolver::*)()>(&RSAKeyValueResolver::init$))},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PROTECTED},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _RSAKeyValueResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.RSAKeyValueResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_RSAKeyValueResolver_FieldInfo_,
	_RSAKeyValueResolver_MethodInfo_
};

$Object* allocate$RSAKeyValueResolver($Class* clazz) {
	return $of($alloc(RSAKeyValueResolver));
}

$Logger* RSAKeyValueResolver::LOG = nullptr;

void RSAKeyValueResolver::init$() {
	$KeyResolverSpi::init$();
}

bool RSAKeyValueResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$init($Constants);
	bool var$0 = $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_KEYVALUE);
	return var$0 || $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_RSAKEYVALUE);
}

$PublicKey* RSAKeyValueResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	if (element == nullptr) {
		return nullptr;
	}
	$nc(RSAKeyValueResolver::LOG)->debug("Can I resolve {}"_s, $$new($ObjectArray, {$($of($nc(element)->getTagName()))}));
	$init($Constants);
	bool isKeyValue = $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_KEYVALUE);
	$var($Element, rsaKeyElement, nullptr);
	if (isKeyValue) {
		$assign(rsaKeyElement, $XMLUtils::selectDsNode($($nc(element)->getFirstChild()), $Constants::_TAG_RSAKEYVALUE, 0));
	} else {
		if ($XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_RSAKEYVALUE)) {
			$assign(rsaKeyElement, element);
		}
	}
	if (rsaKeyElement == nullptr) {
		return nullptr;
	}
	try {
		$var($RSAKeyValue, rsaKeyValue, $new($RSAKeyValue, rsaKeyElement, baseURI));
		return rsaKeyValue->getPublicKey();
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$nc(RSAKeyValueResolver::LOG)->debug("XMLSecurityException"_s, static_cast<$Throwable*>(ex));
	}
	return nullptr;
}

$X509Certificate* RSAKeyValueResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$SecretKey* RSAKeyValueResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$PrivateKey* RSAKeyValueResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

void clinit$RSAKeyValueResolver($Class* class$) {
	$assignStatic(RSAKeyValueResolver::LOG, $LoggerFactory::getLogger(RSAKeyValueResolver::class$));
}

RSAKeyValueResolver::RSAKeyValueResolver() {
}

$Class* RSAKeyValueResolver::load$($String* name, bool initialize) {
	$loadClass(RSAKeyValueResolver, name, initialize, &_RSAKeyValueResolver_ClassInfo_, clinit$RSAKeyValueResolver, allocate$RSAKeyValueResolver);
	return class$;
}

$Class* RSAKeyValueResolver::class$ = nullptr;

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