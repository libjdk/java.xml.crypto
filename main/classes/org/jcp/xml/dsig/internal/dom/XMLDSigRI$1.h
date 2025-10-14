#ifndef _org_jcp_xml_dsig_internal_dom_XMLDSigRI$1_h_
#define _org_jcp_xml_dsig_internal_dom_XMLDSigRI$1_h_
//$ class org.jcp.xml.dsig.internal.dom.XMLDSigRI$1
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class XMLDSigRI$1 : public ::java::security::PrivilegedAction {
	$class(XMLDSigRI$1, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	XMLDSigRI$1();
	void init$();
	virtual $Object* run() override;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_XMLDSigRI$1_h_