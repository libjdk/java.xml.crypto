#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SubjectName.h>

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/RFC2253Parser.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef _TAG_X509SUBJECTNAME

using $XMLX509DataContent = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $RFC2253Parser = ::com::sun::org::apache::xml::internal::security::utils::RFC2253Parser;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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

$MethodInfo _XMLX509SubjectName_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509SubjectName::*)($Element*,$String*)>(&XMLX509SubjectName::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509SubjectName::*)($Document*,$String*)>(&XMLX509SubjectName::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509SubjectName::*)($Document*,$X509Certificate*)>(&XMLX509SubjectName::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSubjectName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLX509SubjectName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509SubjectName",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509DataContent",
	nullptr,
	_XMLX509SubjectName_MethodInfo_
};

$Object* allocate$XMLX509SubjectName($Class* clazz) {
	return $of($alloc(XMLX509SubjectName));
}

$Object* XMLX509SubjectName::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* XMLX509SubjectName::toString() {
	 return this->$SignatureElementProxy::toString();
}

void XMLX509SubjectName::finalize() {
	this->$SignatureElementProxy::finalize();
}

void XMLX509SubjectName::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

void XMLX509SubjectName::init$($Document* doc, $String* X509SubjectNameString) {
	$SignatureElementProxy::init$(doc);
	this->addText(X509SubjectNameString);
}

void XMLX509SubjectName::init$($Document* doc, $X509Certificate* x509certificate) {
	$useLocalCurrentObjectStackCache();
	XMLX509SubjectName::init$(doc, $($nc($($nc(x509certificate)->getSubjectX500Principal()))->getName()));
}

$String* XMLX509SubjectName::getSubjectName() {
	return $RFC2253Parser::normalize($(this->getTextFromTextChild()));
}

bool XMLX509SubjectName::equals(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf(XMLX509SubjectName, obj))) {
		return false;
	}
	$var(XMLX509SubjectName, other, $cast(XMLX509SubjectName, obj));
	$var($String, otherSubject, $nc(other)->getSubjectName());
	$var($String, thisSubject, this->getSubjectName());
	return $nc(thisSubject)->equals(otherSubject);
}

int32_t XMLX509SubjectName::hashCode() {
	int32_t result = 17;
	result = 31 * result + $nc($(this->getSubjectName()))->hashCode();
	return result;
}

$String* XMLX509SubjectName::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_X509SUBJECTNAME;
}

XMLX509SubjectName::XMLX509SubjectName() {
}

$Class* XMLX509SubjectName::load$($String* name, bool initialize) {
	$loadClass(XMLX509SubjectName, name, initialize, &_XMLX509SubjectName_ClassInfo_, allocate$XMLX509SubjectName);
	return class$;
}

$Class* XMLX509SubjectName::class$ = nullptr;

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