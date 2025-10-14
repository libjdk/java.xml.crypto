#ifndef _javax_xml_crypto_dsig_Transform_h_
#define _javax_xml_crypto_dsig_Transform_h_
//$ interface javax.xml.crypto.dsig.Transform
//$ extends javax.xml.crypto.XMLStructure,javax.xml.crypto.AlgorithmMethod

#include <javax/xml/crypto/AlgorithmMethod.h>
#include <javax/xml/crypto/XMLStructure.h>

#pragma push_macro("BASE64")
#undef BASE64
#pragma push_macro("ENVELOPED")
#undef ENVELOPED
#pragma push_macro("XPATH")
#undef XPATH
#pragma push_macro("XPATH2")
#undef XPATH2
#pragma push_macro("XSLT")
#undef XSLT

namespace java {
	namespace io {
		class OutputStream;
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

class $import Transform : public ::javax::xml::crypto::XMLStructure, public ::javax::xml::crypto::AlgorithmMethod {
	$interface(Transform, 0, ::javax::xml::crypto::XMLStructure, ::javax::xml::crypto::AlgorithmMethod)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::security::spec::AlgorithmParameterSpec* getParameterSpec() override {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	virtual ::javax::xml::crypto::Data* transform(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* context) {return nullptr;}
	virtual ::javax::xml::crypto::Data* transform(::javax::xml::crypto::Data* data, ::javax::xml::crypto::XMLCryptoContext* context, ::java::io::OutputStream* os) {return nullptr;}
	static $String* BASE64;
	static $String* ENVELOPED;
	static $String* XPATH;
	static $String* XPATH2;
	static $String* XSLT;
};

			} // dsig
		} // crypto
	} // xml
} // javax

#pragma pop_macro("BASE64")
#pragma pop_macro("ENVELOPED")
#pragma pop_macro("XPATH")
#pragma pop_macro("XPATH2")
#pragma pop_macro("XSLT")

#endif // _javax_xml_crypto_dsig_Transform_h_