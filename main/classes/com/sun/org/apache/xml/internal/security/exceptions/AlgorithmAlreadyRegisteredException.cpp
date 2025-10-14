#include <com/sun/org/apache/xml/internal/security/exceptions/AlgorithmAlreadyRegisteredException.h>

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
							namespace exceptions {

$CompoundAttribute _AlgorithmAlreadyRegisteredException_MethodAnnotations_init$4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _AlgorithmAlreadyRegisteredException_MethodAnnotations_init$6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _AlgorithmAlreadyRegisteredException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AlgorithmAlreadyRegisteredException, serialVersionUID)},
	{}
};

$MethodInfo _AlgorithmAlreadyRegisteredException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AlgorithmAlreadyRegisteredException::*)()>(&AlgorithmAlreadyRegisteredException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AlgorithmAlreadyRegisteredException::*)($String*)>(&AlgorithmAlreadyRegisteredException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(AlgorithmAlreadyRegisteredException::*)($String*,$ObjectArray*)>(&AlgorithmAlreadyRegisteredException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(AlgorithmAlreadyRegisteredException::*)($Exception*,$String*)>(&AlgorithmAlreadyRegisteredException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(AlgorithmAlreadyRegisteredException::*)($String*,$Exception*)>(&AlgorithmAlreadyRegisteredException::init$)), nullptr, nullptr, _AlgorithmAlreadyRegisteredException_MethodAnnotations_init$4},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(AlgorithmAlreadyRegisteredException::*)($Exception*,$String*,$ObjectArray*)>(&AlgorithmAlreadyRegisteredException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(AlgorithmAlreadyRegisteredException::*)($String*,$ObjectArray*,$Exception*)>(&AlgorithmAlreadyRegisteredException::init$)), nullptr, nullptr, _AlgorithmAlreadyRegisteredException_MethodAnnotations_init$6},
	{}
};

$ClassInfo _AlgorithmAlreadyRegisteredException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.exceptions.AlgorithmAlreadyRegisteredException",
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
	nullptr,
	_AlgorithmAlreadyRegisteredException_FieldInfo_,
	_AlgorithmAlreadyRegisteredException_MethodInfo_
};

$Object* allocate$AlgorithmAlreadyRegisteredException($Class* clazz) {
	return $of($alloc(AlgorithmAlreadyRegisteredException));
}

void AlgorithmAlreadyRegisteredException::init$() {
	$XMLSecurityException::init$();
}

void AlgorithmAlreadyRegisteredException::init$($String* msgID) {
	$XMLSecurityException::init$(msgID);
}

void AlgorithmAlreadyRegisteredException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(msgID, exArgs);
}

void AlgorithmAlreadyRegisteredException::init$($Exception* originalException, $String* msgID) {
	$XMLSecurityException::init$(originalException, msgID);
}

void AlgorithmAlreadyRegisteredException::init$($String* msgID, $Exception* originalException) {
	AlgorithmAlreadyRegisteredException::init$(originalException, msgID);
}

void AlgorithmAlreadyRegisteredException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgID, exArgs);
}

void AlgorithmAlreadyRegisteredException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	AlgorithmAlreadyRegisteredException::init$(originalException, msgID, exArgs);
}

AlgorithmAlreadyRegisteredException::AlgorithmAlreadyRegisteredException() {
}

AlgorithmAlreadyRegisteredException::AlgorithmAlreadyRegisteredException(const AlgorithmAlreadyRegisteredException& e) {
}

AlgorithmAlreadyRegisteredException AlgorithmAlreadyRegisteredException::wrapper$() {
	$pendingException(this);
	return *this;
}

void AlgorithmAlreadyRegisteredException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* AlgorithmAlreadyRegisteredException::load$($String* name, bool initialize) {
	$loadClass(AlgorithmAlreadyRegisteredException, name, initialize, &_AlgorithmAlreadyRegisteredException_ClassInfo_, allocate$AlgorithmAlreadyRegisteredException);
	return class$;
}

$Class* AlgorithmAlreadyRegisteredException::class$ = nullptr;

							} // exceptions
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com