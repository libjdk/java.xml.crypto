#ifndef _com_sun_org_apache_xml_internal_security_c14n_implementations_Canonicalizer20010315Excl_h_
#define _com_sun_org_apache_xml_internal_security_c14n_implementations_Canonicalizer20010315Excl_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315Excl
//$ extends com.sun.org.apache.xml.internal.security.c14n.implementations.CanonicalizerBase

#include <com/sun/org/apache/xml/internal/security/c14n/implementations/CanonicalizerBase.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {
									class NameSpaceSymbTable;
								}
							}
						}
					}
				}
			}
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
								class XMLSignatureInput;
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
		class SortedSet;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {

class Canonicalizer20010315Excl : public ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase {
	$class(Canonicalizer20010315Excl, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase)
public:
	Canonicalizer20010315Excl();
	using ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase::engineCanonicalizeXPathNodeSet;
	using ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase::engineCanonicalize;
	using ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase::engineCanonicalizeSubTree;
	void init$(bool includeComments);
	virtual void circumventBugIfNeeded(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input) override;
	virtual void engineCanonicalize(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* rootNode, $String* inclusiveNamespaces, ::java::io::OutputStream* writer, bool secureValidation);
	virtual void engineCanonicalizeSubTree(::org::w3c::dom::Node* rootNode, ::java::io::OutputStream* writer) override;
	virtual void engineCanonicalizeSubTree(::org::w3c::dom::Node* rootNode, $String* inclusiveNamespaces, ::java::io::OutputStream* writer) override;
	virtual void engineCanonicalizeSubTree(::org::w3c::dom::Node* rootNode, $String* inclusiveNamespaces, bool propagateDefaultNamespace, ::java::io::OutputStream* writer) override;
	virtual void engineCanonicalizeSubTree(::org::w3c::dom::Node* rootNode, $String* inclusiveNamespaces, ::org::w3c::dom::Node* excl, ::java::io::OutputStream* writer);
	virtual void engineCanonicalizeXPathNodeSet(::java::util::Set* xpathNodeSet, $String* inclusiveNamespaces, ::java::io::OutputStream* writer) override;
	virtual void outputAttributes(::org::w3c::dom::Element* element, ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable* ns, ::java::util::Map* cache, ::java::io::OutputStream* writer) override;
	virtual void outputAttributesSubtree(::org::w3c::dom::Element* element, ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable* ns, ::java::util::Map* cache, ::java::io::OutputStream* writer) override;
	::java::util::SortedSet* inclusiveNSSet = nullptr;
	bool propagateDefaultNamespace = false;
};

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_c14n_implementations_Canonicalizer20010315Excl_h_