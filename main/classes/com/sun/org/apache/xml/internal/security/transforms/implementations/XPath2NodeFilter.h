#ifndef _com_sun_org_apache_xml_internal_security_transforms_implementations_XPath2NodeFilter_h_
#define _com_sun_org_apache_xml_internal_security_transforms_implementations_XPath2NodeFilter_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.implementations.XPath2NodeFilter
//$ extends com.sun.org.apache.xml.internal.security.signature.NodeFilter

#include <com/sun/org/apache/xml/internal/security/signature/NodeFilter.h>

namespace java {
	namespace util {
		class List;
		class Set;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
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

class XPath2NodeFilter : public ::com::sun::org::apache::xml::internal::security::signature::NodeFilter {
	$class(XPath2NodeFilter, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::signature::NodeFilter)
public:
	XPath2NodeFilter();
	void init$(::java::util::List* unionNodes, ::java::util::List* subtractNodes, ::java::util::List* intersectNodes);
	static ::java::util::Set* convertNodeListToSet(::java::util::List* l);
	static bool inList(::org::w3c::dom::Node* currentNode, ::java::util::Set* nodeList);
	virtual int32_t isNodeInclude(::org::w3c::dom::Node* currentNode) override;
	virtual int32_t isNodeIncludeDO(::org::w3c::dom::Node* n, int32_t level) override;
	static bool rooted(::org::w3c::dom::Node* currentNode, ::java::util::Set* nodeList);
	bool hasUnionFilter = false;
	bool hasSubtractFilter = false;
	bool hasIntersectFilter = false;
	::java::util::Set* unionNodes = nullptr;
	::java::util::Set* subtractNodes = nullptr;
	::java::util::Set* intersectNodes = nullptr;
	int32_t inSubtract = 0;
	int32_t inIntersect = 0;
	int32_t inUnion = 0;
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

#endif // _com_sun_org_apache_xml_internal_security_transforms_implementations_XPath2NodeFilter_h_