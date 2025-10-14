#ifndef _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureECDSA$SignatureECDSASHA256_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureECDSA$SignatureECDSASHA256_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA256
//$ extends com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA.h>

namespace java {
	namespace security {
		class Provider;
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

class SignatureECDSA$SignatureECDSASHA256 : public ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA {
	$class(SignatureECDSA$SignatureECDSASHA256, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA)
public:
	SignatureECDSA$SignatureECDSASHA256();
	void init$();
	void init$(::java::security::Provider* provider);
	virtual $String* engineGetURI() override;
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

#endif // _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureECDSA$SignatureECDSASHA256_h_