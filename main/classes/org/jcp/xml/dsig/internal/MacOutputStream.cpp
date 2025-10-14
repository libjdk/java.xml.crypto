#include <org/jcp/xml/dsig/internal/MacOutputStream.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/crypto/Mac.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Mac = ::javax::crypto::Mac;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {

$FieldInfo _MacOutputStream_FieldInfo_[] = {
	{"mac", "Ljavax/crypto/Mac;", nullptr, $PRIVATE | $FINAL, $field(MacOutputStream, mac)},
	{}
};

$MethodInfo _MacOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljavax/crypto/Mac;)V", nullptr, $PUBLIC, $method(static_cast<void(MacOutputStream::*)($Mac*)>(&MacOutputStream::init$))},
	{"write", "(I)V", nullptr, $PUBLIC},
	{"write", "([BII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MacOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.MacOutputStream",
	"java.io.ByteArrayOutputStream",
	nullptr,
	_MacOutputStream_FieldInfo_,
	_MacOutputStream_MethodInfo_
};

$Object* allocate$MacOutputStream($Class* clazz) {
	return $of($alloc(MacOutputStream));
}

void MacOutputStream::init$($Mac* mac) {
	$ByteArrayOutputStream::init$();
	$set(this, mac, mac);
}

void MacOutputStream::write(int32_t arg0) {
	$ByteArrayOutputStream::write(arg0);
	$nc(this->mac)->update((int8_t)arg0);
}

void MacOutputStream::write($bytes* arg0, int32_t arg1, int32_t arg2) {
	$ByteArrayOutputStream::write(arg0, arg1, arg2);
	$nc(this->mac)->update(arg0, arg1, arg2);
}

MacOutputStream::MacOutputStream() {
}

$Class* MacOutputStream::load$($String* name, bool initialize) {
	$loadClass(MacOutputStream, name, initialize, &_MacOutputStream_ClassInfo_, allocate$MacOutputStream);
	return class$;
}

$Class* MacOutputStream::class$ = nullptr;

				} // internal
			} // dsig
		} // xml
	} // jcp
} // org