#ifndef _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod_h_
#define _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMSignatureMethod
//$ extends org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod

#include <java/lang/Array.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>

#pragma push_macro("DOM_SIGNATURE_PROVIDER")
#undef DOM_SIGNATURE_PROVIDER
#pragma push_macro("DSA_SHA256")
#undef DSA_SHA256
#pragma push_macro("ECDSA_RIPEMD160")
#undef ECDSA_RIPEMD160
#pragma push_macro("ECDSA_SHA1")
#undef ECDSA_SHA1
#pragma push_macro("ECDSA_SHA224")
#undef ECDSA_SHA224
#pragma push_macro("ECDSA_SHA256")
#undef ECDSA_SHA256
#pragma push_macro("ECDSA_SHA384")
#undef ECDSA_SHA384
#pragma push_macro("ECDSA_SHA512")
#undef ECDSA_SHA512
#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("RSA_RIPEMD160")
#undef RSA_RIPEMD160
#pragma push_macro("RSA_SHA1_MGF1")
#undef RSA_SHA1_MGF1
#pragma push_macro("RSA_SHA224")
#undef RSA_SHA224
#pragma push_macro("RSA_SHA256")
#undef RSA_SHA256
#pragma push_macro("RSA_SHA384")
#undef RSA_SHA384
#pragma push_macro("RSA_SHA512")
#undef RSA_SHA512

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
		class Provider;
		class Signature;
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
				class SignatureMethod;
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

class DOMSignatureMethod : public ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod {
	$class(DOMSignatureMethod, 0, ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod)
public:
	DOMSignatureMethod();
	void init$(::java::security::spec::AlgorithmParameterSpec* params);
	void init$(::org::w3c::dom::Element* smElem);
	static void checkKeySize(::javax::xml::crypto::XMLCryptoContext* context, ::java::security::Key* key);
	virtual bool equals(Object$* o) override;
	virtual ::java::security::spec::AlgorithmParameterSpec* getParameterSpec() override;
	virtual ::java::security::Signature* getSignature(::java::security::Provider* p);
	virtual int32_t hashCode() override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual $bytes* postSignFormat(::java::security::Key* key, $bytes* sig) {return nullptr;}
	virtual $bytes* preVerifyFormat(::java::security::Key* key, $bytes* sig) {return nullptr;}
	virtual $bytes* sign(::java::security::Key* key, ::javax::xml::crypto::dsig::SignedInfo* si, ::javax::xml::crypto::dsig::XMLSignContext* context) override;
	static ::javax::xml::crypto::dsig::SignatureMethod* unmarshal(::org::w3c::dom::Element* smElem);
	virtual bool verify(::java::security::Key* key, ::javax::xml::crypto::dsig::SignedInfo* si, $bytes* sig, ::javax::xml::crypto::dsig::XMLValidateContext* context) override;
	static $String* DOM_SIGNATURE_PROVIDER;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec* params = nullptr;
	::java::security::Signature* signature = nullptr;
	static $String* RSA_SHA224;
	static $String* RSA_SHA256;
	static $String* RSA_SHA384;
	static $String* RSA_SHA512;
	static $String* RSA_RIPEMD160;
	static $String* ECDSA_SHA1;
	static $String* ECDSA_SHA224;
	static $String* ECDSA_SHA256;
	static $String* ECDSA_SHA384;
	static $String* ECDSA_SHA512;
	static $String* DSA_SHA256;
	static $String* ECDSA_RIPEMD160;
	static $String* RSA_SHA1_MGF1;
	static $String* RSA_SHA224_MGF1;
	static $String* RSA_SHA256_MGF1;
	static $String* RSA_SHA384_MGF1;
	static $String* RSA_SHA512_MGF1;
	static $String* RSA_RIPEMD160_MGF1;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("DOM_SIGNATURE_PROVIDER")
#pragma pop_macro("DSA_SHA256")
#pragma pop_macro("ECDSA_RIPEMD160")
#pragma pop_macro("ECDSA_SHA1")
#pragma pop_macro("ECDSA_SHA224")
#pragma pop_macro("ECDSA_SHA256")
#pragma pop_macro("ECDSA_SHA384")
#pragma pop_macro("ECDSA_SHA512")
#pragma pop_macro("LOG")
#pragma pop_macro("RSA_RIPEMD160")
#pragma pop_macro("RSA_SHA1_MGF1")
#pragma pop_macro("RSA_SHA224")
#pragma pop_macro("RSA_SHA256")
#pragma pop_macro("RSA_SHA384")
#pragma pop_macro("RSA_SHA512")

#endif // _org_jcp_xml_dsig_internal_dom_DOMSignatureMethod_h_