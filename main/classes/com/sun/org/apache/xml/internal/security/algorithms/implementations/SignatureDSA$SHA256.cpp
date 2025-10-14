#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureDSA$SHA256.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureDSA.h>
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

#undef ALGO_ID_SIGNATURE_DSA_SHA256

using $SignatureDSA = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureDSA;
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

$MethodInfo _SignatureDSA$SHA256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureDSA$SHA256::*)()>(&SignatureDSA$SHA256::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureDSA$SHA256::*)($Provider*)>(&SignatureDSA$SHA256::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SignatureDSA$SHA256_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA$SHA256", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA", "SHA256", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SignatureDSA$SHA256_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA$SHA256",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA",
	nullptr,
	nullptr,
	_SignatureDSA$SHA256_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureDSA$SHA256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA"
};

$Object* allocate$SignatureDSA$SHA256($Class* clazz) {
	return $of($alloc(SignatureDSA$SHA256));
}

void SignatureDSA$SHA256::init$() {
	$SignatureDSA::init$();
}

void SignatureDSA$SHA256::init$($Provider* provider) {
	$SignatureDSA::init$(provider);
}

$String* SignatureDSA$SHA256::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_SIGNATURE_DSA_SHA256;
}

SignatureDSA$SHA256::SignatureDSA$SHA256() {
}

$Class* SignatureDSA$SHA256::load$($String* name, bool initialize) {
	$loadClass(SignatureDSA$SHA256, name, initialize, &_SignatureDSA$SHA256_ClassInfo_, allocate$SignatureDSA$SHA256);
	return class$;
}

$Class* SignatureDSA$SHA256::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com