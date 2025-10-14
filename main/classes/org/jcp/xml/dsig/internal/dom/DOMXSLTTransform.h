#ifndef _org_jcp_xml_dsig_internal_dom_DOMXSLTTransform_h_
#define _org_jcp_xml_dsig_internal_dom_DOMXSLTTransform_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMXSLTTransform
//$ extends org.jcp.xml.dsig.internal.dom.ApacheTransform

#include <org/jcp/xml/dsig/internal/dom/ApacheTransform.h>

namespace javax {
	namespace xml {
		namespace crypto {
			class XMLCryptoContext;
			class XMLStructure;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {
					class TransformParameterSpec;
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

class DOMXSLTTransform : public ::org::jcp::xml::dsig::internal::dom::ApacheTransform {
	$class(DOMXSLTTransform, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::ApacheTransform)
public:
	DOMXSLTTransform();
	void init$();
	virtual void init(::javax::xml::crypto::dsig::spec::TransformParameterSpec* params) override;
	virtual void init(::javax::xml::crypto::XMLStructure* parent, ::javax::xml::crypto::XMLCryptoContext* context) override;
	virtual void marshalParams(::javax::xml::crypto::XMLStructure* parent, ::javax::xml::crypto::XMLCryptoContext* context) override;
	void unmarshalParams(::org::w3c::dom::Element* sheet);
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMXSLTTransform_h_