#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509SKIResolver.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SKI.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverException.h>
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
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Iterator.h>
#include <javax/crypto/SecretKey.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef LOG
#undef _TAG_X509DATA
#undef _TAG_X509SKI

using $XMLX509SKIArray = $Array<::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SKI>;
using $ElementArray = $Array<::org::w3c::dom::Element>;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $XMLX509SKI = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SKI;
using $KeyResolverException = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverException;
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
using $NullPointerException = ::java::lang::NullPointerException;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $Certificate = ::java::security::cert::Certificate;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Iterator = ::java::util::Iterator;
using $SecretKey = ::javax::crypto::SecretKey;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $Document = ::org::w3c::dom::Document;
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

$FieldInfo _X509SKIResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(X509SKIResolver, LOG)},
	{}
};

$MethodInfo _X509SKIResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X509SKIResolver::*)()>(&X509SKIResolver::init$))},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PROTECTED},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{}
};

$ClassInfo _X509SKIResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.X509SKIResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_X509SKIResolver_FieldInfo_,
	_X509SKIResolver_MethodInfo_
};

$Object* allocate$X509SKIResolver($Class* clazz) {
	return $of($alloc(X509SKIResolver));
}

$Logger* X509SKIResolver::LOG = nullptr;

void X509SKIResolver::init$() {
	$KeyResolverSpi::init$();
}

bool X509SKIResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	if (!$XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_X509DATA)) {
		return false;
	}
	$var($ElementArray, x509childNodes, $XMLUtils::selectDsNodes($($nc(element)->getFirstChild()), $Constants::_TAG_X509SKI));
	return x509childNodes != nullptr && x509childNodes->length > 0;
}

$PublicKey* X509SKIResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$var($X509Certificate, cert, this->engineResolveX509Certificate(element, baseURI, storage, secureValidation));
	if (cert != nullptr) {
		return cert->getPublicKey();
	}
	return nullptr;
}

$X509Certificate* X509SKIResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($ElementArray, x509childNodes, $XMLUtils::selectDsNodes($($nc(element)->getFirstChild()), $Constants::_TAG_X509SKI));
	if (!(x509childNodes != nullptr && x509childNodes->length > 0)) {
		return nullptr;
	}
	try {
		if (storage == nullptr) {
			$var($ObjectArray, exArgs, $new($ObjectArray, {$of($Constants::_TAG_X509SKI)}));
			$var($KeyResolverException, ex, $new($KeyResolverException, "KeyResolver.needStorageResolver"_s, exArgs));
			$nc(X509SKIResolver::LOG)->debug(""_s, static_cast<$Throwable*>(ex));
			$throw(ex);
		}
		$var($XMLX509SKIArray, x509childObject, $new($XMLX509SKIArray, $nc(x509childNodes)->length));
		for (int32_t i = 0; i < x509childNodes->length; ++i) {
			x509childObject->set(i, $$new($XMLX509SKI, x509childNodes->get(i), baseURI));
		}
		$var($Iterator, storageIterator, $nc(storage)->getIterator());
		while ($nc(storageIterator)->hasNext()) {
			$var($X509Certificate, cert, $cast($X509Certificate, storageIterator->next()));
			$var($XMLX509SKI, certSKI, $new($XMLX509SKI, $($nc(element)->getOwnerDocument()), cert));
			for (int32_t i = 0; i < x509childObject->length; ++i) {
				if (certSKI->equals(x509childObject->get(i))) {
					$nc(X509SKIResolver::LOG)->debug("Return PublicKey from {}"_s, $$new($ObjectArray, {$($of($nc($($nc(cert)->getSubjectX500Principal()))->getName()))}));
					return cert;
				}
			}
		}
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$throwNew($KeyResolverException, static_cast<$Exception*>(ex));
	}
	return nullptr;
}

$SecretKey* X509SKIResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$PrivateKey* X509SKIResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

void clinit$X509SKIResolver($Class* class$) {
	$assignStatic(X509SKIResolver::LOG, $LoggerFactory::getLogger(X509SKIResolver::class$));
}

X509SKIResolver::X509SKIResolver() {
}

$Class* X509SKIResolver::load$($String* name, bool initialize) {
	$loadClass(X509SKIResolver, name, initialize, &_X509SKIResolver_ClassInfo_, clinit$X509SKIResolver, allocate$X509SKIResolver);
	return class$;
}

$Class* X509SKIResolver::class$ = nullptr;

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