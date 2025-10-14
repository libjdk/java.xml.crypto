#ifndef _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$AbstractRSASignatureMethod_h_
#define _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$AbstractRSASignatureMethod_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod
//$ extends org.jcp.xml.dsig.internal.dom.DOMSignatureMethod

#include <java/lang/Array.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>

namespace java {
	namespace security {
		class Key;
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

class DOMSignatureMethod$AbstractRSASignatureMethod : public ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod {
	$class(DOMSignatureMethod$AbstractRSASignatureMethod, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod)
public:
	DOMSignatureMethod$AbstractRSASignatureMethod();
	void init$(::java::security::spec::AlgorithmParameterSpec* params);
	void init$(::org::w3c::dom::Element* dmElem);
	virtual $bytes* postSignFormat(::java::security::Key* key, $bytes* sig) override;
	virtual $bytes* preVerifyFormat(::java::security::Key* key, $bytes* sig) override;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$AbstractRSASignatureMethod_h_