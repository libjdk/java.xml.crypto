#ifndef _javax_xml_crypto_dsig_XMLSignature$SignatureValue_h_
#define _javax_xml_crypto_dsig_XMLSignature$SignatureValue_h_
//$ interface javax.xml.crypto.dsig.XMLSignature$SignatureValue
//$ extends javax.xml.crypto.XMLStructure

#include <java/lang/Array.h>
#include <javax/xml/crypto/XMLStructure.h>

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				class XMLValidateContext;
			}
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

class $import XMLSignature$SignatureValue : public ::javax::xml::crypto::XMLStructure {
	$interface(XMLSignature$SignatureValue, $NO_CLASS_INIT, ::javax::xml::crypto::XMLStructure)
public:
	virtual $String* getId() {return nullptr;}
	virtual $bytes* getValue() {return nullptr;}
	virtual bool validate(::javax::xml::crypto::dsig::XMLValidateContext* validateContext) {return false;}
};

			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_XMLSignature$SignatureValue_h_