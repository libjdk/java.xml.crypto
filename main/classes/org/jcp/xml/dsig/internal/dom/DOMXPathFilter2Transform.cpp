#include <org/jcp/xml/dsig/internal/dom/DOMXPathFilter2Transform.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dsig/Transform.h>
#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/XPathFilter2ParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/XPathType$Filter.h>
#include <javax/xml/crypto/dsig/spec/XPathType.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheTransform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef INTERSECT
#undef SUBTRACT
#undef UNION
#undef XPATH2

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $Transform = ::javax::xml::crypto::dsig::Transform;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;
using $XPathFilter2ParameterSpec = ::javax::xml::crypto::dsig::spec::XPathFilter2ParameterSpec;
using $XPathType = ::javax::xml::crypto::dsig::spec::XPathType;
using $XPathType$Filter = ::javax::xml::crypto::dsig::spec::XPathType$Filter;
using $ApacheTransform = ::org::jcp::xml::dsig::internal::dom::ApacheTransform;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Attr = ::org::w3c::dom::Attr;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $Text = ::org::w3c::dom::Text;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMXPathFilter2Transform_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DOMXPathFilter2Transform::*)()>(&DOMXPathFilter2Transform::init$))},
	{"init", "(Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"init", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"marshalParams", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"unmarshalParams", "(Lorg/w3c/dom/Element;)V", nullptr, $PRIVATE, $method(static_cast<void(DOMXPathFilter2Transform::*)($Element*)>(&DOMXPathFilter2Transform::unmarshalParams)), "javax.xml.crypto.MarshalException"},
	{}
};

$ClassInfo _DOMXPathFilter2Transform_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMXPathFilter2Transform",
	"org.jcp.xml.dsig.internal.dom.ApacheTransform",
	nullptr,
	nullptr,
	_DOMXPathFilter2Transform_MethodInfo_
};

$Object* allocate$DOMXPathFilter2Transform($Class* clazz) {
	return $of($alloc(DOMXPathFilter2Transform));
}

void DOMXPathFilter2Transform::init$() {
	$ApacheTransform::init$();
}

void DOMXPathFilter2Transform::init($TransformParameterSpec* params) {
	if (params == nullptr) {
		$throwNew($InvalidAlgorithmParameterException, "params are required"_s);
	} else if (!($instanceOf($XPathFilter2ParameterSpec, params))) {
		$throwNew($InvalidAlgorithmParameterException, "params must be of type XPathFilter2ParameterSpec"_s);
	}
	$set(this, params, params);
}

void DOMXPathFilter2Transform::init($XMLStructure* parent, $XMLCryptoContext* context) {
	$ApacheTransform::init(parent, context);
	try {
		unmarshalParams($($DOMUtils::getFirstChildElement(this->transformElem)));
	} catch ($MarshalException&) {
		$var($MarshalException, me, $catch());
		$throwNew($InvalidAlgorithmParameterException, static_cast<$Throwable*>(me));
	}
}

void DOMXPathFilter2Transform::unmarshalParams($Element* curXPathElem) {
	$var($List, list, $new($ArrayList));
	$var($Element, currentElement, curXPathElem);
	while (currentElement != nullptr) {
		$var($String, xPath, $nc($(currentElement->getFirstChild()))->getNodeValue());
		$var($String, filterVal, $DOMUtils::getAttributeValue(currentElement, "Filter"_s));
		if (filterVal == nullptr) {
			$throwNew($MarshalException, "filter cannot be null"_s);
		}
		$var($XPathType$Filter, filter, nullptr);
		if ("intersect"_s->equals(filterVal)) {
			$init($XPathType$Filter);
			$assign(filter, $XPathType$Filter::INTERSECT);
		} else if ("subtract"_s->equals(filterVal)) {
			$init($XPathType$Filter);
			$assign(filter, $XPathType$Filter::SUBTRACT);
		} else if ("union"_s->equals(filterVal)) {
			$init($XPathType$Filter);
			$assign(filter, $XPathType$Filter::UNION);
		} else {
			$throwNew($MarshalException, $$str({"Unknown XPathType filter type"_s, filterVal}));
		}
		$var($NamedNodeMap, attributes, currentElement->getAttributes());
		if (attributes != nullptr) {
			int32_t length = attributes->getLength();
			$var($Map, namespaceMap, $new($HashMap, length));
			for (int32_t i = 0; i < length; ++i) {
				$var($Attr, attr, $cast($Attr, attributes->item(i)));
				$var($String, prefix, $nc(attr)->getPrefix());
				if (prefix != nullptr && "xmlns"_s->equals(prefix)) {
					$var($Object, var$0, $of(attr->getLocalName()));
					namespaceMap->put(var$0, $(attr->getValue()));
				}
			}
			list->add($$new($XPathType, xPath, filter, namespaceMap));
		} else {
			list->add($$new($XPathType, xPath, filter));
		}
		$assign(currentElement, $DOMUtils::getNextSiblingElement(currentElement));
	}
	$set(this, params, $new($XPathFilter2ParameterSpec, list));
}

void DOMXPathFilter2Transform::marshalParams($XMLStructure* parent, $XMLCryptoContext* context) {
	$ApacheTransform::marshalParams(parent, context);
	$var($XPathFilter2ParameterSpec, xp, $cast($XPathFilter2ParameterSpec, getParameterSpec()));
	$init($Transform);
	$var($String, prefix, $DOMUtils::getNSPrefix(context, $Transform::XPATH2));
	$var($String, qname, prefix == nullptr || $nc(prefix)->length() == 0 ? "xmlns"_s : $str({"xmlns:"_s, prefix}));
	$var($List, xpathList, $nc(xp)->getXPathList());
	{
		$var($Iterator, i$, $nc(xpathList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XPathType, xpathType, $cast($XPathType, i$->next()));
			{
				$var($Element, elem, $DOMUtils::createElement(this->ownerDoc, "XPath"_s, $Transform::XPATH2, prefix));
				$nc(elem)->appendChild($($nc(this->ownerDoc)->createTextNode($($nc(xpathType)->getExpression()))));
				$DOMUtils::setAttribute(elem, "Filter"_s, $($nc($($nc(xpathType)->getFilter()))->toString()));
				elem->setAttributeNS("http://www.w3.org/2000/xmlns/"_s, qname, $Transform::XPATH2);
				$var($Set, entries, $nc($($nc(xpathType)->getNamespaceMap()))->entrySet());
				{
					$var($Iterator, i$, $nc(entries)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
						{
							$var($String, var$0, "http://www.w3.org/2000/xmlns/"_s);
							$var($String, var$1, $str({"xmlns:"_s, $cast($String, $($nc(entry)->getKey()))}));
							elem->setAttributeNS(var$0, var$1, $cast($String, $(entry->getValue())));
						}
					}
				}
				$nc(this->transformElem)->appendChild(elem);
			}
		}
	}
}

DOMXPathFilter2Transform::DOMXPathFilter2Transform() {
}

$Class* DOMXPathFilter2Transform::load$($String* name, bool initialize) {
	$loadClass(DOMXPathFilter2Transform, name, initialize, &_DOMXPathFilter2Transform_ClassInfo_, allocate$DOMXPathFilter2Transform);
	return class$;
}

$Class* DOMXPathFilter2Transform::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org