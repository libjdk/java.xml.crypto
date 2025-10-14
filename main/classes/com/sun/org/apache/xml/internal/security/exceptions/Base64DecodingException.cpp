#include <com/sun/org/apache/xml/internal/security/exceptions/Base64DecodingException.h>

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

$CompoundAttribute _Base64DecodingException_MethodAnnotations_init$4[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _Base64DecodingException_MethodAnnotations_init$6[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _Base64DecodingException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64DecodingException, serialVersionUID)},
	{}
};

$MethodInfo _Base64DecodingException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Base64DecodingException::*)()>(&Base64DecodingException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Base64DecodingException::*)($String*)>(&Base64DecodingException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Base64DecodingException::*)($String*,$ObjectArray*)>(&Base64DecodingException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Base64DecodingException::*)($Exception*,$String*)>(&Base64DecodingException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Base64DecodingException::*)($String*,$Exception*)>(&Base64DecodingException::init$)), nullptr, nullptr, _Base64DecodingException_MethodAnnotations_init$4},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(Base64DecodingException::*)($Exception*,$String*,$ObjectArray*)>(&Base64DecodingException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(Base64DecodingException::*)($String*,$ObjectArray*,$Exception*)>(&Base64DecodingException::init$)), nullptr, nullptr, _Base64DecodingException_MethodAnnotations_init$6},
	{}
};

$ClassInfo _Base64DecodingException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException",
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
	nullptr,
	_Base64DecodingException_FieldInfo_,
	_Base64DecodingException_MethodInfo_
};

$Object* allocate$Base64DecodingException($Class* clazz) {
	return $of($alloc(Base64DecodingException));
}

void Base64DecodingException::init$() {
	$XMLSecurityException::init$();
}

void Base64DecodingException::init$($String* msgID) {
	$XMLSecurityException::init$(msgID);
}

void Base64DecodingException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(msgID, exArgs);
}

void Base64DecodingException::init$($Exception* originalException, $String* msgID) {
	$XMLSecurityException::init$(originalException, msgID);
}

void Base64DecodingException::init$($String* msgID, $Exception* originalException) {
	Base64DecodingException::init$(originalException, msgID);
}

void Base64DecodingException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgID, exArgs);
}

void Base64DecodingException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	Base64DecodingException::init$(originalException, msgID, exArgs);
}

Base64DecodingException::Base64DecodingException() {
}

Base64DecodingException::Base64DecodingException(const Base64DecodingException& e) {
}

Base64DecodingException Base64DecodingException::wrapper$() {
	$pendingException(this);
	return *this;
}

void Base64DecodingException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* Base64DecodingException::load$($String* name, bool initialize) {
	$loadClass(Base64DecodingException, name, initialize, &_Base64DecodingException_ClassInfo_, allocate$Base64DecodingException);
	return class$;
}

$Class* Base64DecodingException::class$ = nullptr;

							} // exceptions
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com