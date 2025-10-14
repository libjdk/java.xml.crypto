#ifndef _javax_xml_crypto_KeySelector$SingletonKeySelector_h_
#define _javax_xml_crypto_KeySelector$SingletonKeySelector_h_
//$ class javax.xml.crypto.KeySelector$SingletonKeySelector
//$ extends javax.xml.crypto.KeySelector

#include <javax/xml/crypto/KeySelector.h>

namespace java {
	namespace security {
		class Key;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class AlgorithmMethod;
			class KeySelector$Purpose;
			class KeySelectorResult;
			class XMLCryptoContext;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {
					class KeyInfo;
				}
			}
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {

class KeySelector$SingletonKeySelector : public ::javax::xml::crypto::KeySelector {
	$class(KeySelector$SingletonKeySelector, $NO_CLASS_INIT, ::javax::xml::crypto::KeySelector)
public:
	KeySelector$SingletonKeySelector();
	void init$(::java::security::Key* key);
	virtual ::javax::xml::crypto::KeySelectorResult* select(::javax::xml::crypto::dsig::keyinfo::KeyInfo* keyInfo, ::javax::xml::crypto::KeySelector$Purpose* purpose, ::javax::xml::crypto::AlgorithmMethod* method, ::javax::xml::crypto::XMLCryptoContext* context) override;
	::java::security::Key* key = nullptr;
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_KeySelector$SingletonKeySelector_h_