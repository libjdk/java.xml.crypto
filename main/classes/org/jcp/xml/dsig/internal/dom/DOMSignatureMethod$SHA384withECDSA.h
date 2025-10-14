#ifndef _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$SHA384withECDSA_h_
#define _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$SHA384withECDSA_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA384withECDSA
//$ extends org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractECDSASignatureMethod

#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractECDSASignatureMethod.h>

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

class DOMSignatureMethod$SHA384withECDSA : public ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractECDSASignatureMethod {
	$class(DOMSignatureMethod$SHA384withECDSA, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractECDSASignatureMethod)
public:
	DOMSignatureMethod$SHA384withECDSA();
	void init$(::java::security::spec::AlgorithmParameterSpec* params);
	void init$(::org::w3c::dom::Element* dmElem);
	virtual $String* getAlgorithm() override;
	virtual ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type* getAlgorithmType() override;
	virtual $String* getJCAAlgorithm() override;
	virtual $String* getJCAFallbackAlgorithm() override;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$SHA384withECDSA_h_