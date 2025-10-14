#ifndef _com_sun_org_apache_xml_internal_security_signature_SignatureProperty_h_
#define _com_sun_org_apache_xml_internal_security_signature_SignatureProperty_h_
//$ class com.sun.org.apache.xml.internal.security.signature.SignatureProperty
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

class SignatureProperty : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy {
	$class(SignatureProperty, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy)
public:
	SignatureProperty();
	void init$(::org::w3c::dom::Document* doc, $String* target);
	void init$(::org::w3c::dom::Document* doc, $String* target, $String* id);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual ::org::w3c::dom::Node* appendChild(::org::w3c::dom::Node* node);
	virtual $String* getBaseLocalName() override;
	virtual $String* getId();
	virtual $String* getTarget();
	virtual void setId($String* id);
	virtual void setTarget($String* target);
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_signature_SignatureProperty_h_