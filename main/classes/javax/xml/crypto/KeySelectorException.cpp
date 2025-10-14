#include <javax/xml/crypto/KeySelectorException.h>

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

$FieldInfo _KeySelectorException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(KeySelectorException, serialVersionUID)},
	{"cause", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(KeySelectorException, cause)},
	{}
};

$MethodInfo _KeySelectorException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeySelectorException::*)()>(&KeySelectorException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(KeySelectorException::*)($String*)>(&KeySelectorException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(KeySelectorException::*)($String*,$Throwable*)>(&KeySelectorException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(KeySelectorException::*)($Throwable*)>(&KeySelectorException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"printStackTrace", "()V", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _KeySelectorException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.KeySelectorException",
	"java.lang.Exception",
	nullptr,
	_KeySelectorException_FieldInfo_,
	_KeySelectorException_MethodInfo_
};

$Object* allocate$KeySelectorException($Class* clazz) {
	return $of($alloc(KeySelectorException));
}

void KeySelectorException::init$() {
	$Exception::init$();
}

void KeySelectorException::init$($String* message) {
	$Exception::init$(message);
}

void KeySelectorException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message);
	$set(this, cause, cause);
}

void KeySelectorException::init$($Throwable* cause) {
	$Exception::init$(cause == nullptr ? ($String*)nullptr : $($nc(cause)->toString()));
	$set(this, cause, cause);
}

$Throwable* KeySelectorException::getCause() {
	return this->cause;
}

void KeySelectorException::printStackTrace() {
	$Exception::printStackTrace();
}

void KeySelectorException::printStackTrace($PrintStream* s) {
	$Exception::printStackTrace(s);
}

void KeySelectorException::printStackTrace($PrintWriter* s) {
	$Exception::printStackTrace(s);
}

KeySelectorException::KeySelectorException() {
}

KeySelectorException::KeySelectorException(const KeySelectorException& e) {
}

KeySelectorException KeySelectorException::wrapper$() {
	$pendingException(this);
	return *this;
}

void KeySelectorException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* KeySelectorException::load$($String* name, bool initialize) {
	$loadClass(KeySelectorException, name, initialize, &_KeySelectorException_ClassInfo_, allocate$KeySelectorException);
	return class$;
}

$Class* KeySelectorException::class$ = nullptr;

		} // crypto
	} // xml
} // javax