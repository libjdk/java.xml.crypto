#ifndef _javax_xml_crypto_dsig_SignedInfo_h_
#define _javax_xml_crypto_dsig_SignedInfo_h_
//$ interface javax.xml.crypto.dsig.SignedInfo
//$ extends javax.xml.crypto.XMLStructure

#include <javax/xml/crypto/XMLStructure.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				class CanonicalizationMethod;
				class SignatureMethod;
			}
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

class $import SignedInfo : public ::javax::xml::crypto::XMLStructure {
	$interface(SignedInfo, $NO_CLASS_INIT, ::javax::xml::crypto::XMLStructure)
public:
	virtual ::javax::xml::crypto::dsig::CanonicalizationMethod* getCanonicalizationMethod() {return nullptr;}
	virtual ::java::io::InputStream* getCanonicalizedData() {return nullptr;}
	virtual $String* getId() {return nullptr;}
	virtual ::java::util::List* getReferences() {return nullptr;}
	virtual ::javax::xml::crypto::dsig::SignatureMethod* getSignatureMethod() {return nullptr;}
};

			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_SignedInfo_h_