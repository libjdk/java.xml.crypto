#ifndef _javax_xml_crypto_dsig_keyinfo_KeyInfo_h_
#define _javax_xml_crypto_dsig_keyinfo_KeyInfo_h_
//$ interface javax.xml.crypto.dsig.keyinfo.KeyInfo
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
			class XMLCryptoContext;
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

class $export KeyInfo : public ::javax::xml::crypto::XMLStructure {
	$interface(KeyInfo, $NO_CLASS_INIT, ::javax::xml::crypto::XMLStructure)
public:
	virtual ::java::util::List* getContent() {return nullptr;}
	virtual $String* getId() {return nullptr;}
	virtual void marshal(::javax::xml::crypto::XMLStructure* parent, ::javax::xml::crypto::XMLCryptoContext* context) {}
};

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_keyinfo_KeyInfo_h_