#ifndef _javax_xml_crypto_dsig_DigestMethod_h_
#define _javax_xml_crypto_dsig_DigestMethod_h_
//$ interface javax.xml.crypto.dsig.DigestMethod
//$ extends javax.xml.crypto.XMLStructure,javax.xml.crypto.AlgorithmMethod

#include <javax/xml/crypto/AlgorithmMethod.h>
#include <javax/xml/crypto/XMLStructure.h>

#pragma push_macro("RIPEMD160")
#undef RIPEMD160
#pragma push_macro("SHA1")
#undef SHA1

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

class $import DigestMethod : public ::javax::xml::crypto::XMLStructure, public ::javax::xml::crypto::AlgorithmMethod {
	$interface(DigestMethod, $NO_CLASS_INIT, ::javax::xml::crypto::XMLStructure, ::javax::xml::crypto::AlgorithmMethod)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::security::spec::AlgorithmParameterSpec* getParameterSpec() override {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static $String* SHA1;
	static $String* SHA224;
	static $String* SHA256;
	static $String* SHA384;
	static $String* SHA512;
	static $String* RIPEMD160;
	static $String* SHA3_224;
	static $String* SHA3_256;
	static $String* SHA3_384;
	static $String* SHA3_512;
};

			} // dsig
		} // crypto
	} // xml
} // javax

#pragma pop_macro("RIPEMD160")
#pragma pop_macro("SHA1")

#endif // _javax_xml_crypto_dsig_DigestMethod_h_