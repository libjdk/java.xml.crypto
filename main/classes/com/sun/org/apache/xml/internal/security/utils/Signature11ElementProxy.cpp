#include <com/sun/org/apache/xml/internal/security/utils/Signature11ElementProxy.h>

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

$MethodInfo _Signature11ElementProxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(Signature11ElementProxy::*)()>(&Signature11ElementProxy::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(Signature11ElementProxy::*)($Document*)>(&Signature11ElementProxy::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Signature11ElementProxy::*)($Element*,$String*)>(&Signature11ElementProxy::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getBaseNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _Signature11ElementProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.utils.Signature11ElementProxy",
	"com.sun.org.apache.xml.internal.security.utils.ElementProxy",
	nullptr,
	nullptr,
	_Signature11ElementProxy_MethodInfo_
};

$Object* allocate$Signature11ElementProxy($Class* clazz) {
	return $of($alloc(Signature11ElementProxy));
}

void Signature11ElementProxy::init$() {
	$ElementProxy::init$();
}

void Signature11ElementProxy::init$($Document* doc) {
	$ElementProxy::init$();
	if (doc == nullptr) {
		$throwNew($RuntimeException, "Document is null"_s);
	}
	setDocument(doc);
	setElement($($XMLUtils::createElementInSignature11Space(doc, $(this->getBaseLocalName()))));
	$var($String, prefix, $ElementProxy::getDefaultPrefix($(getBaseNamespace())));
	if (prefix == nullptr || $nc(prefix)->length() == 0) {
		$init($Constants);
		$nc($(getElement()))->setAttributeNS($Constants::NamespaceSpecNS, "xmlns"_s, $(getBaseNamespace()));
	} else {
		$init($Constants);
		$nc($(getElement()))->setAttributeNS($Constants::NamespaceSpecNS, $$str({"xmlns:"_s, prefix}), $(getBaseNamespace()));
	}
}

void Signature11ElementProxy::init$($Element* element, $String* baseURI) {
	$ElementProxy::init$(element, baseURI);
}

$String* Signature11ElementProxy::getBaseNamespace() {
	$init($Constants);
	return $Constants::SignatureSpec11NS;
}

Signature11ElementProxy::Signature11ElementProxy() {
}

$Class* Signature11ElementProxy::load$($String* name, bool initialize) {
	$loadClass(Signature11ElementProxy, name, initialize, &_Signature11ElementProxy_ClassInfo_, allocate$Signature11ElementProxy);
	return class$;
}

$Class* Signature11ElementProxy::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com