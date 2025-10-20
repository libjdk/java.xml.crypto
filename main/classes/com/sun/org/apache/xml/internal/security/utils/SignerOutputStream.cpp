#include <com/sun/org/apache/xml/internal/security/utils/SignerOutputStream.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef LOG

using $SignatureAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithm;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$FieldInfo _SignerOutputStream_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SignerOutputStream, LOG)},
	{"sa", "Lcom/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm;", nullptr, $FINAL, $field(SignerOutputStream, sa)},
	{}
};

$MethodInfo _SignerOutputStream_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm;)V", nullptr, $PUBLIC, $method(static_cast<void(SignerOutputStream::*)($SignatureAlgorithm*)>(&SignerOutputStream::init$))},
	{"write", "([B)V", nullptr, $PUBLIC},
	{"write", "(I)V", nullptr, $PUBLIC},
	{"write", "([BII)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SignerOutputStream_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.SignerOutputStream",
	"java.io.ByteArrayOutputStream",
	nullptr,
	_SignerOutputStream_FieldInfo_,
	_SignerOutputStream_MethodInfo_
};

$Object* allocate$SignerOutputStream($Class* clazz) {
	return $of($alloc(SignerOutputStream));
}

$Logger* SignerOutputStream::LOG = nullptr;

void SignerOutputStream::init$($SignatureAlgorithm* sa) {
	$ByteArrayOutputStream::init$();
	$set(this, sa, sa);
}

void SignerOutputStream::write($bytes* arg0) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->sa)->update(arg0);
	} catch ($XMLSignatureException&) {
		$var($XMLSignatureException, e, $catch());
		$throwNew($RuntimeException, $$str({""_s, e}));
	}
}

void SignerOutputStream::write(int32_t arg0) {
	$useLocalCurrentObjectStackCache();
	try {
		$nc(this->sa)->update((int8_t)arg0);
	} catch ($XMLSignatureException&) {
		$var($XMLSignatureException, e, $catch());
		$throwNew($RuntimeException, $$str({""_s, e}));
	}
}

void SignerOutputStream::write($bytes* arg0, int32_t arg1, int32_t arg2) {
	$useLocalCurrentObjectStackCache();
	if ($nc(SignerOutputStream::LOG)->isDebugEnabled()) {
		$nc(SignerOutputStream::LOG)->debug("Canonicalized SignedInfo:"_s);
		$var($StringBuilder, sb, $new($StringBuilder, arg2));
		for (int32_t i = arg1; i < (arg1 + arg2); ++i) {
			sb->append((char16_t)$nc(arg0)->get(i));
		}
		$nc(SignerOutputStream::LOG)->debug($(sb->toString()));
	}
	try {
		$nc(this->sa)->update(arg0, arg1, arg2);
	} catch ($XMLSignatureException&) {
		$var($XMLSignatureException, e, $catch());
		$throwNew($RuntimeException, $$str({""_s, e}));
	}
}

void clinit$SignerOutputStream($Class* class$) {
	$assignStatic(SignerOutputStream::LOG, $LoggerFactory::getLogger(SignerOutputStream::class$));
}

SignerOutputStream::SignerOutputStream() {
}

$Class* SignerOutputStream::load$($String* name, bool initialize) {
	$loadClass(SignerOutputStream, name, initialize, &_SignerOutputStream_ClassInfo_, clinit$SignerOutputStream, allocate$SignerOutputStream);
	return class$;
}

$Class* SignerOutputStream::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com