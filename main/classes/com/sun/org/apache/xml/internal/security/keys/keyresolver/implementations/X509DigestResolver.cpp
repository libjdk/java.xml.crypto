#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509DigestResolver.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/X509Data.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Digest.h>
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
#include <java/util/Arrays.h>
#include <java/util/Iterator.h>
#include <javax/crypto/SecretKey.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef LOG
#undef _TAG_X509DATA
#undef _TAG_X509DIGEST

using $XMLX509DigestArray = $Array<::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Digest>;
using $ElementArray = $Array<::org::w3c::dom::Element>;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $X509Data = ::com::sun::org::apache::xml::internal::security::keys::content::X509Data;
using $XMLX509Digest = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Digest;
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
using $Arrays = ::java::util::Arrays;
using $Iterator = ::java::util::Iterator;
using $SecretKey = ::javax::crypto::SecretKey;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
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

$FieldInfo _X509DigestResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(X509DigestResolver, LOG)},
	{}
};

$MethodInfo _X509DigestResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X509DigestResolver::*)()>(&X509DigestResolver::init$))},
	{"checkStorage", "(Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)V", nullptr, $PRIVATE, $method(static_cast<void(X509DigestResolver::*)($StorageResolver*)>(&X509DigestResolver::checkStorage)), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PROTECTED},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"resolveCertificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE, $method(static_cast<$X509Certificate*(X509DigestResolver::*)($Element*,$String*,$StorageResolver*)>(&X509DigestResolver::resolveCertificate)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{}
};

$ClassInfo _X509DigestResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.X509DigestResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_X509DigestResolver_FieldInfo_,
	_X509DigestResolver_MethodInfo_
};

$Object* allocate$X509DigestResolver($Class* clazz) {
	return $of($alloc(X509DigestResolver));
}

$Logger* X509DigestResolver::LOG = nullptr;

void X509DigestResolver::init$() {
	$KeyResolverSpi::init$();
}

bool X509DigestResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$init($Constants);
	if ($XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_X509DATA)) {
		try {
			$var($X509Data, x509Data, $new($X509Data, element, baseURI));
			return x509Data->containsDigest();
		} catch ($XMLSecurityException&) {
			$var($XMLSecurityException, e, $catch());
			return false;
		}
	} else {
		return false;
	}
}

$PublicKey* X509DigestResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$var($X509Certificate, cert, this->engineResolveX509Certificate(element, baseURI, storage, secureValidation));
	if (cert != nullptr) {
		return cert->getPublicKey();
	}
	return nullptr;
}

$X509Certificate* X509DigestResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	try {
		return resolveCertificate(element, baseURI, storage);
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, e, $catch());
		$nc(X509DigestResolver::LOG)->debug("XMLSecurityException"_s, static_cast<$Throwable*>(e));
	}
	return nullptr;
}

$SecretKey* X509DigestResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$X509Certificate* X509DigestResolver::resolveCertificate($Element* element, $String* baseURI, $StorageResolver* storage) {
	$var($XMLX509DigestArray, x509Digests, nullptr);
	$init($Constants);
	$var($ElementArray, x509childNodes, $XMLUtils::selectDs11Nodes($($nc(element)->getFirstChild()), $Constants::_TAG_X509DIGEST));
	if (x509childNodes == nullptr || $nc(x509childNodes)->length <= 0) {
		return nullptr;
	}
	try {
		checkStorage(storage);
		$assign(x509Digests, $new($XMLX509DigestArray, $nc(x509childNodes)->length));
		for (int32_t i = 0; i < x509childNodes->length; ++i) {
			x509Digests->set(i, $$new($XMLX509Digest, x509childNodes->get(i), baseURI));
		}
		$var($Iterator, storageIterator, $nc(storage)->getIterator());
		while ($nc(storageIterator)->hasNext()) {
			$var($X509Certificate, cert, $cast($X509Certificate, storageIterator->next()));
			for (int32_t i = 0; i < x509Digests->length; ++i) {
				$var($XMLX509Digest, keyInfoDigest, x509Digests->get(i));
				$var($bytes, certDigestBytes, $XMLX509Digest::getDigestBytesFromCert(cert, $($nc(keyInfoDigest)->getAlgorithm())));
				if ($Arrays::equals($($nc(keyInfoDigest)->getDigestBytes()), certDigestBytes)) {
					$nc(X509DigestResolver::LOG)->debug("Found certificate with: {}"_s, $$new($ObjectArray, {$($of($nc($($nc(cert)->getSubjectX500Principal()))->getName()))}));
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

void X509DigestResolver::checkStorage($StorageResolver* storage) {
	if (storage == nullptr) {
		$init($Constants);
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of($Constants::_TAG_X509DIGEST)}));
		$var($KeyResolverException, ex, $new($KeyResolverException, "KeyResolver.needStorageResolver"_s, exArgs));
		$nc(X509DigestResolver::LOG)->debug(""_s, static_cast<$Throwable*>(ex));
		$throw(ex);
	}
}

$PrivateKey* X509DigestResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

void clinit$X509DigestResolver($Class* class$) {
	$assignStatic(X509DigestResolver::LOG, $LoggerFactory::getLogger(X509DigestResolver::class$));
}

X509DigestResolver::X509DigestResolver() {
}

$Class* X509DigestResolver::load$($String* name, bool initialize) {
	$loadClass(X509DigestResolver, name, initialize, &_X509DigestResolver_ClassInfo_, clinit$X509DigestResolver, allocate$X509DigestResolver);
	return class$;
}

$Class* X509DigestResolver::class$ = nullptr;

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