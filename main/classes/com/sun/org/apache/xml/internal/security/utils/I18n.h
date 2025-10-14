#ifndef _com_sun_org_apache_xml_internal_security_utils_I18n_h_
#define _com_sun_org_apache_xml_internal_security_utils_I18n_h_
//$ class com.sun.org.apache.xml.internal.security.utils.I18n
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("NOT_INITIALIZED_MSG")
#undef NOT_INITIALIZED_MSG

namespace java {
	namespace lang {
		class Exception;
	}
}
namespace java {
	namespace util {
		class ResourceBundle;
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

class I18n : public ::java::lang::Object {
	$class(I18n, 0, ::java::lang::Object)
public:
	I18n();
	void init$();
	static $String* getExceptionMessage($String* msgID);
	static $String* getExceptionMessage($String* msgID, ::java::lang::Exception* originalException);
	static $String* getExceptionMessage($String* msgID, $ObjectArray* exArgs);
	static void init($String* languageCode, $String* countryCode);
	static void init(::java::util::ResourceBundle* resourceBundle);
	static $String* translate($String* message, $ObjectArray* args);
	static $String* translate($String* message);
	static $String* NOT_INITIALIZED_MSG;
	static ::java::util::ResourceBundle* resourceBundle;
	static bool alreadyInitialized;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("NOT_INITIALIZED_MSG")

#endif // _com_sun_org_apache_xml_internal_security_utils_I18n_h_