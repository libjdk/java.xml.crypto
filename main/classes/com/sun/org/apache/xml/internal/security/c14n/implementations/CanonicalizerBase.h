#ifndef _com_sun_org_apache_xml_internal_security_c14n_implementations_CanonicalizerBase_h_
#define _com_sun_org_apache_xml_internal_security_c14n_implementations_CanonicalizerBase_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.implementations.CanonicalizerBase
//$ extends com.sun.org.apache.xml.internal.security.c14n.CanonicalizerSpi

#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizerSpi.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <java/lang/Array.h>

#pragma push_macro("AMP")
#undef AMP
#pragma push_macro("BEGIN_COMM")
#undef BEGIN_COMM
#pragma push_macro("BEGIN_PI")
#undef BEGIN_PI
#pragma push_macro("COMPARE")
#undef COMPARE
#pragma push_macro("END_COMM")
#undef END_COMM
#pragma push_macro("END_PI")
#undef END_PI
#pragma push_macro("END_TAG")
#undef END_TAG
#pragma push_macro("EQUALS_STR")
#undef EQUALS_STR
#pragma push_macro("GT")
#undef GT
#pragma push_macro("LT")
#undef LT
#pragma push_macro("NODE_AFTER_DOCUMENT_ELEMENT")
#undef NODE_AFTER_DOCUMENT_ELEMENT
#pragma push_macro("NODE_BEFORE_DOCUMENT_ELEMENT")
#undef NODE_BEFORE_DOCUMENT_ELEMENT
#pragma push_macro("NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT")
#undef NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT
#pragma push_macro("QUOT")
#undef QUOT
#pragma push_macro("XA")
#undef XA
#pragma push_macro("XD")
#undef XD
#pragma push_macro("XML")
#undef XML
#pragma push_macro("XMLNS")
#undef XMLNS
#pragma push_macro("XMLNS_URI")
#undef XMLNS_URI
#pragma push_macro("XML_LANG_URI")
#undef XML_LANG_URI

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace helper {
									class AttrCompare;
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
		class List;
		class Map;
		class Set;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class Comment;
			class Document;
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

class CanonicalizerBase : public ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizerSpi {
	$class(CanonicalizerBase, 0, ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizerSpi)
public:
	CanonicalizerBase();
	using ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizerSpi::engineCanonicalize;
	using ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizerSpi::engineCanonicalizeXPathNodeSet;
	using ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizerSpi::engineCanonicalizeSubTree;
	void init$(bool includeComments);
	void canonicalizeSubTree(::org::w3c::dom::Node* currentNode, ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable* ns, ::org::w3c::dom::Node* endnode, int32_t documentLevel, ::org::w3c::dom::Node* excludeNode, ::java::io::OutputStream* writer);
	void canonicalizeXPathNodeSet(::org::w3c::dom::Node* currentNode, ::org::w3c::dom::Node* endnode, ::java::io::OutputStream* writer);
	virtual void circumventBugIfNeeded(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input) {}
	virtual void engineCanonicalize(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* input, ::java::io::OutputStream* writer, bool secureValidation);
	virtual void engineCanonicalizeSubTree(::org::w3c::dom::Node* rootNode, ::java::io::OutputStream* writer) override;
	virtual void engineCanonicalizeSubTree(::org::w3c::dom::Node* rootNode, ::org::w3c::dom::Node* excludeNode, ::java::io::OutputStream* writer);
	virtual void engineCanonicalizeXPathNodeSet(::java::util::Set* xpathNodeSet, ::java::io::OutputStream* writer) override;
	void engineCanonicalizeXPathNodeSetInternal(::org::w3c::dom::Node* doc, ::java::io::OutputStream* writer);
	virtual ::org::w3c::dom::Attr* getNullNode(::org::w3c::dom::Document* ownerDocument);
	void getParentNameSpaces(::org::w3c::dom::Element* el, ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable* ns);
	virtual void handleParent(::org::w3c::dom::Element* e, ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable* ns);
	virtual bool isVisible(::org::w3c::dom::Node* currentNode);
	virtual int32_t isVisibleDO(::org::w3c::dom::Node* currentNode, int32_t level);
	virtual int32_t isVisibleInt(::org::w3c::dom::Node* currentNode);
	static void outputAttrToWriter($String* name, $String* value, ::java::io::OutputStream* writer, ::java::util::Map* cache);
	virtual void outputAttributes(::org::w3c::dom::Element* element, ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable* ns, ::java::util::Map* cache, ::java::io::OutputStream* writer) {}
	virtual void outputAttributesSubtree(::org::w3c::dom::Element* element, ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable* ns, ::java::util::Map* cache, ::java::io::OutputStream* writer) {}
	virtual void outputCommentToWriter(::org::w3c::dom::Comment* currentComment, ::java::io::OutputStream* writer, int32_t position);
	virtual void outputPItoWriter(::org::w3c::dom::ProcessingInstruction* currentPI, ::java::io::OutputStream* writer, int32_t position);
	static void outputTextToWriter($String* text, ::java::io::OutputStream* writer);
	static $String* XML;
	static $String* XMLNS;
	static $String* XMLNS_URI;
	static $String* XML_LANG_URI;
	static ::com::sun::org::apache::xml::internal::security::c14n::helper::AttrCompare* COMPARE;
	static const int32_t NODE_BEFORE_DOCUMENT_ELEMENT = (-1);
	static const int32_t NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT = 0;
	static const int32_t NODE_AFTER_DOCUMENT_ELEMENT = 1;
	static $bytes* END_PI;
	static $bytes* BEGIN_PI;
	static $bytes* END_COMM;
	static $bytes* BEGIN_COMM;
	static $bytes* XA;
	static $bytes* X9;
	static $bytes* QUOT;
	static $bytes* XD;
	static $bytes* GT;
	static $bytes* LT;
	static $bytes* END_TAG;
	static $bytes* AMP;
	static $bytes* EQUALS_STR;
	bool includeComments = false;
	::java::util::List* nodeFilter = nullptr;
	::java::util::Set* xpathNodeSet = nullptr;
	::org::w3c::dom::Attr* nullNode = nullptr;
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

#pragma pop_macro("AMP")
#pragma pop_macro("BEGIN_COMM")
#pragma pop_macro("BEGIN_PI")
#pragma pop_macro("COMPARE")
#pragma pop_macro("END_COMM")
#pragma pop_macro("END_PI")
#pragma pop_macro("END_TAG")
#pragma pop_macro("EQUALS_STR")
#pragma pop_macro("GT")
#pragma pop_macro("LT")
#pragma pop_macro("NODE_AFTER_DOCUMENT_ELEMENT")
#pragma pop_macro("NODE_BEFORE_DOCUMENT_ELEMENT")
#pragma pop_macro("NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT")
#pragma pop_macro("QUOT")
#pragma pop_macro("XA")
#pragma pop_macro("XD")
#pragma pop_macro("XML")
#pragma pop_macro("XMLNS")
#pragma pop_macro("XMLNS_URI")
#pragma pop_macro("XML_LANG_URI")

#endif // _com_sun_org_apache_xml_internal_security_c14n_implementations_CanonicalizerBase_h_