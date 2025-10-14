#ifndef _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$SHA512withRSAandMGF1_h_
#define _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$SHA512withRSAandMGF1_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA512withRSAandMGF1
//$ extends org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSAPSSSignatureMethod

#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractRSAPSSSignatureMethod.h>

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
			class PSSParameterSpec;
		}
	}
}
namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {
						class AbstractDOMSignatureMethod$Type;
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
		}
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class DOMSignatureMethod$SHA512withRSAandMGF1 : public ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSAPSSSignatureMethod {
	$class(DOMSignatureMethod$SHA512withRSAandMGF1, 0, ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSAPSSSignatureMethod)
public:
	DOMSignatureMethod$SHA512withRSAandMGF1();
	void init$(::java::security::spec::AlgorithmParameterSpec* params);
	void init$(::org::w3c::dom::Element* dmElem);
	virtual $String* getAlgorithm() override;
	virtual ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type* getAlgorithmType() override;
	virtual $String* getJCAAlgorithm() override;
	virtual ::java::security::spec::PSSParameterSpec* getPSSParameterSpec() override;
	static ::java::security::spec::PSSParameterSpec* spec;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$SHA512withRSAandMGF1_h_