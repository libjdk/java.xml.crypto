#ifndef _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureBaseRSA$SignatureRSASHA224_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureBaseRSA$SignatureRSASHA224_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA224
//$ extends com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA.h>

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

class SignatureBaseRSA$SignatureRSASHA224 : public ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA {
	$class(SignatureBaseRSA$SignatureRSASHA224, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA)
public:
	SignatureBaseRSA$SignatureRSASHA224();
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

#endif // _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureBaseRSA$SignatureRSASHA224_h_