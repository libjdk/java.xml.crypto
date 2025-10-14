#ifndef _javax_xml_crypto_dsig_spec_XPathFilter2ParameterSpec_h_
#define _javax_xml_crypto_dsig_spec_XPathFilter2ParameterSpec_h_
//$ class javax.xml.crypto.dsig.spec.XPathFilter2ParameterSpec
//$ extends javax.xml.crypto.dsig.spec.TransformParameterSpec

#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>

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

class $import XPathFilter2ParameterSpec : public ::javax::xml::crypto::dsig::spec::TransformParameterSpec {
	$class(XPathFilter2ParameterSpec, $NO_CLASS_INIT, ::javax::xml::crypto::dsig::spec::TransformParameterSpec)
public:
	XPathFilter2ParameterSpec();
	void init$(::java::util::List* xPathList);
	::java::util::List* getXPathList();
	::java::util::List* xPathList = nullptr;
};

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_spec_XPathFilter2ParameterSpec_h_