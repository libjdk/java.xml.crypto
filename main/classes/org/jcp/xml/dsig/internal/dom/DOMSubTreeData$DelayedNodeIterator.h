#ifndef _org_jcp_xml_dsig_internal_dom_DOMSubTreeData$DelayedNodeIterator_h_
#define _org_jcp_xml_dsig_internal_dom_DOMSubTreeData$DelayedNodeIterator_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMSubTreeData$DelayedNodeIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace util {
		class List;
		class ListIterator;
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

class DOMSubTreeData$DelayedNodeIterator : public ::java::util::Iterator {
	$class(DOMSubTreeData$DelayedNodeIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	DOMSubTreeData$DelayedNodeIterator();
	void init$(::org::w3c::dom::Node* root, bool excludeComments);
	::java::util::List* dereferenceSameDocumentURI(::org::w3c::dom::Node* node);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	void nodeSetMinusCommentNodes(::org::w3c::dom::Node* node, ::java::util::List* nodeSet, ::org::w3c::dom::Node* prevSibling);
	virtual void remove() override;
	::org::w3c::dom::Node* root = nullptr;
	::java::util::List* nodeSet = nullptr;
	::java::util::ListIterator* li = nullptr;
	bool withComments = false;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMSubTreeData$DelayedNodeIterator_h_