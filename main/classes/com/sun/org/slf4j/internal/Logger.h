#ifndef _com_sun_org_slf4j_internal_Logger_h_
#define _com_sun_org_slf4j_internal_Logger_h_
//$ class com.sun.org.slf4j.internal.Logger
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("WALKER")
#undef WALKER

namespace java {
	namespace lang {
		class StackWalker;
		class Throwable;
	}
}
namespace java {
	namespace util {
		class Optional;
	}
}
namespace java {
	namespace util {
		namespace logging {
			class Level;
			class Logger;
		}
	}
}
namespace java {
	namespace util {
		namespace stream {
			class Stream;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {

class Logger : public ::java::lang::Object {
	$class(Logger, 0, ::java::lang::Object)
public:
	Logger();
	void init$($String* name);
	static $String* addIndex($String* s);
	virtual void debug($String* s);
	virtual void debug($String* s, $Throwable* e);
	virtual void debug($String* s, $ObjectArray* o);
	virtual void error($String* s);
	virtual void error($String* s, $Throwable* e);
	virtual void error($String* s, $ObjectArray* o);
	virtual bool isDebugEnabled();
	virtual bool isTraceEnabled();
	static ::java::util::Optional* lambda$log0$1(::java::util::stream::Stream* f);
	static ::java::lang::StackWalker* lambda$static$0();
	void log0(::java::util::logging::Level* level, $String* s);
	void log0(::java::util::logging::Level* level, $String* s, $Throwable* e);
	void log0(::java::util::logging::Level* level, $String* s, $ObjectArray* o);
	virtual void trace($String* s);
	virtual void warn($String* s);
	virtual void warn($String* s, $Throwable* e);
	virtual void warn($String* s, $ObjectArray* o);
	static ::java::lang::StackWalker* WALKER;
	::java::util::logging::Logger* impl = nullptr;
};

				} // internal
			} // slf4j
		} // org
	} // sun
} // com

#pragma pop_macro("WALKER")

#endif // _com_sun_org_slf4j_internal_Logger_h_