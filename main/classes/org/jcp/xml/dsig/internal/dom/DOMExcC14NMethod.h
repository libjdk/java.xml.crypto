#ifndef _org_jcp_xml_dsig_internal_dom_DOMExcC14NMethod_h_
#define _org_jcp_xml_dsig_internal_dom_DOMExcC14NMethod_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMExcC14NMethod
//$ extends org.jcp.xml.dsig.internal.dom.ApacheCanonicalizer

#include <org/jcp/xml/dsig/internal/dom/ApacheCanonicalizer.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class Data;
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
					class ExcC14NParameterSpec;
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

class DOMExcC14NMethod : public ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer {
	$class(DOMExcC14NMethod, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer)
public:
	DOMExcC14NMethod();
	void init$();
	::java::util::List* getParameterSpecPrefixList(::javax::xml::crypto::dsig::spec::ExcC14NParameterSpec* paramSpec);
	$String* getParamsNSURI();
	virtual void init(::javax::xml::crypto::dsig::spec::TransformParameterSpec* params) override;
	virtual void init(::javax::xml::crypto::XMLStructure* parent, ::javax::xml::crypto::XMLCryptoContext* context) override;
	virtual void marshalParams(::javax::xml::crypto::XMLStructure* parent, ::javax::xml::crypto::XMLCryptoContext* context) override;
	using ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer::transform;
	virtual ::javax::xml::crypto::Data* transform(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* xc) override;
	void unmarshalParams(::org::w3c::dom::Element* paramsElem);
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMExcC14NMethod_h_