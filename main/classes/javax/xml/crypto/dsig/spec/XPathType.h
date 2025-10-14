#ifndef _javax_xml_crypto_dsig_spec_XPathType_h_
#define _javax_xml_crypto_dsig_spec_XPathType_h_
//$ class javax.xml.crypto.dsig.spec.XPathType
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
					class XPathType$Filter;
				}
			}
		}
	}
}

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

class $export XPathType : public ::java::lang::Object {
	$class(XPathType, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XPathType();
	void init$($String* expression, ::javax::xml::crypto::dsig::spec::XPathType$Filter* filter);
	void init$($String* expression, ::javax::xml::crypto::dsig::spec::XPathType$Filter* filter, ::java::util::Map* namespaceMap);
	virtual $String* getExpression();
	virtual ::javax::xml::crypto::dsig::spec::XPathType$Filter* getFilter();
	virtual ::java::util::Map* getNamespaceMap();
	$String* expression = nullptr;
	::javax::xml::crypto::dsig::spec::XPathType$Filter* filter = nullptr;
	::java::util::Map* nsMap = nullptr;
};

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax

#endif // _javax_xml_crypto_dsig_spec_XPathType_h_