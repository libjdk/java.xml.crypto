#ifndef _org_jcp_xml_dsig_internal_dom_DOMURIDereferencer_h_
#define _org_jcp_xml_dsig_internal_dom_DOMURIDereferencer_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMURIDereferencer
//$ extends javax.xml.crypto.URIDereferencer

#include <javax/xml/crypto/URIDereferencer.h>

#pragma push_macro("INSTANCE")
#undef INSTANCE

namespace javax {
	namespace xml {
		namespace crypto {
			class Data;
			class URIReference;
			class XMLCryptoContext;
		}
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class DOMURIDereferencer : public ::javax::xml::crypto::URIDereferencer {
	$class(DOMURIDereferencer, 0, ::javax::xml::crypto::URIDereferencer)
public:
	DOMURIDereferencer();
	void init$();
	virtual ::javax::xml::crypto::Data* dereference(::javax::xml::crypto::URIReference* uriRef, ::javax::xml::crypto::XMLCryptoContext* context) override;
	static ::javax::xml::crypto::URIDereferencer* INSTANCE;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("INSTANCE")

#endif // _org_jcp_xml_dsig_internal_dom_DOMURIDereferencer_h_