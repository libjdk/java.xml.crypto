#include <com/sun/org/slf4j/internal/LoggerFactory.h>

#include <com/sun/org/slf4j/internal/Logger.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {

$MethodInfo _LoggerFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(LoggerFactory::*)()>(&LoggerFactory::init$))},
	{"getLogger", "(Ljava/lang/Class;)Lcom/sun/org/slf4j/internal/Logger;", "(Ljava/lang/Class<*>;)Lcom/sun/org/slf4j/internal/Logger;", $PUBLIC | $STATIC, $method(static_cast<$Logger*(*)($Class*)>(&LoggerFactory::getLogger))},
	{}
};

$ClassInfo _LoggerFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.slf4j.internal.LoggerFactory",
	"java.lang.Object",
	nullptr,
	nullptr,
	_LoggerFactory_MethodInfo_
};

$Object* allocate$LoggerFactory($Class* clazz) {
	return $of($alloc(LoggerFactory));
}

void LoggerFactory::init$() {
}

$Logger* LoggerFactory::getLogger($Class* clazz) {
	return $new($Logger, $($nc(clazz)->getName()));
}

LoggerFactory::LoggerFactory() {
}

$Class* LoggerFactory::load$($String* name, bool initialize) {
	$loadClass(LoggerFactory, name, initialize, &_LoggerFactory_ClassInfo_, allocate$LoggerFactory);
	return class$;
}

$Class* LoggerFactory::class$ = nullptr;

				} // internal
			} // slf4j
		} // org
	} // sun
} // com