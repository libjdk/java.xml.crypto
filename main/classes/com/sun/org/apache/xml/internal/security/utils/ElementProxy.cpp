#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/EncryptionConstants.h>
#include <com/sun/org/apache/xml/internal/security/utils/HelperNodeList.h>
#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef LOG

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $EncryptionConstants = ::com::sun::org::apache::xml::internal::security::utils::EncryptionConstants;
using $HelperNodeList = ::com::sun::org::apache::xml::internal::security::utils::HelperNodeList;
using $JavaUtils = ::com::sun::org::apache::xml::internal::security::utils::JavaUtils;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $BigInteger = ::java::math::BigInteger;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Attr = ::org::w3c::dom::Attr;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $Text = ::org::w3c::dom::Text;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$FieldInfo _ElementProxy_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(ElementProxy, LOG)},
	{"wrappedElement", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(ElementProxy, wrappedElement)},
	{"baseURI", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ElementProxy, baseURI)},
	{"wrappedDoc", "Lorg/w3c/dom/Document;", nullptr, $PRIVATE, $field(ElementProxy, wrappedDoc)},
	{"prefixMappings", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $STATIC, $staticField(ElementProxy, prefixMappings)},
	{}
};

$MethodInfo _ElementProxy_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ElementProxy::*)()>(&ElementProxy::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(ElementProxy::*)($Document*)>(&ElementProxy::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ElementProxy::*)($Element*,$String*)>(&ElementProxy::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"addBase64Element", "([BLjava/lang/String;)V", nullptr, $PUBLIC},
	{"addBase64Text", "([B)V", nullptr, $PUBLIC},
	{"addBigIntegerElement", "(Ljava/math/BigInteger;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addReturnToSelf", "()V", nullptr, $PROTECTED},
	{"addText", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addTextElement", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"appendOther", "(Lorg/w3c/dom/Element;Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED},
	{"appendSelf", "(Lcom/sun/org/apache/xml/internal/security/utils/ElementProxy;)V", nullptr, $PROTECTED},
	{"appendSelf", "(Lorg/w3c/dom/Node;)V", nullptr, $PROTECTED},
	{"createElementForFamily", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Document*,$String*,$String*)>(&ElementProxy::createElementForFamily))},
	{"createElementForFamilyLocal", "(Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PROTECTED},
	{"createText", "(Ljava/lang/String;)Lorg/w3c/dom/Text;", nullptr, $PROTECTED},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBaseNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBigIntegerFromChildElement", "(Ljava/lang/String;Ljava/lang/String;)Ljava/math/BigInteger;", nullptr, $PUBLIC},
	{"getBytesFromTextChild", "()[B", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getDefaultPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&ElementProxy::getDefaultPrefix))},
	{"getDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC},
	{"getElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$Element*(ElementProxy::*)()>(&ElementProxy::getElement))},
	{"getElementPlusReturns", "()Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$NodeList*(ElementProxy::*)()>(&ElementProxy::getElementPlusReturns))},
	{"getFirstChild", "()Lorg/w3c/dom/Node;", nullptr, $PROTECTED},
	{"getLocalAttribute", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PROTECTED},
	{"getTextFromChildElement", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTextFromTextChild", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"guaranteeThatElementInCorrectSpace", "()V", nullptr, 0, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"length", "(Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PUBLIC},
	{"registerDefaultPrefixes", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ElementProxy::registerDefaultPrefixes)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"setDefaultPrefix", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&ElementProxy::setDefaultPrefix)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"setDocument", "(Lorg/w3c/dom/Document;)V", nullptr, $PROTECTED},
	{"setElement", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"setElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PROTECTED},
	{"setLocalAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"setLocalIdAttribute", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PROTECTED},
	{"setNamespacePrefix", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&ElementProxy::setNamespacePrefix)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"setXPathNamespaceContext", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{}
};

$ClassInfo _ElementProxy_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.utils.ElementProxy",
	"java.lang.Object",
	nullptr,
	_ElementProxy_FieldInfo_,
	_ElementProxy_MethodInfo_
};

$Object* allocate$ElementProxy($Class* clazz) {
	return $of($alloc(ElementProxy));
}

$Logger* ElementProxy::LOG = nullptr;

$Map* ElementProxy::prefixMappings = nullptr;

void ElementProxy::init$() {
}

void ElementProxy::init$($Document* doc) {
	if (doc == nullptr) {
		$throwNew($RuntimeException, "Document is null"_s);
	}
	$set(this, wrappedDoc, doc);
	$var($String, var$0, this->getBaseNamespace());
	$set(this, wrappedElement, createElementForFamilyLocal(var$0, $(this->getBaseLocalName())));
}

void ElementProxy::init$($Element* element, $String* baseURI) {
	if (element == nullptr) {
		$throwNew($XMLSecurityException, "ElementProxy.nullElement"_s);
	}
	$nc(ElementProxy::LOG)->debug("setElement(\"{}\", \"{}\")"_s, $$new($ObjectArray, {
		$($of($nc(element)->getTagName())),
		$of(baseURI)
	}));
	setElement(element);
	$set(this, baseURI, baseURI);
	this->guaranteeThatElementInCorrectSpace();
}

$Element* ElementProxy::createElementForFamilyLocal($String* namespace$, $String* localName) {
	$var($Document, doc, getDocument());
	$var($Element, result, nullptr);
	if (namespace$ == nullptr) {
		$assign(result, $nc(doc)->createElementNS(nullptr, localName));
	} else {
		$var($String, baseName, this->getBaseNamespace());
		$var($String, prefix, ElementProxy::getDefaultPrefix(baseName));
		if (prefix == nullptr || $nc(prefix)->length() == 0) {
			$assign(result, $nc(doc)->createElementNS(namespace$, localName));
			$init($Constants);
			$nc(result)->setAttributeNS($Constants::NamespaceSpecNS, "xmlns"_s, namespace$);
		} else {
			$assign(result, $nc(doc)->createElementNS(namespace$, $$str({prefix, ":"_s, localName})));
			$init($Constants);
			$nc(result)->setAttributeNS($Constants::NamespaceSpecNS, $$str({"xmlns:"_s, prefix}), namespace$);
		}
	}
	return result;
}

$Element* ElementProxy::createElementForFamily($Document* doc, $String* namespace$, $String* localName) {
	$init(ElementProxy);
	$var($Element, result, nullptr);
	$var($String, prefix, ElementProxy::getDefaultPrefix(namespace$));
	if (namespace$ == nullptr) {
		$assign(result, $nc(doc)->createElementNS(nullptr, localName));
	} else if (prefix == nullptr || prefix->length() == 0) {
		$assign(result, $nc(doc)->createElementNS(namespace$, localName));
		$init($Constants);
		$nc(result)->setAttributeNS($Constants::NamespaceSpecNS, "xmlns"_s, namespace$);
	} else {
		$assign(result, $nc(doc)->createElementNS(namespace$, $$str({prefix, ":"_s, localName})));
		$init($Constants);
		$nc(result)->setAttributeNS($Constants::NamespaceSpecNS, $$str({"xmlns:"_s, prefix}), namespace$);
	}
	return result;
}

void ElementProxy::setElement($Element* element, $String* baseURI) {
	if (element == nullptr) {
		$throwNew($XMLSecurityException, "ElementProxy.nullElement"_s);
	}
	$nc(ElementProxy::LOG)->debug("setElement({}, \"{}\")"_s, $$new($ObjectArray, {
		$($of($nc(element)->getTagName())),
		$of(baseURI)
	}));
	setElement(element);
	$set(this, baseURI, baseURI);
}

$Element* ElementProxy::getElement() {
	return this->wrappedElement;
}

$NodeList* ElementProxy::getElementPlusReturns() {
	$var($HelperNodeList, nl, $new($HelperNodeList));
	nl->appendChild($(createText("\n"_s)));
	nl->appendChild($(getElement()));
	nl->appendChild($(createText("\n"_s)));
	return nl;
}

$Text* ElementProxy::createText($String* text) {
	return $nc($(getDocument()))->createTextNode(text);
}

$Document* ElementProxy::getDocument() {
	if (this->wrappedDoc == nullptr) {
		$set(this, wrappedDoc, $XMLUtils::getOwnerDocument(static_cast<$Node*>(this->wrappedElement)));
	}
	return this->wrappedDoc;
}

$String* ElementProxy::getBaseURI() {
	return this->baseURI;
}

void ElementProxy::guaranteeThatElementInCorrectSpace() {
	$var($String, expectedLocalName, this->getBaseLocalName());
	$var($String, expectedNamespaceUri, this->getBaseNamespace());
	$var($String, actualLocalName, $nc($(getElement()))->getLocalName());
	$var($String, actualNamespaceUri, $nc($(getElement()))->getNamespaceURI());
	bool var$0 = !$nc(expectedNamespaceUri)->equals(actualNamespaceUri);
	if (var$0 && !$nc(expectedLocalName)->equals(actualLocalName)) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of($$str({actualNamespaceUri, ":"_s, actualLocalName})),
			$of($$str({expectedNamespaceUri, ":"_s, expectedLocalName}))
		}));
		$throwNew($XMLSecurityException, "xml.WrongElement"_s, exArgs);
	}
}

