#ifndef _org_jcp_xml_dsig_internal_dom_XMLDSigRI_h_
#define _org_jcp_xml_dsig_internal_dom_XMLDSigRI_h_
//$ class org.jcp.xml.dsig.internal.dom.XMLDSigRI
//$ extends java.security.Provider

#include <java/security/Provider.h>

#pragma push_macro("INFO")
#undef INFO
#pragma push_macro("VER")
#undef VER

namespace java {
	namespace security {
		class Provider$Service;
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class XMLDSigRI : public ::java::security::Provider {
	$class(XMLDSigRI, 0, ::java::security::Provider)
public:
	XMLDSigRI();
	using ::java::security::Provider::load;
	using ::java::security::Provider::getProperty;
	void init$();
	static void access$000(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* x0, ::java::security::Provider$Service* x1);
	static void access$100(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* x0, ::java::security::Provider$Service* x1);
	static void access$1000(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* x0, ::java::security::Provider$Service* x1);
	static void access$1100(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* x0, ::java::security::Provider$Service* x1);
	static void access$1200(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* x0, ::java::security::Provider$Service* x1);
	static void access$200(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* x0, ::java::security::Provider$Service* x1);
	static void access$300(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* x0, ::java::security::Provider$Service* x1);
	static void access$400(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* x0, ::java::security::Provider$Service* x1);
	static void access$500(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* x0, ::java::security::Provider$Service* x1);
	static void access$600(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* x0, ::java::security::Provider$Service* x1);
	static void access$700(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* x0, ::java::security::Provider$Service* x1);
	static void access$800(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* x0, ::java::security::Provider$Service* x1);
	static void access$900(::org::jcp::xml::dsig::internal::dom::XMLDSigRI* x0, ::java::security::Provider$Service* x1);
	static const int64_t serialVersionUID = (int64_t)0xB9EBA165A116A566;
	static $String* INFO;
	static $String* VER;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("INFO")
#pragma pop_macro("VER")

#endif // _org_jcp_xml_dsig_internal_dom_XMLDSigRI_h_