#ifndef _org_jcp_xml_dsig_internal_dom_DOMXMLSignature$DOMSignatureValue_h_
#define _org_jcp_xml_dsig_internal_dom_DOMXMLSignature$DOMSignatureValue_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMXMLSignature$DOMSignatureValue
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.XMLSignature$SignatureValue

#include <java/lang/Array.h>
#include <javax/xml/crypto/dsig/XMLSignature$SignatureValue.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

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
				class XMLValidateContext;
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
						class DOMXMLSignature;
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
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

class DOMXMLSignature$DOMSignatureValue : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::XMLSignature$SignatureValue {
	$class(DOMXMLSignature$DOMSignatureValue, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::XMLSignature$SignatureValue)
public:
	DOMXMLSignature$DOMSignatureValue();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::org::jcp::xml::dsig::internal::dom::DOMXMLSignature* this$0, $String* id);
	void init$(::org::jcp::xml::dsig::internal::dom::DOMXMLSignature* this$0, ::org::w3c::dom::Element* sigValueElem);
	virtual bool equals(Object$* o) override;
	virtual $String* getEncodedValue();
	virtual $String* getId() override;
	virtual $bytes* getValue() override;
	virtual int32_t hashCode() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual void setValue($bytes* value);
	virtual $String* toString() override;
	virtual bool validate(::javax::xml::crypto::dsig::XMLValidateContext* validateContext) override;
	::org::jcp::xml::dsig::internal::dom::DOMXMLSignature* this$0 = nullptr;
	$String* id = nullptr;
	$bytes* value = nullptr;
	$String* valueBase64 = nullptr;
	::org::w3c::dom::Element* sigValueElem = nullptr;
	bool validated = false;
	bool validationStatus = false;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMXMLSignature$DOMSignatureValue_h_