#ifndef _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureBaseRSA$SignatureRSASSAPSS_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureBaseRSA$SignatureRSASSAPSS_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS
//$ extends com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA.h>

namespace java {
	namespace security {
		class Provider;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
			class PSSParameterSpec;
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
								namespace implementations {

class SignatureBaseRSA$SignatureRSASSAPSS : public ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA {
	$class(SignatureBaseRSA$SignatureRSASSAPSS, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA)
public:
	SignatureBaseRSA$SignatureRSASSAPSS();
	void init$();
	void init$(::java::security::Provider* provider);
	virtual void engineAddContextToElement(::org::w3c::dom::Element* element) override;
	virtual void engineGetContextFromElement(::org::w3c::dom::Element* element) override;
	virtual $String* engineGetURI() override;
	virtual void engineSetParameter(::java::security::spec::AlgorithmParameterSpec* params) override;
	::java::security::spec::PSSParameterSpec* pssParameterSpec = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureBaseRSA$SignatureRSASSAPSS_h_