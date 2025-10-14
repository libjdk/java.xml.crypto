#ifndef _javax_xml_crypto_dsig_SignatureMethod_h_
#define _javax_xml_crypto_dsig_SignatureMethod_h_
//$ interface javax.xml.crypto.dsig.SignatureMethod
//$ extends javax.xml.crypto.XMLStructure,javax.xml.crypto.AlgorithmMethod

#include <javax/xml/crypto/AlgorithmMethod.h>
#include <javax/xml/crypto/XMLStructure.h>

#pragma push_macro("DSA_SHA1")
#undef DSA_SHA1
#pragma push_macro("DSA_SHA256")
#undef DSA_SHA256
#pragma push_macro("ECDSA_SHA1")
#undef ECDSA_SHA1
#pragma push_macro("ECDSA_SHA224")
#undef ECDSA_SHA224
#pragma push_macro("ECDSA_SHA256")
#undef ECDSA_SHA256
#pragma push_macro("ECDSA_SHA384")
#undef ECDSA_SHA384
#pragma push_macro("ECDSA_SHA512")
#undef ECDSA_SHA512
#pragma push_macro("HMAC_SHA1")
#undef HMAC_SHA1
#pragma push_macro("HMAC_SHA224")
#undef HMAC_SHA224
#pragma push_macro("HMAC_SHA256")
#undef HMAC_SHA256
#pragma push_macro("HMAC_SHA384")
#undef HMAC_SHA384
#pragma push_macro("HMAC_SHA512")
#undef HMAC_SHA512
#pragma push_macro("RSA_PSS")
#undef RSA_PSS
#pragma push_macro("RSA_SHA1")
#undef RSA_SHA1
#pragma push_macro("RSA_SHA224")
#undef RSA_SHA224
#pragma push_macro("RSA_SHA256")
#undef RSA_SHA256
#pragma push_macro("RSA_SHA384")
#undef RSA_SHA384
#pragma push_macro("RSA_SHA512")
#undef RSA_SHA512
#pragma push_macro("SHA1_RSA_MGF1")
#undef SHA1_RSA_MGF1

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

class $export SignatureMethod : public ::javax::xml::crypto::XMLStructure, public ::javax::xml::crypto::AlgorithmMethod {
	$interface(SignatureMethod, $NO_CLASS_INIT, ::javax::xml::crypto::XMLStructure, ::javax::xml::crypto::AlgorithmMethod)
public:
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual ::java::security::spec::AlgorithmParameterSpec* getParameterSpec() override {return nullptr;}
	virtual int32_t hashCode() override;
	virtual $String* toString() override;
	static $String* DSA_SHA1;
	static $String* DSA_SHA256;
	static $String* RSA_SHA1;
	static $String* RSA_SHA224;
	static $String* RSA_SHA256;
	static $String* RSA_SHA384;
	static $String* RSA_SHA512;
	static $String* SHA1_RSA_MGF1;
	static $String* SHA224_RSA_MGF1;
	static $String* SHA256_RSA_MGF1;
	static $String* SHA384_RSA_MGF1;
	static $String* SHA512_RSA_MGF1;
	static $String* ECDSA_SHA1;
	static $String* ECDSA_SHA224;
	static $String* ECDSA_SHA256;
	static $String* ECDSA_SHA384;
	static $String* ECDSA_SHA512;
	static $String* HMAC_SHA1;
	static $String* HMAC_SHA224;
	static $String* HMAC_SHA256;
	static $String* HMAC_SHA384;
	static $String* HMAC_SHA512;
	static $String* RSA_PSS;
};

			} // dsig
		} // crypto
	} // xml
} // javax

#pragma pop_macro("DSA_SHA1")
#pragma pop_macro("DSA_SHA256")
#pragma pop_macro("ECDSA_SHA1")
#pragma pop_macro("ECDSA_SHA224")
#pragma pop_macro("ECDSA_SHA256")
#pragma pop_macro("ECDSA_SHA384")
#pragma pop_macro("ECDSA_SHA512")
#pragma pop_macro("HMAC_SHA1")
#pragma pop_macro("HMAC_SHA224")
#pragma pop_macro("HMAC_SHA256")
#pragma pop_macro("HMAC_SHA384")
#pragma pop_macro("HMAC_SHA512")
#pragma pop_macro("RSA_PSS")
#pragma pop_macro("RSA_SHA1")
#pragma pop_macro("RSA_SHA224")
#pragma pop_macro("RSA_SHA256")
#pragma pop_macro("RSA_SHA384")
#pragma pop_macro("RSA_SHA512")
#pragma pop_macro("SHA1_RSA_MGF1")

#endif // _javax_xml_crypto_dsig_SignatureMethod_h_