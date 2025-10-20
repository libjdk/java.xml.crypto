#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SKI.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Arrays.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef LOG
#undef SKI_OID
#undef XMLX509SKI
#undef _TAG_X509SKI

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $XMLX509DataContent = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $X509Extension = ::java::security::cert::X509Extension;
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

$FieldInfo _XMLX509SKI_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLX509SKI, LOG)},
	{"SKI_OID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLX509SKI, SKI_OID)},
	{}
};

$MethodInfo _XMLX509SKI_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Lorg/w3c/dom/Document;[B)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509SKI::*)($Document*,$bytes*)>(&XMLX509SKI::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509SKI::*)($Document*,$X509Certificate*)>(&XMLX509SKI::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509SKI::*)($Element*,$String*)>(&XMLX509SKI::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSKIBytes", "()[B", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getSKIBytesFromCert", "(Ljava/security/cert/X509Certificate;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($X509Certificate*)>(&XMLX509SKI::getSKIBytesFromCert)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLX509SKI_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509SKI",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509DataContent",
	_XMLX509SKI_FieldInfo_,
	_XMLX509SKI_MethodInfo_
};

$Object* allocate$XMLX509SKI($Class* clazz) {
	return $of($alloc(XMLX509SKI));
}

$Object* XMLX509SKI::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* XMLX509SKI::toString() {
	 return this->$SignatureElementProxy::toString();
}

void XMLX509SKI::finalize() {
	this->$SignatureElementProxy::finalize();
}

$Logger* XMLX509SKI::LOG = nullptr;

$String* XMLX509SKI::SKI_OID = nullptr;

void XMLX509SKI::init$($Document* doc, $bytes* skiBytes) {
	$SignatureElementProxy::init$(doc);
	this->addBase64Text(skiBytes);
}

void XMLX509SKI::init$($Document* doc, $X509Certificate* x509certificate) {
	$SignatureElementProxy::init$(doc);
	this->addBase64Text($(XMLX509SKI::getSKIBytesFromCert(x509certificate)));
}

void XMLX509SKI::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

$bytes* XMLX509SKI::getSKIBytes() {
	return this->getBytesFromTextChild();
}

$bytes* XMLX509SKI::getSKIBytesFromCert($X509Certificate* cert) {
	$init(XMLX509SKI);
	$useLocalCurrentObjectStackCache();
	if ($nc(cert)->getVersion() < 3) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {$($of($Integer::valueOf(cert->getVersion())))}));
		$throwNew($XMLSecurityException, "certificate.noSki.lowVersion"_s, exArgs);
	}
	$var($bytes, extensionValue, $nc(cert)->getExtensionValue(XMLX509SKI::SKI_OID));
	if (extensionValue == nullptr) {
		$throwNew($XMLSecurityException, "certificate.noSki.null"_s);
	}
	$var($bytes, skidValue, $new($bytes, $nc(extensionValue)->length - 4));
	$System::arraycopy(extensionValue, 4, skidValue, 0, skidValue->length);
	if ($nc(XMLX509SKI::LOG)->isDebugEnabled()) {
		$nc(XMLX509SKI::LOG)->debug($$str({"Base64 of SKI is "_s, $($XMLUtils::encodeToString(skidValue))}));
	}
	return skidValue;
}

bool XMLX509SKI::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(XMLX509SKI, obj))) {
		return false;
	}
	$var(XMLX509SKI, other, $cast(XMLX509SKI, obj));
	try {
		$var($bytes, var$0, $nc(other)->getSKIBytes());
		return $Arrays::equals(var$0, $(this->getSKIBytes()));
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		return false;
	}
	$shouldNotReachHere();
}

int32_t XMLX509SKI::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t result = 17;
	try {
		$var($bytes, bytes, getSKIBytes());
		for (int32_t i = 0; i < $nc(bytes)->length; ++i) {
			result = 31 * result + bytes->get(i);
		}
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, e, $catch());
		$nc(XMLX509SKI::LOG)->debug($(e->getMessage()), static_cast<$Throwable*>(e));
	}
	return result;
}

$String* XMLX509SKI::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_X509SKI;
}

void clinit$XMLX509SKI($Class* class$) {
	$assignStatic(XMLX509SKI::SKI_OID, "2.5.29.14"_s);
	$assignStatic(XMLX509SKI::LOG, $LoggerFactory::getLogger(XMLX509SKI::class$));
}

XMLX509SKI::XMLX509SKI() {
}

$Class* XMLX509SKI::load$($String* name, bool initialize) {
	$loadClass(XMLX509SKI, name, initialize, &_XMLX509SKI_ClassInfo_, clinit$XMLX509SKI, allocate$XMLX509SKI);
	return class$;
}

$Class* XMLX509SKI::class$ = nullptr;

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