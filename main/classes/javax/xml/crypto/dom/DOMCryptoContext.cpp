#include <javax/xml/crypto/dom/DOMCryptoContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/xml/crypto/KeySelector.h>
#include <javax/xml/crypto/URIDereferencer.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URI = ::java::net::URI;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $KeySelector = ::javax::xml::crypto::KeySelector;
using $URIDereferencer = ::javax::xml::crypto::URIDereferencer;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $Element = ::org::w3c::dom::Element;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dom {

$FieldInfo _DOMCryptoContext_FieldInfo_[] = {
	{"nsMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(DOMCryptoContext, nsMap)},
	{"idMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Lorg/w3c/dom/Element;>;", $PRIVATE, $field(DOMCryptoContext, idMap)},
	{"objMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/Object;Ljava/lang/Object;>;", $PRIVATE, $field(DOMCryptoContext, objMap)},
	{"baseURI", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMCryptoContext, baseURI)},
	{"ks", "Ljavax/xml/crypto/KeySelector;", nullptr, $PRIVATE, $field(DOMCryptoContext, ks)},
	{"dereferencer", "Ljavax/xml/crypto/URIDereferencer;", nullptr, $PRIVATE, $field(DOMCryptoContext, dereferencer)},
	{"propMap", "Ljava/util/HashMap;", "Ljava/util/HashMap<Ljava/lang/String;Ljava/lang/Object;>;", $PRIVATE, $field(DOMCryptoContext, propMap)},
	{"defaultPrefix", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMCryptoContext, defaultPrefix)},
	{}
};

$MethodInfo _DOMCryptoContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(DOMCryptoContext::*)()>(&DOMCryptoContext::init$))},
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDefaultNamespacePrefix", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getElementById", "(Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC},
	{"getKeySelector", "()Ljavax/xml/crypto/KeySelector;", nullptr, $PUBLIC},
	{"getNamespacePrefix", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"getURIDereferencer", "()Ljavax/xml/crypto/URIDereferencer;", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/util/Map$Entry<Ljava/lang/String;Lorg/w3c/dom/Element;>;>;", $PUBLIC},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"putNamespacePrefix", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"setBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setDefaultNamespacePrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setIdAttributeNS", "(Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setKeySelector", "(Ljavax/xml/crypto/KeySelector;)V", nullptr, $PUBLIC},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{"setURIDereferencer", "(Ljavax/xml/crypto/URIDereferencer;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMCryptoContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.dom.DOMCryptoContext",
	"java.lang.Object",
	"javax.xml.crypto.XMLCryptoContext",
	_DOMCryptoContext_FieldInfo_,
	_DOMCryptoContext_MethodInfo_
};

$Object* allocate$DOMCryptoContext($Class* clazz) {
	return $of($alloc(DOMCryptoContext));
}

void DOMCryptoContext::init$() {
	$set(this, nsMap, $new($HashMap));
	$set(this, idMap, $new($HashMap));
	$set(this, objMap, $new($HashMap));
	$set(this, propMap, $new($HashMap));
}

$String* DOMCryptoContext::getNamespacePrefix($String* namespaceURI, $String* defaultPrefix) {
	if (namespaceURI == nullptr) {
		$throwNew($NullPointerException, "namespaceURI cannot be null"_s);
	}
	$var($String, prefix, $cast($String, $nc(this->nsMap)->get(namespaceURI)));
	return (prefix != nullptr ? prefix : defaultPrefix);
}

$String* DOMCryptoContext::putNamespacePrefix($String* namespaceURI, $String* prefix) {
	if (namespaceURI == nullptr) {
		$throwNew($NullPointerException, "namespaceURI is null"_s);
	}
	return $cast($String, $nc(this->nsMap)->put(namespaceURI, prefix));
}

$String* DOMCryptoContext::getDefaultNamespacePrefix() {
	return this->defaultPrefix;
}

void DOMCryptoContext::setDefaultNamespacePrefix($String* defaultPrefix) {
	$set(this, defaultPrefix, defaultPrefix);
}

$String* DOMCryptoContext::getBaseURI() {
	return this->baseURI;
}

void DOMCryptoContext::setBaseURI($String* baseURI) {
	if (baseURI != nullptr) {
		$URI::create(baseURI);
	}
	$set(this, baseURI, baseURI);
}

$URIDereferencer* DOMCryptoContext::getURIDereferencer() {
	return this->dereferencer;
}

void DOMCryptoContext::setURIDereferencer($URIDereferencer* dereferencer) {
	$set(this, dereferencer, dereferencer);
}

$Object* DOMCryptoContext::getProperty($String* name) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "name is null"_s);
	}
	return $of($nc(this->propMap)->get(name));
}

$Object* DOMCryptoContext::setProperty($String* name, Object$* value) {
	if (name == nullptr) {
		$throwNew($NullPointerException, "name is null"_s);
	}
	return $of($nc(this->propMap)->put(name, value));
}

$KeySelector* DOMCryptoContext::getKeySelector() {
	return this->ks;
}

void DOMCryptoContext::setKeySelector($KeySelector* ks) {
	$set(this, ks, ks);
}

$Element* DOMCryptoContext::getElementById($String* idValue) {
	if (idValue == nullptr) {
		$throwNew($NullPointerException, "idValue is null"_s);
	}
	return $cast($Element, $nc(this->idMap)->get(idValue));
}

void DOMCryptoContext::setIdAttributeNS($Element* element, $String* namespaceURI, $String* localName) {
	if (element == nullptr) {
		$throwNew($NullPointerException, "element is null"_s);
	}
	if (localName == nullptr) {
		$throwNew($NullPointerException, "localName is null"_s);
	}
	$var($String, idValue, $nc(element)->getAttributeNS(namespaceURI, localName));
	if (idValue == nullptr || $nc(idValue)->length() == 0) {
		$throwNew($IllegalArgumentException, $$str({localName, " is not an attribute"_s}));
	}
	$nc(this->idMap)->put(idValue, element);
}

$Iterator* DOMCryptoContext::iterator() {
	return $nc($($nc($($Collections::unmodifiableMap(this->idMap)))->entrySet()))->iterator();
}

$Object* DOMCryptoContext::get(Object$* key) {
	return $of($nc(this->objMap)->get(key));
}

$Object* DOMCryptoContext::put(Object$* key, Object$* value) {
	return $of($nc(this->objMap)->put(key, value));
}

DOMCryptoContext::DOMCryptoContext() {
}

$Class* DOMCryptoContext::load$($String* name, bool initialize) {
	$loadClass(DOMCryptoContext, name, initialize, &_DOMCryptoContext_ClassInfo_, allocate$DOMCryptoContext);
	return class$;
}

$Class* DOMCryptoContext::class$ = nullptr;

			} // dom
		} // crypto
	} // xml
} // javax