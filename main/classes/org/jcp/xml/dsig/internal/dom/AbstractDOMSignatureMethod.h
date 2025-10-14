#ifndef _org_jcp_xml_dsig_internal_dom_AbstractDOMSignatureMethod_h_
#define _org_jcp_xml_dsig_internal_dom_AbstractDOMSignatureMethod_h_
//$ class org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.SignatureMethod

#include <java/lang/Array.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

namespace java {
	namespace security {
		class Key;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
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
				class XMLValidateContext;
			}
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {
					class SignatureMethodParameterSpec;
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
						class AbstractDOMSignatureMethod$Type;
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

class AbstractDOMSignatureMethod : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::SignatureMethod {
	$class(AbstractDOMSignatureMethod, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::SignatureMethod)
public:
	AbstractDOMSignatureMethod();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$();
	virtual void checkParams(::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec* params);
	virtual bool equals(Object$* o) override;
	virtual ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type* getAlgorithmType() {return nullptr;}
	virtual $String* getJCAAlgorithm() {return nullptr;}
	virtual int32_t hashCode() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual void marshalParams(::org::w3c::dom::Element* parent, $String* paramsPrefix);
	virtual bool paramsEqual(::java::security::spec::AlgorithmParameterSpec* spec);
	virtual $bytes* sign(::java::security::Key* key, ::javax::xml::crypto::dsig::SignedInfo* si, ::javax::xml::crypto::dsig::XMLSignContext* context) {return nullptr;}
	virtual $String* toString() override;
	virtual ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec* unmarshalParams(::org::w3c::dom::Element* paramsElem);
	virtual bool verify(::java::security::Key* key, ::javax::xml::crypto::dsig::SignedInfo* si, $bytes* sig, ::javax::xml::crypto::dsig::XMLValidateContext* context) {return false;}
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_AbstractDOMSignatureMethod_h_