#ifndef _javax_xml_crypto_dom_DOMURIReference_h_
#define _javax_xml_crypto_dom_DOMURIReference_h_
//$ interface javax.xml.crypto.dom.DOMURIReference
//$ extends javax.xml.crypto.URIReference

#include <javax/xml/crypto/URIReference.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Node;
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dom {

class $import DOMURIReference : public ::javax::xml::crypto::URIReference {
	$interface(DOMURIReference, $NO_CLASS_INIT, ::javax::xml::crypto::URIReference)
public:
	virtual ::org::w3c::dom::Node* getHere() {return nullptr;}
};

			} // dom
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dom_DOMURIReference_h_