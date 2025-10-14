#ifndef _javax_xml_crypto_dsig_keyinfo_PGPData_h_
#define _javax_xml_crypto_dsig_keyinfo_PGPData_h_
//$ interface javax.xml.crypto.dsig.keyinfo.PGPData
//$ extends javax.xml.crypto.XMLStructure

#include <java/lang/Array.h>
#include <javax/xml/crypto/XMLStructure.h>

#pragma push_macro("TYPE")
#undef TYPE

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

class $export PGPData : public ::javax::xml::crypto::XMLStructure {
	$interface(PGPData, 0, ::javax::xml::crypto::XMLStructure)
public:
	virtual ::java::util::List* getExternalElements() {return nullptr;}
	virtual $bytes* getKeyId() {return nullptr;}
	virtual $bytes* getKeyPacket() {return nullptr;}
	static $String* TYPE;
};

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax

#pragma pop_macro("TYPE")

#endif // _javax_xml_crypto_dsig_keyinfo_PGPData_h_