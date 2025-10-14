#ifndef _org_jcp_xml_dsig_internal_dom_DOMStructure_h_
#define _org_jcp_xml_dsig_internal_dom_DOMStructure_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMStructure
//$ extends javax.xml.crypto.XMLStructure

#include <javax/xml/crypto/XMLStructure.h>

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

class DOMStructure : public ::javax::xml::crypto::XMLStructure {
	$class(DOMStructure, $NO_CLASS_INIT, ::javax::xml::crypto::XMLStructure)
public:
	DOMStructure();
	void init$();
	virtual bool equalsContent(::java::util::List* content, ::java::util::List* otherContent);
	virtual bool isFeatureSupported($String* feature) override;
	virtual void marshal(::org::w3c::dom::Node* parent, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) {}
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMStructure_h_