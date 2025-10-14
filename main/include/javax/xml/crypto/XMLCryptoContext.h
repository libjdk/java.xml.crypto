#ifndef _javax_xml_crypto_XMLCryptoContext_h_
#define _javax_xml_crypto_XMLCryptoContext_h_
//$ interface javax.xml.crypto.XMLCryptoContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace crypto {
			class KeySelector;
			class URIDereferencer;
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {

class $import XMLCryptoContext : public ::java::lang::Object {
	$interface(XMLCryptoContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $Object* get(Object$* key) {return nullptr;}
	virtual $String* getBaseURI() {return nullptr;}
	virtual $String* getDefaultNamespacePrefix() {return nullptr;}
	virtual ::javax::xml::crypto::KeySelector* getKeySelector() {return nullptr;}
	virtual $String* getNamespacePrefix($String* namespaceURI, $String* defaultPrefix) {return nullptr;}
	virtual $Object* getProperty($String* name) {return nullptr;}
	virtual ::javax::xml::crypto::URIDereferencer* getURIDereferencer() {return nullptr;}
	virtual $Object* put(Object$* key, Object$* value) {return nullptr;}
	virtual $String* putNamespacePrefix($String* namespaceURI, $String* prefix) {return nullptr;}
	virtual void setBaseURI($String* baseURI) {}
	virtual void setDefaultNamespacePrefix($String* defaultPrefix) {}
	virtual void setKeySelector(::javax::xml::crypto::KeySelector* ks) {}
	virtual $Object* setProperty($String* name, Object$* value) {return nullptr;}
	virtual void setURIDereferencer(::javax::xml::crypto::URIDereferencer* dereferencer) {}
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_XMLCryptoContext_h_