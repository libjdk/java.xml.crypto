#ifndef _com_sun_org_apache_xml_internal_security_algorithms_MessageDigestAlgorithm_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_MessageDigestAlgorithm_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.MessageDigestAlgorithm
//$ extends com.sun.org.apache.xml.internal.security.algorithms.Algorithm

#include <com/sun/org/apache/xml/internal/security/algorithms/Algorithm.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/EncryptionConstants.h>
#include <java/lang/Array.h>

#pragma push_macro("ALGO_ID_DIGEST_NOT_RECOMMENDED_MD5")
#undef ALGO_ID_DIGEST_NOT_RECOMMENDED_MD5
#pragma push_macro("ALGO_ID_DIGEST_RIPEMD160")
#undef ALGO_ID_DIGEST_RIPEMD160
#pragma push_macro("ALGO_ID_DIGEST_SHA1")
#undef ALGO_ID_DIGEST_SHA1
#pragma push_macro("ALGO_ID_DIGEST_SHA224")
#undef ALGO_ID_DIGEST_SHA224
#pragma push_macro("ALGO_ID_DIGEST_SHA256")
#undef ALGO_ID_DIGEST_SHA256
#pragma push_macro("ALGO_ID_DIGEST_SHA384")
#undef ALGO_ID_DIGEST_SHA384
#pragma push_macro("ALGO_ID_DIGEST_SHA512")
#undef ALGO_ID_DIGEST_SHA512
#pragma push_macro("ALGO_ID_DIGEST_WHIRLPOOL")
#undef ALGO_ID_DIGEST_WHIRLPOOL

namespace java {
	namespace security {
		class MessageDigest;
		class Provider;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
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

class MessageDigestAlgorithm : public ::com::sun::org::apache::xml::internal::security::algorithms::Algorithm {
	$class(MessageDigestAlgorithm, 0, ::com::sun::org::apache::xml::internal::security::algorithms::Algorithm)
public:
	MessageDigestAlgorithm();
	void init$(::org::w3c::dom::Document* doc, $String* algorithmURI);
	$bytes* digest();
	$bytes* digest($bytes* input);
	int32_t digest($bytes* buf, int32_t offset, int32_t len);
	::java::security::MessageDigest* getAlgorithm();
	virtual $String* getBaseLocalName() override;
	virtual $String* getBaseNamespace() override;
	static ::java::security::MessageDigest* getDigestInstance($String* algorithmURI);
	int32_t getDigestLength();
	static ::com::sun::org::apache::xml::internal::security::algorithms::MessageDigestAlgorithm* getInstance(::org::w3c::dom::Document* doc, $String* algorithmURI);
	$String* getJCEAlgorithmString();
	::java::security::Provider* getJCEProvider();
	static bool isEqual($bytes* digesta, $bytes* digestb);
	void reset();
	void update($bytes* input);
	void update(int8_t input);
	void update($bytes* buf, int32_t offset, int32_t len);
	static $String* ALGO_ID_DIGEST_NOT_RECOMMENDED_MD5;
	static $String* ALGO_ID_DIGEST_SHA1;
	static $String* ALGO_ID_DIGEST_SHA224;
	static $String* ALGO_ID_DIGEST_SHA256;
	static $String* ALGO_ID_DIGEST_SHA384;
	static $String* ALGO_ID_DIGEST_SHA512;
	static $String* ALGO_ID_DIGEST_RIPEMD160;
	static $String* ALGO_ID_DIGEST_WHIRLPOOL;
	static $String* ALGO_ID_DIGEST_SHA3_224;
	static $String* ALGO_ID_DIGEST_SHA3_256;
	static $String* ALGO_ID_DIGEST_SHA3_384;
	static $String* ALGO_ID_DIGEST_SHA3_512;
	::java::security::MessageDigest* algorithm = nullptr;
};

							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALGO_ID_DIGEST_NOT_RECOMMENDED_MD5")
#pragma pop_macro("ALGO_ID_DIGEST_RIPEMD160")
#pragma pop_macro("ALGO_ID_DIGEST_SHA1")
#pragma pop_macro("ALGO_ID_DIGEST_SHA224")
#pragma pop_macro("ALGO_ID_DIGEST_SHA256")
#pragma pop_macro("ALGO_ID_DIGEST_SHA384")
#pragma pop_macro("ALGO_ID_DIGEST_SHA512")
#pragma pop_macro("ALGO_ID_DIGEST_WHIRLPOOL")

#endif // _com_sun_org_apache_xml_internal_security_algorithms_MessageDigestAlgorithm_h_