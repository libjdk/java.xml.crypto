#ifndef _com_sun_org_apache_xml_internal_security_c14n_helper_C14nHelper_h_
#define _com_sun_org_apache_xml_internal_security_c14n_helper_C14nHelper_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.helper.C14nHelper
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace helper {

class C14nHelper : public ::java::lang::Object {
	$class(C14nHelper, $NO_CLASS_INIT, ::java::lang::Object)
public:
	C14nHelper();
	void init$();
	static bool namespaceIsAbsolute(::org::w3c::dom::Attr* namespace$);
	static bool namespaceIsAbsolute($String* namespaceValue);
	static bool namespaceIsRelative(::org::w3c::dom::Attr* namespace$);
	static bool namespaceIsRelative($String* namespaceValue);
};

								} // helper
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_c14n_helper_C14nHelper_h_