void ElementProxy::addBigIntegerElement($BigInteger* bi, $String* localname) {
	if (bi != nullptr) {
		$var($Element, e, $XMLUtils::createElementInSignatureSpace($(getDocument()), localname));
		$var($bytes, bytes, $XMLUtils::getBytes(bi, bi->bitLength()));
		$var($String, encodedInt, $XMLUtils::encodeToString(bytes));
		$var($Document, doc, $nc(e)->getOwnerDocument());
		$var($Text, text, $nc(doc)->createTextNode(encodedInt));
		e->appendChild(text);
		appendSelf(static_cast<$Node*>(e));
		addReturnToSelf();
	}
}

void ElementProxy::addReturnToSelf() {
	$XMLUtils::addReturnToElement($(getElement()));
}

void ElementProxy::addBase64Element($bytes* bytes, $String* localname) {
	if (bytes != nullptr) {
		addTextElement($($XMLUtils::encodeToString(bytes)), localname);
	}
}

void ElementProxy::addTextElement($String* text, $String* localname) {
	$var($Element, e, $XMLUtils::createElementInSignatureSpace($(getDocument()), localname));
	$var($Text, t, createText(text));
	appendOther(e, t);
	appendSelf(static_cast<$Node*>(e));
	addReturnToSelf();
}

