#ifndef _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformXPath$XPathNodeFilter_h_
#define _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformXPath$XPathNodeFilter_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath$XPathNodeFilter
//$ extends com.sun.org.apache.xml.internal.security.signature.NodeFilter

#include <com/sun/org/apache/xml/internal/security/signature/NodeFilter.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {
								class XPathAPI;
							}
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Element;
			class Node;
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
							namespace transforms {
								namespace implementations {

class TransformXPath$XPathNodeFilter : public ::com::sun::org::apache::xml::internal::security::signature::NodeFilter {
	$class(TransformXPath$XPathNodeFilter, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::signature::NodeFilter)
public:
	TransformXPath$XPathNodeFilter();
	void init$(::org::w3c::dom::Element* xpathElement, ::org::w3c::dom::Node* xpathnode, $String* str, ::com::sun::org::apache::xml::internal::security::utils::XPathAPI* xPathAPI);
	virtual int32_t isNodeInclude(::org::w3c::dom::Node* currentNode) override;
	virtual int32_t isNodeIncludeDO(::org::w3c::dom::Node* n, int32_t level) override;
	::com::sun::org::apache::xml::internal::security::utils::XPathAPI* xPathAPI = nullptr;
	::org::w3c::dom::Node* xpathnode = nullptr;
	::org::w3c::dom::Element* xpathElement = nullptr;
	$String* str = nullptr;
};

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformXPath$XPathNodeFilter_h_