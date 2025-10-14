#ifndef _javax_xml_crypto_dom_DOMStructure_h_
#define _javax_xml_crypto_dom_DOMStructure_h_
//$ class javax.xml.crypto.dom.DOMStructure
//$ extends javax.xml.crypto.XMLStructure

#include <javax/xml/crypto/XMLStructure.h>

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

class $export DOMStructure : public ::javax::xml::crypto::XMLStructure {
	$class(DOMStructure, $NO_CLASS_INIT, ::javax::xml::crypto::XMLStructure)
public:
	DOMStructure();
	void init$(::org::w3c::dom::Node* node);
	virtual ::org::w3c::dom::Node* getNode();
	virtual bool isFeatureSupported($String* feature) override;
	::org::w3c::dom::Node* node = nullptr;
};

			} // dom
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dom_DOMStructure_h_