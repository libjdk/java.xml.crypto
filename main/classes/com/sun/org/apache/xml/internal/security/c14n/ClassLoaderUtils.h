#ifndef _com_sun_org_apache_xml_internal_security_c14n_ClassLoaderUtils_h_
#define _com_sun_org_apache_xml_internal_security_c14n_ClassLoaderUtils_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.ClassLoaderUtils
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("LOG")
#undef LOG

namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {
					class Logger;
				}
			}
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

class ClassLoaderUtils : public ::java::lang::Object {
	$class(ClassLoaderUtils, 0, ::java::lang::Object)
public:
	ClassLoaderUtils();
	void init$();
	static $Class* loadClass($String* className, $Class* callingClass);
	static $Class* loadClass2($String* className, $Class* callingClass);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
};

							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_c14n_ClassLoaderUtils_h_