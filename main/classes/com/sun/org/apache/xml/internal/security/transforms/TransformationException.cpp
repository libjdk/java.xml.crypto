#include <com/sun/org/apache/xml/internal/security/transforms/TransformationException.h>

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

$CompoundAttribute _TransformationException_MethodAnnotations_init$5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _TransformationException_MethodAnnotations_init$7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _TransformationException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(TransformationException, serialVersionUID)},
	{}
};

$MethodInfo _TransformationException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransformationException::*)()>(&TransformationException::init$))},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(TransformationException::*)($Exception*)>(&TransformationException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TransformationException::*)($String*)>(&TransformationException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TransformationException::*)($String*,$ObjectArray*)>(&TransformationException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(TransformationException::*)($Exception*,$String*)>(&TransformationException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(TransformationException::*)($String*,$Exception*)>(&TransformationException::init$)), nullptr, nullptr, _TransformationException_MethodAnnotations_init$5},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(TransformationException::*)($Exception*,$String*,$ObjectArray*)>(&TransformationException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(TransformationException::*)($String*,$ObjectArray*,$Exception*)>(&TransformationException::init$)), nullptr, nullptr, _TransformationException_MethodAnnotations_init$7},
	{}
};

$ClassInfo _TransformationException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.TransformationException",
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
	nullptr,
	_TransformationException_FieldInfo_,
	_TransformationException_MethodInfo_
};

$Object* allocate$TransformationException($Class* clazz) {
	return $of($alloc(TransformationException));
}

void TransformationException::init$() {
	$XMLSecurityException::init$();
}

void TransformationException::init$($Exception* ex) {
	$XMLSecurityException::init$(ex);
}

void TransformationException::init$($String* msgID) {
	$XMLSecurityException::init$(msgID);
}

void TransformationException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(msgID, exArgs);
}

void TransformationException::init$($Exception* originalException, $String* msgID) {
	$XMLSecurityException::init$(originalException, msgID);
}

void TransformationException::init$($String* msgID, $Exception* originalException) {
	TransformationException::init$(originalException, msgID);
}

void TransformationException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgID, exArgs);
}

void TransformationException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	TransformationException::init$(originalException, msgID, exArgs);
}

TransformationException::TransformationException() {
}

TransformationException::TransformationException(const TransformationException& e) {
}

TransformationException TransformationException::wrapper$() {
	$pendingException(this);
	return *this;
}

void TransformationException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* TransformationException::load$($String* name, bool initialize) {
	$loadClass(TransformationException, name, initialize, &_TransformationException_ClassInfo_, allocate$TransformationException);
	return class$;
}

$Class* TransformationException::class$ = nullptr;

							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com