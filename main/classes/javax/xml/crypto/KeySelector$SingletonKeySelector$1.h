#ifndef _javax_xml_crypto_KeySelector$SingletonKeySelector$1_h_
#define _javax_xml_crypto_KeySelector$SingletonKeySelector$1_h_
//$ class javax.xml.crypto.KeySelector$SingletonKeySelector$1
//$ extends javax.xml.crypto.KeySelectorResult

#include <javax/xml/crypto/KeySelectorResult.h>

namespace java {
	namespace security {
		class Key;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class KeySelector$SingletonKeySelector;
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {

class KeySelector$SingletonKeySelector$1 : public ::javax::xml::crypto::KeySelectorResult {
	$class(KeySelector$SingletonKeySelector$1, $NO_CLASS_INIT, ::javax::xml::crypto::KeySelectorResult)
public:
	KeySelector$SingletonKeySelector$1();
	void init$(::javax::xml::crypto::KeySelector$SingletonKeySelector* this$0);
	virtual ::java::security::Key* getKey() override;
	::javax::xml::crypto::KeySelector$SingletonKeySelector* this$0 = nullptr;
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_KeySelector$SingletonKeySelector$1_h_