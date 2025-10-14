#ifndef _javax_xml_crypto_KeySelector_h_
#define _javax_xml_crypto_KeySelector_h_
//$ class javax.xml.crypto.KeySelector
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

class $export KeySelector : public ::java::lang::Object {
	$class(KeySelector, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeySelector();
	void init$();
	virtual ::javax::xml::crypto::KeySelectorResult* select(::javax::xml::crypto::dsig::keyinfo::KeyInfo* keyInfo, ::javax::xml::crypto::KeySelector$Purpose* purpose, ::javax::xml::crypto::AlgorithmMethod* method, ::javax::xml::crypto::XMLCryptoContext* context) {return nullptr;}
	static ::javax::xml::crypto::KeySelector* singletonKeySelector(::java::security::Key* key);
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_KeySelector_h_