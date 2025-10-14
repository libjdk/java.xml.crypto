#ifndef _org_jcp_xml_dsig_internal_dom_DOMKeyValue$Unknown_h_
#define _org_jcp_xml_dsig_internal_dom_DOMKeyValue$Unknown_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMKeyValue$Unknown
//$ extends org.jcp.xml.dsig.internal.dom.DOMKeyValue

#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue.h>

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dom {
				class DOMCryptoContext;
				class DOMStructure;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
			class Node;
		}
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class DOMKeyValue$Unknown : public ::org::jcp::xml::dsig::internal::dom::DOMKeyValue {
	$class(DOMKeyValue$Unknown, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMKeyValue)
public:
	DOMKeyValue$Unknown();
	void init$(::org::w3c::dom::Element* elem);
	virtual void marshalPublicKey(::org::w3c::dom::Node* parent, ::org::w3c::dom::Document* doc, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual ::java::security::PublicKey* unmarshalKeyValue(::org::w3c::dom::Element* kvElem) override;
	::javax::xml::crypto::dom::DOMStructure* externalPublicKey = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMKeyValue$Unknown_h_