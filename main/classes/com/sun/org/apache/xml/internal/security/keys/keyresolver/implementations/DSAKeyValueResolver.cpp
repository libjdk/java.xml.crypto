#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/DSAKeyValueResolver.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/DSAKeyValue.h>
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
#undef _TAG_DSAKEYVALUE
#undef _TAG_KEYVALUE

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $DSAKeyValue = ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::DSAKeyValue;
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

$FieldInfo _DSAKeyValueResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DSAKeyValueResolver, LOG)},
	{}
};

$MethodInfo _DSAKeyValueResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DSAKeyValueResolver::*)()>(&DSAKeyValueResolver::init$))},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PROTECTED},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _DSAKeyValueResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.DSAKeyValueResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_DSAKeyValueResolver_FieldInfo_,
	_DSAKeyValueResolver_MethodInfo_
};

$Object* allocate$DSAKeyValueResolver($Class* clazz) {
	return $of($alloc(DSAKeyValueResolver));
}

$Logger* DSAKeyValueResolver::LOG = nullptr;

void DSAKeyValueResolver::init$() {
	$KeyResolverSpi::init$();
}

bool DSAKeyValueResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$init($Constants);
	bool var$0 = $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_KEYVALUE);
	return var$0 || $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_DSAKEYVALUE);
}

$PublicKey* DSAKeyValueResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	if (element == nullptr) {
		return nullptr;
	}
	$var($Element, dsaKeyElement, nullptr);
	$init($Constants);
	bool isKeyValue = $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_KEYVALUE);
	if (isKeyValue) {
		$assign(dsaKeyElement, $XMLUtils::selectDsNode($($nc(element)->getFirstChild()), $Constants::_TAG_DSAKEYVALUE, 0));
	} else {
		if ($XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_DSAKEYVALUE)) {
			$assign(dsaKeyElement, element);
		}
	}
	if (dsaKeyElement == nullptr) {
		return nullptr;
	}
	try {
		$var($DSAKeyValue, dsaKeyValue, $new($DSAKeyValue, dsaKeyElement, baseURI));
		$var($PublicKey, pk, dsaKeyValue->getPublicKey());
		return pk;
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$nc(DSAKeyValueResolver::LOG)->debug($(ex->getMessage()), static_cast<$Throwable*>(ex));
	}
	return nullptr;
}

$X509Certificate* DSAKeyValueResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$SecretKey* DSAKeyValueResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$PrivateKey* DSAKeyValueResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

void clinit$DSAKeyValueResolver($Class* class$) {
	$assignStatic(DSAKeyValueResolver::LOG, $LoggerFactory::getLogger(DSAKeyValueResolver::class$));
}

DSAKeyValueResolver::DSAKeyValueResolver() {
}

$Class* DSAKeyValueResolver::load$($String* name, bool initialize) {
	$loadClass(DSAKeyValueResolver, name, initialize, &_DSAKeyValueResolver_ClassInfo_, clinit$DSAKeyValueResolver, allocate$DSAKeyValueResolver);
	return class$;
}

$Class* DSAKeyValueResolver::class$ = nullptr;

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