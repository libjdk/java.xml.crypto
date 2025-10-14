#ifndef _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509CRL_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509CRL_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509CRL
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy
//$ implements com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509DataContent

#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509DataContent.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Array.h>

#pragma push_macro("XMLX509CRL")
#undef XMLX509CRL

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
									namespace x509 {

class XMLX509CRL : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, public ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent {
	$class(XMLX509CRL, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent)
public:
	XMLX509CRL();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Document* doc, $bytes* crlBytes);
	virtual $String* getBaseLocalName() override;
	virtual $bytes* getCRLBytes();
	virtual $String* toString() override;
};

									} // x509
								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("XMLX509CRL")

#endif // _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509CRL_h_