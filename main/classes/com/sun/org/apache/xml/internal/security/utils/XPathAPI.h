#ifndef _com_sun_org_apache_xml_internal_security_utils_XPathAPI_h_
#define _com_sun_org_apache_xml_internal_security_utils_XPathAPI_h_
//$ interface com.sun.org.apache.xml.internal.security.utils.XPathAPI
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
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

class XPathAPI : public ::java::lang::Object {
	$interface(XPathAPI, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual void clear() {}
	virtual bool evaluate(::org::w3c::dom::Node* contextNode, ::org::w3c::dom::Node* xpathnode, $String* str, ::org::w3c::dom::Node* namespaceNode) {return false;}
	virtual ::org::w3c::dom::NodeList* selectNodeList(::org::w3c::dom::Node* contextNode, ::org::w3c::dom::Node* xpathnode, $String* str, ::org::w3c::dom::Node* namespaceNode) {return nullptr;}
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_utils_XPathAPI_h_