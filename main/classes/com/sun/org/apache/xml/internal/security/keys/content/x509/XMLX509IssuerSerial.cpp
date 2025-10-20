#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509IssuerSerial.h>

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/RFC2253Parser.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef LOG
#undef _TAG_X509ISSUERNAME
#undef _TAG_X509ISSUERSERIAL
#undef _TAG_X509SERIALNUMBER

using $XMLX509DataContent = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $RFC2253Parser = ::com::sun::org::apache::xml::internal::security::utils::RFC2253Parser;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
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

$FieldInfo _XMLX509IssuerSerial_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLX509IssuerSerial, LOG)},
	{}
};

$MethodInfo _XMLX509IssuerSerial_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509IssuerSerial::*)($Element*,$String*)>(&XMLX509IssuerSerial::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509IssuerSerial::*)($Document*,$String*,$BigInteger*)>(&XMLX509IssuerSerial::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509IssuerSerial::*)($Document*,$String*,$String*)>(&XMLX509IssuerSerial::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509IssuerSerial::*)($Document*,$String*,int32_t)>(&XMLX509IssuerSerial::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509IssuerSerial::*)($Document*,$X509Certificate*)>(&XMLX509IssuerSerial::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getIssuerName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSerialNumber", "()Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getSerialNumberInteger", "()I", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLX509IssuerSerial_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509IssuerSerial",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509DataContent",
	_XMLX509IssuerSerial_FieldInfo_,
	_XMLX509IssuerSerial_MethodInfo_
};

$Object* allocate$XMLX509IssuerSerial($Class* clazz) {
	return $of($alloc(XMLX509IssuerSerial));
}

$Object* XMLX509IssuerSerial::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* XMLX509IssuerSerial::toString() {
	 return this->$SignatureElementProxy::toString();
}

void XMLX509IssuerSerial::finalize() {
	this->$SignatureElementProxy::finalize();
}

$Logger* XMLX509IssuerSerial::LOG = nullptr;

void XMLX509IssuerSerial::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

void XMLX509IssuerSerial::init$($Document* doc, $String* x509IssuerName, $BigInteger* x509SerialNumber) {
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
	$init($Constants);
	addTextElement(x509IssuerName, $Constants::_TAG_X509ISSUERNAME);
	addTextElement($($nc(x509SerialNumber)->toString()), $Constants::_TAG_X509SERIALNUMBER);
}

void XMLX509IssuerSerial::init$($Document* doc, $String* x509IssuerName, $String* x509SerialNumber) {
	XMLX509IssuerSerial::init$(doc, x509IssuerName, $$new($BigInteger, x509SerialNumber));
}

void XMLX509IssuerSerial::init$($Document* doc, $String* x509IssuerName, int32_t x509SerialNumber) {
	$useLocalCurrentObjectStackCache();
	XMLX509IssuerSerial::init$(doc, x509IssuerName, $$new($BigInteger, $($Integer::toString(x509SerialNumber))));
}

void XMLX509IssuerSerial::init$($Document* doc, $X509Certificate* x509certificate) {
	$useLocalCurrentObjectStackCache();
	$var($Document, var$0, doc);
	$var($String, var$1, $nc($($nc(x509certificate)->getIssuerX500Principal()))->getName());
	XMLX509IssuerSerial::init$(var$0, var$1, $(x509certificate->getSerialNumber()));
}

$BigInteger* XMLX509IssuerSerial::getSerialNumber() {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($String, text, this->getTextFromChildElement($Constants::_TAG_X509SERIALNUMBER, $Constants::SignatureSpecNS));
	$nc(XMLX509IssuerSerial::LOG)->debug("X509SerialNumber text: {}"_s, $$new($ObjectArray, {$of(text)}));
	return $new($BigInteger, text);
}

int32_t XMLX509IssuerSerial::getSerialNumberInteger() {
	return $nc($(this->getSerialNumber()))->intValue();
}

$String* XMLX509IssuerSerial::getIssuerName() {
	$init($Constants);
	return $RFC2253Parser::normalize($(this->getTextFromChildElement($Constants::_TAG_X509ISSUERNAME, $Constants::SignatureSpecNS)));
}

bool XMLX509IssuerSerial::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(XMLX509IssuerSerial, obj))) {
		return false;
	}
	$var(XMLX509IssuerSerial, other, $cast(XMLX509IssuerSerial, obj));
	bool var$0 = $nc($(this->getSerialNumber()))->equals($($nc(other)->getSerialNumber()));
	return var$0 && $nc($(this->getIssuerName()))->equals($($nc(other)->getIssuerName()));
}

int32_t XMLX509IssuerSerial::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t result = 17;
	result = 31 * result + $nc($(getSerialNumber()))->hashCode();
	result = 31 * result + $nc($(getIssuerName()))->hashCode();
	return result;
}

$String* XMLX509IssuerSerial::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_X509ISSUERSERIAL;
}

void clinit$XMLX509IssuerSerial($Class* class$) {
	$assignStatic(XMLX509IssuerSerial::LOG, $LoggerFactory::getLogger(XMLX509IssuerSerial::class$));
}

XMLX509IssuerSerial::XMLX509IssuerSerial() {
}

$Class* XMLX509IssuerSerial::load$($String* name, bool initialize) {
	$loadClass(XMLX509IssuerSerial, name, initialize, &_XMLX509IssuerSerial_ClassInfo_, clinit$XMLX509IssuerSerial, allocate$XMLX509IssuerSerial);
	return class$;
}

$Class* XMLX509IssuerSerial::class$ = nullptr;

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