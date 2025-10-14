#ifndef _javax_xml_crypto_dsig_keyinfo_RetrievalMethod_h_
#define _javax_xml_crypto_dsig_keyinfo_RetrievalMethod_h_
//$ interface javax.xml.crypto.dsig.keyinfo.RetrievalMethod
//$ extends javax.xml.crypto.URIReference,javax.xml.crypto.XMLStructure

#include <javax/xml/crypto/URIReference.h>
#include <javax/xml/crypto/XMLStructure.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			class Data;
			class XMLCryptoContext;
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

class $import RetrievalMethod : public ::javax::xml::crypto::URIReference, public ::javax::xml::crypto::XMLStructure {
	$interface(RetrievalMethod, $NO_CLASS_INIT, ::javax::xml::crypto::URIReference, ::javax::xml::crypto::XMLStructure)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual ::javax::xml::crypto::Data* dereference(::javax::xml::crypto::XMLCryptoContext* context) {return nullptr;}
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::util::List* getTransforms() {return nullptr;}
	virtual $String* getURI() override {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
};

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_keyinfo_RetrievalMethod_h_