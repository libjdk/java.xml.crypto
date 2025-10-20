#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$MethodInfo _SignatureElementProxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(SignatureElementProxy::*)()>(&SignatureElementProxy::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureElementProxy::*)($Document*)>(&SignatureElementProxy::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureElementProxy::*)($Element*,$String*)>(&SignatureElementProxy::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getBaseNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SignatureElementProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.utils.ElementProxy",
	nullptr,
	nullptr,
	_SignatureElementProxy_MethodInfo_
};

$Object* allocate$SignatureElementProxy($Class* clazz) {
	return $of($alloc(SignatureElementProxy));
}

void SignatureElementProxy::init$() {
	$ElementProxy::init$();
}

void SignatureElementProxy::init$($Document* doc) {
	$useLocalCurrentObjectStackCache();
	$ElementProxy::init$();
	if (doc == nullptr) {
		$throwNew($RuntimeException, "Document is null"_s);
	}
	setDocument(doc);
	setElement($($XMLUtils::createElementInSignatureSpace(doc, $(this->getBaseLocalName()))));
}

void SignatureElementProxy::init$($Element* element, $String* baseURI) {
	$ElementProxy::init$(element, baseURI);
}

$String* SignatureElementProxy::getBaseNamespace() {
	$init($Constants);
	return $Constants::SignatureSpecNS;
}

SignatureElementProxy::SignatureElementProxy() {
}

$Class* SignatureElementProxy::load$($String* name, bool initialize) {
	$loadClass(SignatureElementProxy, name, initialize, &_SignatureElementProxy_ClassInfo_, allocate$SignatureElementProxy);
	return class$;
}

$Class* SignatureElementProxy::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com