#ifndef _org_jcp_xml_dsig_internal_dom_DOMKeyValue$RSA_h_
#define _org_jcp_xml_dsig_internal_dom_DOMKeyValue$RSA_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMKeyValue$RSA
//$ extends org.jcp.xml.dsig.internal.dom.DOMKeyValue

#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue.h>

namespace java {
	namespace security {
		class KeyFactory;
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace interfaces {
			class RSAPublicKey;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dom {
				class DOMCryptoContext;
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
						class DOMCryptoBinary;
					}
				}
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

class DOMKeyValue$RSA : public ::org::jcp::xml::dsig::internal::dom::DOMKeyValue {
	$class(DOMKeyValue$RSA, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMKeyValue)
public:
	DOMKeyValue$RSA();
	void init$(::java::security::interfaces::RSAPublicKey* key);
	void init$(::org::w3c::dom::Element* elem);
	virtual void marshalPublicKey(::org::w3c::dom::Node* parent, ::org::w3c::dom::Document* doc, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual ::java::security::PublicKey* unmarshalKeyValue(::org::w3c::dom::Element* kvtElem) override;
	::org::jcp::xml::dsig::internal::dom::DOMCryptoBinary* modulus = nullptr;
	::org::jcp::xml::dsig::internal::dom::DOMCryptoBinary* exponent = nullptr;
	::java::security::KeyFactory* rsakf = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMKeyValue$RSA_h_