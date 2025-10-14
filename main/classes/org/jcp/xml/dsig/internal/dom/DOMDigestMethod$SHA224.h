#ifndef _org_jcp_xml_dsig_internal_dom_DOMDigestMethod$SHA224_h_
#define _org_jcp_xml_dsig_internal_dom_DOMDigestMethod$SHA224_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA224
//$ extends org.jcp.xml.dsig.internal.dom.DOMDigestMethod

#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod.h>

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

class DOMDigestMethod$SHA224 : public ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod {
	$class(DOMDigestMethod$SHA224, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod)
public:
	DOMDigestMethod$SHA224();
	void init$(::java::security::spec::AlgorithmParameterSpec* params);
	void init$(::org::w3c::dom::Element* dmElem);
	virtual $String* getAlgorithm() override;
	virtual $String* getMessageDigestAlgorithm() override;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMDigestMethod$SHA224_h_