#ifndef _com_sun_org_apache_xml_internal_security_Init_h_
#define _com_sun_org_apache_xml_internal_security_Init_h_
//$ class com.sun.org.apache.xml.internal.security.Init
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("CONF_NS")
#undef CONF_NS
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
namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace net {
		class URL;
	}
}
namespace java {
	namespace util {
		class List;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {

class Init : public ::java::lang::Object {
	$class(Init, 0, ::java::lang::Object)
public:
	Init();
	void init$();
	static void dynamicInit();
	static void fileInit(::java::io::InputStream* is);
	static ::java::net::URL* getResource($String* resourceName, $Class* callingClass);
	static ::java::io::InputStream* getResourceAsStream($String* resourceName, $Class* callingClass);
	static ::java::util::List* getResources($String* resourceName, $Class* callingClass);
	static void init();
	static bool isInitialized();
	static ::java::io::InputStream* lambda$init$0();
	static $String* CONF_NS;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static bool alreadyInitialized;
};

						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("CONF_NS")
#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_Init_h_