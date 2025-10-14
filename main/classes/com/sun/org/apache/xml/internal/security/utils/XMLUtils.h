#ifndef _com_sun_org_apache_xml_internal_security_utils_XMLUtils_h_
#define _com_sun_org_apache_xml_internal_security_utils_XMLUtils_h_
//$ class com.sun.org.apache.xml.internal.security.utils.XMLUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LOG")
#undef LOG

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace parser {
								class XMLParser;
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {
								class HelperNodeList;
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {
					class Logger;
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
			class Node;
			class NodeList;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

class XMLUtils : public ::java::lang::Object {
	$class(XMLUtils, 0, ::java::lang::Object)
public:
	XMLUtils();
	void init$();
	static void addReturnBeforeChild(::org::w3c::dom::Element* e, ::org::w3c::dom::Node* child);
	static void addReturnToElement(::org::w3c::dom::Element* e);
	static void addReturnToElement(::org::w3c::dom::Document* doc, ::com::sun::org::apache::xml::internal::security::utils::HelperNodeList* nl);
	static void circumventBug2650(::org::w3c::dom::Document* doc);
	static void circumventBug2650internal(::org::w3c::dom::Node* node);
	static ::java::util::Set* convertNodelistToSet(::org::w3c::dom::NodeList* xpathNodeSet);
	static ::org::w3c::dom::Element* createElementInEncryption11Space(::org::w3c::dom::Document* doc, $String* elementName);
	static ::org::w3c::dom::Element* createElementInEncryptionSpace(::org::w3c::dom::Document* doc, $String* elementName);
	static ::org::w3c::dom::Element* createElementInSignature11Space(::org::w3c::dom::Document* doc, $String* elementName);
	static ::org::w3c::dom::Element* createElementInSignatureSpace(::org::w3c::dom::Document* doc, $String* elementName);
	static $bytes* decode($String* encodedString);
	static $bytes* decode($bytes* encodedBytes);
	static bool elementIsInEncryption11Space(::org::w3c::dom::Element* element, $String* localName);
	static bool elementIsInEncryptionSpace(::org::w3c::dom::Element* element, $String* localName);
	static bool elementIsInSignature11Space(::org::w3c::dom::Element* element, $String* localName);
	static bool elementIsInSignatureSpace(::org::w3c::dom::Element* element, $String* localName);
	static $String* encodeToString($bytes* bytes);
	static ::java::util::Set* excludeNodeFromSet(::org::w3c::dom::Node* signatureElement, ::java::util::Set* inputSet);
	static $bytes* getBytes(::java::math::BigInteger* big, int32_t bitlen);
	static $String* getFullTextChildrenFromNode(::org::w3c::dom::Node* node);
	static ::org::w3c::dom::Element* getNextElement(::org::w3c::dom::Node* el);
	static ::org::w3c::dom::Document* getOwnerDocument(::org::w3c::dom::Node* node);
	static ::org::w3c::dom::Document* getOwnerDocument(::java::util::Set* xpathNodeSet);
	static void getSet(::org::w3c::dom::Node* rootNode, ::java::util::Set* result, ::org::w3c::dom::Node* exclude, bool com);
	static void getSetRec(::org::w3c::dom::Node* rootNode, ::java::util::Set* result, ::org::w3c::dom::Node* exclude, bool com);
	static $String* getStrFromNode(::org::w3c::dom::Node* xpathnode);
	static bool ignoreLineBreaks();
	static bool isDescendantOrSelf(::org::w3c::dom::Node* ctx, ::org::w3c::dom::Node* descendantOrSelf);
	static bool isIgnoreLineBreaks();
	static bool lambda$excludeNodeFromSet$2(::org::w3c::dom::Node* signatureElement, ::org::w3c::dom::Node* inputNode);
	static ::java::lang::Boolean* lambda$static$0();
	static ::com::sun::org::apache::xml::internal::security::parser::XMLParser* lambda$static$1();
	static void outputDOM(::org::w3c::dom::Node* contextNode, ::java::io::OutputStream* os);
	static void outputDOM(::org::w3c::dom::Node* contextNode, ::java::io::OutputStream* os, bool addPreamble);
	static void outputDOMc14nWithComments(::org::w3c::dom::Node* contextNode, ::java::io::OutputStream* os);
	static bool protectAgainstWrappingAttack(::org::w3c::dom::Node* startNode, $String* value);
	static bool protectAgainstWrappingAttack(::org::w3c::dom::Node* startNode, ::org::w3c::dom::Element* knownElement, $String* value);
	static ::org::w3c::dom::Document* read(::java::io::InputStream* inputStream, bool disallowDocTypeDeclarations);
	static ::org::w3c::dom::Element* selectDs11Node(::org::w3c::dom::Node* sibling, $String* nodeName, int32_t number);
	static $Array<::org::w3c::dom::Element>* selectDs11Nodes(::org::w3c::dom::Node* sibling, $String* nodeName);
	static ::org::w3c::dom::Element* selectDsNode(::org::w3c::dom::Node* sibling, $String* nodeName, int32_t number);
	static $Array<::org::w3c::dom::Element>* selectDsNodes(::org::w3c::dom::Node* sibling, $String* nodeName);
	static ::org::w3c::dom::Element* selectNode(::org::w3c::dom::Node* sibling, $String* uri, $String* nodeName, int32_t number);
	static $Array<::org::w3c::dom::Element>* selectNodes(::org::w3c::dom::Node* sibling, $String* uri, $String* nodeName);
	static ::org::w3c::dom::Element* selectXencNode(::org::w3c::dom::Node* sibling, $String* nodeName, int32_t number);
	static void setDs11Prefix($String* prefix);
	static void setDsPrefix($String* prefix);
	static void setXenc11Prefix($String* prefix);
	static void setXencPrefix($String* prefix);
	static bool ignoreLineBreaks$;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static ::com::sun::org::apache::xml::internal::security::parser::XMLParser* xmlParserImpl;
	static $volatile($String*) dsPrefix;
	static $volatile($String*) ds11Prefix;
	static $volatile($String*) xencPrefix;
	static $volatile($String*) xenc11Prefix;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_utils_XMLUtils_h_