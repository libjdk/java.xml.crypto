#ifndef _javax_xml_crypto_dsig_SignatureProperties_h_
#define _javax_xml_crypto_dsig_SignatureProperties_h_
//$ interface javax.xml.crypto.dsig.SignatureProperties
//$ extends javax.xml.crypto.XMLStructure

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

class $import SignatureProperties : public ::javax::xml::crypto::XMLStructure {
	$interface(SignatureProperties, 0, ::javax::xml::crypto::XMLStructure)
public:
	virtual $String* getId() {return nullptr;}
	virtual ::java::util::List* getProperties() {return nullptr;}
	static $String* TYPE;
};

			} // dsig
		} // crypto
	} // xml
} // javax

#pragma pop_macro("TYPE")

#endif // _javax_xml_crypto_dsig_SignatureProperties_h_