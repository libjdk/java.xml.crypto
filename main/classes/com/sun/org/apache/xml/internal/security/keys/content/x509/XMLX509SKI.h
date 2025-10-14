#ifndef _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509SKI_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509SKI_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509SKI
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy
//$ implements com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509DataContent

#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509DataContent.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Array.h>

#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("SKI_OID")
#undef SKI_OID
#pragma push_macro("XMLX509SKI")
#undef XMLX509SKI

namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {
					class Logger;
				}
			}
		}
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

class XMLX509SKI : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, public ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent {
	$class(XMLX509SKI, 0, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent)
public:
	XMLX509SKI();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::org::w3c::dom::Document* doc, $bytes* skiBytes);
	void init$(::org::w3c::dom::Document* doc, ::java::security::cert::X509Certificate* x509certificate);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual bool equals(Object$* obj) override;
	virtual $String* getBaseLocalName() override;
	virtual $bytes* getSKIBytes();
	static $bytes* getSKIBytesFromCert(::java::security::cert::X509Certificate* cert);
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static $String* SKI_OID;
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

#pragma pop_macro("LOG")
#pragma pop_macro("SKI_OID")
#pragma pop_macro("XMLX509SKI")

#endif // _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509SKI_h_