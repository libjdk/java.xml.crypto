#include <com/sun/org/apache/xml/internal/security/c14n/implementations/UtfHelpper.h>

#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef MIN_SUPPLEMENTARY_CODE_POINT
#undef OLD_UTF8

using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Map = ::java::util::Map;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {

class UtfHelpper$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(UtfHelpper$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(UtfHelpper::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<UtfHelpper$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo UtfHelpper$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UtfHelpper$$Lambda$lambda$static$0::*)()>(&UtfHelpper$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo UtfHelpper$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xml.internal.security.c14n.implementations.UtfHelpper$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* UtfHelpper$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(UtfHelpper$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* UtfHelpper$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _UtfHelpper_FieldInfo_[] = {
	{"OLD_UTF8", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(UtfHelpper, OLD_UTF8)},
	{}
};

$MethodInfo _UtfHelpper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(UtfHelpper::*)()>(&UtfHelpper::init$))},
	{"getStringInUtf8", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($String*)>(&UtfHelpper::getStringInUtf8))},
	{"lambda$static$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)()>(&UtfHelpper::lambda$static$0))},
	{"writeByte", "(Ljava/lang/String;Ljava/io/OutputStream;Ljava/util/Map;)V", "(Ljava/lang/String;Ljava/io/OutputStream;Ljava/util/Map<Ljava/lang/String;[B>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$OutputStream*,$Map*)>(&UtfHelpper::writeByte)), "java.io.IOException"},
	{"writeCodePointToUtf8", "(ILjava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)(int32_t,$OutputStream*)>(&UtfHelpper::writeCodePointToUtf8)), "java.io.IOException"},
	{"writeStringToUtf8", "(Ljava/lang/String;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$OutputStream*)>(&UtfHelpper::writeStringToUtf8)), "java.io.IOException"},
	{}
};

$ClassInfo _UtfHelpper_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.implementations.UtfHelpper",
	"java.lang.Object",
	nullptr,
	_UtfHelpper_FieldInfo_,
	_UtfHelpper_MethodInfo_
};

$Object* allocate$UtfHelpper($Class* clazz) {
	return $of($alloc(UtfHelpper));
}


bool UtfHelpper::OLD_UTF8 = false;

void UtfHelpper::init$() {
}

void UtfHelpper::writeByte($String* str, $OutputStream* out, $Map* cache) {
	$init(UtfHelpper);
	$var($bytes, result, $cast($bytes, $nc(cache)->get(str)));
	if (result == nullptr) {
		$assign(result, getStringInUtf8(str));
		cache->put(str, result);
	}
	$nc(out)->write(result);
}

void UtfHelpper::writeCodePointToUtf8(int32_t c, $OutputStream* out) {
	$init(UtfHelpper);
	if (!$Character::isValidCodePoint(c) || c >= 0x0000D800 && c <= 0x0000DBFF || c >= 0x0000DC00 && c <= 0x0000DFFF) {
		$nc(out)->write(63);
		return;
	}
	if (UtfHelpper::OLD_UTF8 && c >= $Character::MIN_SUPPLEMENTARY_CODE_POINT) {
		$nc(out)->write(63);
		out->write(63);
		return;
	}
	if (c < 128) {
		$nc(out)->write(c);
		return;
	}
	int8_t extraByte = (int8_t)0;
	if (c < 2048) {
		extraByte = (int8_t)1;
	} else if (c < 0x00010000) {
		extraByte = (int8_t)2;
	} else if (c < 0x00200000) {
		extraByte = (int8_t)3;
	} else if (c < 0x04000000) {
		extraByte = (int8_t)4;
	} else if (c <= 0x7FFFFFFF) {
		extraByte = (int8_t)5;
	} else {
		$nc(out)->write(63);
		return;
	}
	int8_t write = 0;
	int32_t shift = 6 * extraByte;
	write = (int8_t)(($sl(254, 6 - extraByte)) | ($usr(c, shift)));
	$nc(out)->write((int32_t)write);
	for (int32_t i = extraByte - 1; i >= 0; --i) {
		shift -= 6;
		write = (int8_t)(128 | ((int32_t)(($usr(c, shift)) & (uint32_t)63)));
		out->write((int32_t)write);
	}
}

void UtfHelpper::writeStringToUtf8($String* str, $OutputStream* out) {
	$init(UtfHelpper);
	int32_t length = $nc(str)->length();
	int32_t i = 0;
	int32_t c = 0;
	while (i < length) {
		c = str->codePointAt(i);
		i += $Character::charCount(c);
		if (!$Character::isValidCodePoint(c) || c >= 0x0000D800 && c <= 0x0000DBFF || c >= 0x0000DC00 && c <= 0x0000DFFF) {
			$nc(out)->write(63);
			continue;
		}
		if (UtfHelpper::OLD_UTF8 && c >= $Character::MIN_SUPPLEMENTARY_CODE_POINT) {
			$nc(out)->write(63);
			out->write(63);
			continue;
		}
		if (c < 128) {
			$nc(out)->write(c);
			continue;
		}
		int8_t extraByte = (int8_t)0;
		if (c < 2048) {
			extraByte = (int8_t)1;
		} else if (c < 0x00010000) {
			extraByte = (int8_t)2;
		} else if (c < 0x00200000) {
			extraByte = (int8_t)3;
		} else if (c < 0x04000000) {
			extraByte = (int8_t)4;
		} else if (c <= 0x7FFFFFFF) {
			extraByte = (int8_t)5;
		} else {
			$nc(out)->write(63);
			continue;
		}
		int8_t write = 0;
		int32_t shift = 6 * extraByte;
		write = (int8_t)(($sl(254, 6 - extraByte)) | ($usr(c, shift)));
		$nc(out)->write((int32_t)write);
		for (int32_t j = extraByte - 1; j >= 0; --j) {
			shift -= 6;
			write = (int8_t)(128 | ((int32_t)(($usr(c, shift)) & (uint32_t)63)));
			out->write((int32_t)write);
		}
	}
}

$bytes* UtfHelpper::getStringInUtf8($String* str) {
	$init(UtfHelpper);
	$useLocalCurrentObjectStackCache();
	int32_t length = $nc(str)->length();
	bool expanded = false;
	$var($bytes, result, $new($bytes, length));
	int32_t i = 0;
	int32_t out = 0;
	int32_t c = 0;
	while (i < length) {
		c = str->codePointAt(i);
		i += $Character::charCount(c);
		if (!$Character::isValidCodePoint(c) || c >= 0x0000D800 && c <= 0x0000DBFF || c >= 0x0000DC00 && c <= 0x0000DFFF) {
			$nc(result)->set(out++, (int8_t)63);
			continue;
		}
		if (UtfHelpper::OLD_UTF8 && c >= $Character::MIN_SUPPLEMENTARY_CODE_POINT) {
			$nc(result)->set(out++, (int8_t)63);
			result->set(out++, (int8_t)63);
			continue;
		}
		if (c < 128) {
			$nc(result)->set(out++, (int8_t)c);
			continue;
		}
		if (!expanded) {
			$var($bytes, newResult, $new($bytes, 6 * length));
			$System::arraycopy(result, 0, newResult, 0, out);
			$assign(result, newResult);
			expanded = true;
		}
		int8_t extraByte = (int8_t)0;
		if (c < 2048) {
			extraByte = (int8_t)1;
		} else if (c < 0x00010000) {
			extraByte = (int8_t)2;
		} else if (c < 0x00200000) {
			extraByte = (int8_t)3;
		} else if (c < 0x04000000) {
			extraByte = (int8_t)4;
		} else if (c <= 0x7FFFFFFF) {
			extraByte = (int8_t)5;
		} else {
			$nc(result)->set(out++, (int8_t)63);
			continue;
		}
		int8_t write = 0;
		int32_t shift = 6 * extraByte;
		write = (int8_t)(($sl(254, 6 - extraByte)) | ($usr(c, shift)));
		$nc(result)->set(out++, write);
		for (int32_t j = extraByte - 1; j >= 0; --j) {
			shift -= 6;
			write = (int8_t)(128 | ((int32_t)(($usr(c, shift)) & (uint32_t)63)));
			result->set(out++, write);
		}
	}
	if (expanded) {
		$var($bytes, newResult, $new($bytes, out));
		$System::arraycopy(result, 0, newResult, 0, out);
		$assign(result, newResult);
	}
	return result;
}

$Boolean* UtfHelpper::lambda$static$0() {
	$init(UtfHelpper);
	return $Boolean::valueOf($Boolean::getBoolean("com.sun.org.apache.xml.internal.security.c14n.oldUtf8"_s));
}

void clinit$UtfHelpper($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	UtfHelpper::OLD_UTF8 = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(UtfHelpper$$Lambda$lambda$static$0)))))))->booleanValue();
}

UtfHelpper::UtfHelpper() {
}

$Class* UtfHelpper::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(UtfHelpper$$Lambda$lambda$static$0::classInfo$.name)) {
			return UtfHelpper$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(UtfHelpper, name, initialize, &_UtfHelpper_ClassInfo_, clinit$UtfHelpper, allocate$UtfHelpper);
	return class$;
}

$Class* UtfHelpper::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com