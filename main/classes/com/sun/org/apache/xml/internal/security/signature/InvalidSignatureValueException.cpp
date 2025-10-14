#include <com/sun/org/apache/xml/internal/security/signature/InvalidSignatureValueException.h>

#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

$CompoundAttribute _InvalidSignatureValueException_MethodAnnotations_init$4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _InvalidSignatureValueException_MethodAnnotations_init$6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _InvalidSignatureValueException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidSignatureValueException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidSignatureValueException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidSignatureValueException::*)()>(&InvalidSignatureValueException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidSignatureValueException::*)($String*)>(&InvalidSignatureValueException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidSignatureValueException::*)($String*,$ObjectArray*)>(&InvalidSignatureValueException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidSignatureValueException::*)($Exception*,$String*)>(&InvalidSignatureValueException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(InvalidSignatureValueException::*)($String*,$Exception*)>(&InvalidSignatureValueException::init$)), nullptr, nullptr, _InvalidSignatureValueException_MethodAnnotations_init$4},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidSignatureValueException::*)($Exception*,$String*,$ObjectArray*)>(&InvalidSignatureValueException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(InvalidSignatureValueException::*)($String*,$ObjectArray*,$Exception*)>(&InvalidSignatureValueException::init$)), nullptr, nullptr, _InvalidSignatureValueException_MethodAnnotations_init$6},
	{}
};

$ClassInfo _InvalidSignatureValueException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.InvalidSignatureValueException",
	"com.sun.org.apache.xml.internal.security.signature.XMLSignatureException",
	nullptr,
	_InvalidSignatureValueException_FieldInfo_,
	_InvalidSignatureValueException_MethodInfo_
};

$Object* allocate$InvalidSignatureValueException($Class* clazz) {
	return $of($alloc(InvalidSignatureValueException));
}

void InvalidSignatureValueException::init$() {
	$XMLSignatureException::init$();
}

void InvalidSignatureValueException::init$($String* msgID) {
	$XMLSignatureException::init$(msgID);
}

void InvalidSignatureValueException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(msgID, exArgs);
}

void InvalidSignatureValueException::init$($Exception* originalException, $String* msgID) {
	$XMLSignatureException::init$(originalException, msgID);
}

void InvalidSignatureValueException::init$($String* msgID, $Exception* originalException) {
	InvalidSignatureValueException::init$(originalException, msgID);
}

void InvalidSignatureValueException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(originalException, msgID, exArgs);
}

void InvalidSignatureValueException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	InvalidSignatureValueException::init$(originalException, msgID, exArgs);
}

InvalidSignatureValueException::InvalidSignatureValueException() {
}

InvalidSignatureValueException::InvalidSignatureValueException(const InvalidSignatureValueException& e) {
}

InvalidSignatureValueException InvalidSignatureValueException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidSignatureValueException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidSignatureValueException::load$($String* name, bool initialize) {
	$loadClass(InvalidSignatureValueException, name, initialize, &_InvalidSignatureValueException_ClassInfo_, allocate$InvalidSignatureValueException);
	return class$;
}

$Class* InvalidSignatureValueException::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com