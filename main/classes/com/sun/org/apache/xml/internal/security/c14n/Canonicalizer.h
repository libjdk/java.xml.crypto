#ifndef _com_sun_org_apache_xml_internal_security_c14n_Canonicalizer_h_
#define _com_sun_org_apache_xml_internal_security_c14n_Canonicalizer_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.Canonicalizer
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("ALGO_ID_C14N_EXCL_OMIT_COMMENTS")
#undef ALGO_ID_C14N_EXCL_OMIT_COMMENTS
#pragma push_macro("ALGO_ID_C14N_EXCL_WITH_COMMENTS")
#undef ALGO_ID_C14N_EXCL_WITH_COMMENTS
#pragma push_macro("ALGO_ID_C14N_OMIT_COMMENTS")
#undef ALGO_ID_C14N_OMIT_COMMENTS
#pragma push_macro("ALGO_ID_C14N_PHYSICAL")
#undef ALGO_ID_C14N_PHYSICAL
#pragma push_macro("ALGO_ID_C14N_WITH_COMMENTS")
#undef ALGO_ID_C14N_WITH_COMMENTS
#pragma push_macro("ENCODING")
#undef ENCODING
#pragma push_macro("XPATH_C14N_WITH_COMMENTS_SINGLE_NODE")
#undef XPATH_C14N_WITH_COMMENTS_SINGLE_NODE

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								class CanonicalizerSpi;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class Map;
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

class Canonicalizer : public ::java::lang::Object {
	$class(Canonicalizer, 0, ::java::lang::Object)
public:
	Canonicalizer();
	void init$($String* algorithmURI);
	void canonicalize($bytes* inputBytes, ::java::io::OutputStream* writer, bool secureValidation);
	void canonicalizeSubtree(::org::w3c::dom::Node* node, ::java::io::OutputStream* writer);
	void canonicalizeSubtree(::org::w3c::dom::Node* node, $String* inclusiveNamespaces, ::java::io::OutputStream* writer);
	void canonicalizeSubtree(::org::w3c::dom::Node* node, $String* inclusiveNamespaces, bool propagateDefaultNamespace, ::java::io::OutputStream* writer);
	void canonicalizeXPathNodeSet(::java::util::Set* xpathNodeSet, ::java::io::OutputStream* writer);
	void canonicalizeXPathNodeSet(::java::util::Set* xpathNodeSet, $String* inclusiveNamespaces, ::java::io::OutputStream* writer);
	static ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer* getInstance($String* algorithmURI);
	static void register$($String* algorithmURI, $String* implementingClass);
	static void register$($String* algorithmURI, $Class* implementingClass);
	static void registerDefaultAlgorithms();
	static $String* ENCODING;
	static $String* XPATH_C14N_WITH_COMMENTS_SINGLE_NODE;
	static $String* ALGO_ID_C14N_OMIT_COMMENTS;
	static $String* ALGO_ID_C14N_WITH_COMMENTS;
	static $String* ALGO_ID_C14N_EXCL_OMIT_COMMENTS;
	static $String* ALGO_ID_C14N_EXCL_WITH_COMMENTS;
	static $String* ALGO_ID_C14N11_OMIT_COMMENTS;
	static $String* ALGO_ID_C14N11_WITH_COMMENTS;
	static $String* ALGO_ID_C14N_PHYSICAL;
	static ::java::util::Map* canonicalizerHash;
	::com::sun::org::apache::xml::internal::security::c14n::CanonicalizerSpi* canonicalizerSpi = nullptr;
};

							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALGO_ID_C14N_EXCL_OMIT_COMMENTS")
#pragma pop_macro("ALGO_ID_C14N_EXCL_WITH_COMMENTS")
#pragma pop_macro("ALGO_ID_C14N_OMIT_COMMENTS")
#pragma pop_macro("ALGO_ID_C14N_PHYSICAL")
#pragma pop_macro("ALGO_ID_C14N_WITH_COMMENTS")
#pragma pop_macro("ENCODING")
#pragma pop_macro("XPATH_C14N_WITH_COMMENTS_SINGLE_NODE")

#endif // _com_sun_org_apache_xml_internal_security_c14n_Canonicalizer_h_