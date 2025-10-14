#ifndef _org_jcp_xml_dsig_internal_dom_DOMUtils_h_
#define _org_jcp_xml_dsig_internal_dom_DOMUtils_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class XMLCryptoContext;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {
					class ExcC14NParameterSpec;
					class XPathFilter2ParameterSpec;
					class XPathFilterParameterSpec;
					class XSLTTransformParameterSpec;
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
			class Node;
		}
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class DOMUtils : public ::java::lang::Object {
	$class(DOMUtils, $NO_CLASS_INIT, ::java::lang::Object)
public:
	DOMUtils();
	void init$();
	static void appendChild(::org::w3c::dom::Node* parent, ::org::w3c::dom::Node* child);
	static ::org::w3c::dom::Element* createElement(::org::w3c::dom::Document* doc, $String* tag, $String* nsURI, $String* prefix);
	static $String* getAttributeValue(::org::w3c::dom::Element* elem, $String* name);
	static ::org::w3c::dom::Element* getFirstChildElement(::org::w3c::dom::Node* node);
	static ::org::w3c::dom::Element* getFirstChildElement(::org::w3c::dom::Node* node, $String* localName, $String* namespaceURI);
	static $String* getIdAttributeValue(::org::w3c::dom::Element* elem, $String* name);
	static ::org::w3c::dom::Element* getLastChildElement(::org::w3c::dom::Node* node);
	static $String* getNSPrefix(::javax::xml::crypto::XMLCryptoContext* context, $String* nsURI);
	static ::org::w3c::dom::Element* getNextSiblingElement(::org::w3c::dom::Node* node);
	static ::org::w3c::dom::Element* getNextSiblingElement(::org::w3c::dom::Node* node, $String* localName, $String* namespaceURI);
	static ::org::w3c::dom::Document* getOwnerDocument(::org::w3c::dom::Node* node);
	static $String* getQNameString($String* prefix, $String* localName);
	static $String* getSignaturePrefix(::javax::xml::crypto::XMLCryptoContext* context);
	static bool isNamespace(::org::w3c::dom::Node* node);
	static bool nodesEqual(::org::w3c::dom::Node* thisNode, ::org::w3c::dom::Node* otherNode);
	static bool paramsEqual(::java::security::spec::AlgorithmParameterSpec* spec1, ::java::security::spec::AlgorithmParameterSpec* spec2);
	static bool paramsEqual(::javax::xml::crypto::dsig::spec::XPathFilter2ParameterSpec* spec1, ::javax::xml::crypto::dsig::spec::XPathFilter2ParameterSpec* spec2);
	static bool paramsEqual(::javax::xml::crypto::dsig::spec::ExcC14NParameterSpec* spec1, ::javax::xml::crypto::dsig::spec::ExcC14NParameterSpec* spec2);
	static bool paramsEqual(::javax::xml::crypto::dsig::spec::XPathFilterParameterSpec* spec1, ::javax::xml::crypto::dsig::spec::XPathFilterParameterSpec* spec2);
	static bool paramsEqual(::javax::xml::crypto::dsig::spec::XSLTTransformParameterSpec* spec1, ::javax::xml::crypto::dsig::spec::XSLTTransformParameterSpec* spec2);
	static void removeAllChildren(::org::w3c::dom::Node* node);
	static void setAttribute(::org::w3c::dom::Element* elem, $String* name, $String* value);
	static void setAttributeID(::org::w3c::dom::Element* elem, $String* name, $String* value);
	static ::org::w3c::dom::Element* verifyElement(::org::w3c::dom::Element* elem, $String* localName, $String* namespaceURI);
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMUtils_h_