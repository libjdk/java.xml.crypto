#include <com/sun/org/slf4j/internal/Logger.h>

#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/CharSequence.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/StackWalker$Option.h>
#include <java/lang/StackWalker$StackFrame.h>
#include <java/lang/StackWalker.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Optional.h>
#include <java/util/function/Function.h>
#include <java/util/logging/Level.h>
#include <java/util/logging/Logger.h>
#include <java/util/stream/Stream.h>
#include <jcpp.h>

#undef FINE
#undef RETAIN_CLASS_REFERENCE
#undef SEVERE
#undef WALKER
#undef WARNING

using $Serializable = ::java::io::Serializable;
using $CharSequence = ::java::lang::CharSequence;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $StackWalker = ::java::lang::StackWalker;
using $StackWalker$Option = ::java::lang::StackWalker$Option;
using $StackWalker$StackFrame = ::java::lang::StackWalker$StackFrame;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Optional = ::java::util::Optional;
using $Function = ::java::util::function::Function;
using $Level = ::java::util::logging::Level;
using $Logger = ::java::util::logging::Logger;
using $Stream = ::java::util::stream::Stream;

namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {

class Logger$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(Logger$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Logger::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Logger$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Logger$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Logger$$Lambda$lambda$static$0::*)()>(&Logger$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Logger$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.slf4j.internal.Logger$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* Logger$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(Logger$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Logger$$Lambda$lambda$static$0::class$ = nullptr;

class Logger$$Lambda$lambda$log0$1$1 : public $Function {
	$class(Logger$$Lambda$lambda$log0$1$1, $NO_CLASS_INIT, $Function)
public:
	void init$() {
	}
	virtual $Object* apply(Object$* f) override {
		 return $of(Logger::lambda$log0$1($cast($Stream, f)));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Logger$$Lambda$lambda$log0$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Logger$$Lambda$lambda$log0$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Logger$$Lambda$lambda$log0$1$1::*)()>(&Logger$$Lambda$lambda$log0$1$1::init$))},
	{"apply", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Logger$$Lambda$lambda$log0$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.slf4j.internal.Logger$$Lambda$lambda$log0$1$1",
	"java.lang.Object",
	"java.util.function.Function",
	nullptr,
	methodInfos
};
$Class* Logger$$Lambda$lambda$log0$1$1::load$($String* name, bool initialize) {
	$loadClass(Logger$$Lambda$lambda$log0$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Logger$$Lambda$lambda$log0$1$1::class$ = nullptr;

$FieldInfo _Logger_FieldInfo_[] = {
	{"WALKER", "Ljava/lang/StackWalker;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Logger, WALKER)},
	{"impl", "Ljava/util/logging/Logger;", nullptr, $PRIVATE | $FINAL, $field(Logger, impl)},
	{}
};

$MethodInfo _Logger_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Logger::*)($String*)>(&Logger::init$))},
	{"addIndex", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&Logger::addIndex))},
	{"debug", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"debug", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"debug", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"error", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"error", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"error", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{"isDebugEnabled", "()Z", nullptr, $PUBLIC},
	{"isTraceEnabled", "()Z", nullptr, $PUBLIC},
	{"lambda$log0$1", "(Ljava/util/stream/Stream;)Ljava/util/Optional;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Optional*(*)($Stream*)>(&Logger::lambda$log0$1))},
	{"lambda$static$0", "()Ljava/lang/StackWalker;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$StackWalker*(*)()>(&Logger::lambda$static$0))},
	{"log0", "(Ljava/util/logging/Level;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Logger::*)($Level*,$String*)>(&Logger::log0))},
	{"log0", "(Ljava/util/logging/Level;Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PRIVATE, $method(static_cast<void(Logger::*)($Level*,$String*,$Throwable*)>(&Logger::log0))},
	{"log0", "(Ljava/util/logging/Level;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PRIVATE | $TRANSIENT, $method(static_cast<void(Logger::*)($Level*,$String*,$ObjectArray*)>(&Logger::log0))},
	{"trace", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"warn", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"warn", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC},
	{"warn", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC | $TRANSIENT},
	{}
};

$ClassInfo _Logger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.slf4j.internal.Logger",
	"java.lang.Object",
	nullptr,
	_Logger_FieldInfo_,
	_Logger_MethodInfo_
};

$Object* allocate$Logger($Class* clazz) {
	return $of($alloc(Logger));
}


$StackWalker* Logger::WALKER = nullptr;

void Logger::init$($String* name) {
	$beforeCallerSensitive();
	$set(this, impl, $Logger::getLogger(name));
}

bool Logger::isDebugEnabled() {
	$init($Level);
	return $nc(this->impl)->isLoggable($Level::FINE);
}

bool Logger::isTraceEnabled() {
	$init($Level);
	return $nc(this->impl)->isLoggable($Level::FINE);
}

void Logger::debug($String* s) {
	$init($Level);
	log0($Level::FINE, s);
}

void Logger::debug($String* s, $Throwable* e) {
	$init($Level);
	log0($Level::FINE, s, e);
}

void Logger::debug($String* s, $ObjectArray* o) {
	$init($Level);
	log0($Level::FINE, s, o);
}

void Logger::trace($String* s) {
	$init($Level);
	log0($Level::FINE, s);
}

void Logger::error($String* s) {
	$init($Level);
	log0($Level::SEVERE, s);
}

void Logger::error($String* s, $Throwable* e) {
	$init($Level);
	log0($Level::SEVERE, s, e);
}

void Logger::error($String* s, $ObjectArray* o) {
	$init($Level);
	log0($Level::SEVERE, s, o);
}

void Logger::warn($String* s) {
	$init($Level);
	log0($Level::WARNING, s);
}

void Logger::warn($String* s, $Throwable* e) {
	$init($Level);
	log0($Level::WARNING, s, e);
}

void Logger::warn($String* s, $ObjectArray* o) {
	$init($Level);
	log0($Level::WARNING, s, o);
}

void Logger::log0($Level* level, $String* s) {
	$beforeCallerSensitive();
	if ($nc(this->impl)->isLoggable(level)) {
		$var($StackWalker$StackFrame, sf, $cast($StackWalker$StackFrame, $nc(($cast($Optional, $($nc(Logger::WALKER)->walk(static_cast<$Function*>($$new(Logger$$Lambda$lambda$log0$1$1)))))))->get()));
		$init($Level);
		$var($Level, var$0, $Level::FINE);
		$var($String, var$1, $nc(sf)->getClassName());
		$nc(this->impl)->logp(var$0, var$1, $(sf->getMethodName()), s);
	}
}

void Logger::log0($Level* level, $String* s, $Throwable* e) {
	$beforeCallerSensitive();
	if ($nc(this->impl)->isLoggable(level)) {
		$var($StackWalker$StackFrame, sf, $cast($StackWalker$StackFrame, $nc(($cast($Optional, $($nc(Logger::WALKER)->walk(static_cast<$Function*>($$new(Logger$$Lambda$lambda$log0$1$1)))))))->get()));
		$init($Level);
		$var($Level, var$0, $Level::FINE);
		$var($String, var$1, $nc(sf)->getClassName());
		$nc(this->impl)->logp(var$0, var$1, $(sf->getMethodName()), s, e);
	}
}

void Logger::log0($Level* level, $String* s, $ObjectArray* o) {
	$beforeCallerSensitive();
	if ($nc(this->impl)->isLoggable(level)) {
		$var($StackWalker$StackFrame, sf, $cast($StackWalker$StackFrame, $nc(($cast($Optional, $($nc(Logger::WALKER)->walk(static_cast<$Function*>($$new(Logger$$Lambda$lambda$log0$1$1)))))))->get()));
		$init($Level);
		$var($Level, var$0, $Level::FINE);
		$var($String, var$1, $nc(sf)->getClassName());
		$var($String, var$2, sf->getMethodName());
		$nc(this->impl)->logp(var$0, var$1, var$2, $(addIndex(s)), o);
	}
}

$String* Logger::addIndex($String* s) {
	$init(Logger);
	int32_t start = 0;
	int32_t index = 0;
	$var($StringBuilder, sb, $new($StringBuilder));
	while (true) {
		int32_t pos = $nc(s)->indexOf("{}"_s, start);
		if (pos < 0) {
			break;
		}
		sb->append(static_cast<$CharSequence*>(s), start, pos + 1)->append(index++);
		start = pos + 1;
	}
	if (index == 0) {
		return s;
	} else {
		sb->append(static_cast<$CharSequence*>(s), start, $nc(s)->length());
		return sb->toString();
	}
}

$Optional* Logger::lambda$log0$1($Stream* f) {
	$init(Logger);
	return $nc($($nc(f)->skip(2)))->findFirst();
}

$StackWalker* Logger::lambda$static$0() {
	$init(Logger);
	$init($StackWalker$Option);
	return $StackWalker::getInstance($StackWalker$Option::RETAIN_CLASS_REFERENCE);
}

void clinit$Logger($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(Logger::WALKER, $cast($StackWalker, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Logger$$Lambda$lambda$static$0)))));
}

Logger::Logger() {
}

$Class* Logger::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Logger$$Lambda$lambda$static$0::classInfo$.name)) {
			return Logger$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals(Logger$$Lambda$lambda$log0$1$1::classInfo$.name)) {
			return Logger$$Lambda$lambda$log0$1$1::load$(name, initialize);
		}
	}
	$loadClass(Logger, name, initialize, &_Logger_ClassInfo_, clinit$Logger, allocate$Logger);
	return class$;
}

$Class* Logger::class$ = nullptr;

				} // internal
			} // slf4j
		} // org
	} // sun
} // com