void ElementProxy::addBase64Text($bytes* bytes) {
	if (bytes != nullptr) {
		$var($Text, t, $XMLUtils::ignoreLineBreaks() ? createText($($XMLUtils::encodeToString(bytes))) : createText($$str({"\n"_s, $($XMLUtils::encodeToString(bytes)), "\n"_s})));
		appendSelf(static_cast<$Node*>(t));
	}
}

void ElementProxy::appendSelf(ElementProxy* toAppend) {
	$nc($(getElement()))->appendChild($($nc(toAppend)->getElement()));
}

void ElementProxy::appendSelf($Node* toAppend) {
	$nc($(getElement()))->appendChild(toAppend);
}

void ElementProxy::appendOther($Element* parent, $Node* toAppend) {
	$nc(parent)->appendChild(toAppend);
}

void ElementProxy::addText($String* text) {
	if (text != nullptr) {
		$var($Text, t, createText(text));
		appendSelf(static_cast<$Node*>(t));
	}
}

$BigInteger* ElementProxy::getBigIntegerFromChildElement($String* localname, $String* namespace$) {
	$var($Node, n, $XMLUtils::selectNode($(getFirstChild()), namespace$, localname, 0));
	if (n != nullptr) {
		return $new($BigInteger, 1, $($XMLUtils::decode($($XMLUtils::getFullTextChildrenFromNode(n)))));
	}
	return nullptr;
}

$String* ElementProxy::getTextFromChildElement($String* localname, $String* namespace$) {
	return $nc($($XMLUtils::selectNode($(getFirstChild()), namespace$, localname, 0)))->getTextContent();
}

$bytes* ElementProxy::getBytesFromTextChild() {
	return $XMLUtils::decode($(getTextFromTextChild()));
}

$String* ElementProxy::getTextFromTextChild() {
	return $XMLUtils::getFullTextChildrenFromNode($(getElement()));
}

