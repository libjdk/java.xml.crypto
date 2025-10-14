#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacSHA1.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignature.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider.h>
#include <jcpp.h>

#undef ALGO_ID_MAC_HMAC_SHA1

using $IntegrityHmac = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac;
using $XMLSignature = ::com::sun::org::apache::xml::internal::security::signature::XMLSignature;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {

$MethodInfo _IntegrityHmac$IntegrityHmacSHA1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegrityHmac$IntegrityHmacSHA1::*)()>(&IntegrityHmac$IntegrityHmacSHA1::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegrityHmac$IntegrityHmacSHA1::*)($Provider*)>(&IntegrityHmac$IntegrityHmacSHA1::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDigestLength", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _IntegrityHmac$IntegrityHmacSHA1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "IntegrityHmacSHA1", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _IntegrityHmac$IntegrityHmacSHA1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA1",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac",
	nullptr,
	nullptr,
	_IntegrityHmac$IntegrityHmacSHA1_MethodInfo_,
	nullptr,
	nullptr,
	_IntegrityHmac$IntegrityHmacSHA1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac"
};

$Object* allocate$IntegrityHmac$IntegrityHmacSHA1($Class* clazz) {
	return $of($alloc(IntegrityHmac$IntegrityHmacSHA1));
}

void IntegrityHmac$IntegrityHmacSHA1::init$() {
	$IntegrityHmac::init$();
}

void IntegrityHmac$IntegrityHmacSHA1::init$($Provider* provider) {
	$IntegrityHmac::init$(provider);
}

$String* IntegrityHmac$IntegrityHmacSHA1::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_MAC_HMAC_SHA1;
}

int32_t IntegrityHmac$IntegrityHmacSHA1::getDigestLength() {
	return 160;
}

IntegrityHmac$IntegrityHmacSHA1::IntegrityHmac$IntegrityHmacSHA1() {
}

$Class* IntegrityHmac$IntegrityHmacSHA1::load$($String* name, bool initialize) {
	$loadClass(IntegrityHmac$IntegrityHmacSHA1, name, initialize, &_IntegrityHmac$IntegrityHmacSHA1_ClassInfo_, allocate$IntegrityHmac$IntegrityHmacSHA1);
	return class$;
}

$Class* IntegrityHmac$IntegrityHmacSHA1::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com