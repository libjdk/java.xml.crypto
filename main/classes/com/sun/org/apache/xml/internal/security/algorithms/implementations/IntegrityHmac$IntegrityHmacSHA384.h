#ifndef _com_sun_org_apache_xml_internal_security_algorithms_implementations_IntegrityHmac$IntegrityHmacSHA384_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_implementations_IntegrityHmac$IntegrityHmacSHA384_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA384
//$ extends com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac.h>

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

class IntegrityHmac$IntegrityHmacSHA384 : public ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac {
	$class(IntegrityHmac$IntegrityHmacSHA384, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac)
public:
	IntegrityHmac$IntegrityHmacSHA384();
	void init$();
	void init$(::java::security::Provider* provider);
	virtual $String* engineGetURI() override;
	virtual int32_t getDigestLength() override;
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

#endif // _com_sun_org_apache_xml_internal_security_algorithms_implementations_IntegrityHmac$IntegrityHmacSHA384_h_