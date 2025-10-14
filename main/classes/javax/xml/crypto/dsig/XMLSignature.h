#ifndef _javax_xml_crypto_dsig_XMLSignature_h_
#define _javax_xml_crypto_dsig_XMLSignature_h_
//$ interface javax.xml.crypto.dsig.XMLSignature
//$ extends javax.xml.crypto.XMLStructure

#include <javax/xml/crypto/XMLStructure.h>

#pragma push_macro("XMLNS")
#undef XMLNS

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class KeySelectorResult;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				class SignedInfo;
				class XMLSignContext;
				class XMLSignature$SignatureValue;
				class XMLValidateContext;
			}
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
			namespace dsig {

class $export XMLSignature : public ::javax::xml::crypto::XMLStructure {
	$interface(XMLSignature, 0, ::javax::xml::crypto::XMLStructure)
public:
	virtual $String* getId() {return nullptr;}
	virtual ::javax::xml::crypto::dsig::keyinfo::KeyInfo* getKeyInfo() {return nullptr;}
	virtual ::javax::xml::crypto::KeySelectorResult* getKeySelectorResult() {return nullptr;}
	virtual ::java::util::List* getObjects() {return nullptr;}
	virtual ::javax::xml::crypto::dsig::XMLSignature$SignatureValue* getSignatureValue() {return nullptr;}
	virtual ::javax::xml::crypto::dsig::SignedInfo* getSignedInfo() {return nullptr;}
	virtual void sign(::javax::xml::crypto::dsig::XMLSignContext* signContext) {}
	virtual bool validate(::javax::xml::crypto::dsig::XMLValidateContext* validateContext) {return false;}
	static $String* XMLNS;
};

			} // dsig
		} // crypto
	} // xml
} // javax

#pragma pop_macro("XMLNS")

#endif // _javax_xml_crypto_dsig_XMLSignature_h_