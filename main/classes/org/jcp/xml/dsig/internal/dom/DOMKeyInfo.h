#ifndef _org_jcp_xml_dsig_internal_dom_DOMKeyInfo_h_
#define _org_jcp_xml_dsig_internal_dom_DOMKeyInfo_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMKeyInfo
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.keyinfo.KeyInfo

#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

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
			class XMLStructure;
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

class DOMKeyInfo : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::keyinfo::KeyInfo {
	$class(DOMKeyInfo, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::keyinfo::KeyInfo)
public:
	DOMKeyInfo();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::util::List* content, $String* id);
	void init$(::org::w3c::dom::Element* kiElem, ::javax::xml::crypto::XMLCryptoContext* context, ::java::security::Provider* provider);
	virtual bool equals(Object$* o) override;
	static ::java::util::List* getContent(::javax::xml::crypto::dsig::keyinfo::KeyInfo* ki);
	virtual ::java::util::List* getContent() override;
	virtual $String* getId() override;
	virtual int32_t hashCode() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshal(::javax::xml::crypto::XMLStructure* parent, ::javax::xml::crypto::XMLCryptoContext* context) override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	void marshal(::org::w3c::dom::Node* parent, ::org::w3c::dom::Node* nextSibling, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context);
	void marshal(::org::w3c::dom::Node* parent, ::org::w3c::dom::Element* kiElem, ::org::w3c::dom::Node* nextSibling, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context);
	virtual $String* toString() override;
	$String* id = nullptr;
	::java::util::List* keyInfoTypes = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMKeyInfo_h_