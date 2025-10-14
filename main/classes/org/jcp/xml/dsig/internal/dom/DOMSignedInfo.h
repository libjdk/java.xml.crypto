#ifndef _org_jcp_xml_dsig_internal_dom_DOMSignedInfo_h_
#define _org_jcp_xml_dsig_internal_dom_DOMSignedInfo_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMSignedInfo
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.SignedInfo

#include <javax/xml/crypto/dsig/SignedInfo.h>
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
	namespace io {
		class ByteArrayOutputStream;
		class InputStream;
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
				class CanonicalizationMethod;
				class SignatureMethod;
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

class DOMSignedInfo : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::SignedInfo {
	$class(DOMSignedInfo, 0, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::SignedInfo)
public:
	DOMSignedInfo();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	virtual bool isFeatureSupported($String* feature) override;
	void init$(::javax::xml::crypto::dsig::CanonicalizationMethod* cm, ::javax::xml::crypto::dsig::SignatureMethod* sm, ::java::util::List* references);
	void init$(::javax::xml::crypto::dsig::CanonicalizationMethod* cm, ::javax::xml::crypto::dsig::SignatureMethod* sm, ::java::util::List* references, $String* id);
	void init$(::org::w3c::dom::Element* siElem, ::javax::xml::crypto::XMLCryptoContext* context, ::java::security::Provider* provider);
	void canonicalize(::javax::xml::crypto::XMLCryptoContext* context, ::java::io::ByteArrayOutputStream* bos);
	virtual bool equals(Object$* o) override;
	virtual ::javax::xml::crypto::dsig::CanonicalizationMethod* getCanonicalizationMethod() override;
	virtual ::java::io::InputStream* getCanonicalizedData() override;
	virtual $String* getId() override;
	virtual ::java::util::List* getReferences() override;
	virtual ::javax::xml::crypto::dsig::SignatureMethod* getSignatureMethod() override;
	static ::java::util::List* getSignedInfoReferences(::javax::xml::crypto::dsig::SignedInfo* si);
	virtual int32_t hashCode() override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual $String* toString() override;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::java::util::List* references = nullptr;
	::javax::xml::crypto::dsig::CanonicalizationMethod* canonicalizationMethod = nullptr;
	::javax::xml::crypto::dsig::SignatureMethod* signatureMethod = nullptr;
	$String* id = nullptr;
	::org::w3c::dom::Document* ownerDoc = nullptr;
	::org::w3c::dom::Element* localSiElem = nullptr;
	::java::io::InputStream* canonData = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#pragma pop_macro("LOG")

#endif // _org_jcp_xml_dsig_internal_dom_DOMSignedInfo_h_