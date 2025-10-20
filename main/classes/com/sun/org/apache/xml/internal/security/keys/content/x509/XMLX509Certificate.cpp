#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Certificate.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
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
#include <java/security/GeneralSecurityException.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateEncodingException.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/CertificateFactory.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Arrays.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef JCA_CERT_ID
#undef LOG
#undef _TAG_X509CERTIFICATE

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $XMLX509DataContent = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $PublicKey = ::java::security::PublicKey;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateEncodingException = ::java::security::cert::CertificateEncodingException;
using $CertificateException = ::java::security::cert::CertificateException;
using $CertificateFactory = ::java::security::cert::CertificateFactory;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $Arrays = ::java::util::Arrays;
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
								namespace content {
									namespace x509 {

$FieldInfo _XMLX509Certificate_FieldInfo_[] = {
	{"JCA_CERT_ID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLX509Certificate, JCA_CERT_ID)},
	{}
};

$MethodInfo _XMLX509Certificate_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509Certificate::*)($Element*,$String*)>(&XMLX509Certificate::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;[B)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509Certificate::*)($Document*,$bytes*)>(&XMLX509Certificate::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509Certificate::*)($Document*,$X509Certificate*)>(&XMLX509Certificate::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCertificateBytes", "()[B", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException,java.io.IOException"},
	{"getX509Certificate", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLX509Certificate_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509Certificate",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509DataContent",
	_XMLX509Certificate_FieldInfo_,
	_XMLX509Certificate_MethodInfo_
};

$Object* allocate$XMLX509Certificate($Class* clazz) {
	return $of($alloc(XMLX509Certificate));
}

$Object* XMLX509Certificate::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* XMLX509Certificate::toString() {
	 return this->$SignatureElementProxy::toString();
}

void XMLX509Certificate::finalize() {
	this->$SignatureElementProxy::finalize();
}


$String* XMLX509Certificate::JCA_CERT_ID = nullptr;

void XMLX509Certificate::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

void XMLX509Certificate::init$($Document* doc, $bytes* certificateBytes) {
	$SignatureElementProxy::init$(doc);
	this->addBase64Text(certificateBytes);
}

void XMLX509Certificate::init$($Document* doc, $X509Certificate* x509certificate) {
	$useLocalCurrentObjectStackCache();
	$SignatureElementProxy::init$(doc);
	try {
		this->addBase64Text($($nc(x509certificate)->getEncoded()));
	} catch ($CertificateEncodingException&) {
		$var($CertificateEncodingException, ex, $catch());
		$throwNew($XMLSecurityException, static_cast<$Exception*>(ex));
	}
}

$bytes* XMLX509Certificate::getCertificateBytes() {
	return this->getBytesFromTextChild();
}

$X509Certificate* XMLX509Certificate::getX509Certificate() {
	$useLocalCurrentObjectStackCache();
	$var($bytes, certbytes, this->getCertificateBytes());
	try {
		$var($InputStream, is, $new($ByteArrayInputStream, certbytes));
		{
			$var($Throwable, var$0, nullptr);
			$var($X509Certificate, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($CertificateFactory, certFact, $CertificateFactory::getInstance(XMLX509Certificate::JCA_CERT_ID));
					$assign(var$2, $cast($X509Certificate, $nc(certFact)->generateCertificate(is)));
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
	} catch ($CertificateException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSecurityException, ex);
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSecurityException, ex);
	}
	$shouldNotReachHere();
}

$PublicKey* XMLX509Certificate::getPublicKey() {
	$var($X509Certificate, cert, this->getX509Certificate());
	if (cert != nullptr) {
		return cert->getPublicKey();
	}
	return nullptr;
}

bool XMLX509Certificate::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(XMLX509Certificate, obj))) {
		return false;
	}
	$var(XMLX509Certificate, other, $cast(XMLX509Certificate, obj));
	try {
		$var($bytes, var$0, $nc(other)->getCertificateBytes());
		return $Arrays::equals(var$0, $(this->getCertificateBytes()));
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		return false;
	}
	$shouldNotReachHere();
}

int32_t XMLX509Certificate::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t result = 17;
	try {
		$var($bytes, bytes, getCertificateBytes());
		for (int32_t i = 0; i < $nc(bytes)->length; ++i) {
			result = 31 * result + bytes->get(i);
		}
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, e, $catch());
		$init($ElementProxy);
		$nc($ElementProxy::LOG)->debug($(e->getMessage()), static_cast<$Throwable*>(e));
	}
	return result;
}

$String* XMLX509Certificate::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_X509CERTIFICATE;
}

XMLX509Certificate::XMLX509Certificate() {
}

void clinit$XMLX509Certificate($Class* class$) {
	$assignStatic(XMLX509Certificate::JCA_CERT_ID, "X.509"_s);
}

$Class* XMLX509Certificate::load$($String* name, bool initialize) {
	$loadClass(XMLX509Certificate, name, initialize, &_XMLX509Certificate_ClassInfo_, clinit$XMLX509Certificate, allocate$XMLX509Certificate);
	return class$;
}

$Class* XMLX509Certificate::class$ = nullptr;

									} // x509
								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com