#ifndef _javax_xml_crypto_XMLStructure_h_
#define _javax_xml_crypto_XMLStructure_h_
//$ interface javax.xml.crypto.XMLStructure
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace crypto {

class $export XMLStructure : public ::java::lang::Object {
	$interface(XMLStructure, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual bool isFeatureSupported($String* feature) {return false;}
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_XMLStructure_h_