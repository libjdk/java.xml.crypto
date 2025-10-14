#ifndef _javax_xml_crypto_dsig_keyinfo_X509IssuerSerial_h_
#define _javax_xml_crypto_dsig_keyinfo_X509IssuerSerial_h_
//$ interface javax.xml.crypto.dsig.keyinfo.X509IssuerSerial
//$ extends javax.xml.crypto.XMLStructure

#include <javax/xml/crypto/XMLStructure.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

class $import X509IssuerSerial : public ::javax::xml::crypto::XMLStructure {
	$interface(X509IssuerSerial, $NO_CLASS_INIT, ::javax::xml::crypto::XMLStructure)
public:
	virtual $String* getIssuerName() {return nullptr;}
	virtual ::java::math::BigInteger* getSerialNumber() {return nullptr;}
};

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_keyinfo_X509IssuerSerial_h_