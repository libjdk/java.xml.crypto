#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>

#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>
#include <java/io/PrintStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/MessageFormat.h>
#include <jcpp.h>

using $I18n = ::com::sun::org::apache::xml::internal::security::utils::I18n;
using $PrintStream = ::java::io::PrintStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageFormat = ::java::text::MessageFormat;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace exceptions {

$CompoundAttribute _XMLSecurityException_MethodAnnotations_init$5[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$CompoundAttribute _XMLSecurityException_MethodAnnotations_init$7[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};

$FieldInfo _XMLSecurityException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSecurityException, serialVersionUID)},
	{"msgID", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLSecurityException, msgID)},
	{}
};

$MethodInfo _XMLSecurityException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLSecurityException::*)()>(&XMLSecurityException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSecurityException::*)($String*)>(&XMLSecurityException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSecurityException::*)($String*,$ObjectArray*)>(&XMLSecurityException::init$))},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSecurityException::*)($Exception*)>(&XMLSecurityException::init$))},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSecurityException::*)($Exception*,$String*)>(&XMLSecurityException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(XMLSecurityException::*)($String*,$Exception*)>(&XMLSecurityException::init$)), nullptr, nullptr, _XMLSecurityException_MethodAnnotations_init$5},
	{"<init>", "(Ljava/lang/Exception;Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSecurityException::*)($Exception*,$String*,$ObjectArray*)>(&XMLSecurityException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC | $DEPRECATED, $method(static_cast<void(XMLSecurityException::*)($String*,$ObjectArray*,$Exception*)>(&XMLSecurityException::init$)), nullptr, nullptr, _XMLSecurityException_MethodAnnotations_init$7},
	{"getMsgID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOriginalException", "()Ljava/lang/Exception;", nullptr, $PUBLIC},
	{"printStackTrace", "()V", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLSecurityException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException",
	"java.lang.Exception",
	nullptr,
	_XMLSecurityException_FieldInfo_,
	_XMLSecurityException_MethodInfo_
};

$Object* allocate$XMLSecurityException($Class* clazz) {
	return $of($alloc(XMLSecurityException));
}

void XMLSecurityException::init$() {
	$Exception::init$("Missing message string"_s);
	$set(this, msgID, nullptr);
}

void XMLSecurityException::init$($String* msgID) {
	$Exception::init$($($I18n::getExceptionMessage(msgID)));
	$set(this, msgID, msgID);
}

void XMLSecurityException::init$($String* msgID, $ObjectArray* exArgs) {
	$Exception::init$($($MessageFormat::format($($I18n::getExceptionMessage(msgID)), exArgs)));
	$set(this, msgID, msgID);
}

void XMLSecurityException::init$($Exception* originalException) {
	$Exception::init$($($nc(originalException)->getMessage()), originalException);
}

void XMLSecurityException::init$($Exception* originalException, $String* msgID) {
	$Exception::init$($($I18n::getExceptionMessage(msgID, originalException)), originalException);
	$set(this, msgID, msgID);
}

void XMLSecurityException::init$($String* msgID, $Exception* originalException) {
	XMLSecurityException::init$(originalException, msgID);
}

void XMLSecurityException::init$($Exception* originalException, $String* msgID, $ObjectArray* exArgs) {
	$Exception::init$($($MessageFormat::format($($I18n::getExceptionMessage(msgID)), exArgs)), originalException);
	$set(this, msgID, msgID);
}

void XMLSecurityException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	XMLSecurityException::init$(originalException, msgID, exArgs);
}

$String* XMLSecurityException::getMsgID() {
	if (this->msgID == nullptr) {
		return "Missing message ID"_s;
	}
	return this->msgID;
}

$String* XMLSecurityException::toString() {
	$var($String, s, $of(this)->getClass()->getName());
	$var($String, message, $Exception::getLocalizedMessage());
	if (message != nullptr) {
		$assign(message, $str({s, ": "_s, message}));
	} else {
		$assign(message, s);
	}
	if ($Exception::getCause() != nullptr) {
		$assign(message, $str({message, "\nOriginal Exception was "_s, $($nc($($Exception::getCause()))->toString())}));
	}
	return message;
}

void XMLSecurityException::printStackTrace() {
	$init($System);
	$synchronized($System::err) {
		$Exception::printStackTrace($System::err);
	}
}

$Exception* XMLSecurityException::getOriginalException() {
	if ($instanceOf($Exception, $(this->getCause()))) {
		return $cast($Exception, this->getCause());
	}
	return nullptr;
}

XMLSecurityException::XMLSecurityException() {
}

XMLSecurityException::XMLSecurityException(const XMLSecurityException& e) {
}

XMLSecurityException XMLSecurityException::wrapper$() {
	$pendingException(this);
	return *this;
}

void XMLSecurityException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* XMLSecurityException::load$($String* name, bool initialize) {
	$loadClass(XMLSecurityException, name, initialize, &_XMLSecurityException_ClassInfo_, allocate$XMLSecurityException);
	return class$;
}

$Class* XMLSecurityException::class$ = nullptr;

							} // exceptions
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com