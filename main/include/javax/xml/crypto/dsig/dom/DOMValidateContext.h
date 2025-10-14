#ifndef _javax_xml_crypto_dsig_dom_DOMValidateContext_h_
#define _javax_xml_crypto_dsig_dom_DOMValidateContext_h_
//$ class javax.xml.crypto.dsig.dom.DOMValidateContext
//$ extends javax.xml.crypto.dom.DOMCryptoContext
//$ implements javax.xml.crypto.dsig.XMLValidateContext

#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>

namespace java {
	namespace security {
		class Key;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class KeySelector;
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

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace dom {

class $import DOMValidateContext : public ::javax::xml::crypto::dom::DOMCryptoContext, public ::javax::xml::crypto::dsig::XMLValidateContext {
	$class(DOMValidateContext, $NO_CLASS_INIT, ::javax::xml::crypto::dom::DOMCryptoContext, ::javax::xml::crypto::dsig::XMLValidateContext)
public:
	DOMValidateContext();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual $Object* get(Object$* key) override;
	virtual $String* getBaseURI() override;
	virtual $String* getDefaultNamespacePrefix() override;
	virtual ::javax::xml::crypto::KeySelector* getKeySelector() override;
	virtual $String* getNamespacePrefix($String* namespaceURI, $String* defaultPrefix) override;
	virtual $Object* getProperty($String* name) override;
	virtual ::javax::xml::crypto::URIDereferencer* getURIDereferencer() override;
	virtual int32_t hashCode() override;
	void init$(::javax::xml::crypto::KeySelector* ks, ::org::w3c::dom::Node* node);
	void init$(::java::security::Key* validatingKey, ::org::w3c::dom::Node* node);
	virtual ::org::w3c::dom::Node* getNode();
	void init(::org::w3c::dom::Node* node, ::javax::xml::crypto::KeySelector* ks);
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual $String* putNamespacePrefix($String* namespaceURI, $String* prefix) override;
	virtual void setBaseURI($String* baseURI) override;
	virtual void setDefaultNamespacePrefix($String* defaultPrefix) override;
	virtual void setKeySelector(::javax::xml::crypto::KeySelector* ks) override;
	virtual void setNode(::org::w3c::dom::Node* node);
	virtual $Object* setProperty($String* name, Object$* value) override;
	virtual void setURIDereferencer(::javax::xml::crypto::URIDereferencer* dereferencer) override;
	virtual $String* toString() override;
	::org::w3c::dom::Node* node = nullptr;
};

				} // dom
			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_dom_DOMValidateContext_h_