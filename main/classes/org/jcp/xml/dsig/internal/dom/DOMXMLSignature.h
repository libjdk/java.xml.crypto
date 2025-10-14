#ifndef _org_jcp_xml_dsig_internal_dom_DOMXMLSignature_h_
#define _org_jcp_xml_dsig_internal_dom_DOMXMLSignature_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMXMLSignature
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.XMLSignature

#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

#pragma push_macro("LOG")
#undef LOG

namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {
					class Logger;
				}
			}
		}
	}
}
namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace util {
		class List;
		class Map;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class KeySelectorResult;
			class XMLCryptoContext;
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
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				class SignedInfo;
				class XMLSignContext;
				class XMLSignature$SignatureValue;
				class XMLValidateContext;
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {
					class KeyInfo;
				}
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
						class DOMReference;
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

class DOMXMLSignature : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::XMLSignature {
	$class(DOMXMLSignature, 0, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::XMLSignature)
public:
	DOMXMLSignature();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual bool isFeatureSupported($String* feature) override;
	void init$(::javax::xml::crypto::dsig::SignedInfo* si, ::javax::xml::crypto::dsig::keyinfo::KeyInfo* ki, ::java::util::List* objs, $String* id, $String* signatureValueId);
	void init$(::org::w3c::dom::Element* sigElem, ::javax::xml::crypto::XMLCryptoContext* context, ::java::security::Provider* provider);
	void digestReference(::org::jcp::xml::dsig::internal::dom::DOMReference* ref, ::javax::xml::crypto::dsig::XMLSignContext* signContext);
	virtual bool equals(Object$* o) override;
	virtual $String* getId() override;
	virtual ::javax::xml::crypto::dsig::keyinfo::KeyInfo* getKeyInfo() override;
	virtual ::javax::xml::crypto::KeySelectorResult* getKeySelectorResult() override;
	virtual ::java::util::List* getObjects() override;
	virtual ::javax::xml::crypto::dsig::XMLSignature$SignatureValue* getSignatureValue() override;
	virtual ::javax::xml::crypto::dsig::SignedInfo* getSignedInfo() override;
	virtual int32_t hashCode() override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	void marshal(::org::w3c::dom::Node* parent, ::org::w3c::dom::Node* nextSibling, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context);
	virtual void sign(::javax::xml::crypto::dsig::XMLSignContext* signContext) override;
	virtual $String* toString() override;
	virtual bool validate(::javax::xml::crypto::dsig::XMLValidateContext* vc) override;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	$String* id = nullptr;
	::javax::xml::crypto::dsig::XMLSignature$SignatureValue* sv = nullptr;
	::javax::xml::crypto::dsig::keyinfo::KeyInfo* ki = nullptr;
	::java::util::List* objects = nullptr;
	::javax::xml::crypto::dsig::SignedInfo* si = nullptr;
	::org::w3c::dom::Document* ownerDoc = nullptr;
	::org::w3c::dom::Element* localSigElem = nullptr;
	::org::w3c::dom::Element* sigElem = nullptr;
	bool validationStatus = false;
	bool validated = false;
	::javax::xml::crypto::KeySelectorResult* ksr = nullptr;
	::java::util::Map* signatureIdMap = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("LOG")

#endif // _org_jcp_xml_dsig_internal_dom_DOMXMLSignature_h_