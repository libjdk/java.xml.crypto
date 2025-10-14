#ifndef _javax_xml_crypto_dom_DOMCryptoContext_h_
#define _javax_xml_crypto_dom_DOMCryptoContext_h_
//$ class javax.xml.crypto.dom.DOMCryptoContext
//$ extends javax.xml.crypto.XMLCryptoContext

#include <javax/xml/crypto/XMLCryptoContext.h>

namespace java {
	namespace util {
		class HashMap;
		class Iterator;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class KeySelector;
			class URIDereferencer;
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

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dom {

class $import DOMCryptoContext : public ::javax::xml::crypto::XMLCryptoContext {
	$class(DOMCryptoContext, $NO_CLASS_INIT, ::javax::xml::crypto::XMLCryptoContext)
public:
	DOMCryptoContext();
	void init$();
	virtual $Object* get(Object$* key) override;
	virtual $String* getBaseURI() override;
	virtual $String* getDefaultNamespacePrefix() override;
	virtual ::org::w3c::dom::Element* getElementById($String* idValue);
	virtual ::javax::xml::crypto::KeySelector* getKeySelector() override;
	virtual $String* getNamespacePrefix($String* namespaceURI, $String* defaultPrefix) override;
	virtual $Object* getProperty($String* name) override;
	virtual ::javax::xml::crypto::URIDereferencer* getURIDereferencer() override;
	virtual ::java::util::Iterator* iterator();
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual $String* putNamespacePrefix($String* namespaceURI, $String* prefix) override;
	virtual void setBaseURI($String* baseURI) override;
	virtual void setDefaultNamespacePrefix($String* defaultPrefix) override;
	virtual void setIdAttributeNS(::org::w3c::dom::Element* element, $String* namespaceURI, $String* localName);
	virtual void setKeySelector(::javax::xml::crypto::KeySelector* ks) override;
	virtual $Object* setProperty($String* name, Object$* value) override;
	virtual void setURIDereferencer(::javax::xml::crypto::URIDereferencer* dereferencer) override;
	::java::util::HashMap* nsMap = nullptr;
	::java::util::HashMap* idMap = nullptr;
	::java::util::HashMap* objMap = nullptr;
	$String* baseURI = nullptr;
	::javax::xml::crypto::KeySelector* ks = nullptr;
	::javax::xml::crypto::URIDereferencer* dereferencer = nullptr;
	::java::util::HashMap* propMap = nullptr;
	$String* defaultPrefix = nullptr;
};

			} // dom
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dom_DOMCryptoContext_h_