#include <javax/xml/crypto/NoSuchMechanismException.h>

#include <java/io/PrintStream.h>
#include <java/io/PrintWriter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace javax {
	namespace xml {
		namespace crypto {

$FieldInfo _NoSuchMechanismException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(NoSuchMechanismException, serialVersionUID)},
	{"cause", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(NoSuchMechanismException, cause)},
	{}
};

$MethodInfo _NoSuchMechanismException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchMechanismException::*)()>(&NoSuchMechanismException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchMechanismException::*)($String*)>(&NoSuchMechanismException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchMechanismException::*)($String*,$Throwable*)>(&NoSuchMechanismException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(NoSuchMechanismException::*)($Throwable*)>(&NoSuchMechanismException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"printStackTrace", "()V", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NoSuchMechanismException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.NoSuchMechanismException",
	"java.lang.RuntimeException",
	nullptr,
	_NoSuchMechanismException_FieldInfo_,
	_NoSuchMechanismException_MethodInfo_
};

$Object* allocate$NoSuchMechanismException($Class* clazz) {
	return $of($alloc(NoSuchMechanismException));
}

void NoSuchMechanismException::init$() {
	$RuntimeException::init$();
}

void NoSuchMechanismException::init$($String* message) {
	$RuntimeException::init$(message);
}

void NoSuchMechanismException::init$($String* message, $Throwable* cause) {
	$RuntimeException::init$(message);
	$set(this, cause, cause);
}

void NoSuchMechanismException::init$($Throwable* cause) {
	$RuntimeException::init$(cause == nullptr ? ($String*)nullptr : $($nc(cause)->toString()));
	$set(this, cause, cause);
}

$Throwable* NoSuchMechanismException::getCause() {
	return this->cause;
}

void NoSuchMechanismException::printStackTrace() {
	$RuntimeException::printStackTrace();
}

void NoSuchMechanismException::printStackTrace($PrintStream* s) {
	$RuntimeException::printStackTrace(s);
}

void NoSuchMechanismException::printStackTrace($PrintWriter* s) {
	$RuntimeException::printStackTrace(s);
}

NoSuchMechanismException::NoSuchMechanismException() {
}

NoSuchMechanismException::NoSuchMechanismException(const NoSuchMechanismException& e) {
}

NoSuchMechanismException NoSuchMechanismException::wrapper$() {
	$pendingException(this);
	return *this;
}

void NoSuchMechanismException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* NoSuchMechanismException::load$($String* name, bool initialize) {
	$loadClass(NoSuchMechanismException, name, initialize, &_NoSuchMechanismException_ClassInfo_, allocate$NoSuchMechanismException);
	return class$;
}

$Class* NoSuchMechanismException::class$ = nullptr;

		} // crypto
	} // xml
} // javax