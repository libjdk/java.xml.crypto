#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509SubjectNameResolver.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SubjectName.h>
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
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef LOG
#undef _TAG_X509DATA
#undef _TAG_X509SUBJECTNAME

using $XMLX509SubjectNameArray = $Array<::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SubjectName>;
using $ElementArray = $Array<::org::w3c::dom::Element>;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $XMLX509SubjectName = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SubjectName;
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

$FieldInfo _X509SubjectNameResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(X509SubjectNameResolver, LOG)},
	{}
};

$MethodInfo _X509SubjectNameResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(X509SubjectNameResolver::*)()>(&X509SubjectNameResolver::init$))},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PROTECTED},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{}
};

$ClassInfo _X509SubjectNameResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.X509SubjectNameResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_X509SubjectNameResolver_FieldInfo_,
	_X509SubjectNameResolver_MethodInfo_
};

$Object* allocate$X509SubjectNameResolver($Class* clazz) {
	return $of($alloc(X509SubjectNameResolver));
}

$Logger* X509SubjectNameResolver::LOG = nullptr;

void X509SubjectNameResolver::init$() {
	$KeyResolverSpi::init$();
}

bool X509SubjectNameResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$init($Constants);
	if (!$XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_X509DATA)) {
		return false;
	}
	$var($ElementArray, x509childNodes, $XMLUtils::selectDsNodes($($nc(element)->getFirstChild()), $Constants::_TAG_X509SUBJECTNAME));
	return x509childNodes != nullptr && x509childNodes->length > 0;
}

$PublicKey* X509SubjectNameResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$var($X509Certificate, cert, this->engineResolveX509Certificate(element, baseURI, storage, secureValidation));
	if (cert != nullptr) {
		return cert->getPublicKey();
	}
	return nullptr;
}

$X509Certificate* X509SubjectNameResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$init($Constants);
	$var($ElementArray, x509childNodes, $XMLUtils::selectDsNodes($($nc(element)->getFirstChild()), $Constants::_TAG_X509SUBJECTNAME));
	if (!(x509childNodes != nullptr && x509childNodes->length > 0)) {
		return nullptr;
	}
	try {
		if (storage == nullptr) {
			$var($ObjectArray, exArgs, $new($ObjectArray, {$of($Constants::_TAG_X509SUBJECTNAME)}));
			$var($KeyResolverException, ex, $new($KeyResolverException, "KeyResolver.needStorageResolver"_s, exArgs));
			$nc(X509SubjectNameResolver::LOG)->debug(""_s, static_cast<$Throwable*>(ex));
			$throw(ex);
		}
		$var($XMLX509SubjectNameArray, x509childObject, $new($XMLX509SubjectNameArray, $nc(x509childNodes)->length));
		for (int32_t i = 0; i < x509childNodes->length; ++i) {
			x509childObject->set(i, $$new($XMLX509SubjectName, x509childNodes->get(i), baseURI));
		}
		$var($Iterator, storageIterator, $nc(storage)->getIterator());
		while ($nc(storageIterator)->hasNext()) {
			$var($X509Certificate, cert, $cast($X509Certificate, storageIterator->next()));
			$var($XMLX509SubjectName, certSN, $new($XMLX509SubjectName, $($nc(element)->getOwnerDocument()), cert));
			$nc(X509SubjectNameResolver::LOG)->debug("Found Certificate SN: {}"_s, $$new($ObjectArray, {$($of(certSN->getSubjectName()))}));
			for (int32_t i = 0; i < x509childObject->length; ++i) {
				$nc(X509SubjectNameResolver::LOG)->debug("Found Element SN:     {}"_s, $$new($ObjectArray, {$($of($nc(x509childObject->get(i))->getSubjectName()))}));
				if (certSN->equals(x509childObject->get(i))) {
					$nc(X509SubjectNameResolver::LOG)->debug("match !!! "_s);
					return cert;
				}
				$nc(X509SubjectNameResolver::LOG)->debug("no match..."_s);
			}
		}
		return nullptr;
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$nc(X509SubjectNameResolver::LOG)->debug("XMLSecurityException"_s, static_cast<$Throwable*>(ex));
		$throwNew($KeyResolverException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

$SecretKey* X509SubjectNameResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$PrivateKey* X509SubjectNameResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

void clinit$X509SubjectNameResolver($Class* class$) {
	$assignStatic(X509SubjectNameResolver::LOG, $LoggerFactory::getLogger(X509SubjectNameResolver::class$));
}

X509SubjectNameResolver::X509SubjectNameResolver() {
}

$Class* X509SubjectNameResolver::load$($String* name, bool initialize) {
	$loadClass(X509SubjectNameResolver, name, initialize, &_X509SubjectNameResolver_ClassInfo_, clinit$X509SubjectNameResolver, allocate$X509SubjectNameResolver);
	return class$;
}

$Class* X509SubjectNameResolver::class$ = nullptr;

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