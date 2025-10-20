#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityRuntimeException.h>

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/text/MessageFormat.h>
#include <jcpp.h>

using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $I18n = ::com::sun::org::apache::xml::internal::security::utils::I18n;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $MessageFormat = ::java::text::MessageFormat;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace exceptions {

$FieldInfo _XMLSecurityRuntimeException_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSecurityRuntimeException, serialVersionUID)},
	{"msgID", "Ljava/lang/String;", nullptr, $PROTECTED, $field(XMLSecurityRuntimeException, msgID)},
	{}
};

$MethodInfo _XMLSecurityRuntimeException_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLSecurityRuntimeException::*)()>(&XMLSecurityRuntimeException::init$))},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSecurityRuntimeException::*)($String*)>(&XMLSecurityRuntimeException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSecurityRuntimeException::*)($String*,$ObjectArray*)>(&XMLSecurityRuntimeException::init$))},
	{"<init>", "(Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSecurityRuntimeException::*)($Exception*)>(&XMLSecurityRuntimeException::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSecurityRuntimeException::*)($String*,$Exception*)>(&XMLSecurityRuntimeException::init$))},
	{"<init>", "(Ljava/lang/String;[Ljava/lang/Object;Ljava/lang/Exception;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSecurityRuntimeException::*)($String*,$ObjectArray*,$Exception*)>(&XMLSecurityRuntimeException::init$))},
	{"getMsgID", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOriginalException", "()Ljava/lang/Exception;", nullptr, $PUBLIC},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLSecurityRuntimeException_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityRuntimeException",
	"java.lang.RuntimeException",
	nullptr,
	_XMLSecurityRuntimeException_FieldInfo_,
	_XMLSecurityRuntimeException_MethodInfo_
};

$Object* allocate$XMLSecurityRuntimeException($Class* clazz) {
	return $of($alloc(XMLSecurityRuntimeException));
}

void XMLSecurityRuntimeException::init$() {
	$RuntimeException::init$("Missing message string"_s);
	$set(this, msgID, nullptr);
}

void XMLSecurityRuntimeException::init$($String* msgID) {
	$RuntimeException::init$($($I18n::getExceptionMessage(msgID)));
	$set(this, msgID, msgID);
}

void XMLSecurityRuntimeException::init$($String* msgID, $ObjectArray* exArgs) {
	$useLocalCurrentObjectStackCache();
	$RuntimeException::init$($($MessageFormat::format($($I18n::getExceptionMessage(msgID)), exArgs)));
	$set(this, msgID, msgID);
}

void XMLSecurityRuntimeException::init$($Exception* originalException) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($String, var$0, $$str({"Missing message ID to locate message string in resource bundle \""_s, $Constants::exceptionMessagesResourceBundleBase, "\". Original Exception was a "_s, $($nc($of(originalException))->getClass()->getName()), " and message "_s}));
	$RuntimeException::init$($$concat(var$0, $(originalException->getMessage())), originalException);
}

void XMLSecurityRuntimeException::init$($String* msgID, $Exception* originalException) {
	$RuntimeException::init$($($I18n::getExceptionMessage(msgID, originalException)), originalException);
	$set(this, msgID, msgID);
}

void XMLSecurityRuntimeException::init$($String* msgID, $ObjectArray* exArgs, $Exception* originalException) {
	$useLocalCurrentObjectStackCache();
	$RuntimeException::init$($($MessageFormat::format($($I18n::getExceptionMessage(msgID)), exArgs)), originalException);
	$set(this, msgID, msgID);
}

$String* XMLSecurityRuntimeException::getMsgID() {
	if (this->msgID == nullptr) {
		return "Missing message ID"_s;
	}
	return this->msgID;
}

$String* XMLSecurityRuntimeException::toString() {
	$useLocalCurrentObjectStackCache();
	$var($String, s, $of(this)->getClass()->getName());
	$var($String, message, $RuntimeException::getLocalizedMessage());
	if (message != nullptr) {
		$assign(message, $str({s, ": "_s, message}));
	} else {
		$assign(message, s);
	}
	if (this->getCause() != nullptr) {
		$assign(message, $str({message, "\nOriginal Exception was "_s, $($nc($(this->getCause()))->toString())}));
	}
	return message;
}

$Exception* XMLSecurityRuntimeException::getOriginalException() {
	if ($instanceOf($Exception, $(this->getCause()))) {
		return $cast($Exception, this->getCause());
	}
	return nullptr;
}

XMLSecurityRuntimeException::XMLSecurityRuntimeException() {
}

XMLSecurityRuntimeException::XMLSecurityRuntimeException(const XMLSecurityRuntimeException& e) {
}

XMLSecurityRuntimeException XMLSecurityRuntimeException::wrapper$() {
	$pendingException(this);
	return *this;
}

void XMLSecurityRuntimeException::throwWrapper$() {
	$pendingException(this);
	throw *this;
}

$Class* XMLSecurityRuntimeException::load$($String* name, bool initialize) {
	$loadClass(XMLSecurityRuntimeException, name, initialize, &_XMLSecurityRuntimeException_ClassInfo_, allocate$XMLSecurityRuntimeException);
	return class$;
}

$Class* XMLSecurityRuntimeException::class$ = nullptr;

							} // exceptions
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com