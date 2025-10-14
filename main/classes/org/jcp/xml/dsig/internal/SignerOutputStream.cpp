#include <org/jcp/xml/dsig/internal/SignerOutputStream.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/Signature.h>
#include <java/security/SignatureException.h>
#include <jcpp.h>

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $Signature = ::java::security::Signature;
using $SignatureException = ::java::security::SignatureException;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {

$FieldInfo _SignerOutputStream_FieldInfo_[] = {
	{"sig", "Ljava/security/Signature;", nullptr, $PRIVATE | $FINAL, $field(SignerOutputStream, sig)},
	{}
};

$MethodInfo _SignerOutputStream_MethodInfo_[] = {
	{"<init>", "(Ljava/security/Signature;)V", nullptr, $PUBLIC, $method(static_cast<void(SignerOutputStream::*)($Signature*)>(&SignerOutputStream::init$))},
	{"write", "(I)V", nullptr, $PUBLIC},
	{"write", "([BII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SignerOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.SignerOutputStream",
	"java.io.ByteArrayOutputStream",
	nullptr,
	_SignerOutputStream_FieldInfo_,
	_SignerOutputStream_MethodInfo_
};

$Object* allocate$SignerOutputStream($Class* clazz) {
	return $of($alloc(SignerOutputStream));
}

void SignerOutputStream::init$($Signature* sig) {
	$ByteArrayOutputStream::init$();
	$set(this, sig, sig);
}

void SignerOutputStream::write(int32_t arg0) {
	$ByteArrayOutputStream::write(arg0);
	try {
		$nc(this->sig)->update((int8_t)arg0);
	} catch ($SignatureException&) {
		$var($SignatureException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

void SignerOutputStream::write($bytes* arg0, int32_t arg1, int32_t arg2) {
	$ByteArrayOutputStream::write(arg0, arg1, arg2);
	try {
		$nc(this->sig)->update(arg0, arg1, arg2);
	} catch ($SignatureException&) {
		$var($SignatureException, e, $catch());
		$throwNew($RuntimeException, static_cast<$Throwable*>(e));
	}
}

SignerOutputStream::SignerOutputStream() {
}

$Class* SignerOutputStream::load$($String* name, bool initialize) {
	$loadClass(SignerOutputStream, name, initialize, &_SignerOutputStream_ClassInfo_, allocate$SignerOutputStream);
	return class$;
}

$Class* SignerOutputStream::class$ = nullptr;

				} // internal
			} // dsig
		} // xml
	} // jcp
} // org