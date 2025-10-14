#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509CertificateResolver.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Certificate.h>
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
#undef _TAG_X509CERTIFICATE
#undef _TAG_X509DATA

using $ElementArray = $Array<::org::w3c::dom::Element>;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $XMLX509Certificate = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Certificate;
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
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $Certificate = ::java::security::cert::Certificate;
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

$FieldInfo _X509CertificateResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(X509CertificateResolver, LOG)},
	{}
};

$MethodInfo _X509CertificateResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X509CertificateResolver::*)()>(&X509CertificateResolver::init$))},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PROTECTED},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{}
};

$ClassInfo _X509CertificateResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.X509CertificateResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_X509CertificateResolver_FieldInfo_,
	_X509CertificateResolver_MethodInfo_
};

$Object* allocate$X509CertificateResolver($Class* clazz) {
	return $of($alloc(X509CertificateResolver));
}

$Logger* X509CertificateResolver::LOG = nullptr;

void X509CertificateResolver::init$() {
	$KeyResolverSpi::init$();
}

bool X509CertificateResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$init($Constants);
	return $nc($Constants::SignatureSpecNS)->equals($($nc(element)->getNamespaceURI()));
}

$PublicKey* X509CertificateResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$var($X509Certificate, cert, this->engineResolveX509Certificate(element, baseURI, storage, secureValidation));
	if (cert != nullptr) {
		return cert->getPublicKey();
	}
	return nullptr;
}

$X509Certificate* X509CertificateResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	try {
		$init($Constants);
		$var($ElementArray, els, $XMLUtils::selectDsNodes($($nc(element)->getFirstChild()), $Constants::_TAG_X509CERTIFICATE));
		if (els == nullptr || $nc(els)->length == 0) {
			$var($Element, el, $XMLUtils::selectDsNode($($nc(element)->getFirstChild()), $Constants::_TAG_X509DATA, 0));
			if (el != nullptr) {
				return engineResolveX509Certificate(el, baseURI, storage, secureValidation);
			}
			return nullptr;
		}
		for (int32_t i = 0; i < $nc(els)->length; ++i) {
			$var($XMLX509Certificate, xmlCert, $new($XMLX509Certificate, els->get(i), baseURI));
			$var($X509Certificate, cert, xmlCert->getX509Certificate());
			if (cert != nullptr) {
				return cert;
			}
		}
		return nullptr;
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$nc(X509CertificateResolver::LOG)->debug("Security Exception"_s, static_cast<$Throwable*>(ex));
		$throwNew($KeyResolverException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

$SecretKey* X509CertificateResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$PrivateKey* X509CertificateResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

void clinit$X509CertificateResolver($Class* class$) {
	$assignStatic(X509CertificateResolver::LOG, $LoggerFactory::getLogger(X509CertificateResolver::class$));
}

X509CertificateResolver::X509CertificateResolver() {
}

$Class* X509CertificateResolver::load$($String* name, bool initialize) {
	$loadClass(X509CertificateResolver, name, initialize, &_X509CertificateResolver_ClassInfo_, clinit$X509CertificateResolver, allocate$X509CertificateResolver);
	return class$;
}

$Class* X509CertificateResolver::class$ = nullptr;

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