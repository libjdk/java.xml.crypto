#ifndef _org_jcp_xml_dsig_internal_dom_DOMKeyValue_h_
#define _org_jcp_xml_dsig_internal_dom_DOMKeyValue_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMKeyValue
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.keyinfo.KeyValue

#include <javax/xml/crypto/dsig/keyinfo/KeyValue.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

#pragma push_macro("XMLDSIG_11_XMLNS")
#undef XMLDSIG_11_XMLNS

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class KeyFactory;
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class KeySpec;
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

class DOMKeyValue : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::keyinfo::KeyValue {
	$class(DOMKeyValue, 0, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::keyinfo::KeyValue)
public:
	DOMKeyValue();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::security::PublicKey* key);
	void init$(::org::w3c::dom::Element* kvtElem);
	static ::java::math::BigInteger* bigInt($String* s);
	static ::java::math::BigInteger* decode(::org::w3c::dom::Element* elem);
	virtual bool equals(Object$* obj) override;
	static ::java::security::PublicKey* generatePublicKey(::java::security::KeyFactory* kf, ::java::security::spec::KeySpec* keyspec);
	virtual ::java::security::PublicKey* getPublicKey() override;
	virtual int32_t hashCode() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual void marshalPublicKey(::org::w3c::dom::Node* parent, ::org::w3c::dom::Document* doc, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) {}
	virtual $String* toString() override;
	static ::javax::xml::crypto::dsig::keyinfo::KeyValue* unmarshal(::org::w3c::dom::Element* kvElem);
	virtual ::java::security::PublicKey* unmarshalKeyValue(::org::w3c::dom::Element* kvtElem) {return nullptr;}
	static $String* XMLDSIG_11_XMLNS;
	::java::security::PublicKey* publicKey = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("XMLDSIG_11_XMLNS")

#endif // _org_jcp_xml_dsig_internal_dom_DOMKeyValue_h_