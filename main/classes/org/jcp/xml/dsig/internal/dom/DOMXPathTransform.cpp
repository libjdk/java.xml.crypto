#include <org/jcp/xml/dsig/internal/dom/DOMXPathTransform.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/Map$Entry.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/XPathFilterParameterSpec.h>
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

#undef XMLNS

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $Map$Entry = ::java::util::Map$Entry;
using $Set = ::java::util::Set;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;
using $XPathFilterParameterSpec = ::javax::xml::crypto::dsig::spec::XPathFilterParameterSpec;
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

$MethodInfo _DOMXPathTransform_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DOMXPathTransform::*)()>(&DOMXPathTransform::init$))},
	{"init", "(Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"init", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"marshalParams", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"unmarshalParams", "(Lorg/w3c/dom/Element;)V", nullptr, $PRIVATE, $method(static_cast<void(DOMXPathTransform::*)($Element*)>(&DOMXPathTransform::unmarshalParams))},
	{}
};

$ClassInfo _DOMXPathTransform_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMXPathTransform",
	"org.jcp.xml.dsig.internal.dom.ApacheTransform",
	nullptr,
	nullptr,
	_DOMXPathTransform_MethodInfo_
};

$Object* allocate$DOMXPathTransform($Class* clazz) {
	return $of($alloc(DOMXPathTransform));
}

void DOMXPathTransform::init$() {
	$ApacheTransform::init$();
}

void DOMXPathTransform::init($TransformParameterSpec* params) {
	if (params == nullptr) {
		$throwNew($InvalidAlgorithmParameterException, "params are required"_s);
	} else if (!($instanceOf($XPathFilterParameterSpec, params))) {
		$throwNew($InvalidAlgorithmParameterException, "params must be of type XPathFilterParameterSpec"_s);
	}
	$set(this, params, params);
}

void DOMXPathTransform::init($XMLStructure* parent, $XMLCryptoContext* context) {
	$ApacheTransform::init(parent, context);
	unmarshalParams($($DOMUtils::getFirstChildElement(this->transformElem)));
}

void DOMXPathTransform::unmarshalParams($Element* paramsElem) {
	$useLocalCurrentObjectStackCache();
	$var($String, xPath, $nc($($nc(paramsElem)->getFirstChild()))->getNodeValue());
	$var($NamedNodeMap, attributes, paramsElem->getAttributes());
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
		$set(this, params, $new($XPathFilterParameterSpec, xPath, namespaceMap));
	} else {
		$set(this, params, $new($XPathFilterParameterSpec, xPath));
	}
}

void DOMXPathTransform::marshalParams($XMLStructure* parent, $XMLCryptoContext* context) {
	$useLocalCurrentObjectStackCache();
	$ApacheTransform::marshalParams(parent, context);
	$var($XPathFilterParameterSpec, xp, $cast($XPathFilterParameterSpec, getParameterSpec()));
	$init($XMLSignature);
	$var($Element, xpathElem, $DOMUtils::createElement(this->ownerDoc, "XPath"_s, $XMLSignature::XMLNS, $($DOMUtils::getSignaturePrefix(context))));
	$nc(xpathElem)->appendChild($($nc(this->ownerDoc)->createTextNode($($nc(xp)->getXPath()))));
	$var($Set, entries, $nc($($nc(xp)->getNamespaceMap()))->entrySet());
	{
		$var($Iterator, i$, $nc(entries)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Map$Entry, entry, $cast($Map$Entry, i$->next()));
			{
				$var($String, var$0, "http://www.w3.org/2000/xmlns/"_s);
				$var($String, var$1, $str({"xmlns:"_s, $cast($String, $($nc(entry)->getKey()))}));
				xpathElem->setAttributeNS(var$0, var$1, $cast($String, $(entry->getValue())));
			}
		}
	}
	$nc(this->transformElem)->appendChild(xpathElem);
}

DOMXPathTransform::DOMXPathTransform() {
}

$Class* DOMXPathTransform::load$($String* name, bool initialize) {
	$loadClass(DOMXPathTransform, name, initialize, &_DOMXPathTransform_ClassInfo_, allocate$DOMXPathTransform);
	return class$;
}

$Class* DOMXPathTransform::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org