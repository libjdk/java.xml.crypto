#ifndef _com_sun_org_apache_xml_internal_security_signature_NodeFilter_h_
#define _com_sun_org_apache_xml_internal_security_signature_NodeFilter_h_
//$ interface com.sun.org.apache.xml.internal.security.signature.NodeFilter
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
							namespace signature {

class NodeFilter : public ::java::lang::Object {
	$interface(NodeFilter, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual int32_t isNodeInclude(::org::w3c::dom::Node* n) {return 0;}
	virtual int32_t isNodeIncludeDO(::org::w3c::dom::Node* n, int32_t level) {return 0;}
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_signature_NodeFilter_h_