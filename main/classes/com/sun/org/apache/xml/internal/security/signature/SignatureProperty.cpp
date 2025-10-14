#include <com/sun/org/apache/xml/internal/security/signature/SignatureProperty.h>

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef _ATT_ID
#undef _ATT_TARGET
#undef _TAG_SIGNATUREPROPERTY

using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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
							namespace signature {

$MethodInfo _SignatureProperty_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureProperty::*)($Document*,$String*)>(&SignatureProperty::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureProperty::*)($Document*,$String*,$String*)>(&SignatureProperty::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureProperty::*)($Element*,$String*)>(&SignatureProperty::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setTarget", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SignatureProperty_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.SignatureProperty",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	nullptr,
	nullptr,
	_SignatureProperty_MethodInfo_
};

$Object* allocate$SignatureProperty($Class* clazz) {
	return $of($alloc(SignatureProperty));
}

void SignatureProperty::init$($Document* doc, $String* target) {
	SignatureProperty::init$(doc, target, nullptr);
}

void SignatureProperty::init$($Document* doc, $String* target, $String* id) {
	$SignatureElementProxy::init$(doc);
	this->setTarget(target);
	this->setId(id);
}

void SignatureProperty::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

void SignatureProperty::setId($String* id) {
	if (id != nullptr) {
		$init($Constants);
		setLocalIdAttribute($Constants::_ATT_ID, id);
	}
}

$String* SignatureProperty::getId() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ID);
}

void SignatureProperty::setTarget($String* target) {
	if (target != nullptr) {
		$init($Constants);
		setLocalAttribute($Constants::_ATT_TARGET, target);
	}
}

$String* SignatureProperty::getTarget() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_TARGET);
}

$Node* SignatureProperty::appendChild($Node* node) {
	appendSelf(node);
	return node;
}

$String* SignatureProperty::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_SIGNATUREPROPERTY;
}

SignatureProperty::SignatureProperty() {
}

$Class* SignatureProperty::load$($String* name, bool initialize) {
	$loadClass(SignatureProperty, name, initialize, &_SignatureProperty_ClassInfo_, allocate$SignatureProperty);
	return class$;
}

$Class* SignatureProperty::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com