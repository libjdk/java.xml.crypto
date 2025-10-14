#include <javax/xml/crypto/MarshalException.h>

#include <java/io/PrintStream.h>
#include <java/io/PrintWriter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace crypto {

$FieldInfo _MarshalException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MarshalException, serialVersionUID)},
	{"cause", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(MarshalException, cause)},
	{}
};

$MethodInfo _MarshalException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(MarshalException::*)()>(&MarshalException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MarshalException::*)($String*)>(&MarshalException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(MarshalException::*)($String*,$Throwable*)>(&MarshalException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(MarshalException::*)($Throwable*)>(&MarshalException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"printStackTrace", "()V", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MarshalException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.MarshalException",
	"java.lang.Exception",
	nullptr,
	_MarshalException_FieldInfo_,
	_MarshalException_MethodInfo_
};

$Object* allocate$MarshalException($Class* clazz) {
	return $of($alloc(MarshalException));
}

void MarshalException::init$() {
	$Exception::init$();
}

void MarshalException::init$($String* message) {
	$Exception::init$(message);
}

void MarshalException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message);
	$set(this, cause, cause);
}

void MarshalException::init$($Throwable* cause) {
	$Exception::init$(cause == nullptr ? ($String*)nullptr : $($nc(cause)->toString()));
	$set(this, cause, cause);
}

$Throwable* MarshalException::getCause() {
	return this->cause;
}

void MarshalException::printStackTrace() {
	$Exception::printStackTrace();
}

void MarshalException::printStackTrace($PrintStream* s) {
	$Exception::printStackTrace(s);
}

void MarshalException::printStackTrace($PrintWriter* s) {
	$Exception::printStackTrace(s);
}

MarshalException::MarshalException() {
}

MarshalException::MarshalException(const MarshalException& e) {
}

MarshalException MarshalException::wrapper$() {
	$pendingException(this);
	return *this;
}

void MarshalException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* MarshalException::load$($String* name, bool initialize) {
	$loadClass(MarshalException, name, initialize, &_MarshalException_ClassInfo_, allocate$MarshalException);
	return class$;
}

$Class* MarshalException::class$ = nullptr;

		} // crypto
	} // xml
} // javax