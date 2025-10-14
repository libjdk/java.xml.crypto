#ifndef _org_jcp_xml_dsig_internal_dom_DOMCryptoBinary_h_
#define _org_jcp_xml_dsig_internal_dom_DOMCryptoBinary_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMCryptoBinary
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure

#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

namespace java {
	namespace math {
		class BigInteger;
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
	namespace w3c {
		namespace dom {
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

class DOMCryptoBinary : public ::org::jcp::xml::dsig::internal::dom::DOMStructure {
	$class(DOMCryptoBinary, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMStructure)
public:
	DOMCryptoBinary();
	void init$(::java::math::BigInteger* bigNum);
	void init$(::org::w3c::dom::Node* cbNode);
	::java::math::BigInteger* getBigNum();
	virtual void marshal(::org::w3c::dom::Node* parent, $String* prefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	::java::math::BigInteger* bigNum = nullptr;
	$String* value = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMCryptoBinary_h_