#include <javax/xml/crypto/dsig/dom/DOMSignContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <javax/xml/crypto/KeySelector.h>
#include <javax/xml/crypto/URIDereferencer.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Key = ::java::security::Key;
using $KeySelector = ::javax::xml::crypto::KeySelector;
using $URIDereferencer = ::javax::xml::crypto::URIDereferencer;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $XMLSignContext = ::javax::xml::crypto::dsig::XMLSignContext;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace dom {

$FieldInfo _DOMSignContext_FieldInfo_[] = {
	{"parent", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMSignContext, parent)},
	{"nextSibling", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMSignContext, nextSibling)},
	{}
};

$MethodInfo _DOMSignContext_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getDefaultNamespacePrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getKeySelector", "()Ljavax/xml/crypto/KeySelector;", nullptr, $PUBLIC},
	{"*getNamespacePrefix", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*getURIDereferencer", "()Ljavax/xml/crypto/URIDereferencer;", nullptr, $PUBLIC},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Ljava/security/Key;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMSignContext::*)($Key*,$Node*)>(&DOMSignContext::init$))},
	{"<init>", "(Ljava/security/Key;Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMSignContext::*)($Key*,$Node*,$Node*)>(&DOMSignContext::init$))},
	{"<init>", "(Ljavax/xml/crypto/KeySelector;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMSignContext::*)($KeySelector*,$Node*)>(&DOMSignContext::init$))},
	{"<init>", "(Ljavax/xml/crypto/KeySelector;Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMSignContext::*)($KeySelector*,$Node*,$Node*)>(&DOMSignContext::init$))},
	{"getNextSibling", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getParent", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"*put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*putNamespacePrefix", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*setBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setDefaultNamespacePrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setKeySelector", "(Ljavax/xml/crypto/KeySelector;)V", nullptr, $PUBLIC},
	{"setNextSibling", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC},
	{"setParent", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC},
	{"*setURIDereferencer", "(Ljavax/xml/crypto/URIDereferencer;)V", nullptr, $PUBLIC},
	{"*setProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMSignContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.dsig.dom.DOMSignContext",
	"javax.xml.crypto.dom.DOMCryptoContext",
	"javax.xml.crypto.dsig.XMLSignContext",
	_DOMSignContext_FieldInfo_,
	_DOMSignContext_MethodInfo_
};

$Object* allocate$DOMSignContext($Class* clazz) {
	return $of($alloc(DOMSignContext));
}

$String* DOMSignContext::getNamespacePrefix($String* namespaceURI, $String* defaultPrefix) {
	 return this->$DOMCryptoContext::getNamespacePrefix(namespaceURI, defaultPrefix);
}

$String* DOMSignContext::putNamespacePrefix($String* namespaceURI, $String* prefix) {
	 return this->$DOMCryptoContext::putNamespacePrefix(namespaceURI, prefix);
}

$String* DOMSignContext::getDefaultNamespacePrefix() {
	 return this->$DOMCryptoContext::getDefaultNamespacePrefix();
}

void DOMSignContext::setDefaultNamespacePrefix($String* defaultPrefix) {
	this->$DOMCryptoContext::setDefaultNamespacePrefix(defaultPrefix);
}

$String* DOMSignContext::getBaseURI() {
	 return this->$DOMCryptoContext::getBaseURI();
}

void DOMSignContext::setBaseURI($String* baseURI) {
	this->$DOMCryptoContext::setBaseURI(baseURI);
}

$URIDereferencer* DOMSignContext::getURIDereferencer() {
	 return this->$DOMCryptoContext::getURIDereferencer();
}

void DOMSignContext::setURIDereferencer($URIDereferencer* dereferencer) {
	this->$DOMCryptoContext::setURIDereferencer(dereferencer);
}

$Object* DOMSignContext::getProperty($String* name) {
	 return this->$DOMCryptoContext::getProperty(name);
}

$Object* DOMSignContext::setProperty($String* name, Object$* value) {
	 return this->$DOMCryptoContext::setProperty(name, value);
}

$KeySelector* DOMSignContext::getKeySelector() {
	 return this->$DOMCryptoContext::getKeySelector();
}

void DOMSignContext::setKeySelector($KeySelector* ks) {
	this->$DOMCryptoContext::setKeySelector(ks);
}

$Object* DOMSignContext::get(Object$* key) {
	 return this->$DOMCryptoContext::get(key);
}

$Object* DOMSignContext::put(Object$* key, Object$* value) {
	 return this->$DOMCryptoContext::put(key, value);
}

int32_t DOMSignContext::hashCode() {
	 return this->$DOMCryptoContext::hashCode();
}

bool DOMSignContext::equals(Object$* arg0) {
	 return this->$DOMCryptoContext::equals(arg0);
}

$Object* DOMSignContext::clone() {
	 return this->$DOMCryptoContext::clone();
}

$String* DOMSignContext::toString() {
	 return this->$DOMCryptoContext::toString();
}

void DOMSignContext::finalize() {
	this->$DOMCryptoContext::finalize();
}

void DOMSignContext::init$($Key* signingKey, $Node* parent) {
	$DOMCryptoContext::init$();
	if (signingKey == nullptr) {
		$throwNew($NullPointerException, "signingKey cannot be null"_s);
	}
	if (parent == nullptr) {
		$throwNew($NullPointerException, "parent cannot be null"_s);
	}
	setKeySelector($($KeySelector::singletonKeySelector(signingKey)));
	$set(this, parent, parent);
}

void DOMSignContext::init$($Key* signingKey, $Node* parent, $Node* nextSibling) {
	$DOMCryptoContext::init$();
	if (signingKey == nullptr) {
		$throwNew($NullPointerException, "signingKey cannot be null"_s);
	}
	if (parent == nullptr) {
		$throwNew($NullPointerException, "parent cannot be null"_s);
	}
	if (nextSibling == nullptr) {
		$throwNew($NullPointerException, "nextSibling cannot be null"_s);
	}
	setKeySelector($($KeySelector::singletonKeySelector(signingKey)));
	$set(this, parent, parent);
	$set(this, nextSibling, nextSibling);
}

void DOMSignContext::init$($KeySelector* ks, $Node* parent) {
	$DOMCryptoContext::init$();
	if (ks == nullptr) {
		$throwNew($NullPointerException, "key selector cannot be null"_s);
	}
	if (parent == nullptr) {
		$throwNew($NullPointerException, "parent cannot be null"_s);
	}
	setKeySelector(ks);
	$set(this, parent, parent);
}

void DOMSignContext::init$($KeySelector* ks, $Node* parent, $Node* nextSibling) {
	$DOMCryptoContext::init$();
	if (ks == nullptr) {
		$throwNew($NullPointerException, "key selector cannot be null"_s);
	}
	if (parent == nullptr) {
		$throwNew($NullPointerException, "parent cannot be null"_s);
	}
	if (nextSibling == nullptr) {
		$throwNew($NullPointerException, "nextSibling cannot be null"_s);
	}
	setKeySelector(ks);
	$set(this, parent, parent);
	$set(this, nextSibling, nextSibling);
}

void DOMSignContext::setParent($Node* parent) {
	if (parent == nullptr) {
		$throwNew($NullPointerException, "parent is null"_s);
	}
	$set(this, parent, parent);
}

void DOMSignContext::setNextSibling($Node* nextSibling) {
	$set(this, nextSibling, nextSibling);
}

$Node* DOMSignContext::getParent() {
	return this->parent;
}

$Node* DOMSignContext::getNextSibling() {
	return this->nextSibling;
}

DOMSignContext::DOMSignContext() {
}

$Class* DOMSignContext::load$($String* name, bool initialize) {
	$loadClass(DOMSignContext, name, initialize, &_DOMSignContext_ClassInfo_, allocate$DOMSignContext);
	return class$;
}

$Class* DOMSignContext::class$ = nullptr;

				} // dom
			} // dsig
		} // crypto
	} // xml
} // javax