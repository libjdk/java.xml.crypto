#ifndef _org_jcp_xml_dsig_internal_dom_DOMCanonicalXMLC14N11Method_h_
#define _org_jcp_xml_dsig_internal_dom_DOMCanonicalXMLC14N11Method_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMCanonicalXMLC14N11Method
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

class DOMCanonicalXMLC14N11Method : public ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer {
	$class(DOMCanonicalXMLC14N11Method, 0, ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer)
public:
	DOMCanonicalXMLC14N11Method();
	using ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer::init;
	void init$();
	virtual void init(::javax::xml::crypto::dsig::spec::TransformParameterSpec* params) override;
	using ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer::transform;
	virtual ::javax::xml::crypto::Data* transform(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* xc) override;
	static $String* C14N_11;
	static $String* C14N_11_WITH_COMMENTS;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMCanonicalXMLC14N11Method_h_