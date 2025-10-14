#ifndef _com_sun_org_apache_xml_internal_security_c14n_CanonicalizerSpi_h_
#define _com_sun_org_apache_xml_internal_security_c14n_CanonicalizerSpi_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.CanonicalizerSpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Set;
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
							namespace c14n {

class CanonicalizerSpi : public ::java::lang::Object {
	$class(CanonicalizerSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	CanonicalizerSpi();
	void init$();
	virtual void engineCanonicalize($bytes* inputBytes, ::java::io::OutputStream* writer, bool secureValidation);
	virtual void engineCanonicalizeSubTree(::org::w3c::dom::Node* rootNode, ::java::io::OutputStream* writer) {}
	virtual void engineCanonicalizeSubTree(::org::w3c::dom::Node* rootNode, $String* inclusiveNamespaces, ::java::io::OutputStream* writer) {}
	virtual void engineCanonicalizeSubTree(::org::w3c::dom::Node* rootNode, $String* inclusiveNamespaces, bool propagateDefaultNamespace, ::java::io::OutputStream* writer) {}
	virtual void engineCanonicalizeXPathNodeSet(::java::util::Set* xpathNodeSet, ::java::io::OutputStream* writer) {}
	virtual void engineCanonicalizeXPathNodeSet(::java::util::Set* xpathNodeSet, $String* inclusiveNamespaces, ::java::io::OutputStream* writer) {}
	virtual $String* engineGetURI() {return nullptr;}
};

							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_c14n_CanonicalizerSpi_h_