#ifndef _org_jcp_xml_dsig_internal_dom_DOMHMACSignatureMethod$SHA384_h_
#define _org_jcp_xml_dsig_internal_dom_DOMHMACSignatureMethod$SHA384_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA384
//$ extends org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod

#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod.h>

namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
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

class DOMHMACSignatureMethod$SHA384 : public ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod {
	$class(DOMHMACSignatureMethod$SHA384, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod)
public:
	DOMHMACSignatureMethod$SHA384();
	void init$(::java::security::spec::AlgorithmParameterSpec* params);
	void init$(::org::w3c::dom::Element* dmElem);
	virtual $String* getAlgorithm() override;
	virtual int32_t getDigestLength() override;
	virtual $String* getJCAAlgorithm() override;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMHMACSignatureMethod$SHA384_h_