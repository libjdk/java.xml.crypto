#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509CRL.h>

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef XMLX509CRL
#undef _TAG_X509CRL

using $XMLX509DataContent = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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

$MethodInfo _XMLX509CRL_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509CRL::*)($Element*,$String*)>(&XMLX509CRL::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;[B)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509CRL::*)($Document*,$bytes*)>(&XMLX509CRL::init$))},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCRLBytes", "()[B", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLX509CRL_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509CRL",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509DataContent",
	nullptr,
	_XMLX509CRL_MethodInfo_
};

$Object* allocate$XMLX509CRL($Class* clazz) {
	return $of($alloc(XMLX509CRL));
}

int32_t XMLX509CRL::hashCode() {
	 return this->$SignatureElementProxy::hashCode();
}

bool XMLX509CRL::equals(Object$* arg0) {
	 return this->$SignatureElementProxy::equals(arg0);
}

$Object* XMLX509CRL::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* XMLX509CRL::toString() {
	 return this->$SignatureElementProxy::toString();
}

void XMLX509CRL::finalize() {
	this->$SignatureElementProxy::finalize();
}

void XMLX509CRL::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

void XMLX509CRL::init$($Document* doc, $bytes* crlBytes) {
	$SignatureElementProxy::init$(doc);
	this->addBase64Text(crlBytes);
}

$bytes* XMLX509CRL::getCRLBytes() {
	return this->getBytesFromTextChild();
}

$String* XMLX509CRL::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_X509CRL;
}

XMLX509CRL::XMLX509CRL() {
}

$Class* XMLX509CRL::load$($String* name, bool initialize) {
	$loadClass(XMLX509CRL, name, initialize, &_XMLX509CRL_ClassInfo_, allocate$XMLX509CRL);
	return class$;
}

$Class* XMLX509CRL::class$ = nullptr;

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