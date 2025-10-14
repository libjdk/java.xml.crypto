#ifndef _com_sun_org_apache_xml_internal_security_utils_JavaUtils_h_
#define _com_sun_org_apache_xml_internal_security_utils_JavaUtils_h_
//$ class com.sun.org.apache.xml.internal.security.utils.JavaUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("REGISTER_PERMISSION")
#undef REGISTER_PERMISSION

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
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace security {
		class SecurityPermission;
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

class JavaUtils : public ::java::lang::Object {
	$class(JavaUtils, 0, ::java::lang::Object)
public:
	JavaUtils();
	void init$();
	static void checkRegisterPermission();
	static $bytes* convertDsaASN1toXMLDSIG($bytes* asn1Bytes, int32_t size);
	static $bytes* convertDsaXMLDSIGtoASN1($bytes* xmldsigBytes, int32_t size);
	static $bytes* getBytesFromFile($String* fileName);
	static $bytes* getBytesFromStream(::java::io::InputStream* inputStream);
	static $Object* newInstanceWithEmptyConstructor($Class* clazz);
	static void writeBytesToFilename($String* filename, $bytes* bytes);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static ::java::security::SecurityPermission* REGISTER_PERMISSION;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")
#pragma pop_macro("REGISTER_PERMISSION")

#endif // _com_sun_org_apache_xml_internal_security_utils_JavaUtils_h_