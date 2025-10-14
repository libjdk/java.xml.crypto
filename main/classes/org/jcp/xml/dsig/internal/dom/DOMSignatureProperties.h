#ifndef _org_jcp_xml_dsig_internal_dom_DOMSignatureProperties_h_
#define _org_jcp_xml_dsig_internal_dom_DOMSignatureProperties_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMSignatureProperties
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.SignatureProperties

#include <javax/xml/crypto/dsig/SignatureProperties.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

namespace java {
	namespace util {
		class List;
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

class DOMSignatureProperties : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::SignatureProperties {
	$class(DOMSignatureProperties, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::SignatureProperties)
public:
	DOMSignatureProperties();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::util::List* properties, $String* id);
	void init$(::org::w3c::dom::Element* propsElem);
	virtual bool equals(Object$* o) override;
	virtual $String* getId() override;
	virtual ::java::util::List* getProperties() override;
	virtual int32_t hashCode() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual $String* toString() override;
	$String* id = nullptr;
	::java::util::List* properties = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMSignatureProperties_h_