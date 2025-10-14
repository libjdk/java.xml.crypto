#ifndef _com_sun_org_apache_xml_internal_security_c14n_implementations_CanonicalizerPhysical_h_
#define _com_sun_org_apache_xml_internal_security_c14n_implementations_CanonicalizerPhysical_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.implementations.CanonicalizerPhysical
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
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Comment;
			class Element;
			class Node;
			class ProcessingInstruction;
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

class CanonicalizerPhysical : public ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase {
	$class(CanonicalizerPhysical, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase)
public:
	CanonicalizerPhysical();
	using ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase::engineCanonicalizeSubTree;
	using ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase::engineCanonicalizeXPathNodeSet;
	using ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase::engineCanonicalize;
	void init$();
	virtual void circumventBugIfNeeded(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input) override;
	virtual void engineCanonicalizeSubTree(::org::w3c::dom::Node* rootNode, $String* inclusiveNamespaces, ::java::io::OutputStream* writer) override;
	virtual void engineCanonicalizeSubTree(::org::w3c::dom::Node* rootNode, $String* inclusiveNamespaces, bool propagateDefaultNamespace, ::java::io::OutputStream* writer) override;
	virtual void engineCanonicalizeXPathNodeSet(::java::util::Set* xpathNodeSet, $String* inclusiveNamespaces, ::java::io::OutputStream* writer) override;
	virtual $String* engineGetURI() override;
	virtual void handleParent(::org::w3c::dom::Element* e, ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable* ns) override;
	virtual void outputAttributes(::org::w3c::dom::Element* element, ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable* ns, ::java::util::Map* cache, ::java::io::OutputStream* writer) override;
	virtual void outputAttributesSubtree(::org::w3c::dom::Element* element, ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable* ns, ::java::util::Map* cache, ::java::io::OutputStream* writer) override;
	virtual void outputCommentToWriter(::org::w3c::dom::Comment* currentComment, ::java::io::OutputStream* writer, int32_t position) override;
	virtual void outputPItoWriter(::org::w3c::dom::ProcessingInstruction* currentPI, ::java::io::OutputStream* writer, int32_t position) override;
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

#endif // _com_sun_org_apache_xml_internal_security_c14n_implementations_CanonicalizerPhysical_h_