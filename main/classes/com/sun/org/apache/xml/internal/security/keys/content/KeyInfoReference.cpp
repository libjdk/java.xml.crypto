#include <com/sun/org/apache/xml/internal/security/keys/content/KeyInfoReference.h>

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/Signature11ElementProxy.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef _ATT_ID
#undef _ATT_URI
#undef _TAG_KEYINFOREFERENCE

using $KeyInfoContent = ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $Signature11ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
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
								namespace content {

$MethodInfo _KeyInfoReference_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyInfoReference::*)($Element*,$String*)>(&KeyInfoReference::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyInfoReference::*)($Document*,$String*)>(&KeyInfoReference::init$))},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURIAttr", "()Lorg/w3c/dom/Attr;", nullptr, $PUBLIC},
	{"setId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _KeyInfoReference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.KeyInfoReference",
	"com.sun.org.apache.xml.internal.security.utils.Signature11ElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent",
	nullptr,
	_KeyInfoReference_MethodInfo_
};

$Object* allocate$KeyInfoReference($Class* clazz) {
	return $of($alloc(KeyInfoReference));
}

int32_t KeyInfoReference::hashCode() {
	 return this->$Signature11ElementProxy::hashCode();
}

bool KeyInfoReference::equals(Object$* arg0) {
	 return this->$Signature11ElementProxy::equals(arg0);
}

$Object* KeyInfoReference::clone() {
	 return this->$Signature11ElementProxy::clone();
}

$String* KeyInfoReference::toString() {
	 return this->$Signature11ElementProxy::toString();
}

void KeyInfoReference::finalize() {
	this->$Signature11ElementProxy::finalize();
}

void KeyInfoReference::init$($Element* element, $String* baseURI) {
	$Signature11ElementProxy::init$(element, baseURI);
}

void KeyInfoReference::init$($Document* doc, $String* uri) {
	$Signature11ElementProxy::init$(doc);
	$init($Constants);
	setLocalAttribute($Constants::_ATT_URI, uri);
}

$Attr* KeyInfoReference::getURIAttr() {
	$init($Constants);
	return $nc($(getElement()))->getAttributeNodeNS(nullptr, $Constants::_ATT_URI);
}

$String* KeyInfoReference::getURI() {
	return $nc($(this->getURIAttr()))->getNodeValue();
}

void KeyInfoReference::setId($String* id) {
	$init($Constants);
	setLocalIdAttribute($Constants::_ATT_ID, id);
}

$String* KeyInfoReference::getId() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ID);
}

$String* KeyInfoReference::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_KEYINFOREFERENCE;
}

KeyInfoReference::KeyInfoReference() {
}

$Class* KeyInfoReference::load$($String* name, bool initialize) {
	$loadClass(KeyInfoReference, name, initialize, &_KeyInfoReference_ClassInfo_, allocate$KeyInfoReference);
	return class$;
}

$Class* KeyInfoReference::class$ = nullptr;

								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com