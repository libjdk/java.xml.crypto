#ifndef _com_sun_org_apache_xml_internal_security_c14n_implementations_UtfHelpper_h_
#define _com_sun_org_apache_xml_internal_security_c14n_implementations_UtfHelpper_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.implementations.UtfHelpper
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("OLD_UTF8")
#undef OLD_UTF8

namespace java {
	namespace io {
		class OutputStream;
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace java {
	namespace util {
		class Map;
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
								namespace implementations {

class UtfHelpper : public ::java::lang::Object {
	$class(UtfHelpper, 0, ::java::lang::Object)
public:
	UtfHelpper();
	void init$();
	static $bytes* getStringInUtf8($String* str);
	static ::java::lang::Boolean* lambda$static$0();
	static void writeByte($String* str, ::java::io::OutputStream* out, ::java::util::Map* cache);
	static void writeCodePointToUtf8(int32_t c, ::java::io::OutputStream* out);
	static void writeStringToUtf8($String* str, ::java::io::OutputStream* out);
	static bool OLD_UTF8;
};

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("OLD_UTF8")

#endif // _com_sun_org_apache_xml_internal_security_c14n_implementations_UtfHelpper_h_