#ifndef _javax_xml_crypto_dsig_spec_XPathFilterParameterSpec_h_
#define _javax_xml_crypto_dsig_spec_XPathFilterParameterSpec_h_
//$ class javax.xml.crypto.dsig.spec.XPathFilterParameterSpec
//$ extends javax.xml.crypto.dsig.spec.TransformParameterSpec

#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>

namespace java {
	namespace util {
		class Map;
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

class $import XPathFilterParameterSpec : public ::javax::xml::crypto::dsig::spec::TransformParameterSpec {
	$class(XPathFilterParameterSpec, $NO_CLASS_INIT, ::javax::xml::crypto::dsig::spec::TransformParameterSpec)
public:
	XPathFilterParameterSpec();
	void init$($String* xPath);
	void init$($String* xPath, ::java::util::Map* namespaceMap);
	::java::util::Map* getNamespaceMap();
	$String* getXPath();
	$String* xPath = nullptr;
	::java::util::Map* nsMap = nullptr;
};

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_spec_XPathFilterParameterSpec_h_