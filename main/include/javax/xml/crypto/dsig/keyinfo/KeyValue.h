#ifndef _javax_xml_crypto_dsig_keyinfo_KeyValue_h_
#define _javax_xml_crypto_dsig_keyinfo_KeyValue_h_
//$ interface javax.xml.crypto.dsig.keyinfo.KeyValue
//$ extends javax.xml.crypto.XMLStructure

#include <javax/xml/crypto/XMLStructure.h>

#pragma push_macro("DSA_TYPE")
#undef DSA_TYPE
#pragma push_macro("EC_TYPE")
#undef EC_TYPE
#pragma push_macro("RSA_TYPE")
#undef RSA_TYPE

namespace java {
	namespace security {
		class PublicKey;
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

class $import KeyValue : public ::javax::xml::crypto::XMLStructure {
	$interface(KeyValue, 0, ::javax::xml::crypto::XMLStructure)
public:
	virtual ::java::security::PublicKey* getPublicKey() {return nullptr;}
	static $String* DSA_TYPE;
	static $String* RSA_TYPE;
	static $String* EC_TYPE;
};

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax

#pragma pop_macro("DSA_TYPE")
#pragma pop_macro("EC_TYPE")
#pragma pop_macro("RSA_TYPE")

#endif // _javax_xml_crypto_dsig_keyinfo_KeyValue_h_