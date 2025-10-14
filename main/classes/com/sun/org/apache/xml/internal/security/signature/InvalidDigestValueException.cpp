#include <com/sun/org/apache/xml/internal/security/signature/InvalidDigestValueException.h>

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

$CompoundAttribute _InvalidDigestValueException_MethodAnnotations_init$4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _InvalidDigestValueException_MethodAnnotations_init$6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _InvalidDigestValueException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidDigestValueException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidDigestValueException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidDigestValueException::*)()>(&InvalidDigestValueException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidDigestValueException::*)($String*)>(&InvalidDigestValueException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidDigestValueException::*)($String*,$ObjectArray*)>(&InvalidDigestValueException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidDigestValueException::*)($Exception*,$String*)>(&InvalidDigestValueException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(InvalidDigestValueException::*)($String*,$Exception*)>(&InvalidDigestValueException::init$)), nullptr, nullptr, _InvalidDigestValueException_MethodAnnotations_init$4},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidDigestValueException::*)($Exception*,$String*,$ObjectArray*)>(&InvalidDigestValueException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(InvalidDigestValueException::*)($String*,$ObjectArray*,$Exception*)>(&InvalidDigestValueException::init$)), nullptr, nullptr, _InvalidDigestValueException_MethodAnnotations_init$6},
	{}
};

$ClassInfo _InvalidDigestValueException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.InvalidDigestValueException",
	"com.sun.org.apache.xml.internal.security.signature.XMLSignatureException",
	nullptr,
	_InvalidDigestValueException_FieldInfo_,
	_InvalidDigestValueException_MethodInfo_
};

$Object* allocate$InvalidDigestValueException($Class* clazz) {
	return $of($alloc(InvalidDigestValueException));
}

void InvalidDigestValueException::init$() {
	$XMLSignatureException::init$();
}

void InvalidDigestValueException::init$($String* msgID) {
	$XMLSignatureException::init$(msgID);
}

void InvalidDigestValueException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(msgID, exArgs);
}

void InvalidDigestValueException::init$($Exception* originalException, $String* msgID) {
	$XMLSignatureException::init$(originalException, msgID);
}

void InvalidDigestValueException::init$($String* msgID, $Exception* originalException) {
	InvalidDigestValueException::init$(originalException, msgID);
}

void InvalidDigestValueException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(originalException, msgID, exArgs);
}

void InvalidDigestValueException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	InvalidDigestValueException::init$(originalException, msgID, exArgs);
}

InvalidDigestValueException::InvalidDigestValueException() {
}

InvalidDigestValueException::InvalidDigestValueException(const InvalidDigestValueException& e) {
}

InvalidDigestValueException InvalidDigestValueException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidDigestValueException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidDigestValueException::load$($String* name, bool initialize) {
	$loadClass(InvalidDigestValueException, name, initialize, &_InvalidDigestValueException_ClassInfo_, allocate$InvalidDigestValueException);
	return class$;
}

$Class* InvalidDigestValueException::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com