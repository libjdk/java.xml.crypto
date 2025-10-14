#include <javax/xml/crypto/dsig/TransformException.h>

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
			namespace dsig {

$FieldInfo _TransformException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TransformException, serialVersionUID)},
	{"cause", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(TransformException, cause)},
	{}
};

$MethodInfo _TransformException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransformException::*)()>(&TransformException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TransformException::*)($String*)>(&TransformException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(TransformException::*)($String*,$Throwable*)>(&TransformException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(TransformException::*)($Throwable*)>(&TransformException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"printStackTrace", "()V", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _TransformException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.dsig.TransformException",
	"java.lang.Exception",
	nullptr,
	_TransformException_FieldInfo_,
	_TransformException_MethodInfo_
};

$Object* allocate$TransformException($Class* clazz) {
	return $of($alloc(TransformException));
}

void TransformException::init$() {
	$Exception::init$();
}

void TransformException::init$($String* message) {
	$Exception::init$(message);
}

void TransformException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message);
	$set(this, cause, cause);
}

void TransformException::init$($Throwable* cause) {
	$Exception::init$(cause == nullptr ? ($String*)nullptr : $($nc(cause)->toString()));
	$set(this, cause, cause);
}

$Throwable* TransformException::getCause() {
	return this->cause;
}

void TransformException::printStackTrace() {
	$Exception::printStackTrace();
	if (this->cause != nullptr) {
		$nc(this->cause)->printStackTrace();
	}
}

void TransformException::printStackTrace($PrintStream* s) {
	$Exception::printStackTrace(s);
	if (this->cause != nullptr) {
		$nc(this->cause)->printStackTrace(s);
	}
}

void TransformException::printStackTrace($PrintWriter* s) {
	$Exception::printStackTrace(s);
	if (this->cause != nullptr) {
		$nc(this->cause)->printStackTrace(s);
	}
}

TransformException::TransformException() {
}

TransformException::TransformException(const TransformException& e) {
}

TransformException TransformException::wrapper$() {
	$pendingException(this);
	return *this;
}

void TransformException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* TransformException::load$($String* name, bool initialize) {
	$loadClass(TransformException, name, initialize, &_TransformException_ClassInfo_, allocate$TransformException);
	return class$;
}

$Class* TransformException::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax