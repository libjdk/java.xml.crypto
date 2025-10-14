#ifndef _javax_xml_crypto_dsig_spec_XPathType$Filter_h_
#define _javax_xml_crypto_dsig_spec_XPathType$Filter_h_
//$ class javax.xml.crypto.dsig.spec.XPathType$Filter
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("INTERSECT")
#undef INTERSECT
#pragma push_macro("SUBTRACT")
#undef SUBTRACT
#pragma push_macro("UNION")
#undef UNION

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

class $import XPathType$Filter : public ::java::lang::Object {
	$class(XPathType$Filter, 0, ::java::lang::Object)
public:
	XPathType$Filter();
	void init$($String* operation);
	virtual $String* toString() override;
	$String* operation = nullptr;
	static ::javax::xml::crypto::dsig::spec::XPathType$Filter* INTERSECT;
	static ::javax::xml::crypto::dsig::spec::XPathType$Filter* SUBTRACT;
	static ::javax::xml::crypto::dsig::spec::XPathType$Filter* UNION;
};

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax

#pragma pop_macro("INTERSECT")
#pragma pop_macro("SUBTRACT")
#pragma pop_macro("UNION")

#endif // _javax_xml_crypto_dsig_spec_XPathType$Filter_h_