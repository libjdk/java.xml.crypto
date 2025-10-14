#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>

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
							namespace signature {

$CompoundAttribute _XMLSignatureException_MethodAnnotations_init$5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XMLSignatureException_MethodAnnotations_init$7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _XMLSignatureException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSignatureException, serialVersionUID)},
	{}
};

$MethodInfo _XMLSignatureException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignatureException::*)()>(&XMLSignatureException::init$))},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignatureException::*)($Exception*)>(&XMLSignatureException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignatureException::*)($String*)>(&XMLSignatureException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignatureException::*)($String*,$ObjectArray*)>(&XMLSignatureException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignatureException::*)($Exception*,$String*)>(&XMLSignatureException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(XMLSignatureException::*)($String*,$Exception*)>(&XMLSignatureException::init$)), nullptr, nullptr, _XMLSignatureException_MethodAnnotations_init$5},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignatureException::*)($Exception*,$String*,$ObjectArray*)>(&XMLSignatureException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(XMLSignatureException::*)($String*,$ObjectArray*,$Exception*)>(&XMLSignatureException::init$)), nullptr, nullptr, _XMLSignatureException_MethodAnnotations_init$7},
	{}
};

$ClassInfo _XMLSignatureException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.XMLSignatureException",
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
	nullptr,
	_XMLSignatureException_FieldInfo_,
	_XMLSignatureException_MethodInfo_
};

$Object* allocate$XMLSignatureException($Class* clazz) {
	return $of($alloc(XMLSignatureException));
}

void XMLSignatureException::init$() {
	$XMLSecurityException::init$();
}

void XMLSignatureException::init$($Exception* ex) {
	$XMLSecurityException::init$(ex);
}

void XMLSignatureException::init$($String* msgID) {
	$XMLSecurityException::init$(msgID);
}

void XMLSignatureException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(msgID, exArgs);
}

void XMLSignatureException::init$($Exception* originalException, $String* msgID) {
	$XMLSecurityException::init$(originalException, msgID);
}

void XMLSignatureException::init$($String* msgID, $Exception* originalException) {
	XMLSignatureException::init$(originalException, msgID);
}

void XMLSignatureException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgID, exArgs);
}

void XMLSignatureException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	XMLSignatureException::init$(originalException, msgID, exArgs);
}

XMLSignatureException::XMLSignatureException() {
}

XMLSignatureException::XMLSignatureException(const XMLSignatureException& e) {
}

XMLSignatureException XMLSignatureException::wrapper$() {
	$pendingException(this);
	return *this;
}

void XMLSignatureException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* XMLSignatureException::load$($String* name, bool initialize) {
	$loadClass(XMLSignatureException, name, initialize, &_XMLSignatureException_ClassInfo_, allocate$XMLSignatureException);
	return class$;
}

$Class* XMLSignatureException::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com