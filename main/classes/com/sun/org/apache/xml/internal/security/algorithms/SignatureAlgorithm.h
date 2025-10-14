#ifndef _com_sun_org_apache_xml_internal_security_algorithms_SignatureAlgorithm_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_SignatureAlgorithm_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.SignatureAlgorithm
//$ extends com.sun.org.apache.xml.internal.security.algorithms.Algorithm

#include <com/sun/org/apache/xml/internal/security/algorithms/Algorithm.h>
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
							namespace algorithms {
								class SignatureAlgorithmSpi;
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
	namespace security {
		class Key;
		class Provider;
		class SecureRandom;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace java {
	namespace util {
		class Map;
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
							namespace algorithms {

class SignatureAlgorithm : public ::com::sun::org::apache::xml::internal::security::algorithms::Algorithm {
	$class(SignatureAlgorithm, 0, ::com::sun::org::apache::xml::internal::security::algorithms::Algorithm)
public:
	SignatureAlgorithm();
	void init$(::org::w3c::dom::Document* doc, $String* algorithmURI);
	void init$(::org::w3c::dom::Document* doc, $String* algorithmURI, ::java::security::Provider* provider);
	void init$(::org::w3c::dom::Document* doc, $String* algorithmURI, ::java::security::Provider* provider, ::java::security::spec::AlgorithmParameterSpec* parameterSpec);
	void init$(::org::w3c::dom::Document* doc, $String* algorithmURI, int32_t hmacOutputLength);
	void init$(::org::w3c::dom::Document* doc, $String* algorithmURI, int32_t hmacOutputLength, ::java::security::Provider* provider);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Element* element, $String* baseURI, ::java::security::Provider* provider);
	void init$(::org::w3c::dom::Element* element, $String* baseURI, bool secureValidation);
	void init$(::org::w3c::dom::Element* element, $String* baseURI, bool secureValidation, ::java::security::Provider* provider);
	virtual $String* getBaseLocalName() override;
	virtual $String* getBaseNamespace() override;
	virtual $String* getJCEAlgorithmString();
	virtual $String* getJCEProviderName();
	static ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithmSpi* getSignatureAlgorithmSpi($String* algorithmURI, ::java::security::Provider* provider);
	$String* getURI();
	virtual void initSign(::java::security::Key* signingKey);
	virtual void initSign(::java::security::Key* signingKey, ::java::security::SecureRandom* secureRandom);
	virtual void initSign(::java::security::Key* signingKey, ::java::security::spec::AlgorithmParameterSpec* algorithmParameterSpec);
	virtual void initVerify(::java::security::Key* verificationKey);
	static void register$($String* algorithmURI, $String* implementingClass);
	static void register$($String* algorithmURI, $Class* implementingClass);
	static void registerDefaultAlgorithms();
	virtual void setParameter(::java::security::spec::AlgorithmParameterSpec* params);
	virtual $bytes* sign();
	virtual void update($bytes* input);
	virtual void update(int8_t input);
	virtual void update($bytes* buf, int32_t offset, int32_t len);
	virtual bool verify($bytes* signature);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static ::java::util::Map* algorithmHash;
	::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithmSpi* signatureAlgorithmSpi = nullptr;
	$String* algorithmURI = nullptr;
};

							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_algorithms_SignatureAlgorithm_h_