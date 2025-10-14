#ifndef _org_jcp_xml_dsig_internal_dom_DOMKeyName_h_
#define _org_jcp_xml_dsig_internal_dom_DOMKeyName_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMKeyName
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.keyinfo.KeyName

#include <javax/xml/crypto/dsig/keyinfo/KeyName.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

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

class DOMKeyName : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::keyinfo::KeyName {
	$class(DOMKeyName, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::keyinfo::KeyName)
public:
	DOMKeyName();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* name);
	void init$(::org::w3c::dom::Element* knElem);
	virtual bool equals(Object$* obj) override;
	virtual $String* getName() override;
	virtual int32_t hashCode() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual $String* toString() override;
	$String* name = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMKeyName_h_