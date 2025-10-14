#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverException.h>

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
							namespace keys {
								namespace storage {

$CompoundAttribute _StorageResolverException_MethodAnnotations_init$5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _StorageResolverException_MethodAnnotations_init$7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _StorageResolverException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(StorageResolverException, serialVersionUID)},
	{}
};

$MethodInfo _StorageResolverException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StorageResolverException::*)()>(&StorageResolverException::init$))},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(StorageResolverException::*)($Exception*)>(&StorageResolverException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StorageResolverException::*)($String*)>(&StorageResolverException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StorageResolverException::*)($String*,$ObjectArray*)>(&StorageResolverException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(StorageResolverException::*)($Exception*,$String*)>(&StorageResolverException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(StorageResolverException::*)($String*,$Exception*)>(&StorageResolverException::init$)), nullptr, nullptr, _StorageResolverException_MethodAnnotations_init$5},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(StorageResolverException::*)($Exception*,$String*,$ObjectArray*)>(&StorageResolverException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(StorageResolverException::*)($String*,$ObjectArray*,$Exception*)>(&StorageResolverException::init$)), nullptr, nullptr, _StorageResolverException_MethodAnnotations_init$7},
	{}
};

$ClassInfo _StorageResolverException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverException",
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
	nullptr,
	_StorageResolverException_FieldInfo_,
	_StorageResolverException_MethodInfo_
};

$Object* allocate$StorageResolverException($Class* clazz) {
	return $of($alloc(StorageResolverException));
}

void StorageResolverException::init$() {
	$XMLSecurityException::init$();
}

void StorageResolverException::init$($Exception* ex) {
	$XMLSecurityException::init$(ex);
}

void StorageResolverException::init$($String* msgID) {
	$XMLSecurityException::init$(msgID);
}

void StorageResolverException::init$($String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(msgID, exArgs);
}

void StorageResolverException::init$($Exception* originalException, $String* msgID) {
	$XMLSecurityException::init$(originalException, msgID);
}

void StorageResolverException::init$($String* msgID, $Exception* originalException) {
	StorageResolverException::init$(originalException, msgID);
}

void StorageResolverException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$XMLSecurityException::init$(originalException, msgID, exArgs);
}

void StorageResolverException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	StorageResolverException::init$(originalException, msgID, exArgs);
}

StorageResolverException::StorageResolverException() {
}

StorageResolverException::StorageResolverException(const StorageResolverException& e) {
}

StorageResolverException StorageResolverException::wrapper$() {
	$pendingException(this);
	return *this;
}

void StorageResolverException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* StorageResolverException::load$($String* name, bool initialize) {
	$loadClass(StorageResolverException, name, initialize, &_StorageResolverException_ClassInfo_, allocate$StorageResolverException);
	return class$;
}

$Class* StorageResolverException::class$ = nullptr;

								} // storage
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com