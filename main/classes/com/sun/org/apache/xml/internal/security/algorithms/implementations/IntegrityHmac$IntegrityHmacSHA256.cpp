#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacSHA256.h>

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

#undef ALGO_ID_MAC_HMAC_SHA256

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

$MethodInfo _IntegrityHmac$IntegrityHmacSHA256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegrityHmac$IntegrityHmacSHA256::*)()>(&IntegrityHmac$IntegrityHmacSHA256::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegrityHmac$IntegrityHmacSHA256::*)($Provider*)>(&IntegrityHmac$IntegrityHmacSHA256::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDigestLength", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _IntegrityHmac$IntegrityHmacSHA256_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA256", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "IntegrityHmacSHA256", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _IntegrityHmac$IntegrityHmacSHA256_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA256",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac",
	nullptr,
	nullptr,
	_IntegrityHmac$IntegrityHmacSHA256_MethodInfo_,
	nullptr,
	nullptr,
	_IntegrityHmac$IntegrityHmacSHA256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac"
};

$Object* allocate$IntegrityHmac$IntegrityHmacSHA256($Class* clazz) {
	return $of($alloc(IntegrityHmac$IntegrityHmacSHA256));
}

void IntegrityHmac$IntegrityHmacSHA256::init$() {
	$IntegrityHmac::init$();
}

void IntegrityHmac$IntegrityHmacSHA256::init$($Provider* provider) {
	$IntegrityHmac::init$(provider);
}

$String* IntegrityHmac$IntegrityHmacSHA256::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_MAC_HMAC_SHA256;
}

int32_t IntegrityHmac$IntegrityHmacSHA256::getDigestLength() {
	return 256;
}

IntegrityHmac$IntegrityHmacSHA256::IntegrityHmac$IntegrityHmacSHA256() {
}

$Class* IntegrityHmac$IntegrityHmacSHA256::load$($String* name, bool initialize) {
	$loadClass(IntegrityHmac$IntegrityHmacSHA256, name, initialize, &_IntegrityHmac$IntegrityHmacSHA256_ClassInfo_, allocate$IntegrityHmac$IntegrityHmacSHA256);
	return class$;
}

$Class* IntegrityHmac$IntegrityHmacSHA256::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com