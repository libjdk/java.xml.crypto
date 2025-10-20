#include <com/sun/org/apache/xml/internal/security/transforms/params/XPath2FilterContainer.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/HelperNodeList.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef INTERSECT
#undef SUBTRACT
#undef TEXT_NODE
#undef UNION
#undef _ATT_FILTER
#undef _ATT_FILTER_VALUE_INTERSECT
#undef _ATT_FILTER_VALUE_SUBTRACT
#undef _ATT_FILTER_VALUE_UNION
#undef _TAG_XPATH2

using $StringArray2 = $Array<::java::lang::String, 2>;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $TransformParam = ::com::sun::org::apache::xml::internal::security::transforms::TransformParam;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $HelperNodeList = ::com::sun::org::apache::xml::internal::security::utils::HelperNodeList;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
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
							namespace transforms {
								namespace params {

$FieldInfo _XPath2FilterContainer_FieldInfo_[] = {
	{"_ATT_FILTER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath2FilterContainer, _ATT_FILTER)},
	{"_ATT_FILTER_VALUE_INTERSECT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath2FilterContainer, _ATT_FILTER_VALUE_INTERSECT)},
	{"_ATT_FILTER_VALUE_SUBTRACT", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath2FilterContainer, _ATT_FILTER_VALUE_SUBTRACT)},
	{"_ATT_FILTER_VALUE_UNION", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPath2FilterContainer, _ATT_FILTER_VALUE_UNION)},
	{"INTERSECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPath2FilterContainer, INTERSECT)},
	{"SUBTRACT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPath2FilterContainer, SUBTRACT)},
	{"UNION", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPath2FilterContainer, UNION)},
	{"_TAG_XPATH2", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPath2FilterContainer, _TAG_XPATH2)},
	{"XPathFilter2NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPath2FilterContainer, XPathFilter2NS)},
	{}
};

$MethodInfo _XPath2FilterContainer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XPath2FilterContainer::*)()>(&XPath2FilterContainer::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(XPath2FilterContainer::*)($Document*,$String*,$String*)>(&XPath2FilterContainer::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(XPath2FilterContainer::*)($Element*,$String*)>(&XPath2FilterContainer::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getBaseNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getXPathFilterStr", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(XPath2FilterContainer::*)()>(&XPath2FilterContainer::getXPathFilterStr))},
	{"getXPathFilterTextNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $method(static_cast<$Node*(XPath2FilterContainer::*)()>(&XPath2FilterContainer::getXPathFilterTextNode))},
	{"isIntersect", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(XPath2FilterContainer::*)()>(&XPath2FilterContainer::isIntersect))},
	{"isSubtract", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(XPath2FilterContainer::*)()>(&XPath2FilterContainer::isSubtract))},
	{"isUnion", "()Z", nullptr, $PUBLIC, $method(static_cast<bool(XPath2FilterContainer::*)()>(&XPath2FilterContainer::isUnion))},
	{"newInstance", "(Lorg/w3c/dom/Element;Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/transforms/params/XPath2FilterContainer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XPath2FilterContainer*(*)($Element*,$String*)>(&XPath2FilterContainer::newInstance)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"newInstanceIntersect", "(Lorg/w3c/dom/Document;Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/transforms/params/XPath2FilterContainer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XPath2FilterContainer*(*)($Document*,$String*)>(&XPath2FilterContainer::newInstanceIntersect))},
	{"newInstanceSubtract", "(Lorg/w3c/dom/Document;Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/transforms/params/XPath2FilterContainer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XPath2FilterContainer*(*)($Document*,$String*)>(&XPath2FilterContainer::newInstanceSubtract))},
	{"newInstanceUnion", "(Lorg/w3c/dom/Document;Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/transforms/params/XPath2FilterContainer;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XPath2FilterContainer*(*)($Document*,$String*)>(&XPath2FilterContainer::newInstanceUnion))},
	{"newInstances", "(Lorg/w3c/dom/Document;[[Ljava/lang/String;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$NodeList*(*)($Document*,$StringArray2*)>(&XPath2FilterContainer::newInstances))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XPath2FilterContainer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.params.XPath2FilterContainer",
	"com.sun.org.apache.xml.internal.security.utils.ElementProxy",
	"com.sun.org.apache.xml.internal.security.transforms.TransformParam",
	_XPath2FilterContainer_FieldInfo_,
	_XPath2FilterContainer_MethodInfo_
};

$Object* allocate$XPath2FilterContainer($Class* clazz) {
	return $of($alloc(XPath2FilterContainer));
}

int32_t XPath2FilterContainer::hashCode() {
	 return this->$ElementProxy::hashCode();
}

bool XPath2FilterContainer::equals(Object$* arg0) {
	 return this->$ElementProxy::equals(arg0);
}

$Object* XPath2FilterContainer::clone() {
	 return this->$ElementProxy::clone();
}

$String* XPath2FilterContainer::toString() {
	 return this->$ElementProxy::toString();
}

void XPath2FilterContainer::finalize() {
	this->$ElementProxy::finalize();
}


$String* XPath2FilterContainer::_ATT_FILTER = nullptr;

$String* XPath2FilterContainer::_ATT_FILTER_VALUE_INTERSECT = nullptr;

$String* XPath2FilterContainer::_ATT_FILTER_VALUE_SUBTRACT = nullptr;

$String* XPath2FilterContainer::_ATT_FILTER_VALUE_UNION = nullptr;

$String* XPath2FilterContainer::INTERSECT = nullptr;

$String* XPath2FilterContainer::SUBTRACT = nullptr;

$String* XPath2FilterContainer::UNION = nullptr;

$String* XPath2FilterContainer::_TAG_XPATH2 = nullptr;

$String* XPath2FilterContainer::XPathFilter2NS = nullptr;

void XPath2FilterContainer::init$() {
	$ElementProxy::init$();
}

void XPath2FilterContainer::init$($Document* doc, $String* xpath2filter, $String* filterType) {
	$ElementProxy::init$(doc);
	setLocalAttribute(XPath2FilterContainer::_ATT_FILTER, filterType);
	appendSelf($(static_cast<$Node*>(createText(xpath2filter))));
}

void XPath2FilterContainer::init$($Element* element, $String* baseURI) {
	$useLocalCurrentObjectStackCache();
	$ElementProxy::init$(element, baseURI);
	$var($String, filterStr, getLocalAttribute(XPath2FilterContainer::_ATT_FILTER));
	bool var$1 = !$nc(filterStr)->equals(XPath2FilterContainer::_ATT_FILTER_VALUE_INTERSECT);
	bool var$0 = var$1 && !filterStr->equals(XPath2FilterContainer::_ATT_FILTER_VALUE_SUBTRACT);
	if (var$0 && !filterStr->equals(XPath2FilterContainer::_ATT_FILTER_VALUE_UNION)) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(XPath2FilterContainer::_ATT_FILTER),
			$of(filterStr),
			$of($$str({XPath2FilterContainer::_ATT_FILTER_VALUE_INTERSECT, ", "_s, XPath2FilterContainer::_ATT_FILTER_VALUE_SUBTRACT, " or "_s, XPath2FilterContainer::_ATT_FILTER_VALUE_UNION}))
		}));
		$throwNew($XMLSecurityException, "attributeValueIllegal"_s, exArgs);
	}
}

XPath2FilterContainer* XPath2FilterContainer::newInstanceIntersect($Document* doc, $String* xpath2filter) {
	$init(XPath2FilterContainer);
	return $new(XPath2FilterContainer, doc, xpath2filter, XPath2FilterContainer::_ATT_FILTER_VALUE_INTERSECT);
}

XPath2FilterContainer* XPath2FilterContainer::newInstanceSubtract($Document* doc, $String* xpath2filter) {
	$init(XPath2FilterContainer);
	return $new(XPath2FilterContainer, doc, xpath2filter, XPath2FilterContainer::_ATT_FILTER_VALUE_SUBTRACT);
}

XPath2FilterContainer* XPath2FilterContainer::newInstanceUnion($Document* doc, $String* xpath2filter) {
	$init(XPath2FilterContainer);
	return $new(XPath2FilterContainer, doc, xpath2filter, XPath2FilterContainer::_ATT_FILTER_VALUE_UNION);
}

$NodeList* XPath2FilterContainer::newInstances($Document* doc, $StringArray2* params) {
	$init(XPath2FilterContainer);
	$useLocalCurrentObjectStackCache();
	$var($HelperNodeList, nl, $new($HelperNodeList));
	$XMLUtils::addReturnToElement(doc, nl);
	for (int32_t i = 0; i < $nc(params)->length; ++i) {
		$var($String, type, $nc(params->get(i))->get(0));
		$var($String, xpath, $nc(params->get(i))->get(1));
		bool var$1 = $nc(type)->equals(XPath2FilterContainer::_ATT_FILTER_VALUE_INTERSECT);
		bool var$0 = var$1 || $nc(type)->equals(XPath2FilterContainer::_ATT_FILTER_VALUE_SUBTRACT);
		if (!(var$0 || $nc(type)->equals(XPath2FilterContainer::_ATT_FILTER_VALUE_UNION))) {
			$throwNew($IllegalArgumentException, $$str({"The type("_s, $$str(i), ")=\""_s, type, "\" is illegal"_s}));
		}
		$var(XPath2FilterContainer, c, $new(XPath2FilterContainer, doc, xpath, type));
		nl->appendChild($(c->getElement()));
		$XMLUtils::addReturnToElement(doc, nl);
	}
	return nl;
}

XPath2FilterContainer* XPath2FilterContainer::newInstance($Element* element, $String* baseURI) {
	$init(XPath2FilterContainer);
	return $new(XPath2FilterContainer, element, baseURI);
}

bool XPath2FilterContainer::isIntersect() {
	return $nc($(getLocalAttribute(XPath2FilterContainer::_ATT_FILTER)))->equals(XPath2FilterContainer::_ATT_FILTER_VALUE_INTERSECT);
}

bool XPath2FilterContainer::isSubtract() {
	return $nc($(getLocalAttribute(XPath2FilterContainer::_ATT_FILTER)))->equals(XPath2FilterContainer::_ATT_FILTER_VALUE_SUBTRACT);
}

bool XPath2FilterContainer::isUnion() {
	return $nc($(getLocalAttribute(XPath2FilterContainer::_ATT_FILTER)))->equals(XPath2FilterContainer::_ATT_FILTER_VALUE_UNION);
}

$String* XPath2FilterContainer::getXPathFilterStr() {
	return this->getTextFromTextChild();
}

$Node* XPath2FilterContainer::getXPathFilterTextNode() {
	$useLocalCurrentObjectStackCache();
	$var($Node, childNode, $nc($(getElement()))->getFirstChild());
	while (childNode != nullptr) {
		if (childNode->getNodeType() == $Node::TEXT_NODE) {
			return childNode;
		}
		$assign(childNode, childNode->getNextSibling());
	}
	return nullptr;
}

$String* XPath2FilterContainer::getBaseLocalName() {
	return XPath2FilterContainer::_TAG_XPATH2;
}

$String* XPath2FilterContainer::getBaseNamespace() {
	return XPath2FilterContainer::XPathFilter2NS;
}

XPath2FilterContainer::XPath2FilterContainer() {
}

void clinit$XPath2FilterContainer($Class* class$) {
	$assignStatic(XPath2FilterContainer::_ATT_FILTER, "Filter"_s);
	$assignStatic(XPath2FilterContainer::_ATT_FILTER_VALUE_INTERSECT, "intersect"_s);
	$assignStatic(XPath2FilterContainer::_ATT_FILTER_VALUE_SUBTRACT, "subtract"_s);
	$assignStatic(XPath2FilterContainer::_ATT_FILTER_VALUE_UNION, "union"_s);
	$assignStatic(XPath2FilterContainer::INTERSECT, XPath2FilterContainer::_ATT_FILTER_VALUE_INTERSECT);
	$assignStatic(XPath2FilterContainer::SUBTRACT, XPath2FilterContainer::_ATT_FILTER_VALUE_SUBTRACT);
	$assignStatic(XPath2FilterContainer::UNION, XPath2FilterContainer::_ATT_FILTER_VALUE_UNION);
	$assignStatic(XPath2FilterContainer::_TAG_XPATH2, "XPath"_s);
	$assignStatic(XPath2FilterContainer::XPathFilter2NS, "http://www.w3.org/2002/06/xmldsig-filter2"_s);
}

$Class* XPath2FilterContainer::load$($String* name, bool initialize) {
	$loadClass(XPath2FilterContainer, name, initialize, &_XPath2FilterContainer_ClassInfo_, clinit$XPath2FilterContainer, allocate$XPath2FilterContainer);
	return class$;
}

$Class* XPath2FilterContainer::class$ = nullptr;

								} // params
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com