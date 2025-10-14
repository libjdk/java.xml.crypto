#ifndef _javax_xml_crypto_dsig_SignatureProperty_h_
#define _javax_xml_crypto_dsig_SignatureProperty_h_
//$ interface javax.xml.crypto.dsig.SignatureProperty
//$ extends javax.xml.crypto.XMLStructure

#include <javax/xml/crypto/XMLStructure.h>

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

class $import SignatureProperty : public ::javax::xml::crypto::XMLStructure {
	$interface(SignatureProperty, $NO_CLASS_INIT, ::javax::xml::crypto::XMLStructure)
public:
	virtual ::java::util::List* getContent() {return nullptr;}
	virtual $String* getId() {return nullptr;}
	virtual $String* getTarget() {return nullptr;}
};

			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_SignatureProperty_h_