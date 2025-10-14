#ifndef _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm
//$ extends java.lang.Enum

#include <java/lang/Array.h>
#include <java/lang/Enum.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {

class SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm : public ::java::lang::Enum {
	$class(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, 0, ::java::lang::Enum)
public:
	SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm();
	static $Array<::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm>* $values();
	void init$($String* $enum$name, int32_t $enum$ordinal, $String* digestAlgorithm, $String* xmlDigestAlgorithm, int32_t saltLength);
	static ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* fromDigestAlgorithm($String* digestAlgorithm);
	static ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* fromXmlDigestAlgorithm($String* xmlDigestAlgorithm);
	virtual $String* getDigestAlgorithm();
	virtual int32_t getSaltLength();
	virtual $String* getXmlDigestAlgorithm();
	static ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* valueOf($String* name);
	static $Array<::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm>* values();
	static ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SHA224;
	static ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SHA256;
	static ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SHA384;
	static ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SHA512;
	static ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SHA3_224;
	static ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SHA3_256;
	static ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SHA3_384;
	static ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SHA3_512;
	static $Array<::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm>* $VALUES;
	$String* xmlDigestAlgorithm = nullptr;
	$String* digestAlgorithm = nullptr;
	int32_t saltLength = 0;
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

#endif // _com_sun_org_apache_xml_internal_security_algorithms_implementations_SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm_h_