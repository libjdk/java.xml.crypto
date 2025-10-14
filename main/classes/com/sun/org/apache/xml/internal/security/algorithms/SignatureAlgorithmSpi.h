#ifndef _com_sun_org_apache_xml_internal_security_algorithms_SignatureAlgorithmSpi_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_SignatureAlgorithmSpi_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.SignatureAlgorithmSpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace java {
	namespace security {
		class Key;
		class SecureRandom;
		class Signature;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
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

class SignatureAlgorithmSpi : public ::java::lang::Object {
	$class(SignatureAlgorithmSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	SignatureAlgorithmSpi();
	void init$();
	virtual void engineAddContextToElement(::org::w3c::dom::Element* element);
	virtual void engineGetContextFromElement(::org::w3c::dom::Element* element);
	virtual $String* engineGetJCEAlgorithmString() {return nullptr;}
	virtual $String* engineGetJCEProviderName() {return nullptr;}
	virtual $String* engineGetURI() {return nullptr;}
	virtual void engineInitSign(::java::security::Key* signingKey) {}
	virtual void engineInitSign(::java::security::Key* signingKey, ::java::security::SecureRandom* secureRandom) {}
	virtual void engineInitSign(::java::security::Key* signingKey, ::java::security::spec::AlgorithmParameterSpec* algorithmParameterSpec) {}
	static void engineInitSign(::java::security::Key* privateKey, ::java::security::SecureRandom* secureRandom, ::java::security::Signature* signatureAlgorithm);
	virtual void engineInitVerify(::java::security::Key* verificationKey) {}
	static void engineInitVerify(::java::security::Key* publicKey, ::java::security::Signature* signatureAlgorithm);
	virtual void engineSetHMACOutputLength(int32_t HMACOutputLength) {}
	virtual void engineSetParameter(::java::security::spec::AlgorithmParameterSpec* params) {}
	virtual $bytes* engineSign() {return nullptr;}
	virtual void engineUpdate($bytes* input) {}
	virtual void engineUpdate(int8_t input) {}
	virtual void engineUpdate($bytes* buf, int32_t offset, int32_t len) {}
	virtual bool engineVerify($bytes* signature) {return false;}
};

							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_algorithms_SignatureAlgorithmSpi_h_