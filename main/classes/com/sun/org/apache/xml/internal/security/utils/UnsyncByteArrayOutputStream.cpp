#include <com/sun/org/apache/xml/internal/security/utils/UnsyncByteArrayOutputStream.h>

#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/OutOfMemoryError.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef INITIAL_SIZE
#undef VM_ARRAY_INDEX_MAX_VALUE

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $OutOfMemoryError = ::java::lang::OutOfMemoryError;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$FieldInfo _UnsyncByteArrayOutputStream_FieldInfo_[] = {
	{"VM_ARRAY_INDEX_MAX_VALUE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsyncByteArrayOutputStream, VM_ARRAY_INDEX_MAX_VALUE)},
	{"INITIAL_SIZE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(UnsyncByteArrayOutputStream, INITIAL_SIZE)},
	{"buf", "[B", nullptr, $PRIVATE, $field(UnsyncByteArrayOutputStream, buf)},
	{"size", "I", nullptr, $PRIVATE, $field(UnsyncByteArrayOutputStream, size)},
	{"pos", "I", nullptr, $PRIVATE, $field(UnsyncByteArrayOutputStream, pos)},
	{}
};

$MethodInfo _UnsyncByteArrayOutputStream_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(UnsyncByteArrayOutputStream::*)()>(&UnsyncByteArrayOutputStream::init$))},
	{"expandSize", "(I)V", nullptr, $PRIVATE, $method(static_cast<void(UnsyncByteArrayOutputStream::*)(int32_t)>(&UnsyncByteArrayOutputStream::expandSize))},
	{"reset", "()V", nullptr, $PUBLIC},
	{"toByteArray", "()[B", nullptr, $PUBLIC},
	{"write", "([B)V", nullptr, $PUBLIC},
	{"write", "([BII)V", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC},
	{"writeTo", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _UnsyncByteArrayOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.UnsyncByteArrayOutputStream",
	"java.io.OutputStream",
	nullptr,
	_UnsyncByteArrayOutputStream_FieldInfo_,
	_UnsyncByteArrayOutputStream_MethodInfo_
};

$Object* allocate$UnsyncByteArrayOutputStream($Class* clazz) {
	return $of($alloc(UnsyncByteArrayOutputStream));
}

void UnsyncByteArrayOutputStream::init$() {
	$OutputStream::init$();
	this->size = UnsyncByteArrayOutputStream::INITIAL_SIZE;
	$set(this, buf, $new($bytes, UnsyncByteArrayOutputStream::INITIAL_SIZE));
}

void UnsyncByteArrayOutputStream::write($bytes* arg0) {
	if ((UnsyncByteArrayOutputStream::VM_ARRAY_INDEX_MAX_VALUE - this->pos) < $nc(arg0)->length) {
		$throwNew($OutOfMemoryError, "Required length exceeds implementation limit"_s);
	}
	int32_t newPos = this->pos + $nc(arg0)->length;
	if (newPos > this->size) {
		expandSize(newPos);
	}
	$System::arraycopy(arg0, 0, this->buf, this->pos, arg0->length);
	this->pos = newPos;
}

void UnsyncByteArrayOutputStream::write($bytes* arg0, int32_t arg1, int32_t arg2) {
	if ((UnsyncByteArrayOutputStream::VM_ARRAY_INDEX_MAX_VALUE - this->pos) < arg2) {
		$throwNew($OutOfMemoryError, "Required length exceeds implementation limit"_s);
	}
	int32_t newPos = this->pos + arg2;
	if (newPos > this->size) {
		expandSize(newPos);
	}
	$System::arraycopy(arg0, arg1, this->buf, this->pos, arg2);
	this->pos = newPos;
}

void UnsyncByteArrayOutputStream::write(int32_t arg0) {
	if (UnsyncByteArrayOutputStream::VM_ARRAY_INDEX_MAX_VALUE - this->pos == 0) {
		$throwNew($OutOfMemoryError, "Required length exceeds implementation limit"_s);
	}
	int32_t newPos = this->pos + 1;
	if (newPos > this->size) {
		expandSize(newPos);
	}
	$nc(this->buf)->set(this->pos++, (int8_t)arg0);
}

$bytes* UnsyncByteArrayOutputStream::toByteArray() {
	$var($bytes, result, $new($bytes, this->pos));
	$System::arraycopy(this->buf, 0, result, 0, this->pos);
	return result;
}

void UnsyncByteArrayOutputStream::reset() {
	this->pos = 0;
}

void UnsyncByteArrayOutputStream::writeTo($OutputStream* out) {
	$nc(out)->write(this->buf, 0, this->pos);
}

void UnsyncByteArrayOutputStream::expandSize(int32_t newPos) {
	int32_t newSize = this->size;
	while (newPos > newSize) {
		newSize = newSize << 1;
		if (newSize < 0) {
			newSize = UnsyncByteArrayOutputStream::VM_ARRAY_INDEX_MAX_VALUE;
		}
	}
	$var($bytes, newBuf, $new($bytes, newSize));
	$System::arraycopy(this->buf, 0, newBuf, 0, this->pos);
	$set(this, buf, newBuf);
	this->size = newSize;
}

UnsyncByteArrayOutputStream::UnsyncByteArrayOutputStream() {
}

$Class* UnsyncByteArrayOutputStream::load$($String* name, bool initialize) {
	$loadClass(UnsyncByteArrayOutputStream, name, initialize, &_UnsyncByteArrayOutputStream_ClassInfo_, allocate$UnsyncByteArrayOutputStream);
	return class$;
}

$Class* UnsyncByteArrayOutputStream::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com