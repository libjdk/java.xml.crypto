#ifndef _javax_xml_crypto_dsig_CanonicalizationMethod_h_
#define _javax_xml_crypto_dsig_CanonicalizationMethod_h_
//$ interface javax.xml.crypto.dsig.CanonicalizationMethod
//$ extends javax.xml.crypto.dsig.Transform

#include <javax/xml/crypto/dsig/Transform.h>

#pragma push_macro("EXCLUSIVE")
#undef EXCLUSIVE
#pragma push_macro("EXCLUSIVE_WITH_COMMENTS")
#undef EXCLUSIVE_WITH_COMMENTS
#pragma push_macro("INCLUSIVE")
#undef INCLUSIVE
#pragma push_macro("INCLUSIVE_11")
#undef INCLUSIVE_11
#pragma push_macro("INCLUSIVE_11_WITH_COMMENTS")
#undef INCLUSIVE_11_WITH_COMMENTS
#pragma push_macro("INCLUSIVE_WITH_COMMENTS")
#undef INCLUSIVE_WITH_COMMENTS

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

class $export CanonicalizationMethod : public ::javax::xml::crypto::dsig::Transform {
	$interface(CanonicalizationMethod, 0, ::javax::xml::crypto::dsig::Transform)
public:
	virtual ::java::security::spec::AlgorithmParameterSpec* getParameterSpec() override {return nullptr;}
	static $String* INCLUSIVE;
	static $String* INCLUSIVE_WITH_COMMENTS;
	static $String* EXCLUSIVE;
	static $String* EXCLUSIVE_WITH_COMMENTS;
	static $String* INCLUSIVE_11;
	static $String* INCLUSIVE_11_WITH_COMMENTS;
};

			} // dsig
		} // crypto
	} // xml
} // javax

#pragma pop_macro("EXCLUSIVE")
#pragma pop_macro("EXCLUSIVE_WITH_COMMENTS")
#pragma pop_macro("INCLUSIVE")
#pragma pop_macro("INCLUSIVE_11")
#pragma pop_macro("INCLUSIVE_11_WITH_COMMENTS")
#pragma pop_macro("INCLUSIVE_WITH_COMMENTS")

#endif // _javax_xml_crypto_dsig_CanonicalizationMethod_h_