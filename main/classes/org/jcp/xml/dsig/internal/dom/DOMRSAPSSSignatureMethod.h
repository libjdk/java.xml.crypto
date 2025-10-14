#ifndef _org_jcp_xml_dsig_internal_dom_DOMRSAPSSSignatureMethod_h_
#define _org_jcp_xml_dsig_internal_dom_DOMRSAPSSSignatureMethod_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod
//$ extends org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod

#include <java/lang/Array.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>

#pragma push_macro("DEFAULT_PSS_SPEC")
#undef DEFAULT_PSS_SPEC
#pragma push_macro("DOM_SIGNATURE_PROVIDER")
#undef DOM_SIGNATURE_PROVIDER
#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("RSA_PSS")
#undef RSA_PSS

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {
									class SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;
								}
							}
						}
					}
				}
			}
		}
	}
}
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
		class Signature;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
			class PSSParameterSpec;
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
					class RSAPSSParameterSpec;
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

class DOMRSAPSSSignatureMethod : public ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod {
	$class(DOMRSAPSSSignatureMethod, 0, ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod)
public:
	DOMRSAPSSSignatureMethod();
	void init$(::java::security::spec::AlgorithmParameterSpec* params);
	void init$(::org::w3c::dom::Element* smElem);
	virtual void checkParams(::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec* params) override;
	virtual bool equals(Object$* o) override;
	virtual ::java::security::spec::AlgorithmParameterSpec* getParameterSpec() override;
	virtual int32_t hashCode() override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual void marshalParams(::org::w3c::dom::Element* parent, $String* prefix) override;
	virtual bool paramsEqual(::java::security::spec::AlgorithmParameterSpec* spec) override;
	virtual $bytes* sign(::java::security::Key* key, ::javax::xml::crypto::dsig::SignedInfo* si, ::javax::xml::crypto::dsig::XMLSignContext* context) override;
	virtual ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec* unmarshalParams(::org::w3c::dom::Element* paramsElem) override;
	static ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* validateDigestAlgorithm($String* input);
	virtual bool verify(::java::security::Key* key, ::javax::xml::crypto::dsig::SignedInfo* si, $bytes* sig, ::javax::xml::crypto::dsig::XMLValidateContext* context) override;
	static $String* DOM_SIGNATURE_PROVIDER;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec* params = nullptr;
	::java::security::Signature* signature = nullptr;
	static $String* RSA_PSS;
	static ::javax::xml::crypto::dsig::spec::RSAPSSParameterSpec* DEFAULT_PSS_SPEC;
	::java::security::spec::PSSParameterSpec* spec = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("DEFAULT_PSS_SPEC")
#pragma pop_macro("DOM_SIGNATURE_PROVIDER")
#pragma pop_macro("LOG")
#pragma pop_macro("RSA_PSS")

#endif // _org_jcp_xml_dsig_internal_dom_DOMRSAPSSSignatureMethod_h_