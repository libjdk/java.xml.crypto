#ifndef _org_jcp_xml_dsig_internal_dom_XMLDSigRI$2_h_
#define _org_jcp_xml_dsig_internal_dom_XMLDSigRI$2_h_
//$ class org.jcp.xml.dsig.internal.dom.XMLDSigRI$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace java {
	namespace security {
		class Provider;
	}
}
namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {
						class XMLDSigRI;
					}
				}
			}
		}
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class XMLDSigRI$2 : public ::java::security::PrivilegedAction {
	$class(XMLDSigRI$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	XMLDSigRI$2();
	void init$(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* this$0, ::java::security::Provider* val$p);
	virtual $Object* run() override;
	::org::jcp::xml::dsig::internal::dom::XMLDSigRI* this$0 = nullptr;
	::java::security::Provider* val$p = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_XMLDSigRI$2_h_