#ifndef _com_sun_org_apache_xml_internal_security_algorithms_implementations_IntegrityHmac$HMACOutputLength_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_implementations_IntegrityHmac$HMACOutputLength_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$HMACOutputLength
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("MAX_LENGTH")
#undef MAX_LENGTH
#pragma push_macro("MIN_LENGTH")
#undef MIN_LENGTH

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {

class IntegrityHmac$HMACOutputLength : public ::java::lang::Object {
	$class(IntegrityHmac$HMACOutputLength, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IntegrityHmac$HMACOutputLength();
	void init$(int32_t length);
	static const int32_t MIN_LENGTH = 128;
	static const int32_t MAX_LENGTH = 2048;
	int32_t length = 0;
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

#pragma pop_macro("MAX_LENGTH")
#pragma pop_macro("MIN_LENGTH")

#endif // _com_sun_org_apache_xml_internal_security_algorithms_implementations_IntegrityHmac$HMACOutputLength_h_