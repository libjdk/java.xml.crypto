#ifndef _org_jcp_xml_dsig_internal_dom_DOMEnvelopedTransform_h_
#define _org_jcp_xml_dsig_internal_dom_DOMEnvelopedTransform_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMEnvelopedTransform
//$ extends org.jcp.xml.dsig.internal.dom.ApacheTransform

#include <org/jcp/xml/dsig/internal/dom/ApacheTransform.h>

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

class DOMEnvelopedTransform : public ::org::jcp::xml::dsig::internal::dom::ApacheTransform {
	$class(DOMEnvelopedTransform, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::ApacheTransform)
public:
	DOMEnvelopedTransform();
	using ::org::jcp::xml::dsig::internal::dom::ApacheTransform::init;
	void init$();
	virtual void init(::javax::xml::crypto::dsig::spec::TransformParameterSpec* params) override;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMEnvelopedTransform_h_