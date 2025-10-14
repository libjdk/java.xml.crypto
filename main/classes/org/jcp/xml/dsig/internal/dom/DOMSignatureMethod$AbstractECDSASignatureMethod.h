#ifndef _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$AbstractECDSASignatureMethod_h_
#define _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$AbstractECDSASignatureMethod_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractECDSASignatureMethod
//$ extends org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractP1363FormatSignatureMethod

#include <java/lang/Array.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractP1363FormatSignatureMethod.h>

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

class DOMSignatureMethod$AbstractECDSASignatureMethod : public ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractP1363FormatSignatureMethod {
	$class(DOMSignatureMethod$AbstractECDSASignatureMethod, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractP1363FormatSignatureMethod)
public:
	DOMSignatureMethod$AbstractECDSASignatureMethod();
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

#endif // _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod$AbstractECDSASignatureMethod_h_