#ifndef _javax_xml_crypto_dsig_keyinfo_X509Data_h_
#define _javax_xml_crypto_dsig_keyinfo_X509Data_h_
//$ interface javax.xml.crypto.dsig.keyinfo.X509Data
//$ extends javax.xml.crypto.XMLStructure

#include <javax/xml/crypto/XMLStructure.h>

#pragma push_macro("RAW_X509_CERTIFICATE_TYPE")
#undef RAW_X509_CERTIFICATE_TYPE
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

class $export X509Data : public ::javax::xml::crypto::XMLStructure {
	$interface(X509Data, 0, ::javax::xml::crypto::XMLStructure)
public:
	virtual ::java::util::List* getContent() {return nullptr;}
	static $String* TYPE;
	static $String* RAW_X509_CERTIFICATE_TYPE;
};

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax

#pragma pop_macro("RAW_X509_CERTIFICATE_TYPE")
#pragma pop_macro("TYPE")

#endif // _javax_xml_crypto_dsig_keyinfo_X509Data_h_