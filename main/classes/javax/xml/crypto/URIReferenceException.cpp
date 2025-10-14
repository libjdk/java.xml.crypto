#include <javax/xml/crypto/URIReferenceException.h>

#include <java/io/PrintStream.h>
#include <java/io/PrintWriter.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/URIReference.h>
#include <jcpp.h>

using $PrintStream = ::java::io::PrintStream;
using $PrintWriter = ::java::io::PrintWriter;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URIReference = ::javax::xml::crypto::URIReference;

namespace javax {
	namespace xml {
		namespace crypto {

$FieldInfo _URIReferenceException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(URIReferenceException, serialVersionUID)},
	{"cause", "Ljava/lang/Throwable;", nullptr, $PRIVATE, $field(URIReferenceException, cause)},
	{"uriReference", "Ljavax/xml/crypto/URIReference;", nullptr, $PRIVATE, $field(URIReferenceException, uriReference)},
	{}
};

$MethodInfo _URIReferenceException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(URIReferenceException::*)()>(&URIReferenceException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(URIReferenceException::*)($String*)>(&URIReferenceException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(URIReferenceException::*)($String*,$Throwable*)>(&URIReferenceException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Throwable;Ljavax/xml/crypto/URIReference;)V", nullptr, $PUBLIC, $method(static_cast<void(URIReferenceException::*)($String*,$Throwable*,$URIReference*)>(&URIReferenceException::init$))},
	{"<init>", "(Ljava/lang/Throwable;)V", nullptr, $PUBLIC, $method(static_cast<void(URIReferenceException::*)($Throwable*)>(&URIReferenceException::init$))},
	{"getCause", "()Ljava/lang/Throwable;", nullptr, $PUBLIC},
	{"getURIReference", "()Ljavax/xml/crypto/URIReference;", nullptr, $PUBLIC},
	{"printStackTrace", "()V", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintStream;)V", nullptr, $PUBLIC},
	{"printStackTrace", "(Ljava/io/PrintWriter;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _URIReferenceException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.URIReferenceException",
	"java.lang.Exception",
	nullptr,
	_URIReferenceException_FieldInfo_,
	_URIReferenceException_MethodInfo_
};

$Object* allocate$URIReferenceException($Class* clazz) {
	return $of($alloc(URIReferenceException));
}

void URIReferenceException::init$() {
	$Exception::init$();
}

void URIReferenceException::init$($String* message) {
	$Exception::init$(message);
}

void URIReferenceException::init$($String* message, $Throwable* cause) {
	$Exception::init$(message);
	$set(this, cause, cause);
}

void URIReferenceException::init$($String* message, $Throwable* cause, $URIReference* uriReference) {
	URIReferenceException::init$(message, cause);
	if (uriReference == nullptr) {
		$throwNew($NullPointerException, "uriReference cannot be null"_s);
	}
	$set(this, uriReference, uriReference);
}

void URIReferenceException::init$($Throwable* cause) {
	$Exception::init$(cause == nullptr ? ($String*)nullptr : $($nc(cause)->toString()));
	$set(this, cause, cause);
}

$URIReference* URIReferenceException::getURIReference() {
	return this->uriReference;
}

$Throwable* URIReferenceException::getCause() {
	return this->cause;
}

void URIReferenceException::printStackTrace() {
	$Exception::printStackTrace();
}

void URIReferenceException::printStackTrace($PrintStream* s) {
	$Exception::printStackTrace(s);
}

void URIReferenceException::printStackTrace($PrintWriter* s) {
	$Exception::printStackTrace(s);
}

URIReferenceException::URIReferenceException() {
}

URIReferenceException::URIReferenceException(const URIReferenceException& e) {
}

URIReferenceException URIReferenceException::wrapper$() {
	$pendingException(this);
	return *this;
}

void URIReferenceException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* URIReferenceException::load$($String* name, bool initialize) {
	$loadClass(URIReferenceException, name, initialize, &_URIReferenceException_ClassInfo_, allocate$URIReferenceException);
	return class$;
}

$Class* URIReferenceException::class$ = nullptr;

		} // crypto
	} // xml
} // javax