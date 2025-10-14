#include <com/sun/org/apache/xml/internal/security/utils/UnsyncBufferedOutputStream.h>

#include <java/io/FilterOutputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $FilterOutputStream = ::java::io::FilterOutputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$FieldInfo _UnsyncBufferedOutputStream_FieldInfo_[] = {
	{"buffer", "[B", nullptr, $PROTECTED, $field(UnsyncBufferedOutputStream, buffer)},
	{"count", "I", nullptr, $PROTECTED, $field(UnsyncBufferedOutputStream, count)},
	{}
};

$MethodInfo _UnsyncBufferedOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(UnsyncBufferedOutputStream::*)($OutputStream*)>(&UnsyncBufferedOutputStream::init$))},
	{"<init>", "(Ljava/io/OutputStream;I)V", nullptr, $PUBLIC, $method(static_cast<void(UnsyncBufferedOutputStream::*)($OutputStream*,int32_t)>(&UnsyncBufferedOutputStream::init$))},
	{"flush", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"flushInternal", "()V", nullptr, $PRIVATE, $method(static_cast<void(UnsyncBufferedOutputStream::*)()>(&UnsyncBufferedOutputStream::flushInternal)), "java.io.IOException"},
	{"write", "([BII)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"write", "(I)V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _UnsyncBufferedOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.UnsyncBufferedOutputStream",
	"java.io.FilterOutputStream",
	nullptr,
	_UnsyncBufferedOutputStream_FieldInfo_,
	_UnsyncBufferedOutputStream_MethodInfo_
};

$Object* allocate$UnsyncBufferedOutputStream($Class* clazz) {
	return $of($alloc(UnsyncBufferedOutputStream));
}

void UnsyncBufferedOutputStream::init$($OutputStream* out) {
	$FilterOutputStream::init$(out);
	$set(this, buffer, $new($bytes, 8192));
}

void UnsyncBufferedOutputStream::init$($OutputStream* out, int32_t size) {
	$FilterOutputStream::init$(out);
	if (size <= 0) {
		$throwNew($IllegalArgumentException, "size must be > 0"_s);
	}
	$set(this, buffer, $new($bytes, size));
}

void UnsyncBufferedOutputStream::flush() {
	flushInternal();
	$nc(this->out)->flush();
}

void UnsyncBufferedOutputStream::write($bytes* bytes, int32_t offset, int32_t length) {
	if (length >= $nc(this->buffer)->length) {
		flushInternal();
		$nc(this->out)->write(bytes, offset, length);
		return;
	}
	if (length >= ($nc(this->buffer)->length - this->count)) {
		flushInternal();
	}
	$System::arraycopy(bytes, offset, this->buffer, this->count, length);
	this->count += length;
}

void UnsyncBufferedOutputStream::write(int32_t oneByte) {
	if (this->count == $nc(this->buffer)->length) {
		$nc(this->out)->write(this->buffer, 0, this->count);
		this->count = 0;
	}
	$nc(this->buffer)->set(this->count++, (int8_t)oneByte);
}

void UnsyncBufferedOutputStream::flushInternal() {
	if (this->count > 0) {
		$nc(this->out)->write(this->buffer, 0, this->count);
		this->count = 0;
	}
}

UnsyncBufferedOutputStream::UnsyncBufferedOutputStream() {
}

$Class* UnsyncBufferedOutputStream::load$($String* name, bool initialize) {
	$loadClass(UnsyncBufferedOutputStream, name, initialize, &_UnsyncBufferedOutputStream_ClassInfo_, allocate$UnsyncBufferedOutputStream);
	return class$;
}

$Class* UnsyncBufferedOutputStream::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com