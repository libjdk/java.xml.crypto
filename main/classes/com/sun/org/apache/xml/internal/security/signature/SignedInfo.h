#ifndef _com_sun_org_apache_xml_internal_security_signature_SignedInfo_h_
#define _com_sun_org_apache_xml_internal_security_signature_SignedInfo_h_
//$ class com.sun.org.apache.xml.internal.security.signature.SignedInfo
//$ extends com.sun.org.apache.xml.internal.security.signature.Manifest

#include <com/sun/org/apache/xml/internal/security/signature/Manifest.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								class SignatureAlgorithm;
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace javax {
	namespace crypto {
		class SecretKey;
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

class SignedInfo : public ::com::sun::org::apache::xml::internal::security::signature::Manifest {
	$class(SignedInfo, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::signature::Manifest)
public:
	SignedInfo();
	void init$(::org::w3c::dom::Document* doc);
	void init$(::org::w3c::dom::Document* doc, $String* signatureMethodURI, $String* canonicalizationMethodURI);
	void init$(::org::w3c::dom::Document* doc, $String* signatureMethodURI, $String* canonicalizationMethodURI, ::java::security::Provider* provider);
	void init$(::org::w3c::dom::Document* doc, $String* signatureMethodURI, int32_t hMACOutputLength, $String* canonicalizationMethodURI);
	void init$(::org::w3c::dom::Document* doc, $String* signatureMethodURI, int32_t hMACOutputLength, $String* canonicalizationMethodURI, ::java::security::Provider* provider, ::java::security::spec::AlgorithmParameterSpec* spec);
	void init$(::org::w3c::dom::Document* doc, ::org::w3c::dom::Element* signatureMethodElem, ::org::w3c::dom::Element* canonicalizationMethodElem);
	void init$(::org::w3c::dom::Document* doc, ::org::w3c::dom::Element* signatureMethodElem, ::org::w3c::dom::Element* canonicalizationMethodElem, ::java::security::Provider* provider);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Element* element, $String* baseURI, bool secureValidation);
	void init$(::org::w3c::dom::Element* element, $String* baseURI, bool secureValidation, ::java::security::Provider* provider);
	virtual ::javax::crypto::SecretKey* createSecretKey($bytes* secretKeyBytes);
	virtual $String* getBaseLocalName() override;
	virtual $String* getCanonicalizationMethodURI();
	virtual $bytes* getCanonicalizedOctetStream();
	virtual $String* getInclusiveNamespaces();
	virtual ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithm* getSignatureAlgorithm();
	virtual ::org::w3c::dom::Element* getSignatureMethodElement();
	virtual $String* getSignatureMethodURI();
	virtual void signInOctetStream(::java::io::OutputStream* os);
	virtual bool verify();
	virtual bool verify(bool followManifests);
	::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithm* signatureAlgorithm = nullptr;
	$bytes* c14nizedBytes = nullptr;
	::org::w3c::dom::Element* c14nMethod = nullptr;
	::org::w3c::dom::Element* signatureMethod = nullptr;
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_signature_SignedInfo_h_