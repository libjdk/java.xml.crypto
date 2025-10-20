#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/ClassLoaderUtils.h>

#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef LOG

using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace keyresolver {

$FieldInfo _ClassLoaderUtils_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ClassLoaderUtils, LOG)},
	{}
};

$MethodInfo _ClassLoaderUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ClassLoaderUtils::*)()>(&ClassLoaderUtils::init$))},
	{"loadClass", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/Class<*>;)Ljava/lang/Class<*>;", $STATIC, $method(static_cast<$Class*(*)($String*,$Class*)>(&ClassLoaderUtils::loadClass)), "java.lang.ClassNotFoundException"},
	{"loadClass2", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Class;", "(Ljava/lang/String;Ljava/lang/Class<*>;)Ljava/lang/Class<*>;", $PRIVATE | $STATIC, $method(static_cast<$Class*(*)($String*,$Class*)>(&ClassLoaderUtils::loadClass2)), "java.lang.ClassNotFoundException"},
	{}
};

$ClassInfo _ClassLoaderUtils_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.ClassLoaderUtils",
	"java.lang.Object",
	nullptr,
	_ClassLoaderUtils_FieldInfo_,
	_ClassLoaderUtils_MethodInfo_
};

$Object* allocate$ClassLoaderUtils($Class* clazz) {
	return $of($alloc(ClassLoaderUtils));
}

$Logger* ClassLoaderUtils::LOG = nullptr;

void ClassLoaderUtils::init$() {
}

$Class* ClassLoaderUtils::loadClass($String* className, $Class* callingClass) {
	$init(ClassLoaderUtils);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$var($ClassLoader, cl, $($Thread::currentThread())->getContextClassLoader());
		if (cl != nullptr) {
			return cl->loadClass(className);
		}
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, e, $catch());
		$nc(ClassLoaderUtils::LOG)->debug($(e->getMessage()), static_cast<$Throwable*>(e));
	}
	return loadClass2(className, callingClass);
}

$Class* ClassLoaderUtils::loadClass2($String* className, $Class* callingClass) {
	$init(ClassLoaderUtils);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		return $Class::forName(className);
	} catch ($ClassNotFoundException&) {
		$var($ClassNotFoundException, ex, $catch());
		try {
			if (ClassLoaderUtils::class$->getClassLoader() != nullptr) {
				return $nc($(ClassLoaderUtils::class$->getClassLoader()))->loadClass(className);
			}
		} catch ($ClassNotFoundException&) {
			$var($ClassNotFoundException, exc, $catch());
			if (callingClass != nullptr && callingClass->getClassLoader() != nullptr) {
				return $nc($(callingClass->getClassLoader()))->loadClass(className);
			}
		}
		$nc(ClassLoaderUtils::LOG)->debug($(ex->getMessage()), static_cast<$Throwable*>(ex));
		$throw(ex);
	}
	$shouldNotReachHere();
}

void clinit$ClassLoaderUtils($Class* class$) {
	$assignStatic(ClassLoaderUtils::LOG, $LoggerFactory::getLogger(ClassLoaderUtils::class$));
}

ClassLoaderUtils::ClassLoaderUtils() {
}

$Class* ClassLoaderUtils::load$($String* name, bool initialize) {
	$loadClass(ClassLoaderUtils, name, initialize, &_ClassLoaderUtils_ClassInfo_, clinit$ClassLoaderUtils, allocate$ClassLoaderUtils);
	return class$;
}

$Class* ClassLoaderUtils::class$ = nullptr;

								} // keyresolver
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com