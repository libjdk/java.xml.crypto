#include <com/sun/org/apache/xml/internal/security/utils/DigesterOutputStream.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/MessageDigestAlgorithm.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef LOG

using $MessageDigestAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::MessageDigestAlgorithm;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$FieldInfo _DigesterOutputStream_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DigesterOutputStream, LOG)},
	{"mda", "Lcom/sun/org/apache/xml/internal/security/algorithms/MessageDigestAlgorithm;", nullptr, $FINAL, $field(DigesterOutputStream, mda)},
	{}
};

$MethodInfo _DigesterOutputStream_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/security/algorithms/MessageDigestAlgorithm;)V", nullptr, $PUBLIC, $method(static_cast<void(DigesterOutputStream::*)($MessageDigestAlgorithm*)>(&DigesterOutputStream::init$))},
	{"getDigestValue", "()[B", nullptr, $PUBLIC},
	{"write", "([B)V", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC},
	{"write", "([BII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DigesterOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.DigesterOutputStream",
	"java.io.ByteArrayOutputStream",
	nullptr,
	_DigesterOutputStream_FieldInfo_,
	_DigesterOutputStream_MethodInfo_
};

$Object* allocate$DigesterOutputStream($Class* clazz) {
	return $of($alloc(DigesterOutputStream));
}

$Logger* DigesterOutputStream::LOG = nullptr;

void DigesterOutputStream::init$($MessageDigestAlgorithm* mda) {
	$ByteArrayOutputStream::init$();
	$set(this, mda, mda);
}

void DigesterOutputStream::write($bytes* arg0) {
	write(arg0, 0, $nc(arg0)->length);
}

void DigesterOutputStream::write(int32_t arg0) {
	$nc(this->mda)->update((int8_t)arg0);
}

void DigesterOutputStream::write($bytes* arg0, int32_t arg1, int32_t arg2) {
	$useLocalCurrentObjectStackCache();
	if ($nc(DigesterOutputStream::LOG)->isDebugEnabled()) {
		$nc(DigesterOutputStream::LOG)->debug("Pre-digested input:"_s);
		$var($StringBuilder, sb, $new($StringBuilder, arg2));
		for (int32_t i = arg1; i < (arg1 + arg2); ++i) {
			sb->append((char16_t)$nc(arg0)->get(i));
		}
		$nc(DigesterOutputStream::LOG)->debug($(sb->toString()));
	}
	$nc(this->mda)->update(arg0, arg1, arg2);
}

$bytes* DigesterOutputStream::getDigestValue() {
	return $nc(this->mda)->digest();
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

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com