#ifndef _org_jcp_xml_dsig_internal_dom_XMLDSigRI$ProviderService_h_
#define _org_jcp_xml_dsig_internal_dom_XMLDSigRI$ProviderService_h_
//$ class org.jcp.xml.dsig.internal.dom.XMLDSigRI$ProviderService
//$ extends java.security.Provider$Service

#include <java/lang/Array.h>
#include <java/security/Provider$Service.h>

namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace util {
		class Map;
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class XMLDSigRI$ProviderService : public ::java::security::Provider$Service {
	$class(XMLDSigRI$ProviderService, $NO_CLASS_INIT, ::java::security::Provider$Service)
public:
	XMLDSigRI$ProviderService();
	void init$(::java::security::Provider* p, $String* type, $String* algo, $String* cn);
	void init$(::java::security::Provider* p, $String* type, $String* algo, $String* cn, $StringArray* aliases);
	void init$(::java::security::Provider* p, $String* type, $String* algo, $String* cn, $StringArray* aliases, ::java::util::Map* attrs);
	virtual $Object* newInstance(Object$* ctrParamObj) override;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_XMLDSigRI$ProviderService_h_