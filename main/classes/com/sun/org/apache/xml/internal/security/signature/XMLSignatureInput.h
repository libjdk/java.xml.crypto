#ifndef _com_sun_org_apache_xml_internal_security_signature_XMLSignatureInput_h_
#define _com_sun_org_apache_xml_internal_security_signature_XMLSignatureInput_h_
//$ class com.sun.org.apache.xml.internal.security.signature.XMLSignatureInput
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								class NodeFilter;
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
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace util {
		class List;
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
							namespace signature {

class XMLSignatureInput : public ::java::lang::Object {
	$class(XMLSignatureInput, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XMLSignatureInput();
	void init$($bytes* inputOctets);
	void init$(::java::io::InputStream* inputOctetStream);
	void init$(::org::w3c::dom::Node* rootNode);
	void init$(::java::util::Set* inputNodeSet);
	void init$($String* preCalculatedDigest);
	virtual void addNodeFilter(::com::sun::org::apache::xml::internal::security::signature::NodeFilter* filter);
	void convertToNodes();
	virtual $bytes* getBytes();
	$bytes* getBytesFromInputStream();
	virtual ::org::w3c::dom::Node* getExcludeNode();
	virtual $String* getHTMLRepresentation();
	virtual $String* getHTMLRepresentation(::java::util::Set* inclusiveNamespaces);
	virtual ::java::util::Set* getInputNodeSet();
	virtual $String* getMIMEType();
	virtual ::java::util::List* getNodeFilters();
	virtual ::java::util::Set* getNodeSet();
	virtual ::java::util::Set* getNodeSet(bool circumvent);
	virtual ::java::io::InputStream* getOctetStream();
	virtual ::java::io::InputStream* getOctetStreamReal();
	virtual $String* getPreCalculatedDigest();
	virtual $String* getSourceURI();
	virtual ::org::w3c::dom::Node* getSubNode();
	virtual bool isByteArray();
	virtual bool isElement();
	virtual bool isExcludeComments();
	virtual bool isInitialized();
	virtual bool isNeedsToBeExpanded();
	virtual bool isNodeSet();
	virtual bool isOctetStream();
	virtual bool isOutputStreamSet();
	virtual bool isPreCalculatedDigest();
	virtual bool isSecureValidation();
	virtual void setExcludeComments(bool excludeComments);
	virtual void setExcludeNode(::org::w3c::dom::Node* excludeNode);
	virtual void setMIMEType($String* mimeType);
	virtual void setNeedsToBeExpanded(bool needsToBeExpanded);
	virtual void setNodeSet(bool b);
	virtual void setOutputStream(::java::io::OutputStream* os);
	virtual void setSecureValidation(bool secureValidation);
	virtual void setSourceURI($String* sourceURI);
	virtual $String* toString() override;
	virtual void updateOutputStream(::java::io::OutputStream* diOs);
	virtual void updateOutputStream(::java::io::OutputStream* diOs, bool c14n11);
	::java::io::InputStream* inputOctetStreamProxy = nullptr;
	::java::util::Set* inputNodeSet = nullptr;
	::org::w3c::dom::Node* subNode = nullptr;
	::org::w3c::dom::Node* excludeNode = nullptr;
	bool excludeComments = false;
	bool isNodeSet$ = false;
	$bytes* bytes = nullptr;
	bool secureValidation = false;
	$String* mimeType = nullptr;
	$String* sourceURI = nullptr;
	::java::util::List* nodeFilters = nullptr;
	bool needsToBeExpanded = false;
	::java::io::OutputStream* outputStream = nullptr;
	$String* preCalculatedDigest = nullptr;
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_signature_XMLSignatureInput_h_