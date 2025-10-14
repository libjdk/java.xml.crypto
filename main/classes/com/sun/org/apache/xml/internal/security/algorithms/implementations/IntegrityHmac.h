#ifndef _com_sun_org_apache_xml_internal_security_algorithms_implementations_IntegrityHmac_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_implementations_IntegrityHmac_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac
//$ extends com.sun.org.apache.xml.internal.security.algorithms.SignatureAlgorithmSpi

#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi.h>
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
								namespace implementations {
									class IntegrityHmac$HMACOutputLength;
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
namespace javax {
	namespace crypto {
		class Mac;
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
								namespace implementations {

class IntegrityHmac : public ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithmSpi {
	$class(IntegrityHmac, 0, ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithmSpi)
public:
	IntegrityHmac();
	void init$();
	void init$(::java::security::Provider* provider);
	virtual void engineAddContextToElement(::org::w3c::dom::Element* element) override;
	virtual void engineGetContextFromElement(::org::w3c::dom::Element* element) override;
	virtual $String* engineGetJCEAlgorithmString() override;
	virtual $String* engineGetJCEProviderName() override;
	virtual void engineInitSign(::java::security::Key* secretKey) override;
	virtual void engineInitSign(::java::security::Key* secretKey, ::java::security::spec::AlgorithmParameterSpec* algorithmParameterSpec) override;
	virtual void engineInitSign(::java::security::Key* secretKey, ::java::security::SecureRandom* secureRandom) override;
	virtual void engineInitVerify(::java::security::Key* secretKey) override;
	virtual void engineSetHMACOutputLength(int32_t length) override;
	virtual void engineSetParameter(::java::security::spec::AlgorithmParameterSpec* params) override;
	virtual $bytes* engineSign() override;
	virtual void engineUpdate($bytes* input) override;
	virtual void engineUpdate(int8_t input) override;
	virtual void engineUpdate($bytes* buf, int32_t offset, int32_t len) override;
	virtual bool engineVerify($bytes* signature) override;
	virtual int32_t getDigestLength() {return 0;}
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::javax::crypto::Mac* macAlgorithm = nullptr;
	::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$HMACOutputLength* hmacOutputLength = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_security_algorithms_implementations_IntegrityHmac_h_