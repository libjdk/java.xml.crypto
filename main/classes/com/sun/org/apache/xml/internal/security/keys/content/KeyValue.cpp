#include <com/sun/org/apache/xml/internal/security/keys/content/KeyValue.h>

#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/DSAKeyValue.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/RSAKeyValue.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/Signature11ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <java/security/PublicKey.h>
#include <java/security/interfaces/DSAPublicKey.h>
#include <java/security/interfaces/ECPublicKey.h>
#include <java/security/interfaces/RSAPublicKey.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef _TAG_DSAKEYVALUE
#undef _TAG_KEYVALUE
#undef _TAG_RSAKEYVALUE

using $KeyInfoContent = ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent;
using $DSAKeyValue = ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::DSAKeyValue;
using $ECKeyValue = ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::ECKeyValue;
using $RSAKeyValue = ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::RSAKeyValue;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $Signature11ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $PublicKey = ::java::security::PublicKey;
using $DSAPublicKey = ::java::security::interfaces::DSAPublicKey;
using $ECPublicKey = ::java::security::interfaces::ECPublicKey;
using $RSAPublicKey = ::java::security::interfaces::RSAPublicKey;
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

$MethodInfo _KeyValue_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Document;Lcom/sun/org/apache/xml/internal/security/keys/content/keyvalues/DSAKeyValue;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyValue::*)($Document*,$DSAKeyValue*)>(&KeyValue::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Lcom/sun/org/apache/xml/internal/security/keys/content/keyvalues/RSAKeyValue;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyValue::*)($Document*,$RSAKeyValue*)>(&KeyValue::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyValue::*)($Document*,$Element*)>(&KeyValue::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/security/PublicKey;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyValue::*)($Document*,$PublicKey*)>(&KeyValue::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyValue::*)($Element*,$String*)>(&KeyValue::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _KeyValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.KeyValue",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent",
	nullptr,
	_KeyValue_MethodInfo_
};

$Object* allocate$KeyValue($Class* clazz) {
	return $of($alloc(KeyValue));
}

int32_t KeyValue::hashCode() {
	 return this->$SignatureElementProxy::hashCode();
}

bool KeyValue::equals(Object$* arg0) {
	 return this->$SignatureElementProxy::equals(arg0);
}

$Object* KeyValue::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* KeyValue::toString() {
	 return this->$SignatureElementProxy::toString();
}

void KeyValue::finalize() {
	this->$SignatureElementProxy::finalize();
}

void KeyValue::init$($Document* doc, $DSAKeyValue* dsaKeyValue) {
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
	appendSelf(static_cast<$ElementProxy*>(dsaKeyValue));
	addReturnToSelf();
}

void KeyValue::init$($Document* doc, $RSAKeyValue* rsaKeyValue) {
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
	appendSelf(static_cast<$ElementProxy*>(rsaKeyValue));
	addReturnToSelf();
}

void KeyValue::init$($Document* doc, $Element* unknownKeyValue) {
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
	appendSelf(static_cast<$Node*>(unknownKeyValue));
	addReturnToSelf();
}

void KeyValue::init$($Document* doc, $PublicKey* pk) {
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
	if ($instanceOf($DSAPublicKey, pk)) {
		$var($DSAKeyValue, dsa, $new($DSAKeyValue, $(getDocument()), static_cast<$Key*>(pk)));
		appendSelf(static_cast<$ElementProxy*>(dsa));
		addReturnToSelf();
	} else if ($instanceOf($RSAPublicKey, pk)) {
		$var($RSAKeyValue, rsa, $new($RSAKeyValue, $(getDocument()), static_cast<$Key*>(pk)));
		appendSelf(static_cast<$ElementProxy*>(rsa));
		addReturnToSelf();
	} else if ($instanceOf($ECPublicKey, pk)) {
		$var($ECKeyValue, ec, $new($ECKeyValue, $(getDocument()), static_cast<$Key*>(pk)));
		appendSelf(static_cast<$ElementProxy*>(ec));
		addReturnToSelf();
	} else {
		$var($String, error, $str({"The given PublicKey type "_s, pk, " is not supported. Only DSAPublicKey and RSAPublicKey and ECPublicKey types are currently supported"_s}));
		$throwNew($IllegalArgumentException, error);
	}
}

void KeyValue::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

$PublicKey* KeyValue::getPublicKey() {
	$init($Constants);
	$var($Element, rsa, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_RSAKEYVALUE, 0));
	if (rsa != nullptr) {
		$var($RSAKeyValue, kv, $new($RSAKeyValue, rsa, this->baseURI));
		return kv->getPublicKey();
	}
	$var($Element, dsa, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_DSAKEYVALUE, 0));
	if (dsa != nullptr) {
		$var($DSAKeyValue, kv, $new($DSAKeyValue, dsa, this->baseURI));
		return kv->getPublicKey();
	}
	return nullptr;
}

$String* KeyValue::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_KEYVALUE;
}

KeyValue::KeyValue() {
}

$Class* KeyValue::load$($String* name, bool initialize) {
	$loadClass(KeyValue, name, initialize, &_KeyValue_ClassInfo_, allocate$KeyValue);
	return class$;
}

$Class* KeyValue::class$ = nullptr;

								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com