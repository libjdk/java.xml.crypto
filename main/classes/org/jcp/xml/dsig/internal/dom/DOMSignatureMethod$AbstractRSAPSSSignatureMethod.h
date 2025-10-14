#ifndef _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$AbstractRSAPSSSignatureMethod_h_
#define _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$AbstractRSAPSSSignatureMethod_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSAPSSSignatureMethod
//$ extends org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod

#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractRSASignatureMethod.h>

namespace java {
	namespace security {
		class Provider;
		class Signature;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
			class PSSParameterSpec;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Element;
		}
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class DOMSignatureMethod$AbstractRSAPSSSignatureMethod : public ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSASignatureMethod {
	$class(DOMSignatureMethod$AbstractRSAPSSSignatureMethod, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSASignatureMethod)
public:
	DOMSignatureMethod$AbstractRSAPSSSignatureMethod();
	void init$(::java::security::spec::AlgorithmParameterSpec* params);
	void init$(::org::w3c::dom::Element* dmElem);
	virtual ::java::security::spec::PSSParameterSpec* getPSSParameterSpec() {return nullptr;}
	virtual ::java::security::Signature* getSignature(::java::security::Provider* p) override;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$AbstractRSAPSSSignatureMethod_h_