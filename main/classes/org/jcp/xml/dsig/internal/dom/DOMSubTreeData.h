#ifndef _org_jcp_xml_dsig_internal_dom_DOMSubTreeData_h_
#define _org_jcp_xml_dsig_internal_dom_DOMSubTreeData_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMSubTreeData
//$ extends javax.xml.crypto.NodeSetData

#include <javax/xml/crypto/NodeSetData.h>

namespace java {
	namespace util {
		class Iterator;
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

class DOMSubTreeData : public ::javax::xml::crypto::NodeSetData {
	$class(DOMSubTreeData, $NO_CLASS_INIT, ::javax::xml::crypto::NodeSetData)
public:
	DOMSubTreeData();
	void init$(::org::w3c::dom::Node* root, bool excludeComments);
	virtual bool excludeComments();
	virtual ::org::w3c::dom::Node* getRoot();
	virtual ::java::util::Iterator* iterator() override;
	bool excludeComments$ = false;
	::org::w3c::dom::Node* root = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMSubTreeData_h_