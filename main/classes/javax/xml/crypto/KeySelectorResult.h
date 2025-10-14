#ifndef _javax_xml_crypto_KeySelectorResult_h_
#define _javax_xml_crypto_KeySelectorResult_h_
//$ interface javax.xml.crypto.KeySelectorResult
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace security {
		class Key;
	}
}

namespace javax {
	namespace xml {
		namespace crypto {

class $export KeySelectorResult : public ::java::lang::Object {
	$interface(KeySelectorResult, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::java::security::Key* getKey() {return nullptr;}
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_KeySelectorResult_h_