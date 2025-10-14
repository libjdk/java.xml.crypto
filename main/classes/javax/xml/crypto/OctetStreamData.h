#ifndef _javax_xml_crypto_OctetStreamData_h_
#define _javax_xml_crypto_OctetStreamData_h_
//$ class javax.xml.crypto.OctetStreamData
//$ extends javax.xml.crypto.Data

#include <javax/xml/crypto/Data.h>

namespace java {
	namespace io {
		class InputStream;
	}
}

namespace javax {
	namespace xml {
		namespace crypto {

class $export OctetStreamData : public ::javax::xml::crypto::Data {
	$class(OctetStreamData, $NO_CLASS_INIT, ::javax::xml::crypto::Data)
public:
	OctetStreamData();
	void init$(::java::io::InputStream* octetStream);
	void init$(::java::io::InputStream* octetStream, $String* uri, $String* mimeType);
	virtual $String* getMimeType();
	virtual ::java::io::InputStream* getOctetStream();
	virtual $String* getURI();
	::java::io::InputStream* octetStream = nullptr;
	$String* uri = nullptr;
	$String* mimeType = nullptr;
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_OctetStreamData_h_