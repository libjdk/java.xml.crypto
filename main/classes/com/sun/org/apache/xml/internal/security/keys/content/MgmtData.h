#ifndef _com_sun_org_apache_xml_internal_security_keys_content_MgmtData_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_MgmtData_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.MgmtData
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy
//$ implements com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent

#include <com/sun/org/apache/xml/internal/security/keys/content/KeyInfoContent.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>

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
							namespace keys {
								namespace content {

class MgmtData : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, public ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent {
	$class(MgmtData, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent)
public:
	MgmtData();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Document* doc, $String* mgmtData);
	virtual $String* getBaseLocalName() override;
	virtual $String* getMgmtData();
	virtual $String* toString() override;
};

								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_keys_content_MgmtData_h_