#ifndef _org_jcp_xml_dsig_internal_dom_DOMCanonicalXMLC14NMethod_h_
#define _org_jcp_xml_dsig_internal_dom_DOMCanonicalXMLC14NMethod_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMCanonicalXMLC14NMethod
//$ extends org.jcp.xml.dsig.internal.dom.ApacheCanonicalizer

#include <org/jcp/xml/dsig/internal/dom/ApacheCanonicalizer.h>

namespace javax {
	namespace xml {
		namespace crypto {
			class Data;
			class XMLCryptoContext;
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
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class DOMCanonicalXMLC14NMethod : public ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer {
	$class(DOMCanonicalXMLC14NMethod, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer)
public:
	DOMCanonicalXMLC14NMethod();
	using ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer::init;
	void init$();
	virtual void init(::javax::xml::crypto::dsig::spec::TransformParameterSpec* params) override;
	using ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer::transform;
	virtual ::javax::xml::crypto::Data* transform(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* xc) override;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMCanonicalXMLC14NMethod_h_