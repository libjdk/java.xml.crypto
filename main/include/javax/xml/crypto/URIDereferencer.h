#ifndef _javax_xml_crypto_URIDereferencer_h_
#define _javax_xml_crypto_URIDereferencer_h_
//$ interface javax.xml.crypto.URIDereferencer
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace javax {
	namespace xml {
		namespace crypto {
			class Data;
			class URIReference;
			class XMLCryptoContext;
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {

class $import URIDereferencer : public ::java::lang::Object {
	$interface(URIDereferencer, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::javax::xml::crypto::Data* dereference(::javax::xml::crypto::URIReference* uriReference, ::javax::xml::crypto::XMLCryptoContext* context) {return nullptr;}
};

		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_URIDereferencer_h_