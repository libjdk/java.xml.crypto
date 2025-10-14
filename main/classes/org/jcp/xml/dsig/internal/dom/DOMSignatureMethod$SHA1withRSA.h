#ifndef _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$SHA1withRSA_h_
#define _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$SHA1withRSA_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withRSA
//$ extends org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod

#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractRSASignatureMethod.h>

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
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

class DOMSignatureMethod$SHA1withRSA : public ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSASignatureMethod {
	$class(DOMSignatureMethod$SHA1withRSA, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSASignatureMethod)
public:
	DOMSignatureMethod$SHA1withRSA();
	void init$(::java::security::spec::AlgorithmParameterSpec* params);
	void init$(::org::w3c::dom::Element* dmElem);
	virtual $String* getAlgorithm() override;
	virtual ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type* getAlgorithmType() override;
	virtual $String* getJCAAlgorithm() override;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$SHA1withRSA_h_