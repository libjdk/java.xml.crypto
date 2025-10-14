#ifndef _org_jcp_xml_dsig_internal_dom_DOMDigestMethod$SHA1_h_
#define _org_jcp_xml_dsig_internal_dom_DOMDigestMethod$SHA1_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA1
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

class DOMDigestMethod$SHA1 : public ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod {
	$class(DOMDigestMethod$SHA1, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod)
public:
	DOMDigestMethod$SHA1();
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

#endif // _org_jcp_xml_dsig_internal_dom_DOMDigestMethod$SHA1_h_