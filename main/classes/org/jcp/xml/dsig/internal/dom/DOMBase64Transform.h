#ifndef _org_jcp_xml_dsig_internal_dom_DOMBase64Transform_h_
#define _org_jcp_xml_dsig_internal_dom_DOMBase64Transform_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMBase64Transform
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

class DOMBase64Transform : public ::org::jcp::xml::dsig::internal::dom::ApacheTransform {
	$class(DOMBase64Transform, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::ApacheTransform)
public:
	DOMBase64Transform();
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

#endif // _org_jcp_xml_dsig_internal_dom_DOMBase64Transform_h_