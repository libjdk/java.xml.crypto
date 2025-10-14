#ifndef _javax_xml_crypto_dsig_keyinfo_KeyName_h_
#define _javax_xml_crypto_dsig_keyinfo_KeyName_h_
//$ interface javax.xml.crypto.dsig.keyinfo.KeyName
//$ extends javax.xml.crypto.XMLStructure

#include <javax/xml/crypto/XMLStructure.h>

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

class $export KeyName : public ::javax::xml::crypto::XMLStructure {
	$interface(KeyName, $NO_CLASS_INIT, ::javax::xml::crypto::XMLStructure)
public:
	virtual $String* getName() {return nullptr;}
};

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_keyinfo_KeyName_h_