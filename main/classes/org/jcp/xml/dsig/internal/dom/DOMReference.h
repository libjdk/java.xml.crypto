#ifndef _org_jcp_xml_dsig_internal_dom_DOMReference_h_
#define _org_jcp_xml_dsig_internal_dom_DOMReference_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMReference
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.Reference,javax.xml.crypto.dom.DOMURIReference

#include <java/lang/Array.h>
#include <javax/xml/crypto/dom/DOMURIReference.h>
#include <javax/xml/crypto/dsig/Reference.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("MAXIMUM_TRANSFORM_COUNT")
#undef MAXIMUM_TRANSFORM_COUNT

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
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace security {
		class MessageDigest;
		class Provider;
	}
}
namespace java {
	namespace util {
		class List;
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
				class DigestMethod;
				class XMLSignContext;
				class XMLValidateContext;
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
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

class DOMReference : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::Reference, public ::javax::xml::crypto::dom::DOMURIReference {
	$class(DOMReference, 0, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::Reference, ::javax::xml::crypto::dom::DOMURIReference)
public:
	DOMReference();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual bool isFeatureSupported($String* feature) override;
	void init$($String* uri, $String* type, ::javax::xml::crypto::dsig::DigestMethod* dm, ::java::util::List* transforms, $String* id, ::java::security::Provider* provider);
	void init$($String* uri, $String* type, ::javax::xml::crypto::dsig::DigestMethod* dm, ::java::util::List* appliedTransforms, ::javax::xml::crypto::Data* result, ::java::util::List* transforms, $String* id, ::java::security::Provider* provider);
	void init$($String* uri, $String* type, ::javax::xml::crypto::dsig::DigestMethod* dm, ::java::util::List* appliedTransforms, ::javax::xml::crypto::Data* result, ::java::util::List* transforms, $String* id, $bytes* digestValue, ::java::security::Provider* provider);
	void init$(::org::w3c::dom::Element* refElem, ::javax::xml::crypto::XMLCryptoContext* context, ::java::security::Provider* provider);
	static ::javax::xml::crypto::Data* copyDerefData(::javax::xml::crypto::Data* dereferencedData);
	::javax::xml::crypto::Data* dereference(::javax::xml::crypto::XMLCryptoContext* context);
	void digest(::javax::xml::crypto::dsig::XMLSignContext* signContext);
	virtual bool equals(Object$* o) override;
	virtual $bytes* getCalculatedDigestValue() override;
	virtual ::javax::xml::crypto::Data* getDereferencedData() override;
	virtual ::java::io::InputStream* getDigestInputStream() override;
	virtual ::javax::xml::crypto::dsig::DigestMethod* getDigestMethod() override;
	virtual $bytes* getDigestValue() override;
	virtual ::org::w3c::dom::Node* getHere() override;
	virtual $String* getId() override;
	virtual ::java::util::List* getTransforms() override;
	virtual $String* getType() override;
	virtual $String* getURI() override;
	virtual int32_t hashCode() override;
	bool isDigested();
	static ::java::lang::Boolean* lambda$static$0();
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual $String* toString() override;
	$bytes* transform(::javax::xml::crypto::Data* dereferencedData, ::javax::xml::crypto::XMLCryptoContext* context);
	virtual bool validate(::javax::xml::crypto::dsig::XMLValidateContext* validateContext) override;
	static const int32_t MAXIMUM_TRANSFORM_COUNT = 5;
	static bool useC14N11;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::javax::xml::crypto::dsig::DigestMethod* digestMethod = nullptr;
	$String* id = nullptr;
	::java::util::List* transforms = nullptr;
	::java::util::List* allTransforms = nullptr;
	::javax::xml::crypto::Data* appliedTransformData = nullptr;
	::org::w3c::dom::Attr* here = nullptr;
	$String* uri = nullptr;
	$String* type = nullptr;
	$bytes* digestValue = nullptr;
	$bytes* calcDigestValue = nullptr;
	::org::w3c::dom::Element* refElem = nullptr;
	bool digested = false;
	bool validated = false;
	bool validationStatus = false;
	::javax::xml::crypto::Data* derefData = nullptr;
	::java::io::InputStream* dis = nullptr;
	::java::security::MessageDigest* md = nullptr;
	::java::security::Provider* provider = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("LOG")
#pragma pop_macro("MAXIMUM_TRANSFORM_COUNT")

#endif // _org_jcp_xml_dsig_internal_dom_DOMReference_h_