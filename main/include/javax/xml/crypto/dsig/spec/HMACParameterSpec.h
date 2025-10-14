#ifndef _javax_xml_crypto_dsig_spec_HMACParameterSpec_h_
#define _javax_xml_crypto_dsig_spec_HMACParameterSpec_h_
//$ class javax.xml.crypto.dsig.spec.HMACParameterSpec
//$ extends javax.xml.crypto.dsig.spec.SignatureMethodParameterSpec

#include <javax/xml/crypto/dsig/spec/SignatureMethodParameterSpec.h>

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

class $import HMACParameterSpec : public ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec {
	$class(HMACParameterSpec, $NO_CLASS_INIT, ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec)
public:
	HMACParameterSpec();
	void init$(int32_t outputLength);
	int32_t getOutputLength();
	int32_t outputLength = 0;
};

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_spec_HMACParameterSpec_h_