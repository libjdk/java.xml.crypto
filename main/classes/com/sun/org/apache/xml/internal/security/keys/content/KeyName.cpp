#include <com/sun/org/apache/xml/internal/security/keys/content/KeyName.h>

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
#include <jcpp.h>

#undef _TAG_KEYNAME

using $KeyInfoContent = ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent;
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

$MethodInfo _KeyName_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyName::*)($Element*,$String*)>(&KeyName::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyName::*)($Document*,$String*)>(&KeyName::init$))},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getKeyName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _KeyName_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.KeyName",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent",
	nullptr,
	_KeyName_MethodInfo_
};

$Object* allocate$KeyName($Class* clazz) {
	return $of($alloc(KeyName));
}

int32_t KeyName::hashCode() {
	 return this->$SignatureElementProxy::hashCode();
}

bool KeyName::equals(Object$* arg0) {
	 return this->$SignatureElementProxy::equals(arg0);
}

$Object* KeyName::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* KeyName::toString() {
	 return this->$SignatureElementProxy::toString();
}

void KeyName::finalize() {
	this->$SignatureElementProxy::finalize();
}

void KeyName::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

void KeyName::init$($Document* doc, $String* keyName) {
	$SignatureElementProxy::init$(doc);
	this->addText(keyName);
}

$String* KeyName::getKeyName() {
	return this->getTextFromTextChild();
}

$String* KeyName::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_KEYNAME;
}

KeyName::KeyName() {
}

$Class* KeyName::load$($String* name, bool initialize) {
	$loadClass(KeyName, name, initialize, &_KeyName_ClassInfo_, allocate$KeyName);
	return class$;
}

$Class* KeyName::class$ = nullptr;

								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com