int32_t ElementProxy::length($String* namespace$, $String* localname) {
	int32_t number = 0;
	$var($Node, sibling, getFirstChild());
	while (sibling != nullptr) {
		bool var$0 = $nc(localname)->equals($(sibling->getLocalName()));
		if (var$0 && $nc(namespace$)->equals($(sibling->getNamespaceURI()))) {
			++number;
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return number;
}

void ElementProxy::setXPathNamespaceContext($String* prefix, $String* uri) {
	$var($String, ns, nullptr);
	if (prefix == nullptr || $nc(prefix)->length() == 0) {
		$throwNew($XMLSecurityException, "defaultNamespaceCannotBeSetHere"_s);
	} else if ("xmlns"_s->equals(prefix)) {
		$throwNew($XMLSecurityException, "defaultNamespaceCannotBeSetHere"_s);
	} else if (prefix->startsWith("xmlns:"_s)) {
		$assign(ns, prefix);
	} else {
		$assign(ns, $str({"xmlns:"_s, prefix}));
	}
	$init($Constants);
	$var($Attr, a, $nc($(getElement()))->getAttributeNodeNS($Constants::NamespaceSpecNS, ns));
	if (a != nullptr) {
		if (!$nc($(a->getNodeValue()))->equals(uri)) {
			$var($ObjectArray, exArgs, $new($ObjectArray, {
				$of(ns),
				$($of($nc($(getElement()))->getAttributeNS(nullptr, ns)))
			}));
			$throwNew($XMLSecurityException, "namespacePrefixAlreadyUsedByOtherURI"_s, exArgs);
		}
		return;
	}
	$nc($(getElement()))->setAttributeNS($Constants::NamespaceSpecNS, ns, uri);
}

void ElementProxy::setDefaultPrefix($String* namespace$, $String* prefix) {
	$init(ElementProxy);
	$JavaUtils::checkRegisterPermission();
	setNamespacePrefix(namespace$, prefix);
}

void ElementProxy::setNamespacePrefix($String* namespace$, $String* prefix) {
	$init(ElementProxy);
	if ($nc(ElementProxy::prefixMappings)->containsValue(prefix)) {
		$var($String, storedPrefix, $cast($String, $nc(ElementProxy::prefixMappings)->get(namespace$)));
		if (!$nc(storedPrefix)->equals(prefix)) {
			$var($ObjectArray, exArgs, $new($ObjectArray, {
				$of(prefix),
				$of(namespace$),
				$of(storedPrefix)
			}));
			$throwNew($XMLSecurityException, "prefix.AlreadyAssigned"_s, exArgs);
		}
	}
	$init($Constants);
	if ($nc($Constants::SignatureSpecNS)->equals(namespace$)) {
		$XMLUtils::setDsPrefix(prefix);
	} else {
		if ($nc($Constants::SignatureSpec11NS)->equals(namespace$)) {
			$XMLUtils::setDs11Prefix(prefix);
		} else {
			$init($EncryptionConstants);
			if ($nc($EncryptionConstants::EncryptionSpecNS)->equals(namespace$)) {
				$XMLUtils::setXencPrefix(prefix);
			}
		}
	}
	$nc(ElementProxy::prefixMappings)->put(namespace$, prefix);
}

void ElementProxy::registerDefaultPrefixes() {
	$init(ElementProxy);
	setNamespacePrefix("http://www.w3.org/2000/09/xmldsig#"_s, "ds"_s);
	setNamespacePrefix("http://www.w3.org/2001/04/xmlenc#"_s, "xenc"_s);
	setNamespacePrefix("http://www.w3.org/2009/xmlenc11#"_s, "xenc11"_s);
	setNamespacePrefix("http://www.xmlsecurity.org/experimental#"_s, "experimental"_s);
	setNamespacePrefix("http://www.w3.org/2002/04/xmldsig-filter2"_s, "dsig-xpath-old"_s);
	setNamespacePrefix("http://www.w3.org/2002/06/xmldsig-filter2"_s, "dsig-xpath"_s);
	setNamespacePrefix("http://www.w3.org/2001/10/xml-exc-c14n#"_s, "ec"_s);
	setNamespacePrefix("http://www.nue.et-inf.uni-siegen.de/~geuer-pollmann/#xpathFilter"_s, "xx"_s);
	setNamespacePrefix("http://www.w3.org/2009/xmldsig11#"_s, "dsig11"_s);
}

$String* ElementProxy::getDefaultPrefix($String* namespace$) {
	$init(ElementProxy);
	return $cast($String, $nc(ElementProxy::prefixMappings)->get(namespace$));
}

void ElementProxy::setElement($Element* elem) {
	$set(this, wrappedElement, elem);
}

void ElementProxy::setDocument($Document* doc) {
	$set(this, wrappedDoc, doc);
}

$String* ElementProxy::getLocalAttribute($String* attrName) {
	return $nc($(getElement()))->getAttributeNS(nullptr, attrName);
}

void ElementProxy::setLocalAttribute($String* attrName, $String* value) {
	$nc($(getElement()))->setAttributeNS(nullptr, attrName, value);
}

void ElementProxy::setLocalIdAttribute($String* attrName, $String* value) {
	if (value != nullptr) {
		$var($Attr, attr, $nc($(getDocument()))->createAttributeNS(nullptr, attrName));
		$nc(attr)->setValue(value);
		$nc($(getElement()))->setAttributeNodeNS(attr);
		$nc($(getElement()))->setIdAttributeNode(attr, true);
	} else {
		$nc($(getElement()))->removeAttributeNS(nullptr, attrName);
	}
}

$Node* ElementProxy::getFirstChild() {
	return $nc($(getElement()))->getFirstChild();
}

void clinit$ElementProxy($Class* class$) {
	$assignStatic(ElementProxy::LOG, $LoggerFactory::getLogger(ElementProxy::class$));
	$assignStatic(ElementProxy::prefixMappings, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

ElementProxy::ElementProxy() {
}

$Class* ElementProxy::load$($String* name, bool initialize) {
	$loadClass(ElementProxy, name, initialize, &_ElementProxy_ClassInfo_, clinit$ElementProxy, allocate$ElementProxy);
	return class$;
}

$Class* ElementProxy::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com