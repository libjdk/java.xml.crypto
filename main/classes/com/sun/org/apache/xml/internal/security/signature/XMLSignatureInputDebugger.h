#ifndef _com_sun_org_apache_xml_internal_security_signature_XMLSignatureInputDebugger_h_
#define _com_sun_org_apache_xml_internal_security_signature_XMLSignatureInputDebugger_h_
//$ class com.sun.org.apache.xml.internal.security.signature.XMLSignatureInputDebugger
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ATTR_COMPARE")
#undef ATTR_COMPARE
#pragma push_macro("NODE_AFTER_DOCUMENT_ELEMENT")
#undef NODE_AFTER_DOCUMENT_ELEMENT
#pragma push_macro("NODE_BEFORE_DOCUMENT_ELEMENT")
#undef NODE_BEFORE_DOCUMENT_ELEMENT
#pragma push_macro("NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT")
#undef NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT

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
		class Writer;
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
			class Comment;
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
							namespace signature {

class XMLSignatureInputDebugger : public ::java::lang::Object {
	$class(XMLSignatureInputDebugger, 0, ::java::lang::Object)
public:
	XMLSignatureInputDebugger();
	void init$(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* xmlSignatureInput);
	void init$(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* xmlSignatureInput, ::java::util::Set* inclusiveNamespace);
	void canonicalizeXPathNodeSet(::org::w3c::dom::Node* currentNode);
	virtual $String* getHTMLRepresentation();
	int32_t getPositionRelativeToDocumentElement(::org::w3c::dom::Node* currentNode);
	void outputAttrToWriter($String* name, $String* value);
	void outputCommentToWriter(::org::w3c::dom::Comment* currentComment);
	void outputPItoWriter(::org::w3c::dom::ProcessingInstruction* currentPI);
	void outputTextToWriter($String* text);
	::java::util::Set* xpathNodeSet = nullptr;
	::java::util::Set* inclusiveNamespaces = nullptr;
	::java::io::Writer* writer = nullptr;
	static $String* HTMLPrefix;
	static $String* HTMLSuffix;
	static $String* HTMLExcludePrefix;
	static $String* HTMLIncludePrefix;
	static $String* HTMLIncludeOrExcludeSuffix;
	static $String* HTMLIncludedInclusiveNamespacePrefix;
	static $String* HTMLExcludedInclusiveNamespacePrefix;
	static const int32_t NODE_BEFORE_DOCUMENT_ELEMENT = (-1);
	static const int32_t NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT = 0;
	static const int32_t NODE_AFTER_DOCUMENT_ELEMENT = 1;
	static ::com::sun::org::apache::xml::internal::security::c14n::helper::AttrCompare* ATTR_COMPARE;
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ATTR_COMPARE")
#pragma pop_macro("NODE_AFTER_DOCUMENT_ELEMENT")
#pragma pop_macro("NODE_BEFORE_DOCUMENT_ELEMENT")
#pragma pop_macro("NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT")

#endif // _com_sun_org_apache_xml_internal_security_signature_XMLSignatureInputDebugger_h_