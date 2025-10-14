#include <com/sun/org/apache/xml/internal/security/signature/MissingResourceFailureException.h>

#include <com/sun/org/apache/xml/internal/security/signature/Reference.h>
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

using $Reference = ::com::sun::org::apache::xml::internal::security::signature::Reference;
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

$CompoundAttribute _MissingResourceFailureException_MethodAnnotations_init$1[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _MissingResourceFailureException_MethodAnnotations_init$3[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _MissingResourceFailureException_MethodAnnotations_init$5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _MissingResourceFailureException_MethodAnnotations_init$7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _MissingResourceFailureException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(MissingResourceFailureException, serialVersionUID)},
	{"uninitializedReference", "Lcom/sun/org/apache/xml/internal/security/signature/Reference;", nullptr, $PRIVATE, $field(MissingResourceFailureException, uninitializedReference)},
	{}
};

$MethodInfo _MissingResourceFailureException_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/Reference;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MissingResourceFailureException::*)($Reference*,$String*)>(&MissingResourceFailureException::init$))},
	{"<init>", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/signature/Reference;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(MissingResourceFailureException::*)($String*,$Reference*)>(&MissingResourceFailureException::init$)), nullptr, nullptr, _MissingResourceFailureException_MethodAnnotations_init$1},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/Reference;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(MissingResourceFailureException::*)($Reference*,$String*,$ObjectArray*)>(&MissingResourceFailureException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Lcom/sun/org/apache/xml/internal/security/signature/Reference;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(MissingResourceFailureException::*)($String*,$ObjectArray*,$Reference*)>(&MissingResourceFailureException::init$)), nullptr, nullptr, _MissingResourceFailureException_MethodAnnotations_init$3},
	{"<init>", "(Ljava/lang/Exception;Lcom/sun/org/apache/xml/internal/security/signature/Reference;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MissingResourceFailureException::*)($Exception*,$Reference*,$String*)>(&MissingResourceFailureException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;Lcom/sun/org/apache/xml/internal/security/signature/Reference;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(MissingResourceFailureException::*)($String*,$Exception*,$Reference*)>(&MissingResourceFailureException::init$)), nullptr, nullptr, _MissingResourceFailureException_MethodAnnotations_init$5},
	{"<init>", "(Ljava/lang/Exception;Lcom/sun/org/apache/xml/internal/security/signature/Reference;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(MissingResourceFailureException::*)($Exception*,$Reference*,$String*,$ObjectArray*)>(&MissingResourceFailureException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;Lcom/sun/org/apache/xml/internal/security/signature/Reference;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(MissingResourceFailureException::*)($String*,$ObjectArray*,$Exception*,$Reference*)>(&MissingResourceFailureException::init$)), nullptr, nullptr, _MissingResourceFailureException_MethodAnnotations_init$7},
	{"getReference", "()Lcom/sun/org/apache/xml/internal/security/signature/Reference;", nullptr, $PUBLIC},
	{"setReference", "(Lcom/sun/org/apache/xml/internal/security/signature/Reference;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MissingResourceFailureException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.MissingResourceFailureException",
	"com.sun.org.apache.xml.internal.security.signature.XMLSignatureException",
	nullptr,
	_MissingResourceFailureException_FieldInfo_,
	_MissingResourceFailureException_MethodInfo_
};

$Object* allocate$MissingResourceFailureException($Class* clazz) {
	return $of($alloc(MissingResourceFailureException));
}

void MissingResourceFailureException::init$($Reference* reference, $String* msgID) {
	$XMLSignatureException::init$(msgID);
	$set(this, uninitializedReference, reference);
}

void MissingResourceFailureException::init$($String* msgID, $Reference* reference) {
	MissingResourceFailureException::init$(reference, msgID);
}

void MissingResourceFailureException::init$($Reference* reference, $String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(msgID, exArgs);
	$set(this, uninitializedReference, reference);
}

void MissingResourceFailureException::init$($String* msgID, $ObjectArray* exArgs, $Reference* reference) {
	MissingResourceFailureException::init$(reference, msgID, exArgs);
}

void MissingResourceFailureException::init$($Exception* originalException, $Reference* reference, $String* msgID) {
	$XMLSignatureException::init$(originalException, msgID);
	$set(this, uninitializedReference, reference);
}

void MissingResourceFailureException::init$($String* msgID, $Exception* originalException, $Reference* reference) {
	MissingResourceFailureException::init$(originalException, reference, msgID);
}

void MissingResourceFailureException::init$($Exception* originalException, $Reference* reference, $String* msgID, $ObjectArray* exArgs) {
	$XMLSignatureException::init$(originalException, msgID, exArgs);
	$set(this, uninitializedReference, reference);
}

void MissingResourceFailureException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException, $Reference* reference) {
	MissingResourceFailureException::init$(originalException, reference, msgID, exArgs);
}

void MissingResourceFailureException::setReference($Reference* reference) {
	$set(this, uninitializedReference, reference);
}

$Reference* MissingResourceFailureException::getReference() {
	return this->uninitializedReference;
}

MissingResourceFailureException::MissingResourceFailureException() {
}

MissingResourceFailureException::MissingResourceFailureException(const MissingResourceFailureException& e) {
}

MissingResourceFailureException MissingResourceFailureException::wrapper$() {
	$pendingException(this);
	return *this;
}

void MissingResourceFailureException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* MissingResourceFailureException::load$($String* name, bool initialize) {
	$loadClass(MissingResourceFailureException, name, initialize, &_MissingResourceFailureException_ClassInfo_, allocate$MissingResourceFailureException);
	return class$;
}

$Class* MissingResourceFailureException::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com