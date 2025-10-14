#ifndef _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureECDSA$SignatureECDSARIPEMD160_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureECDSA$SignatureECDSARIPEMD160_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSARIPEMD160
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

class SignatureECDSA$SignatureECDSARIPEMD160 : public ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA {
	$class(SignatureECDSA$SignatureECDSARIPEMD160, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA)
public:
	SignatureECDSA$SignatureECDSARIPEMD160();
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

#endif // _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureECDSA$SignatureECDSARIPEMD160_h_