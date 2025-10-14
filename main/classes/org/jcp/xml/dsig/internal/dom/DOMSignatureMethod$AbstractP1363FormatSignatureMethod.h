#ifndef _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$AbstractP1363FormatSignatureMethod_h_
#define _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$AbstractP1363FormatSignatureMethod_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractP1363FormatSignatureMethod
//$ extends org.jcp.xml.dsig.internal.dom.DOMSignatureMethod

#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>

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

class DOMSignatureMethod$AbstractP1363FormatSignatureMethod : public ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod {
	$class(DOMSignatureMethod$AbstractP1363FormatSignatureMethod, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod)
public:
	DOMSignatureMethod$AbstractP1363FormatSignatureMethod();
	void init$(::java::security::spec::AlgorithmParameterSpec* params);
	void init$(::org::w3c::dom::Element* dmElem);
	virtual $String* getJCAFallbackAlgorithm() {return nullptr;}
	virtual ::java::security::Signature* getSignature(::java::security::Provider* p) override;
	bool asn1 = false;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$AbstractP1363FormatSignatureMethod_h_