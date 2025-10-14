#ifndef _javax_xml_crypto_dsig_XMLObject_h_
#define _javax_xml_crypto_dsig_XMLObject_h_
//$ interface javax.xml.crypto.dsig.XMLObject
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

class $import XMLObject : public ::javax::xml::crypto::XMLStructure {
	$interface(XMLObject, 0, ::javax::xml::crypto::XMLStructure)
public:
	virtual ::java::util::List* getContent() {return nullptr;}
	virtual $String* getEncoding() {return nullptr;}
	virtual $String* getId() {return nullptr;}
	virtual $String* getMimeType() {return nullptr;}
	static $String* TYPE;
};

			} // dsig
		} // crypto
	} // xml
} // javax

#pragma pop_macro("TYPE")

#endif // _javax_xml_crypto_dsig_XMLObject_h_