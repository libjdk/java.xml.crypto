#ifndef _com_sun_org_apache_xml_internal_security_signature_reference_ReferenceSubTreeData$DelayedNodeIterator_h_
#define _com_sun_org_apache_xml_internal_security_signature_reference_ReferenceSubTreeData$DelayedNodeIterator_h_
//$ class com.sun.org.apache.xml.internal.security.signature.reference.ReferenceSubTreeData$DelayedNodeIterator
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								namespace reference {

class ReferenceSubTreeData$DelayedNodeIterator : public ::java::util::Iterator {
	$class(ReferenceSubTreeData$DelayedNodeIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	ReferenceSubTreeData$DelayedNodeIterator();
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

								} // reference
							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_signature_reference_ReferenceSubTreeData$DelayedNodeIterator_h_