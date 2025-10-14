#ifndef _org_jcp_xml_dsig_internal_dom_DOMHMACSignatureMethod_h_
#define _org_jcp_xml_dsig_internal_dom_DOMHMACSignatureMethod_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod
//$ extends org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod

#include <java/lang/Array.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>

#pragma push_macro("DOM_SIGNATURE_PROVIDER")
#undef DOM_SIGNATURE_PROVIDER
#pragma push_macro("HMAC_RIPEMD160")
#undef HMAC_RIPEMD160
#pragma push_macro("HMAC_SHA224")
#undef HMAC_SHA224
#pragma push_macro("HMAC_SHA256")
#undef HMAC_SHA256
#pragma push_macro("HMAC_SHA384")
#undef HMAC_SHA384
#pragma push_macro("HMAC_SHA512")
#undef HMAC_SHA512
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
	namespace crypto {
		class Mac;
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

class DOMHMACSignatureMethod : public ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod {
	$class(DOMHMACSignatureMethod, 0, ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod)
public:
	DOMHMACSignatureMethod();
	void init$(::java::security::spec::AlgorithmParameterSpec* params);
	void init$(::org::w3c::dom::Element* smElem);
	virtual void checkParams(::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec* params) override;
	virtual bool equals(Object$* o) override;
	virtual ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type* getAlgorithmType() override;
	virtual int32_t getDigestLength() {return 0;}
	virtual ::java::security::spec::AlgorithmParameterSpec* getParameterSpec() override;
	virtual int32_t hashCode() override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual void marshalParams(::org::w3c::dom::Element* parent, $String* prefix) override;
	virtual bool paramsEqual(::java::security::spec::AlgorithmParameterSpec* spec) override;
	virtual $bytes* sign(::java::security::Key* key, ::javax::xml::crypto::dsig::SignedInfo* si, ::javax::xml::crypto::dsig::XMLSignContext* context) override;
	virtual ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec* unmarshalParams(::org::w3c::dom::Element* paramsElem) override;
	virtual bool verify(::java::security::Key* key, ::javax::xml::crypto::dsig::SignedInfo* si, $bytes* sig, ::javax::xml::crypto::dsig::XMLValidateContext* context) override;
	static $String* DOM_SIGNATURE_PROVIDER;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static $String* HMAC_SHA224;
	static $String* HMAC_SHA256;
	static $String* HMAC_SHA384;
	static $String* HMAC_SHA512;
	static $String* HMAC_RIPEMD160;
	::javax::crypto::Mac* hmac = nullptr;
	int32_t outputLength = 0;
	bool outputLengthSet = false;
	::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec* params = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("DOM_SIGNATURE_PROVIDER")
#pragma pop_macro("HMAC_RIPEMD160")
#pragma pop_macro("HMAC_SHA224")
#pragma pop_macro("HMAC_SHA256")
#pragma pop_macro("HMAC_SHA384")
#pragma pop_macro("HMAC_SHA512")
#pragma pop_macro("LOG")

#endif // _org_jcp_xml_dsig_internal_dom_DOMHMACSignatureMethod_h_