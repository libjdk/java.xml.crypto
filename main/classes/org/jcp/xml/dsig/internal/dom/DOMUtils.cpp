#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/spec/ExcC14NParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/XPathFilter2ParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/XPathFilterParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/XPathType$Filter.h>
#include <javax/xml/crypto/dsig/spec/XPathType.h>
#include <javax/xml/crypto/dsig/spec/XSLTTransformParameterSpec.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef XMLNS
#undef XMLNS_ATTRIBUTE_NS_URI

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $XMLConstants = ::javax::xml::XMLConstants;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $ExcC14NParameterSpec = ::javax::xml::crypto::dsig::spec::ExcC14NParameterSpec;
using $XPathFilter2ParameterSpec = ::javax::xml::crypto::dsig::spec::XPathFilter2ParameterSpec;
using $XPathFilterParameterSpec = ::javax::xml::crypto::dsig::spec::XPathFilterParameterSpec;
using $XPathType = ::javax::xml::crypto::dsig::spec::XPathType;
using $XPathType$Filter = ::javax::xml::crypto::dsig::spec::XPathType$Filter;
using $XSLTTransformParameterSpec = ::javax::xml::crypto::dsig::spec::XSLTTransformParameterSpec;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DOMUtils::*)()>(&DOMUtils::init$))},
	{"appendChild", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Node*,$Node*)>(&DOMUtils::appendChild))},
	{"createElement", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Document*,$String*,$String*,$String*)>(&DOMUtils::createElement))},
	{"getAttributeValue", "(Lorg/w3c/dom/Element;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Element*,$String*)>(&DOMUtils::getAttributeValue))},
	{"getFirstChildElement", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Node*)>(&DOMUtils::getFirstChildElement))},
	{"getFirstChildElement", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Node*,$String*,$String*)>(&DOMUtils::getFirstChildElement)), "javax.xml.crypto.MarshalException"},
	{"getIdAttributeValue", "(Lorg/w3c/dom/Element;Ljava/lang/String;)Ljava/lang/String;", "<N:Ljava/lang/Object;>(Lorg/w3c/dom/Element;Ljava/lang/String;)Ljava/lang/String;", $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Element*,$String*)>(&DOMUtils::getIdAttributeValue))},
	{"getLastChildElement", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Node*)>(&DOMUtils::getLastChildElement))},
	{"getNSPrefix", "(Ljavax/xml/crypto/XMLCryptoContext;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($XMLCryptoContext*,$String*)>(&DOMUtils::getNSPrefix))},
	{"getNextSiblingElement", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Node*)>(&DOMUtils::getNextSiblingElement))},
	{"getNextSiblingElement", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Node*,$String*,$String*)>(&DOMUtils::getNextSiblingElement)), "javax.xml.crypto.MarshalException"},
	{"getOwnerDocument", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Document*(*)($Node*)>(&DOMUtils::getOwnerDocument))},
	{"getQNameString", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&DOMUtils::getQNameString))},
	{"getSignaturePrefix", "(Ljavax/xml/crypto/XMLCryptoContext;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($XMLCryptoContext*)>(&DOMUtils::getSignaturePrefix))},
	{"isNamespace", "(Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Node*)>(&DOMUtils::isNamespace))},
	{"nodesEqual", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Node*,$Node*)>(&DOMUtils::nodesEqual))},
	{"paramsEqual", "(Ljava/security/spec/AlgorithmParameterSpec;Ljava/security/spec/AlgorithmParameterSpec;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($AlgorithmParameterSpec*,$AlgorithmParameterSpec*)>(&DOMUtils::paramsEqual))},
	{"paramsEqual", "(Ljavax/xml/crypto/dsig/spec/XPathFilter2ParameterSpec;Ljavax/xml/crypto/dsig/spec/XPathFilter2ParameterSpec;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($XPathFilter2ParameterSpec*,$XPathFilter2ParameterSpec*)>(&DOMUtils::paramsEqual))},
	{"paramsEqual", "(Ljavax/xml/crypto/dsig/spec/ExcC14NParameterSpec;Ljavax/xml/crypto/dsig/spec/ExcC14NParameterSpec;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ExcC14NParameterSpec*,$ExcC14NParameterSpec*)>(&DOMUtils::paramsEqual))},
	{"paramsEqual", "(Ljavax/xml/crypto/dsig/spec/XPathFilterParameterSpec;Ljavax/xml/crypto/dsig/spec/XPathFilterParameterSpec;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($XPathFilterParameterSpec*,$XPathFilterParameterSpec*)>(&DOMUtils::paramsEqual))},
	{"paramsEqual", "(Ljavax/xml/crypto/dsig/spec/XSLTTransformParameterSpec;Ljavax/xml/crypto/dsig/spec/XSLTTransformParameterSpec;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($XSLTTransformParameterSpec*,$XSLTTransformParameterSpec*)>(&DOMUtils::paramsEqual))},
	{"removeAllChildren", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Node*)>(&DOMUtils::removeAllChildren))},
	{"setAttribute", "(Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Element*,$String*,$String*)>(&DOMUtils::setAttribute))},
	{"setAttributeID", "(Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Element*,$String*,$String*)>(&DOMUtils::setAttributeID))},
	{"verifyElement", "(Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Element*(*)($Element*,$String*,$String*)>(&DOMUtils::verifyElement)), "javax.xml.crypto.MarshalException"},
	{}
};

$ClassInfo _DOMUtils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMUtils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_DOMUtils_MethodInfo_
};

$Object* allocate$DOMUtils($Class* clazz) {
	return $of($alloc(DOMUtils));
}

void DOMUtils::init$() {
}

$Document* DOMUtils::getOwnerDocument($Node* node) {
	if ($nc(node)->getNodeType() == $Node::DOCUMENT_NODE) {
		return $cast($Document, node);
	} else {
		return node->getOwnerDocument();
	}
}

$String* DOMUtils::getQNameString($String* prefix, $String* localName) {
	$var($String, qName, prefix == nullptr || $nc(prefix)->length() == 0 ? localName : $str({prefix, ":"_s, localName}));
	return qName;
}

$Element* DOMUtils::createElement($Document* doc, $String* tag, $String* nsURI, $String* prefix) {
	$var($String, qName, (prefix == nullptr || $nc(prefix)->length() == 0) ? tag : $str({prefix, ":"_s, tag}));
	return $nc(doc)->createElementNS(nsURI, qName);
}

void DOMUtils::setAttribute($Element* elem, $String* name, $String* value) {
	if (value == nullptr) {
		return;
	}
	$nc(elem)->setAttributeNS(nullptr, name, value);
}

void DOMUtils::setAttributeID($Element* elem, $String* name, $String* value) {
	if (value == nullptr) {
		return;
	}
	$nc(elem)->setAttributeNS(nullptr, name, value);
	elem->setIdAttributeNS(nullptr, name, true);
}

$Element* DOMUtils::getFirstChildElement($Node* node) {
	$var($Node, child, $nc(node)->getFirstChild());
	while (child != nullptr && child->getNodeType() != $Node::ELEMENT_NODE) {
		$assign(child, child->getNextSibling());
	}
	return $cast($Element, child);
}

$Element* DOMUtils::getFirstChildElement($Node* node, $String* localName, $String* namespaceURI) {
	return verifyElement($(getFirstChildElement(node)), localName, namespaceURI);
}

$Element* DOMUtils::verifyElement($Element* elem, $String* localName, $String* namespaceURI) {
	$useLocalCurrentObjectStackCache();
	if (elem == nullptr) {
		$throwNew($MarshalException, $$str({"Missing "_s, localName, " element"_s}));
	}
	$var($String, name, $nc(elem)->getLocalName());
	$var($String, namespace$, elem->getNamespaceURI());
	bool var$0 = !$nc(name)->equals(localName) || namespace$ == nullptr && namespaceURI != nullptr;
	if (var$0 || namespace$ != nullptr && !namespace$->equals(namespaceURI)) {
		$throwNew($MarshalException, $$str({"Invalid element name: "_s, namespace$, ":"_s, name, ", expected "_s, namespaceURI, ":"_s, localName}));
	}
	return elem;
}

$Element* DOMUtils::getLastChildElement($Node* node) {
	$var($Node, child, $nc(node)->getLastChild());
	while (child != nullptr && child->getNodeType() != $Node::ELEMENT_NODE) {
		$assign(child, child->getPreviousSibling());
	}
	return $cast($Element, child);
}

$Element* DOMUtils::getNextSiblingElement($Node* node) {
	$var($Node, sibling, $nc(node)->getNextSibling());
	while (sibling != nullptr && sibling->getNodeType() != $Node::ELEMENT_NODE) {
		$assign(sibling, sibling->getNextSibling());
	}
	return $cast($Element, sibling);
}

$Element* DOMUtils::getNextSiblingElement($Node* node, $String* localName, $String* namespaceURI) {
	return verifyElement($(getNextSiblingElement(node)), localName, namespaceURI);
}

$String* DOMUtils::getAttributeValue($Element* elem, $String* name) {
	$var($Attr, attr, $nc(elem)->getAttributeNodeNS(nullptr, name));
	return (attr == nullptr) ? ($String*)nullptr : $nc(attr)->getValue();
}

$String* DOMUtils::getIdAttributeValue($Element* elem, $String* name) {
	$var($Attr, attr, $nc(elem)->getAttributeNodeNS(nullptr, name));
	if (attr != nullptr && !attr->isId()) {
		elem->setIdAttributeNode(attr, true);
	}
	return (attr == nullptr) ? ($String*)nullptr : $nc(attr)->getValue();
}

$String* DOMUtils::getNSPrefix($XMLCryptoContext* context, $String* nsURI) {
	if (context != nullptr) {
		return context->getNamespacePrefix(nsURI, $(context->getDefaultNamespacePrefix()));
	} else {
		return nullptr;
	}
}

$String* DOMUtils::getSignaturePrefix($XMLCryptoContext* context) {
	$init($XMLSignature);
	return getNSPrefix(context, $XMLSignature::XMLNS);
}

void DOMUtils::removeAllChildren($Node* node) {
	$useLocalCurrentObjectStackCache();
	$var($Node, firstChild, $nc(node)->getFirstChild());
	while (firstChild != nullptr) {
		$var($Node, nodeToRemove, firstChild);
		$assign(firstChild, firstChild->getNextSibling());
		node->removeChild(nodeToRemove);
	}
}

bool DOMUtils::nodesEqual($Node* thisNode, $Node* otherNode) {
	return $nc(thisNode)->isEqualNode(otherNode);
}

void DOMUtils::appendChild($Node* parent, $Node* child) {
	$useLocalCurrentObjectStackCache();
	$var($Document, ownerDoc, getOwnerDocument(parent));
	if ($nc(child)->getOwnerDocument() != ownerDoc) {
		$nc(parent)->appendChild($($nc(ownerDoc)->importNode(child, true)));
	} else {
		$nc(parent)->appendChild(child);
	}
}

bool DOMUtils::paramsEqual($AlgorithmParameterSpec* spec1, $AlgorithmParameterSpec* spec2) {
	if (spec1 == spec2) {
		return true;
	}
	if ($instanceOf($XPathFilter2ParameterSpec, spec1) && $instanceOf($XPathFilter2ParameterSpec, spec2)) {
		return paramsEqual($cast($XPathFilter2ParameterSpec, spec1), $cast($XPathFilter2ParameterSpec, spec2));
	}
	if ($instanceOf($ExcC14NParameterSpec, spec1) && $instanceOf($ExcC14NParameterSpec, spec2)) {
		return paramsEqual($cast($ExcC14NParameterSpec, spec1), $cast($ExcC14NParameterSpec, spec2));
	}
	if ($instanceOf($XPathFilterParameterSpec, spec1) && $instanceOf($XPathFilterParameterSpec, spec2)) {
		return paramsEqual($cast($XPathFilterParameterSpec, spec1), $cast($XPathFilterParameterSpec, spec2));
	}
	if ($instanceOf($XSLTTransformParameterSpec, spec1) && $instanceOf($XSLTTransformParameterSpec, spec2)) {
		return paramsEqual($cast($XSLTTransformParameterSpec, spec1), $cast($XSLTTransformParameterSpec, spec2));
	}
	return false;
}

bool DOMUtils::paramsEqual($XPathFilter2ParameterSpec* spec1, $XPathFilter2ParameterSpec* spec2) {
	$useLocalCurrentObjectStackCache();
	$var($List, types, $nc(spec1)->getXPathList());
	$var($List, otypes, $nc(spec2)->getXPathList());
	int32_t size = $nc(types)->size();
	if (size != $nc(otypes)->size()) {
		return false;
	}
	for (int32_t i = 0; i < size; ++i) {
		$var($XPathType, type, $cast($XPathType, types->get(i)));
		$var($XPathType, otype, $cast($XPathType, $nc(otypes)->get(i)));
		bool var$1 = !$nc($($nc(type)->getExpression()))->equals($($nc(otype)->getExpression()));
		bool var$0 = var$1 || !$nc($($nc(type)->getNamespaceMap()))->equals($($nc(otype)->getNamespaceMap()));
		if (!var$0) {
			var$0 = $nc(type)->getFilter() != $nc(otype)->getFilter();
		}
		if (var$0) {
			return false;
		}
	}
	return true;
}

bool DOMUtils::paramsEqual($ExcC14NParameterSpec* spec1, $ExcC14NParameterSpec* spec2) {
	$useLocalCurrentObjectStackCache();
	return $nc($($nc(spec1)->getPrefixList()))->equals($($nc(spec2)->getPrefixList()));
}

bool DOMUtils::paramsEqual($XPathFilterParameterSpec* spec1, $XPathFilterParameterSpec* spec2) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = $nc($($nc(spec1)->getXPath()))->equals($($nc(spec2)->getXPath()));
	return var$0 && $nc($(spec1->getNamespaceMap()))->equals($($nc(spec2)->getNamespaceMap()));
}

bool DOMUtils::paramsEqual($XSLTTransformParameterSpec* spec1, $XSLTTransformParameterSpec* spec2) {
	$useLocalCurrentObjectStackCache();
	$var($XMLStructure, ostylesheet, $nc(spec2)->getStylesheet());
	if (!($instanceOf($DOMStructure, ostylesheet))) {
		return false;
	}
	$var($Node, ostylesheetElem, $nc(($cast($DOMStructure, ostylesheet)))->getNode());
	$var($XMLStructure, stylesheet, $nc(spec1)->getStylesheet());
	$var($Node, stylesheetElem, $nc(($cast($DOMStructure, stylesheet)))->getNode());
	return nodesEqual(stylesheetElem, ostylesheetElem);
}

bool DOMUtils::isNamespace($Node* node) {
	if ($Node::ATTRIBUTE_NODE == $nc(node)->getNodeType()) {
		$var($String, namespaceURI, node->getNamespaceURI());
		$init($XMLConstants);
		return $nc($XMLConstants::XMLNS_ATTRIBUTE_NS_URI)->equals(namespaceURI);
	}
	return false;
}

DOMUtils::DOMUtils() {
}

$Class* DOMUtils::load$($String* name, bool initialize) {
	$loadClass(DOMUtils, name, initialize, &_DOMUtils_ClassInfo_, allocate$DOMUtils);
	return class$;
}

$Class* DOMUtils::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org