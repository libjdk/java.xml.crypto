#ifndef _com_sun_org_slf4j_internal_LoggerFactory_h_
#define _com_sun_org_slf4j_internal_LoggerFactory_h_
//$ class com.sun.org.slf4j.internal.LoggerFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			namespace slf4j {
				namespace internal {

class LoggerFactory : public ::java::lang::Object {
	$class(LoggerFactory, $NO_CLASS_INIT, ::java::lang::Object)
public:
	LoggerFactory();
	void init$();
	static ::com::sun::org::slf4j::internal::Logger* getLogger($Class* clazz);
};

				} // internal
			} // slf4j
		} // org
	} // sun
} // com

#endif // _com_sun_org_slf4j_internal_LoggerFactory_h_