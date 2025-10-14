#include <com/sun/org/apache/xml/internal/security/transforms/InvalidTransformException.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
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

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
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
							namespace transforms {

$CompoundAttribute _InvalidTransformException_MethodAnnotations_init$4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _InvalidTransformException_MethodAnnotations_init$6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _InvalidTransformException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(InvalidTransformException, serialVersionUID)},
	{}
};

$MethodInfo _InvalidTransformException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(InvalidTransformException::*)()>(&InvalidTransformException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidTransformException::*)($String*)>(&InvalidTransformException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidTransformException::*)($String*,$ObjectArray*)>(&InvalidTransformException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidTransformException::*)($Exception*,$String*)>(&InvalidTransformException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(InvalidTransformException::*)($String*,$Exception*)>(&InvalidTransformException::init$)), nullptr, nullptr, _InvalidTransformException_MethodAnnotations_init$4},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(InvalidTransformException::*)($Exception*,$String*,$ObjectArray*)>(&InvalidTransformException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(InvalidTransformException::*)($String*,$ObjectArray*,$Exception*)>(&InvalidTransformException::init$)), nullptr, nullptr, _InvalidTransformException_MethodAnnotations_init$6},
	{}
};

$ClassInfo _InvalidTransformException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.InvalidTransformException",
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
	nullptr,
	_InvalidTransformException_FieldInfo_,
	_InvalidTransformException_MethodInfo_
};

$Object* allocate$InvalidTransformException($Class* clazz) {
	return $of($alloc(InvalidTransformException));
}

void InvalidTransformException::init$() {
	$XMLSecurityException::init$();
}

void InvalidTransformException::init$($String* msgId) {
	$XMLSecurityException::init$(msgId);
}

void InvalidTransformException::init$($String* msgId, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(msgId, exArgs);
}

void InvalidTransformException::init$($Exception* originalException, $String* msgId) {
	$XMLSecurityException::init$(originalException, msgId);
}

void InvalidTransformException::init$($String* msgID, $Exception* originalException) {
	InvalidTransformException::init$(originalException, msgID);
}

void InvalidTransformException::init$($Exception* originalException, $String* msgId, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgId, exArgs);
}

void InvalidTransformException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	InvalidTransformException::init$(originalException, msgID, exArgs);
}

InvalidTransformException::InvalidTransformException() {
}

InvalidTransformException::InvalidTransformException(const InvalidTransformException& e) {
}

InvalidTransformException InvalidTransformException::wrapper$() {
	$pendingException(this);
	return *this;
}

void InvalidTransformException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* InvalidTransformException::load$($String* name, bool initialize) {
	$loadClass(InvalidTransformException, name, initialize, &_InvalidTransformException_ClassInfo_, allocate$InvalidTransformException);
	return class$;
}

$Class* InvalidTransformException::class$ = nullptr;

							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com