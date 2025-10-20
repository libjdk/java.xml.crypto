#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverException.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParserException.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/crypto/SecretKey.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $KeyResolverException = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverException;
using $StorageResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver;
using $XMLParserException = ::com::sun::org::apache::xml::internal::security::parser::XMLParserException;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $SecretKey = ::javax::crypto::SecretKey;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace keyresolver {

$MethodInfo _KeyResolverSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyResolverSpi::*)()>(&KeyResolverSpi::init$))},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED | $ABSTRACT},
	{"engineLookupAndResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineLookupAndResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineLookupAndResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineLookupResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"getDocFromBytes", "([BZ)Lorg/w3c/dom/Element;", nullptr, $PROTECTED | $STATIC, $method(static_cast<$Element*(*)($bytes*,bool)>(&KeyResolverSpi::getDocFromBytes)), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{}
};

$ClassInfo _KeyResolverSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_KeyResolverSpi_MethodInfo_
};

$Object* allocate$KeyResolverSpi($Class* clazz) {
	return $of($alloc(KeyResolverSpi));
}

void KeyResolverSpi::init$() {
}

$PublicKey* KeyResolverSpi::engineLookupAndResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	if (!engineCanResolve(element, baseURI, storage)) {
		return nullptr;
	}
	return engineResolvePublicKey(element, baseURI, storage, secureValidation);
}

$X509Certificate* KeyResolverSpi::engineLookupResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	if (!engineCanResolve(element, baseURI, storage)) {
		return nullptr;
	}
	return engineResolveX509Certificate(element, baseURI, storage, secureValidation);
}

$SecretKey* KeyResolverSpi::engineLookupAndResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	if (!engineCanResolve(element, baseURI, storage)) {
		return nullptr;
	}
	return engineResolveSecretKey(element, baseURI, storage, secureValidation);
}

$PrivateKey* KeyResolverSpi::engineLookupAndResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	if (!engineCanResolve(element, baseURI, storage)) {
		return nullptr;
	}
	return engineResolvePrivateKey(element, baseURI, storage, secureValidation);
}

$Element* KeyResolverSpi::getDocFromBytes($bytes* bytes, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($InputStream, is, $new($ByteArrayInputStream, bytes));
		{
			$var($Throwable, var$0, nullptr);
			$var($Element, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($Document, doc, $XMLUtils::read(is, secureValidation));
					$assign(var$2, $nc(doc)->getDocumentElement());
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						is->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				is->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($XMLParserException&) {
		$var($XMLParserException, ex, $catch());
		$throwNew($KeyResolverException, static_cast<$Exception*>(ex));
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		$throwNew($KeyResolverException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

KeyResolverSpi::KeyResolverSpi() {
}

$Class* KeyResolverSpi::load$($String* name, bool initialize) {
	$loadClass(KeyResolverSpi, name, initialize, &_KeyResolverSpi_ClassInfo_, allocate$KeyResolverSpi);
	return class$;
}

$Class* KeyResolverSpi::class$ = nullptr;

								} // keyresolver
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com