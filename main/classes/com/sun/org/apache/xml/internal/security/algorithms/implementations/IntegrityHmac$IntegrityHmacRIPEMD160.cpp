#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacRIPEMD160.h>

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

#undef ALGO_ID_MAC_HMAC_RIPEMD160

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

$MethodInfo _IntegrityHmac$IntegrityHmacRIPEMD160_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegrityHmac$IntegrityHmacRIPEMD160::*)()>(&IntegrityHmac$IntegrityHmacRIPEMD160::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegrityHmac$IntegrityHmacRIPEMD160::*)($Provider*)>(&IntegrityHmac$IntegrityHmacRIPEMD160::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDigestLength", "()I", nullptr, 0},
	{}
};

$InnerClassInfo _IntegrityHmac$IntegrityHmacRIPEMD160_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacRIPEMD160", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "IntegrityHmacRIPEMD160", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _IntegrityHmac$IntegrityHmacRIPEMD160_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacRIPEMD160",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac",
	nullptr,
	nullptr,
	_IntegrityHmac$IntegrityHmacRIPEMD160_MethodInfo_,
	nullptr,
	nullptr,
	_IntegrityHmac$IntegrityHmacRIPEMD160_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac"
};

$Object* allocate$IntegrityHmac$IntegrityHmacRIPEMD160($Class* clazz) {
	return $of($alloc(IntegrityHmac$IntegrityHmacRIPEMD160));
}

void IntegrityHmac$IntegrityHmacRIPEMD160::init$() {
	$IntegrityHmac::init$();
}

void IntegrityHmac$IntegrityHmacRIPEMD160::init$($Provider* provider) {
	$IntegrityHmac::init$(provider);
}

$String* IntegrityHmac$IntegrityHmacRIPEMD160::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_MAC_HMAC_RIPEMD160;
}

int32_t IntegrityHmac$IntegrityHmacRIPEMD160::getDigestLength() {
	return 160;
}

IntegrityHmac$IntegrityHmacRIPEMD160::IntegrityHmac$IntegrityHmacRIPEMD160() {
}

$Class* IntegrityHmac$IntegrityHmacRIPEMD160::load$($String* name, bool initialize) {
	$loadClass(IntegrityHmac$IntegrityHmacRIPEMD160, name, initialize, &_IntegrityHmac$IntegrityHmacRIPEMD160_ClassInfo_, allocate$IntegrityHmac$IntegrityHmacRIPEMD160);
	return class$;
}

$Class* IntegrityHmac$IntegrityHmacRIPEMD160::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com