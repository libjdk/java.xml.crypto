#include <com/sun/org/apache/xml/internal/security/signature/ReferenceNotInitializedException.h>

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

$CompoundAttribute _ReferenceNotInitializedException_MethodAnnotations_init$5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _ReferenceNotInitializedException_MethodAnnotations_init$7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _ReferenceNotInitializedException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ReferenceNotInitializedException, serialVersionUID)},
	{}
};

$MethodInfo _ReferenceNotInitializedException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceNotInitializedException::*)()>(&ReferenceNotInitializedException::init$))},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceNotInitializedException::*)($Exception*)>(&ReferenceNotInitializedException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceNotInitializedException::*)($String*)>(&ReferenceNotInitializedException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceNotInitializedException::*)($String*,$ObjectArray*)>(&ReferenceNotInitializedException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceNotInitializedException::*)($Exception*,$String*)>(&ReferenceNotInitializedException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(ReferenceNotInitializedException::*)($String*,$Exception*)>(&ReferenceNotInitializedException::init$)), nullptr, nullptr, _ReferenceNotInitializedException_MethodAnnotations_init$5},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceNotInitializedException::*)($Exception*,$String*,$ObjectArray*)>(&ReferenceNotInitializedException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(ReferenceNotInitializedException::*)($String*,$ObjectArray*,$Exception*)>(&ReferenceNotInitializedException::init$)), nullptr, nullptr, _ReferenceNotInitializedException_MethodAnnotations_init$7},
	{}
};

$ClassInfo _ReferenceNotInitializedException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.ReferenceNotInitializedException",
	"com.sun.org.apache.xml.internal.security.signature.XMLSignatureException",
	nullptr,
	_ReferenceNotInitializedException_FieldInfo_,
	_ReferenceNotInitializedException_MethodInfo_
};

$Object* allocate$ReferenceNotInitializedException($Class* clazz) {
	return $of($alloc(ReferenceNotInitializedException));
}

void ReferenceNotInitializedException::init$() {
	$XMLSignatureException::init$();
}

void ReferenceNotInitializedException::init$($Exception* ex) {
	$XMLSignatureException::init$(ex);
}

void ReferenceNotInitializedException::init$($String* msgID) {
	$XMLSignatureException::init$(msgID);
}

void ReferenceNotInitializedException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(msgID, exArgs);
}

void ReferenceNotInitializedException::init$($Exception* originalException, $String* msgID) {
	$XMLSignatureException::init$(originalException, msgID);
}

void ReferenceNotInitializedException::init$($String* msgID, $Exception* originalException) {
	ReferenceNotInitializedException::init$(originalException, msgID);
}

void ReferenceNotInitializedException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(originalException, msgID, exArgs);
}

void ReferenceNotInitializedException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	ReferenceNotInitializedException::init$(originalException, msgID, exArgs);
}

ReferenceNotInitializedException::ReferenceNotInitializedException() {
}

ReferenceNotInitializedException::ReferenceNotInitializedException(const ReferenceNotInitializedException& e) {
}

ReferenceNotInitializedException ReferenceNotInitializedException::wrapper$() {
	$pendingException(this);
	return *this;
}

void ReferenceNotInitializedException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* ReferenceNotInitializedException::load$($String* name, bool initialize) {
	$loadClass(ReferenceNotInitializedException, name, initialize, &_ReferenceNotInitializedException_ClassInfo_, allocate$ReferenceNotInitializedException);
	return class$;
}

$Class* ReferenceNotInitializedException::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com