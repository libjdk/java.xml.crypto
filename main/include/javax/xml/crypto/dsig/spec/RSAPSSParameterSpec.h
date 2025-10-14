#ifndef _javax_xml_crypto_dsig_spec_RSAPSSParameterSpec_h_
#define _javax_xml_crypto_dsig_spec_RSAPSSParameterSpec_h_
//$ class javax.xml.crypto.dsig.spec.RSAPSSParameterSpec
//$ extends javax.xml.crypto.dsig.spec.SignatureMethodParameterSpec

#include <javax/xml/crypto/dsig/spec/SignatureMethodParameterSpec.h>

namespace java {
	namespace security {
		namespace spec {
			class PSSParameterSpec;
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

class $import RSAPSSParameterSpec : public ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec {
	$class(RSAPSSParameterSpec, $NO_CLASS_INIT, ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec)
public:
	RSAPSSParameterSpec();
	void init$(::java::security::spec::PSSParameterSpec* spec);
	::java::security::spec::PSSParameterSpec* getPSSParameterSpec();
	::java::security::spec::PSSParameterSpec* spec = nullptr;
};

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_spec_RSAPSSParameterSpec_h_