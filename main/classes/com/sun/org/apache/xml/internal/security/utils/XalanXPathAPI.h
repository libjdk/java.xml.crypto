#ifndef _com_sun_org_apache_xml_internal_security_utils_XalanXPathAPI_h_
#define _com_sun_org_apache_xml_internal_security_utils_XalanXPathAPI_h_
//$ class com.sun.org.apache.xml.internal.security.utils.XalanXPathAPI
//$ extends com.sun.org.apache.xml.internal.security.utils.XPathAPI

#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>

#pragma push_macro("LOG")
#undef LOG

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace utils {
							class PrefixResolver;
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
				namespace xpath {
					namespace internal {
						class XPath;
						class XPathContext;
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
				namespace xpath {
					namespace internal {
						namespace compiler {
							class FunctionTable;
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
				namespace xpath {
					namespace internal {
						namespace objects {
							class XObject;
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

class XalanXPathAPI : public ::com::sun::org::apache::xml::internal::security::utils::XPathAPI {
	$class(XalanXPathAPI, 0, ::com::sun::org::apache::xml::internal::security::utils::XPathAPI)
public:
	XalanXPathAPI();
	void init$();
	virtual void clear() override;
	::com::sun::org::apache::xpath::internal::XPath* createXPath($String* str, ::com::sun::org::apache::xml::internal::utils::PrefixResolver* prefixResolver);
	::com::sun::org::apache::xpath::internal::objects::XObject* eval(::org::w3c::dom::Node* contextNode, ::org::w3c::dom::Node* xpathnode, $String* str, ::org::w3c::dom::Node* namespaceNode);
	virtual bool evaluate(::org::w3c::dom::Node* contextNode, ::org::w3c::dom::Node* xpathnode, $String* str, ::org::w3c::dom::Node* namespaceNode) override;
	static void fixupFunctionTable();
	static bool isInstalled();
	virtual ::org::w3c::dom::NodeList* selectNodeList(::org::w3c::dom::Node* contextNode, ::org::w3c::dom::Node* xpathnode, $String* str, ::org::w3c::dom::Node* namespaceNode) override;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	$String* xpathStr = nullptr;
	::com::sun::org::apache::xpath::internal::XPath* xpath = nullptr;
	static ::com::sun::org::apache::xpath::internal::compiler::FunctionTable* funcTable;
	static bool installed;
	::com::sun::org::apache::xpath::internal::XPathContext* context = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_security_utils_XalanXPathAPI_h_