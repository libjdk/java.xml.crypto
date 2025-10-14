#ifndef _javax_xml_crypto_dsig_Manifest_h_
#define _javax_xml_crypto_dsig_Manifest_h_
//$ interface javax.xml.crypto.dsig.Manifest
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

class $export Manifest : public ::javax::xml::crypto::XMLStructure {
	$interface(Manifest, 0, ::javax::xml::crypto::XMLStructure)
public:
	virtual $String* getId() {return nullptr;}
	virtual ::java::util::List* getReferences() {return nullptr;}
	static $String* TYPE;
};

			} // dsig
		} // crypto
	} // xml
} // javax

#pragma pop_macro("TYPE")

#endif // _javax_xml_crypto_dsig_Manifest_h_