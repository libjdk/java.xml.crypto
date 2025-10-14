#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacMD5.h>

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

#undef ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5

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

$MethodInfo _IntegrityHmac$IntegrityHmacMD5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegrityHmac$IntegrityHmacMD5::*)()>(&IntegrityHmac$IntegrityHmacMD5::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegrityHmac$IntegrityHmacMD5::*)($Provider*)>(&IntegrityHmac$IntegrityHmacMD5::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDigestLength", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _IntegrityHmac$IntegrityHmacMD5_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacMD5", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "IntegrityHmacMD5", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _IntegrityHmac$IntegrityHmacMD5_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacMD5",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac",
	nullptr,
	nullptr,
	_IntegrityHmac$IntegrityHmacMD5_MethodInfo_,
	nullptr,
	nullptr,
	_IntegrityHmac$IntegrityHmacMD5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac"
};

$Object* allocate$IntegrityHmac$IntegrityHmacMD5($Class* clazz) {
	return $of($alloc(IntegrityHmac$IntegrityHmacMD5));
}

void IntegrityHmac$IntegrityHmacMD5::init$() {
	$IntegrityHmac::init$();
}

void IntegrityHmac$IntegrityHmacMD5::init$($Provider* provider) {
	$IntegrityHmac::init$(provider);
}

$String* IntegrityHmac$IntegrityHmacMD5::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5;
}

int32_t IntegrityHmac$IntegrityHmacMD5::getDigestLength() {
	return 128;
}

IntegrityHmac$IntegrityHmacMD5::IntegrityHmac$IntegrityHmacMD5() {
}

$Class* IntegrityHmac$IntegrityHmacMD5::load$($String* name, bool initialize) {
	$loadClass(IntegrityHmac$IntegrityHmacMD5, name, initialize, &_IntegrityHmac$IntegrityHmacMD5_ClassInfo_, allocate$IntegrityHmac$IntegrityHmacMD5);
	return class$;
}

$Class* IntegrityHmac$IntegrityHmacMD5::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com