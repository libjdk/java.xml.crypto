#ifndef _javax_xml_crypto_dsig_spec_XSLTTransformParameterSpec_h_
#define _javax_xml_crypto_dsig_spec_XSLTTransformParameterSpec_h_
//$ class javax.xml.crypto.dsig.spec.XSLTTransformParameterSpec
//$ extends javax.xml.crypto.dsig.spec.TransformParameterSpec

#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>

namespace javax {
	namespace xml {
		namespace crypto {
			class XMLStructure;
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

class $import XSLTTransformParameterSpec : public ::javax::xml::crypto::dsig::spec::TransformParameterSpec {
	$class(XSLTTransformParameterSpec, $NO_CLASS_INIT, ::javax::xml::crypto::dsig::spec::TransformParameterSpec)
public:
	XSLTTransformParameterSpec();
	void init$(::javax::xml::crypto::XMLStructure* stylesheet);
	::javax::xml::crypto::XMLStructure* getStylesheet();
	::javax::xml::crypto::XMLStructure* stylesheet = nullptr;
};

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_spec_XSLTTransformParameterSpec_h_