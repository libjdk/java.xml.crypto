#ifndef _javax_xml_crypto_dsig_dom_DOMSignContext_h_
#define _javax_xml_crypto_dsig_dom_DOMSignContext_h_
//$ class javax.xml.crypto.dsig.dom.DOMSignContext
//$ extends javax.xml.crypto.dom.DOMCryptoContext
//$ implements javax.xml.crypto.dsig.XMLSignContext

#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/XMLSignContext.h>

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

class $import DOMSignContext : public ::javax::xml::crypto::dom::DOMCryptoContext, public ::javax::xml::crypto::dsig::XMLSignContext {
	$class(DOMSignContext, $NO_CLASS_INIT, ::javax::xml::crypto::dom::DOMCryptoContext, ::javax::xml::crypto::dsig::XMLSignContext)
public:
	DOMSignContext();
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
	void init$(::java::security::Key* signingKey, ::org::w3c::dom::Node* parent);
	void init$(::java::security::Key* signingKey, ::org::w3c::dom::Node* parent, ::org::w3c::dom::Node* nextSibling);
	void init$(::javax::xml::crypto::KeySelector* ks, ::org::w3c::dom::Node* parent);
	void init$(::javax::xml::crypto::KeySelector* ks, ::org::w3c::dom::Node* parent, ::org::w3c::dom::Node* nextSibling);
	virtual ::org::w3c::dom::Node* getNextSibling();
	virtual ::org::w3c::dom::Node* getParent();
	virtual $Object* put(Object$* key, Object$* value) override;
	virtual $String* putNamespacePrefix($String* namespaceURI, $String* prefix) override;
	virtual void setBaseURI($String* baseURI) override;
	virtual void setDefaultNamespacePrefix($String* defaultPrefix) override;
	virtual void setKeySelector(::javax::xml::crypto::KeySelector* ks) override;
	virtual void setNextSibling(::org::w3c::dom::Node* nextSibling);
	virtual void setParent(::org::w3c::dom::Node* parent);
	virtual $Object* setProperty($String* name, Object$* value) override;
	virtual void setURIDereferencer(::javax::xml::crypto::URIDereferencer* dereferencer) override;
	virtual $String* toString() override;
	::org::w3c::dom::Node* parent = nullptr;
	::org::w3c::dom::Node* nextSibling = nullptr;
};

				} // dom
			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_dom_DOMSignContext_h_