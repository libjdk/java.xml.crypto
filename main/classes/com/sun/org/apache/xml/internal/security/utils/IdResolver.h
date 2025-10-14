#ifndef _com_sun_org_apache_xml_internal_security_utils_IdResolver_h_
#define _com_sun_org_apache_xml_internal_security_utils_IdResolver_h_
//$ class com.sun.org.apache.xml.internal.security.utils.IdResolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
			class Document;
			class Element;
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
							namespace utils {

class IdResolver : public ::java::lang::Object {
	$class(IdResolver, $NO_CLASS_INIT, ::java::lang::Object)
public:
	IdResolver();
	void init$();
	static ::org::w3c::dom::Element* getElementById(::org::w3c::dom::Document* doc, $String* id);
	static void registerElementById(::org::w3c::dom::Element* element, ::org::w3c::dom::Attr* id);
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_utils_IdResolver_h_