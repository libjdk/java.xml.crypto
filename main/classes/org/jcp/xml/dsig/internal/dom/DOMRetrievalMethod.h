#ifndef _org_jcp_xml_dsig_internal_dom_DOMRetrievalMethod_h_
#define _org_jcp_xml_dsig_internal_dom_DOMRetrievalMethod_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMRetrievalMethod
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.keyinfo.RetrievalMethod,javax.xml.crypto.dom.DOMURIReference

#include <javax/xml/crypto/dom/DOMURIReference.h>
#include <javax/xml/crypto/dsig/keyinfo/RetrievalMethod.h>
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
			class Data;
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

class DOMRetrievalMethod : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::keyinfo::RetrievalMethod, public ::javax::xml::crypto::dom::DOMURIReference {
	$class(DOMRetrievalMethod, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::keyinfo::RetrievalMethod, ::javax::xml::crypto::dom::DOMURIReference)
public:
	DOMRetrievalMethod();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$($String* uri, $String* type, ::java::util::List* transforms);
	void init$(::org::w3c::dom::Element* rmElem, ::javax::xml::crypto::XMLCryptoContext* context, ::java::security::Provider* provider);
	virtual ::javax::xml::crypto::Data* dereference(::javax::xml::crypto::XMLCryptoContext* context) override;
	::javax::xml::crypto::XMLStructure* dereferenceAsXMLStructure(::javax::xml::crypto::XMLCryptoContext* context);
	virtual bool equals(Object$* obj) override;
	virtual ::org::w3c::dom::Node* getHere() override;
	virtual ::java::util::List* getTransforms() override;
	virtual $String* getType() override;
	virtual $String* getURI() override;
	virtual int32_t hashCode() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual $String* toString() override;
	::java::util::List* transforms = nullptr;
	$String* uri = nullptr;
	$String* type = nullptr;
	::org::w3c::dom::Attr* here = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMRetrievalMethod_h_