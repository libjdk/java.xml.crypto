#ifndef _org_jcp_xml_dsig_internal_dom_DOMDigestMethod_h_
#define _org_jcp_xml_dsig_internal_dom_DOMDigestMethod_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMDigestMethod
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.DigestMethod

#include <javax/xml/crypto/dsig/DigestMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

#pragma push_macro("WHIRLPOOL")
#undef WHIRLPOOL

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
				namespace spec {
					class DigestMethodParameterSpec;
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

class DOMDigestMethod : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::DigestMethod {
	$class(DOMDigestMethod, 0, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::DigestMethod)
public:
	DOMDigestMethod();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::security::spec::AlgorithmParameterSpec* params);
	void init$(::org::w3c::dom::Element* dmElem);
	virtual void checkParams(::javax::xml::crypto::dsig::spec::DigestMethodParameterSpec* params);
	virtual bool equals(Object$* o) override;
	virtual $String* getMessageDigestAlgorithm() {return nullptr;}
	virtual ::java::security::spec::AlgorithmParameterSpec* getParameterSpec() override;
	virtual int32_t hashCode() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* prefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual void marshalParams(::org::w3c::dom::Element* parent, $String* prefix);
	virtual $String* toString() override;
	static ::javax::xml::crypto::dsig::DigestMethod* unmarshal(::org::w3c::dom::Element* dmElem);
	virtual ::javax::xml::crypto::dsig::spec::DigestMethodParameterSpec* unmarshalParams(::org::w3c::dom::Element* paramsElem);
	static $String* SHA224;
	static $String* SHA384;
	static $String* WHIRLPOOL;
	static $String* SHA3_224;
	static $String* SHA3_256;
	static $String* SHA3_384;
	static $String* SHA3_512;
	::javax::xml::crypto::dsig::spec::DigestMethodParameterSpec* params = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("WHIRLPOOL")

#endif // _org_jcp_xml_dsig_internal_dom_DOMDigestMethod_h_