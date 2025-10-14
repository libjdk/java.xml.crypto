#ifndef _org_jcp_xml_dsig_internal_dom_DOMCanonicalizationMethod_h_
#define _org_jcp_xml_dsig_internal_dom_DOMCanonicalizationMethod_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMCanonicalizationMethod
//$ extends org.jcp.xml.dsig.internal.dom.DOMTransform
//$ implements javax.xml.crypto.dsig.CanonicalizationMethod

#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMTransform.h>

#pragma push_macro("C14N_ALGORITHMS")
#undef C14N_ALGORITHMS

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace util {
		class Set;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class Data;
			class XMLCryptoContext;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				class TransformService;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Element;
		}
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class DOMCanonicalizationMethod : public ::org::jcp::xml::dsig::internal::dom::DOMTransform, public ::javax::xml::crypto::dsig::CanonicalizationMethod {
	$class(DOMCanonicalizationMethod, 0, ::org::jcp::xml::dsig::internal::dom::DOMTransform, ::javax::xml::crypto::dsig::CanonicalizationMethod)
public:
	DOMCanonicalizationMethod();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual $String* getAlgorithm() override;
	virtual ::java::security::spec::AlgorithmParameterSpec* getParameterSpec() override;
	virtual bool isFeatureSupported($String* feature) override;
	void init$(::javax::xml::crypto::dsig::TransformService* spi);
	void init$(::org::w3c::dom::Element* cmElem, ::javax::xml::crypto::XMLCryptoContext* context, ::java::security::Provider* provider);
	virtual ::javax::xml::crypto::Data* canonicalize(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* xc);
	virtual ::javax::xml::crypto::Data* canonicalize(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* xc, ::java::io::OutputStream* os);
	virtual bool equals(Object$* o) override;
	virtual int32_t hashCode() override;
	static bool isC14Nalg($String* alg);
	using ::org::jcp::xml::dsig::internal::dom::DOMTransform::transform;
	virtual $String* toString() override;
	virtual ::javax::xml::crypto::Data* transform(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* xc) override;
	virtual ::javax::xml::crypto::Data* transform(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* xc, ::java::io::OutputStream* os) override;
	static ::java::util::Set* C14N_ALGORITHMS;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("C14N_ALGORITHMS")

#endif // _org_jcp_xml_dsig_internal_dom_DOMCanonicalizationMethod_h_