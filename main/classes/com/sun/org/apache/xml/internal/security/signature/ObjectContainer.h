#ifndef _com_sun_org_apache_xml_internal_security_signature_ObjectContainer_h_
#define _com_sun_org_apache_xml_internal_security_signature_ObjectContainer_h_
//$ class com.sun.org.apache.xml.internal.security.signature.ObjectContainer
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy

#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Document;
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
							namespace signature {

class ObjectContainer : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy {
	$class(ObjectContainer, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy)
public:
	ObjectContainer();
	void init$(::org::w3c::dom::Document* doc);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* node);
	virtual $String* getBaseLocalName() override;
	virtual $String* getEncoding();
	virtual $String* getId();
	virtual $String* getMimeType();
	virtual void setEncoding($String* Encoding);
	virtual void setId($String* Id);
	virtual void setMimeType($String* MimeType);
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_signature_ObjectContainer_h_