#ifndef _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509IssuerSerial_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509IssuerSerial_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509IssuerSerial
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy
//$ implements com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509DataContent

#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509DataContent.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>

#pragma push_macro("LOG")
#undef LOG

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
	namespace math {
		class BigInteger;
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

class XMLX509IssuerSerial : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, public ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent {
	$class(XMLX509IssuerSerial, 0, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent)
public:
	XMLX509IssuerSerial();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual void finalize() override;
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Document* doc, $String* x509IssuerName, ::java::math::BigInteger* x509SerialNumber);
	void init$(::org::w3c::dom::Document* doc, $String* x509IssuerName, $String* x509SerialNumber);
	void init$(::org::w3c::dom::Document* doc, $String* x509IssuerName, int32_t x509SerialNumber);
	void init$(::org::w3c::dom::Document* doc, ::java::security::cert::X509Certificate* x509certificate);
	virtual bool equals(Object$* obj) override;
	virtual $String* getBaseLocalName() override;
	virtual $String* getIssuerName();
	virtual ::java::math::BigInteger* getSerialNumber();
	virtual int32_t getSerialNumberInteger();
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
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

#endif // _com_sun_org_apache_xml_internal_security_keys_content_x509_XMLX509IssuerSerial_h_