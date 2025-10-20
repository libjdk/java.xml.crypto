#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$HMACOutputLength.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef LOG
#undef MAX_LENGTH
#undef MIN_LENGTH

using $IntegrityHmac = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {

$FieldInfo _IntegrityHmac$HMACOutputLength_FieldInfo_[] = {
	{"MIN_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegrityHmac$HMACOutputLength, MIN_LENGTH)},
	{"MAX_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(IntegrityHmac$HMACOutputLength, MAX_LENGTH)},
	{"length", "I", nullptr, $PRIVATE | $FINAL, $field(IntegrityHmac$HMACOutputLength, length)},
	{}
};

$MethodInfo _IntegrityHmac$HMACOutputLength_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(IntegrityHmac$HMACOutputLength::*)(int32_t)>(&IntegrityHmac$HMACOutputLength::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{}
};

$InnerClassInfo _IntegrityHmac$HMACOutputLength_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$HMACOutputLength", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "HMACOutputLength", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _IntegrityHmac$HMACOutputLength_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$HMACOutputLength",
	"java.lang.Object",
	nullptr,
	_IntegrityHmac$HMACOutputLength_FieldInfo_,
	_IntegrityHmac$HMACOutputLength_MethodInfo_,
	nullptr,
	nullptr,
	_IntegrityHmac$HMACOutputLength_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac"
};

$Object* allocate$IntegrityHmac$HMACOutputLength($Class* clazz) {
	return $of($alloc(IntegrityHmac$HMACOutputLength));
}

void IntegrityHmac$HMACOutputLength::init$(int32_t length) {
	$useLocalCurrentObjectStackCache();
	this->length = length;
	if (length < IntegrityHmac$HMACOutputLength::MIN_LENGTH) {
		$init($IntegrityHmac);
		$nc($IntegrityHmac::LOG)->debug("HMACOutputLength must not be less than {}"_s, $$new($ObjectArray, {$($of($Integer::valueOf(IntegrityHmac$HMACOutputLength::MIN_LENGTH)))}));
		$var($ObjectArray, exArgs, $new($ObjectArray, {$($of($String::valueOf(IntegrityHmac$HMACOutputLength::MIN_LENGTH)))}));
		$throwNew($XMLSignatureException, "algorithms.HMACOutputLengthMin"_s, exArgs);
	}
	if (length > IntegrityHmac$HMACOutputLength::MAX_LENGTH) {
		$init($IntegrityHmac);
		$nc($IntegrityHmac::LOG)->debug("HMACOutputLength must not be more than {}"_s, $$new($ObjectArray, {$($of($Integer::valueOf(IntegrityHmac$HMACOutputLength::MAX_LENGTH)))}));
		$var($ObjectArray, exArgs, $new($ObjectArray, {$($of($String::valueOf(IntegrityHmac$HMACOutputLength::MAX_LENGTH)))}));
		$throwNew($XMLSignatureException, "algorithms.HMACOutputLengthMax"_s, exArgs);
	}
}

IntegrityHmac$HMACOutputLength::IntegrityHmac$HMACOutputLength() {
}

$Class* IntegrityHmac$HMACOutputLength::load$($String* name, bool initialize) {
	$loadClass(IntegrityHmac$HMACOutputLength, name, initialize, &_IntegrityHmac$HMACOutputLength_ClassInfo_, allocate$IntegrityHmac$HMACOutputLength);
	return class$;
}

$Class* IntegrityHmac$HMACOutputLength::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com