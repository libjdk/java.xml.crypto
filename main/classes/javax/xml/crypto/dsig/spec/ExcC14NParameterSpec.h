#ifndef _javax_xml_crypto_dsig_spec_ExcC14NParameterSpec_h_
#define _javax_xml_crypto_dsig_spec_ExcC14NParameterSpec_h_
//$ class javax.xml.crypto.dsig.spec.ExcC14NParameterSpec
//$ extends javax.xml.crypto.dsig.spec.C14NMethodParameterSpec

#include <javax/xml/crypto/dsig/spec/C14NMethodParameterSpec.h>

#pragma push_macro("DEFAULT")
#undef DEFAULT

namespace java {
	namespace util {
		class List;
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

class $export ExcC14NParameterSpec : public ::javax::xml::crypto::dsig::spec::C14NMethodParameterSpec {
	$class(ExcC14NParameterSpec, 0, ::javax::xml::crypto::dsig::spec::C14NMethodParameterSpec)
public:
	ExcC14NParameterSpec();
	void init$();
	void init$(::java::util::List* prefixList);
	::java::util::List* getPrefixList();
	::java::util::List* prefixList = nullptr;
	static $String* DEFAULT;
};

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax

#pragma pop_macro("DEFAULT")

#endif // _javax_xml_crypto_dsig_spec_ExcC14NParameterSpec_h_