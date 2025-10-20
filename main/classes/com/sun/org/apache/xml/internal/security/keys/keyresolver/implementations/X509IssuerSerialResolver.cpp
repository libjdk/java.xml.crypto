#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509IssuerSerialResolver.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/X509Data.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509IssuerSerial.h>
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
#include <java/math/BigInteger.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Iterator.h>
#include <javax/crypto/SecretKey.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef LOG
#undef _TAG_X509DATA
#undef _TAG_X509ISSUERSERIAL

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $X509Data = ::com::sun::org::apache::xml::internal::security::keys::content::X509Data;
using $XMLX509IssuerSerial = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509IssuerSerial;
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
using $BigInteger = ::java::math::BigInteger;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $Certificate = ::java::security::cert::Certificate;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Iterator = ::java::util::Iterator;
using $SecretKey = ::javax::crypto::SecretKey;
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

$FieldInfo _X509IssuerSerialResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(X509IssuerSerialResolver, LOG)},
	{}
};

$MethodInfo _X509IssuerSerialResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X509IssuerSerialResolver::*)()>(&X509IssuerSerialResolver::init$))},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PROTECTED},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{}
};

$ClassInfo _X509IssuerSerialResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.X509IssuerSerialResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_X509IssuerSerialResolver_FieldInfo_,
	_X509IssuerSerialResolver_MethodInfo_
};

$Object* allocate$X509IssuerSerialResolver($Class* clazz) {
	return $of($alloc(X509IssuerSerialResolver));
}

$Logger* X509IssuerSerialResolver::LOG = nullptr;

void X509IssuerSerialResolver::init$() {
	$KeyResolverSpi::init$();
}

bool X509IssuerSerialResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	if ($XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_X509DATA)) {
		try {
			$var($X509Data, x509Data, $new($X509Data, element, baseURI));
			return x509Data->containsIssuerSerial();
		} catch ($XMLSecurityException&) {
			$var($XMLSecurityException, e, $catch());
			return false;
		}
	} else {
		return false;
	}
}

$PublicKey* X509IssuerSerialResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$var($X509Certificate, cert, this->engineResolveX509Certificate(element, baseURI, storage, secureValidation));
	if (cert != nullptr) {
		return cert->getPublicKey();
	}
	return nullptr;
}

$X509Certificate* X509IssuerSerialResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	$var($X509Data, x509data, nullptr);
	try {
		$assign(x509data, $new($X509Data, element, baseURI));
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		return nullptr;
	}
	if (!$nc(x509data)->containsIssuerSerial()) {
		return nullptr;
	}
	try {
		if (storage == nullptr) {
			$init($Constants);
			$var($ObjectArray, exArgs, $new($ObjectArray, {$of($Constants::_TAG_X509ISSUERSERIAL)}));
			$var($KeyResolverException, ex, $new($KeyResolverException, "KeyResolver.needStorageResolver"_s, exArgs));
			$nc(X509IssuerSerialResolver::LOG)->debug(""_s, static_cast<$Throwable*>(ex));
			$throw(ex);
		}
		int32_t noOfISS = $nc(x509data)->lengthIssuerSerial();
		$var($Iterator, storageIterator, $nc(storage)->getIterator());
		while ($nc(storageIterator)->hasNext()) {
			$var($X509Certificate, cert, $cast($X509Certificate, storageIterator->next()));
			$var($XMLX509IssuerSerial, certSerial, $new($XMLX509IssuerSerial, $($nc(element)->getOwnerDocument()), cert));
			$nc(X509IssuerSerialResolver::LOG)->debug("Found Certificate Issuer: {}"_s, $$new($ObjectArray, {$($of(certSerial->getIssuerName()))}));
			$nc(X509IssuerSerialResolver::LOG)->debug("Found Certificate Serial: {}"_s, $$new($ObjectArray, {$($of($nc($(certSerial->getSerialNumber()))->toString()))}));
			for (int32_t i = 0; i < noOfISS; ++i) {
				$var($XMLX509IssuerSerial, xmliss, x509data->itemIssuerSerial(i));
				$nc(X509IssuerSerialResolver::LOG)->debug("Found Element Issuer:     {}"_s, $$new($ObjectArray, {$($of($nc(xmliss)->getIssuerName()))}));
				$nc(X509IssuerSerialResolver::LOG)->debug("Found Element Serial:     {}"_s, $$new($ObjectArray, {$($of($nc($($nc(xmliss)->getSerialNumber()))->toString()))}));
				if (certSerial->equals(xmliss)) {
					$nc(X509IssuerSerialResolver::LOG)->debug("match !!! "_s);
					return cert;
				}
				$nc(X509IssuerSerialResolver::LOG)->debug("no match..."_s);
			}
		}
		return nullptr;
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$nc(X509IssuerSerialResolver::LOG)->debug("XMLSecurityException"_s, static_cast<$Throwable*>(ex));
		$throwNew($KeyResolverException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

$SecretKey* X509IssuerSerialResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$PrivateKey* X509IssuerSerialResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

void clinit$X509IssuerSerialResolver($Class* class$) {
	$assignStatic(X509IssuerSerialResolver::LOG, $LoggerFactory::getLogger(X509IssuerSerialResolver::class$));
}

X509IssuerSerialResolver::X509IssuerSerialResolver() {
}

$Class* X509IssuerSerialResolver::load$($String* name, bool initialize) {
	$loadClass(X509IssuerSerialResolver, name, initialize, &_X509IssuerSerialResolver_ClassInfo_, clinit$X509IssuerSerialResolver, allocate$X509IssuerSerialResolver);
	return class$;
}

$Class* X509IssuerSerialResolver::class$ = nullptr;

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