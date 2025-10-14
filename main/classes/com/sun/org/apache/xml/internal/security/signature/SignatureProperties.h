#ifndef _com_sun_org_apache_xml_internal_security_signature_SignatureProperties_h_
#define _com_sun_org_apache_xml_internal_security_signature_SignatureProperties_h_
//$ class com.sun.org.apache.xml.internal.security.signature.SignatureProperties
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy

#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								class SignatureProperty;
							}
						}
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
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

class SignatureProperties : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy {
	$class(SignatureProperties, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy)
public:
	SignatureProperties();
	void init$(::org::w3c::dom::Document* doc);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual void addSignatureProperty(::com::sun::org::apache::xml::internal::security::signature::SignatureProperty* sp);
	virtual $String* getBaseLocalName() override;
	virtual $String* getId();
	virtual int32_t getLength();
	virtual ::com::sun::org::apache::xml::internal::security::signature::SignatureProperty* item(int32_t i);
	virtual void setId($String* Id);
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_signature_SignatureProperties_h_