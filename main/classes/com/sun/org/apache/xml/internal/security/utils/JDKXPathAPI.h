#ifndef _com_sun_org_apache_xml_internal_security_utils_JDKXPathAPI_h_
#define _com_sun_org_apache_xml_internal_security_utils_JDKXPathAPI_h_
//$ class com.sun.org.apache.xml.internal.security.utils.JDKXPathAPI
//$ extends com.sun.org.apache.xml.internal.security.utils.XPathAPI

#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>

namespace javax {
	namespace xml {
		namespace xpath {
			class XPathExpression;
			class XPathFactory;
		}
	}
}
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

class JDKXPathAPI : public ::com::sun::org::apache::xml::internal::security::utils::XPathAPI {
	$class(JDKXPathAPI, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::XPathAPI)
public:
	JDKXPathAPI();
	void init$();
	virtual void clear() override;
	virtual bool evaluate(::org::w3c::dom::Node* contextNode, ::org::w3c::dom::Node* xpathnode, $String* str, ::org::w3c::dom::Node* namespaceNode) override;
	virtual ::org::w3c::dom::NodeList* selectNodeList(::org::w3c::dom::Node* contextNode, ::org::w3c::dom::Node* xpathnode, $String* str, ::org::w3c::dom::Node* namespaceNode) override;
	::javax::xml::xpath::XPathFactory* xpf = nullptr;
	$String* xpathStr = nullptr;
	::javax::xml::xpath::XPathExpression* xpathExpression = nullptr;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_utils_JDKXPathAPI_h_