#ifndef _javax_xml_crypto_KeySelector$Purpose_h_
#define _javax_xml_crypto_KeySelector$Purpose_h_
//$ class javax.xml.crypto.KeySelector$Purpose
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("DECRYPT")
#undef DECRYPT
#pragma push_macro("ENCRYPT")
#undef ENCRYPT
#pragma push_macro("SIGN")
#undef SIGN
#pragma push_macro("VERIFY")
#undef VERIFY

namespace javax {
	namespace xml {
		namespace crypto {

class $export KeySelector$Purpose : public ::java::lang::Object {
	$class(KeySelector$Purpose, 0, ::java::lang::Object)
public:
	KeySelector$Purpose();
	void init$($String* name);
	virtual $String* toString() override;
	$String* name = nullptr;
	static ::javax::xml::crypto::KeySelector$Purpose* SIGN;
	static ::javax::xml::crypto::KeySelector$Purpose* VERIFY;
	static ::javax::xml::crypto::KeySelector$Purpose* ENCRYPT;
	static ::javax::xml::crypto::KeySelector$Purpose* DECRYPT;
};

		} // crypto
	} // xml
} // javax

#pragma pop_macro("DECRYPT")
#pragma pop_macro("ENCRYPT")
#pragma pop_macro("SIGN")
#pragma pop_macro("VERIFY")

#endif // _javax_xml_crypto_KeySelector$Purpose_h_