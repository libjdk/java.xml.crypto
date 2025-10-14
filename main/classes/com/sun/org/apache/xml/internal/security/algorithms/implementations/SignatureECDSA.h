#ifndef _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureECDSA_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureECDSA_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA
//$ extends com.sun.org.apache.xml.internal.security.algorithms.SignatureAlgorithmSpi

#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi.h>
#include <java/lang/Array.h>

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
	namespace security {
		class Key;
		class Provider;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {

class SignatureECDSA : public ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithmSpi {
	$class(SignatureECDSA, 0, ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithmSpi)
public:
	SignatureECDSA();
	void init$();
	void init$(::java::security::Provider* provider);
	static $bytes* convertASN1toXMLDSIG($bytes* asn1Bytes, int32_t rawLen);
	static $bytes* convertXMLDSIGtoASN1($bytes* xmldsigBytes);
	virtual $String* engineGetJCEAlgorithmString() override;
	virtual $String* engineGetJCEProviderName() override;
	virtual void engineInitSign(::java::security::Key* privateKey, ::java::security::SecureRandom* secureRandom) override;
	virtual void engineInitSign(::java::security::Key* privateKey) override;
	virtual void engineInitSign(::java::security::Key* signingKey, ::java::security::spec::AlgorithmParameterSpec* algorithmParameterSpec) override;
	virtual void engineInitVerify(::java::security::Key* publicKey) override;
	virtual void engineSetHMACOutputLength(int32_t HMACOutputLength) override;
	virtual void engineSetParameter(::java::security::spec::AlgorithmParameterSpec* params) override;
	virtual $bytes* engineSign() override;
	virtual void engineUpdate($bytes* input) override;
	virtual void engineUpdate(int8_t input) override;
	virtual void engineUpdate($bytes* buf, int32_t offset, int32_t len) override;
	virtual bool engineVerify($bytes* signature) override;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::java::security::Signature* signatureAlgorithm = nullptr;
	int32_t signIntLen = 0;
};

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureECDSA_h_