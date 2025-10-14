#ifndef _javax_xml_crypto_URIReference_h_
#define _javax_xml_crypto_URIReference_h_
//$ interface javax.xml.crypto.URIReference
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace crypto {

class $import URIReference : public ::java::lang::Object {
	$interface(URIReference, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual $String* getType() {return nullptr;}
	virtual $String* getURI() {return nullptr;}
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_URIReference_h_