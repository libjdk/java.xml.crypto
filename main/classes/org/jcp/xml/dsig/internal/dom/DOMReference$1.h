#ifndef _org_jcp_xml_dsig_internal_dom_DOMReference$1_h_
#define _org_jcp_xml_dsig_internal_dom_DOMReference$1_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMReference$1
//$ extends javax.xml.crypto.NodeSetData

#include <javax/xml/crypto/NodeSetData.h>

namespace java {
	namespace util {
		class Iterator;
		class Set;
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class DOMReference$1 : public ::javax::xml::crypto::NodeSetData {
	$class(DOMReference$1, $NO_CLASS_INIT, ::javax::xml::crypto::NodeSetData)
public:
	DOMReference$1();
	void init$(::java::util::Set* val$s);
	virtual ::java::util::Iterator* iterator() override;
	::java::util::Set* val$s = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMReference$1_h_