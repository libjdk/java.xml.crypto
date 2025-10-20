#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>

#include <com/sun/org/apache/xml/internal/security/Init.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/MessageFormat.h>
#include <java/util/Locale.h>
#include <java/util/ResourceBundle.h>
#include <jcpp.h>

#undef NOT_INITIALIZED_MSG

using $Init = ::com::sun::org::apache::xml::internal::security::Init;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;
using $Locale = ::java::util::Locale;
using $ResourceBundle = ::java::util::ResourceBundle;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$FieldInfo _I18n_FieldInfo_[] = {
	{"NOT_INITIALIZED_MSG", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(I18n, NOT_INITIALIZED_MSG)},
	{"resourceBundle", "Ljava/util/ResourceBundle;", nullptr, $PRIVATE | $STATIC, $staticField(I18n, resourceBundle)},
	{"alreadyInitialized", "Z", nullptr, $PRIVATE | $STATIC, $staticField(I18n, alreadyInitialized)},
	{}
};

$MethodInfo _I18n_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(I18n::*)()>(&I18n::init$))},
	{"getExceptionMessage", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&I18n::getExceptionMessage))},
	{"getExceptionMessage", "(Ljava/lang/String;Ljava/lang/Exception;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$Exception*)>(&I18n::getExceptionMessage))},
	{"getExceptionMessage", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$ObjectArray*)>(&I18n::getExceptionMessage))},
	{"init", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($String*,$String*)>(&I18n::init))},
	{"init", "(Ljava/util/ResourceBundle;)V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)($ResourceBundle*)>(&I18n::init))},
	{"translate", "(Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,$ObjectArray*)>(&I18n::translate))},
	{"translate", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&I18n::translate))},
	{}
};

$ClassInfo _I18n_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.I18n",
	"java.lang.Object",
	nullptr,
	_I18n_FieldInfo_,
	_I18n_MethodInfo_
};

$Object* allocate$I18n($Class* clazz) {
	return $of($alloc(I18n));
}


$String* I18n::NOT_INITIALIZED_MSG = nullptr;

$ResourceBundle* I18n::resourceBundle = nullptr;

bool I18n::alreadyInitialized = false;

void I18n::init$() {
}

$String* I18n::translate($String* message, $ObjectArray* args) {
	$init(I18n);
	return getExceptionMessage(message, args);
}

$String* I18n::translate($String* message) {
	$init(I18n);
	return getExceptionMessage(message);
}

$String* I18n::getExceptionMessage($String* msgID) {
	$init(I18n);
	try {
		return $nc(I18n::resourceBundle)->getString(msgID);
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		if ($Init::isInitialized()) {
			$init($Constants);
			return $str({"No message with ID \""_s, msgID, "\" found in resource bundle \""_s, $Constants::exceptionMessagesResourceBundleBase, "\""_s});
		}
		return I18n::NOT_INITIALIZED_MSG;
	}
	$shouldNotReachHere();
}

$String* I18n::getExceptionMessage($String* msgID, $Exception* originalException) {
	$init(I18n);
	$useLocalCurrentObjectStackCache();
	try {
		$var($ObjectArray, exArgs, $new($ObjectArray, {$($of($nc(originalException)->getMessage()))}));
		return $MessageFormat::format($($nc(I18n::resourceBundle)->getString(msgID)), exArgs);
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		if ($Init::isInitialized()) {
			$init($Constants);
			$var($String, var$0, $$str({"No message with ID \""_s, msgID, "\" found in resource bundle \""_s, $Constants::exceptionMessagesResourceBundleBase, "\". Original Exception was a "_s, $($nc($of(originalException))->getClass()->getName()), " and message "_s}));
			return $concat(var$0, $(originalException->getMessage()));
		}
		return I18n::NOT_INITIALIZED_MSG;
	}
	$shouldNotReachHere();
}

$String* I18n::getExceptionMessage($String* msgID, $ObjectArray* exArgs) {
	$init(I18n);
	$useLocalCurrentObjectStackCache();
	try {
		return $MessageFormat::format($($nc(I18n::resourceBundle)->getString(msgID)), exArgs);
	} catch ($Throwable&) {
		$var($Throwable, t, $catch());
		if ($Init::isInitialized()) {
			$init($Constants);
			return $str({"No message with ID \""_s, msgID, "\" found in resource bundle \""_s, $Constants::exceptionMessagesResourceBundleBase, "\""_s});
		}
		return I18n::NOT_INITIALIZED_MSG;
	}
	$shouldNotReachHere();
}

void I18n::init($String* languageCode, $String* countryCode) {
	$load(I18n);
	$synchronized(class$) {
		$init(I18n);
		$beforeCallerSensitive();
		if (I18n::alreadyInitialized) {
			return;
		}
		$init($Constants);
		$assignStatic(I18n::resourceBundle, $ResourceBundle::getBundle($Constants::exceptionMessagesResourceBundleBase, $$new($Locale, languageCode, countryCode)));
		I18n::alreadyInitialized = true;
	}
}

void I18n::init($ResourceBundle* resourceBundle) {
	$load(I18n);
	$synchronized(class$) {
		$init(I18n);
		if (I18n::alreadyInitialized) {
			return;
		}
		$assignStatic(I18n::resourceBundle, resourceBundle);
		I18n::alreadyInitialized = true;
	}
}

void clinit$I18n($Class* class$) {
	$assignStatic(I18n::NOT_INITIALIZED_MSG, "You must initialize the xml-security library correctly before you use it. Call the static method \"com.sun.org.apache.xml.internal.security.Init.init();\" to do that before you use any functionality from that library."_s);
	I18n::alreadyInitialized = false;
}

I18n::I18n() {
}

$Class* I18n::load$($String* name, bool initialize) {
	$loadClass(I18n, name, initialize, &_I18n_ClassInfo_, clinit$I18n, allocate$I18n);
	return class$;
}

$Class* I18n::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com