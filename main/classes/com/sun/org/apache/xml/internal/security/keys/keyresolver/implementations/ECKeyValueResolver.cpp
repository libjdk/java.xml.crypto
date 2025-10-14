#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/ECKeyValueResolver.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
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
#undef _TAG_ECKEYVALUE
#undef _TAG_KEYVALUE

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $ECKeyValue = ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::ECKeyValue;
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

$FieldInfo _ECKeyValueResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ECKeyValueResolver, LOG)},
	{}
};

$MethodInfo _ECKeyValueResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ECKeyValueResolver::*)()>(&ECKeyValueResolver::init$))},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PROTECTED},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _ECKeyValueResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.ECKeyValueResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_ECKeyValueResolver_FieldInfo_,
	_ECKeyValueResolver_MethodInfo_
};

$Object* allocate$ECKeyValueResolver($Class* clazz) {
	return $of($alloc(ECKeyValueResolver));
}

$Logger* ECKeyValueResolver::LOG = nullptr;

void ECKeyValueResolver::init$() {
	$KeyResolverSpi::init$();
}

bool ECKeyValueResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$init($Constants);
	bool var$0 = $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_KEYVALUE);
	return var$0 || $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_ECKEYVALUE);
}

$PublicKey* ECKeyValueResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	if (element == nullptr) {
		return nullptr;
	}
	$var($Element, ecKeyElement, nullptr);
	$init($Constants);
	bool isKeyValue = $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_KEYVALUE);
	if (isKeyValue) {
		$assign(ecKeyElement, $XMLUtils::selectDs11Node($($nc(element)->getFirstChild()), $Constants::_TAG_ECKEYVALUE, 0));
	} else {
		if ($XMLUtils::elementIsInSignature11Space(element, $Constants::_TAG_ECKEYVALUE)) {
			$assign(ecKeyElement, element);
		}
	}
	if (ecKeyElement == nullptr) {
		return nullptr;
	}
	try {
		$var($ECKeyValue, ecKeyValue, $new($ECKeyValue, ecKeyElement, baseURI));
		return ecKeyValue->getPublicKey();
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$nc(ECKeyValueResolver::LOG)->debug($(ex->getMessage()), static_cast<$Throwable*>(ex));
	}
	return nullptr;
}

$X509Certificate* ECKeyValueResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$SecretKey* ECKeyValueResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$PrivateKey* ECKeyValueResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

void clinit$ECKeyValueResolver($Class* class$) {
	$assignStatic(ECKeyValueResolver::LOG, $LoggerFactory::getLogger(ECKeyValueResolver::class$));
}

ECKeyValueResolver::ECKeyValueResolver() {
}

$Class* ECKeyValueResolver::load$($String* name, bool initialize) {
	$loadClass(ECKeyValueResolver, name, initialize, &_ECKeyValueResolver_ClassInfo_, clinit$ECKeyValueResolver, allocate$ECKeyValueResolver);
	return class$;
}

$Class* ECKeyValueResolver::class$ = nullptr;

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