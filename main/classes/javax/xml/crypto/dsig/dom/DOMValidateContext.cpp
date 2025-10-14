#include <javax/xml/crypto/dsig/dom/DOMValidateContext.h>

#include <java/lang/Boolean.h>
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

#undef TRUE

using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Key = ::java::security::Key;
using $KeySelector = ::javax::xml::crypto::KeySelector;
using $URIDereferencer = ::javax::xml::crypto::URIDereferencer;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace dom {

$FieldInfo _DOMValidateContext_FieldInfo_[] = {
	{"node", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMValidateContext, node)},
	{}
};

$MethodInfo _DOMValidateContext_MethodInfo_[] = {
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
	{"<init>", "(Ljavax/xml/crypto/KeySelector;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMValidateContext::*)($KeySelector*,$Node*)>(&DOMValidateContext::init$))},
	{"<init>", "(Ljava/security/Key;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMValidateContext::*)($Key*,$Node*)>(&DOMValidateContext::init$))},
	{"getNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"init", "(Lorg/w3c/dom/Node;Ljavax/xml/crypto/KeySelector;)V", nullptr, $PRIVATE, $method(static_cast<void(DOMValidateContext::*)($Node*,$KeySelector*)>(&DOMValidateContext::init))},
	{"*put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*putNamespacePrefix", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"*setBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setDefaultNamespacePrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*setKeySelector", "(Ljavax/xml/crypto/KeySelector;)V", nullptr, $PUBLIC},
	{"setNode", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC},
	{"*setURIDereferencer", "(Ljavax/xml/crypto/URIDereferencer;)V", nullptr, $PUBLIC},
	{"*setProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMValidateContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.dsig.dom.DOMValidateContext",
	"javax.xml.crypto.dom.DOMCryptoContext",
	"javax.xml.crypto.dsig.XMLValidateContext",
	_DOMValidateContext_FieldInfo_,
	_DOMValidateContext_MethodInfo_
};

$Object* allocate$DOMValidateContext($Class* clazz) {
	return $of($alloc(DOMValidateContext));
}

$String* DOMValidateContext::getNamespacePrefix($String* namespaceURI, $String* defaultPrefix) {
	 return this->$DOMCryptoContext::getNamespacePrefix(namespaceURI, defaultPrefix);
}

$String* DOMValidateContext::putNamespacePrefix($String* namespaceURI, $String* prefix) {
	 return this->$DOMCryptoContext::putNamespacePrefix(namespaceURI, prefix);
}

$String* DOMValidateContext::getDefaultNamespacePrefix() {
	 return this->$DOMCryptoContext::getDefaultNamespacePrefix();
}

void DOMValidateContext::setDefaultNamespacePrefix($String* defaultPrefix) {
	this->$DOMCryptoContext::setDefaultNamespacePrefix(defaultPrefix);
}

$String* DOMValidateContext::getBaseURI() {
	 return this->$DOMCryptoContext::getBaseURI();
}

void DOMValidateContext::setBaseURI($String* baseURI) {
	this->$DOMCryptoContext::setBaseURI(baseURI);
}

$URIDereferencer* DOMValidateContext::getURIDereferencer() {
	 return this->$DOMCryptoContext::getURIDereferencer();
}

void DOMValidateContext::setURIDereferencer($URIDereferencer* dereferencer) {
	this->$DOMCryptoContext::setURIDereferencer(dereferencer);
}

$Object* DOMValidateContext::getProperty($String* name) {
	 return this->$DOMCryptoContext::getProperty(name);
}

$Object* DOMValidateContext::setProperty($String* name, Object$* value) {
	 return this->$DOMCryptoContext::setProperty(name, value);
}

$KeySelector* DOMValidateContext::getKeySelector() {
	 return this->$DOMCryptoContext::getKeySelector();
}

void DOMValidateContext::setKeySelector($KeySelector* ks) {
	this->$DOMCryptoContext::setKeySelector(ks);
}

$Object* DOMValidateContext::get(Object$* key) {
	 return this->$DOMCryptoContext::get(key);
}

$Object* DOMValidateContext::put(Object$* key, Object$* value) {
	 return this->$DOMCryptoContext::put(key, value);
}

int32_t DOMValidateContext::hashCode() {
	 return this->$DOMCryptoContext::hashCode();
}

bool DOMValidateContext::equals(Object$* arg0) {
	 return this->$DOMCryptoContext::equals(arg0);
}

$Object* DOMValidateContext::clone() {
	 return this->$DOMCryptoContext::clone();
}

$String* DOMValidateContext::toString() {
	 return this->$DOMCryptoContext::toString();
}

void DOMValidateContext::finalize() {
	this->$DOMCryptoContext::finalize();
}

void DOMValidateContext::init$($KeySelector* ks, $Node* node) {
	$DOMCryptoContext::init$();
	if (ks == nullptr) {
		$throwNew($NullPointerException, "key selector is null"_s);
	}
	init(node, ks);
}

void DOMValidateContext::init$($Key* validatingKey, $Node* node) {
	$DOMCryptoContext::init$();
	if (validatingKey == nullptr) {
		$throwNew($NullPointerException, "validatingKey is null"_s);
	}
	init(node, $($KeySelector::singletonKeySelector(validatingKey)));
}

void DOMValidateContext::init($Node* node, $KeySelector* ks) {
	if (node == nullptr) {
		$throwNew($NullPointerException, "node is null"_s);
	}
	$set(this, node, node);
	$DOMCryptoContext::setKeySelector(ks);
	$init($Boolean);
	$DOMCryptoContext::setProperty("org.jcp.xml.dsig.secureValidation"_s, $Boolean::TRUE);
}

void DOMValidateContext::setNode($Node* node) {
	if (node == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, node, node);
}

$Node* DOMValidateContext::getNode() {
	return this->node;
}

DOMValidateContext::DOMValidateContext() {
}

$Class* DOMValidateContext::load$($String* name, bool initialize) {
	$loadClass(DOMValidateContext, name, initialize, &_DOMValidateContext_ClassInfo_, allocate$DOMValidateContext);
	return class$;
}

$Class* DOMValidateContext::class$ = nullptr;

				} // dom
			} // dsig
		} // crypto
	} // xml
} // javax