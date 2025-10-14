#ifndef _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509Certificate_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509Certificate_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509Certificate
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy
//$ implements com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509DataContent

#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509DataContent.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Array.h>

#pragma push_macro("JCA_CERT_ID")
#undef JCA_CERT_ID

namespace java {
	namespace security {
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
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
							namespace keys {
								namespace content {
									namespace x509 {

class XMLX509Certificate : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, public ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent {
	$class(XMLX509Certificate, 0, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent)
public:
	XMLX509Certificate();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Document* doc, $bytes* certificateBytes);
	void init$(::org::w3c::dom::Document* doc, ::java::security::cert::X509Certificate* x509certificate);
	virtual bool equals(Object$* obj) override;
	virtual $String* getBaseLocalName() override;
	virtual $bytes* getCertificateBytes();
	virtual ::java::security::PublicKey* getPublicKey();
	virtual ::java::security::cert::X509Certificate* getX509Certificate();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static $String* JCA_CERT_ID;
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

#pragma pop_macro("JCA_CERT_ID")

#endif // _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509Certificate_h_