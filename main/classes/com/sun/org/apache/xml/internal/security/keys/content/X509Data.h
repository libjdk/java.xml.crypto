#ifndef _com_sun_org_apache_xml_internal_security_keys_content_X509Data_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_X509Data_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.X509Data
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy
//$ implements com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent

#include <com/sun/org/apache/xml/internal/security/keys/content/KeyInfoContent.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Array.h>

#pragma push_macro("LOG")
#undef LOG

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
										class XMLX509CRL;
										class XMLX509Certificate;
										class XMLX509Digest;
										class XMLX509IssuerSerial;
										class XMLX509SKI;
										class XMLX509SubjectName;
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
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

class X509Data : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, public ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent {
	$class(X509Data, 0, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent)
public:
	X509Data();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Document* doc);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509IssuerSerial* xmlX509IssuerSerial);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SKI* xmlX509SKI);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SubjectName* xmlX509SubjectName);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Certificate* xmlX509Certificate);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509CRL* xmlX509CRL);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Digest* xmlX509Digest);
	virtual void addCRL($bytes* crlBytes);
	virtual void addCertificate(::java::security::cert::X509Certificate* x509certificate);
	virtual void addCertificate($bytes* x509certificateBytes);
	virtual void addDigest(::java::security::cert::X509Certificate* x509certificate, $String* algorithmURI);
	virtual void addDigest($bytes* x509CertificateDigestBytes, $String* algorithmURI);
	virtual void addIssuerSerial($String* X509IssuerName, ::java::math::BigInteger* X509SerialNumber);
	virtual void addIssuerSerial($String* X509IssuerName, $String* X509SerialNumber);
	virtual void addIssuerSerial($String* X509IssuerName, int32_t X509SerialNumber);
	virtual void addSKI($bytes* skiBytes);
	virtual void addSKI(::java::security::cert::X509Certificate* x509certificate);
	virtual void addSubjectName($String* subjectName);
	virtual void addSubjectName(::java::security::cert::X509Certificate* x509certificate);
	virtual void addUnknownElement(::org::w3c::dom::Element* element);
	virtual bool containsCRL();
	virtual bool containsCertificate();
	virtual bool containsDigest();
	virtual bool containsIssuerSerial();
	virtual bool containsSKI();
	virtual bool containsSubjectName();
	virtual bool containsUnknownElement();
	virtual $String* getBaseLocalName() override;
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509CRL* itemCRL(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Certificate* itemCertificate(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Digest* itemDigest(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509IssuerSerial* itemIssuerSerial(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SKI* itemSKI(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SubjectName* itemSubjectName(int32_t i);
	virtual ::org::w3c::dom::Element* itemUnknownElement(int32_t i);
	virtual int32_t lengthCRL();
	virtual int32_t lengthCertificate();
	virtual int32_t lengthDigest();
	virtual int32_t lengthIssuerSerial();
	virtual int32_t lengthSKI();
	virtual int32_t lengthSubjectName();
	virtual int32_t lengthUnknownElement();
	virtual $String* toString() override;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
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

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_keys_content_X509Data_h_