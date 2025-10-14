#ifndef _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509Digest_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509Digest_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509Digest
//$ extends com.sun.org.apache.xml.internal.security.utils.Signature11ElementProxy
//$ implements com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509DataContent

#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509DataContent.h>
#include <com/sun/org/apache/xml/internal/security/utils/Signature11ElementProxy.h>
#include <java/lang/Array.h>

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
			class Attr;
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

class XMLX509Digest : public ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy, public ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent {
	$class(XMLX509Digest, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy, ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent)
public:
	XMLX509Digest();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Document* doc, $bytes* digestBytes, $String* algorithmURI);
	void init$(::org::w3c::dom::Document* doc, ::java::security::cert::X509Certificate* x509certificate, $String* algorithmURI);
	virtual $String* getAlgorithm();
	virtual ::org::w3c::dom::Attr* getAlgorithmAttr();
	virtual $String* getBaseLocalName() override;
	virtual $bytes* getDigestBytes();
	static $bytes* getDigestBytesFromCert(::java::security::cert::X509Certificate* cert, $String* algorithmURI);
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

#endif // _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509Digest_h_