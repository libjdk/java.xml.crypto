#ifndef _org_jcp_xml_dsig_internal_dom_DOMManifest_h_
#define _org_jcp_xml_dsig_internal_dom_DOMManifest_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMManifest
//$ extends org.jcp.xml.dsig.internal.dom.DOMStructure
//$ implements javax.xml.crypto.dsig.Manifest

#include <javax/xml/crypto/dsig/Manifest.h>
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

class DOMManifest : public ::org::jcp::xml::dsig::internal::dom::DOMStructure, public ::javax::xml::crypto::dsig::Manifest {
	$class(DOMManifest, $NO_CLASS_INIT, ::org::jcp::xml::dsig::internal::dom::DOMStructure, ::javax::xml::crypto::dsig::Manifest)
public:
	DOMManifest();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::java::util::List* references, $String* id);
	void init$(::org::w3c::dom::Element* manElem, ::javax::xml::crypto::XMLCryptoContext* context, ::java::security::Provider* provider);
	virtual bool equals(Object$* o) override;
	virtual $String* getId() override;
	static ::java::util::List* getManifestReferences(::javax::xml::crypto::dsig::Manifest* mf);
	virtual ::java::util::List* getReferences() override;
	virtual int32_t hashCode() override;
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	virtual $String* toString() override;
	::java::util::List* references = nullptr;
	$String* id = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMManifest_h_