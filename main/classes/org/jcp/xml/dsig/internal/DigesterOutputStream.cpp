#include <org/jcp/xml/dsig/internal/DigesterOutputStream.h>

#include <com/sun/org/apache/xml/internal/security/utils/UnsyncByteArrayOutputStream.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/MessageDigest.h>
#include <jcpp.h>

#undef LOG

using $UnsyncByteArrayOutputStream = ::com::sun::org::apache::xml::internal::security::utils::UnsyncByteArrayOutputStream;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {

$FieldInfo _DigesterOutputStream_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigesterOutputStream, LOG)},
	{"buffer", "Z", nullptr, $PRIVATE | $FINAL, $field(DigesterOutputStream, buffer)},
	{"bos", "Lcom/sun/org/apache/xml/internal/security/utils/UnsyncByteArrayOutputStream;", nullptr, $PRIVATE, $field(DigesterOutputStream, bos)},
	{"md", "Ljava/security/MessageDigest;", nullptr, $PRIVATE | $FINAL, $field(DigesterOutputStream, md)},
	{}
};

$MethodInfo _DigesterOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/security/MessageDigest;)V", nullptr, $PUBLIC, $method(static_cast<void(DigesterOutputStream::*)($MessageDigest*)>(&DigesterOutputStream::init$))},
	{"<init>", "(Ljava/security/MessageDigest;Z)V", nullptr, $PUBLIC, $method(static_cast<void(DigesterOutputStream::*)($MessageDigest*,bool)>(&DigesterOutputStream::init$))},
	{"close", "()V", nullptr, $PUBLIC, nullptr, "java.io.IOException"},
	{"getDigestValue", "()[B", nullptr, $PUBLIC},
	{"getInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC},
	{"write", "([BII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DigesterOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.DigesterOutputStream",
	"java.io.OutputStream",
	nullptr,
	_DigesterOutputStream_FieldInfo_,
	_DigesterOutputStream_MethodInfo_
};

$Object* allocate$DigesterOutputStream($Class* clazz) {
	return $of($alloc(DigesterOutputStream));
}

$Logger* DigesterOutputStream::LOG = nullptr;

void DigesterOutputStream::init$($MessageDigest* md) {
	DigesterOutputStream::init$(md, false);
}

void DigesterOutputStream::init$($MessageDigest* md, bool buffer) {
	$OutputStream::init$();
	$set(this, md, md);
	this->buffer = buffer;
	if (buffer) {
		$set(this, bos, $new($UnsyncByteArrayOutputStream));
	}
}

void DigesterOutputStream::write(int32_t input) {
	if (this->buffer) {
		$nc(this->bos)->write(input);
	}
	$nc(this->md)->update((int8_t)input);
}

void DigesterOutputStream::write($bytes* input, int32_t offset, int32_t len) {
	$useLocalCurrentObjectStackCache();
	if (this->buffer) {
		$nc(this->bos)->write(input, offset, len);
	}
	if ($nc(DigesterOutputStream::LOG)->isDebugEnabled()) {
		$nc(DigesterOutputStream::LOG)->debug("Pre-digested input:"_s);
		$var($StringBuilder, sb, $new($StringBuilder, len));
		for (int32_t i = offset; i < (offset + len); ++i) {
			sb->append((char16_t)$nc(input)->get(i));
		}
		$nc(DigesterOutputStream::LOG)->debug($(sb->toString()));
	}
	$nc(this->md)->update(input, offset, len);
}

$bytes* DigesterOutputStream::getDigestValue() {
	return $nc(this->md)->digest();
}

$InputStream* DigesterOutputStream::getInputStream() {
	if (this->buffer) {
		return $new($ByteArrayInputStream, $($nc(this->bos)->toByteArray()));
	} else {
		return nullptr;
	}
}

void DigesterOutputStream::close() {
	if (this->buffer) {
		$nc(this->bos)->close();
	}
}

void clinit$DigesterOutputStream($Class* class$) {
	$assignStatic(DigesterOutputStream::LOG, $LoggerFactory::getLogger(DigesterOutputStream::class$));
}

DigesterOutputStream::DigesterOutputStream() {
}

$Class* DigesterOutputStream::load$($String* name, bool initialize) {
	$loadClass(DigesterOutputStream, name, initialize, &_DigesterOutputStream_ClassInfo_, clinit$DigesterOutputStream, allocate$DigesterOutputStream);
	return class$;
}

$Class* DigesterOutputStream::class$ = nullptr;

				} // internal
			} // dsig
		} // xml
	} // jcp
} // org