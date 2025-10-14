#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSASHA256.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA.h>
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

#undef ALGO_ID_SIGNATURE_ECDSA_SHA256

using $SignatureECDSA = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA;
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

$MethodInfo _SignatureECDSA$SignatureECDSASHA256_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureECDSA$SignatureECDSASHA256::*)()>(&SignatureECDSA$SignatureECDSASHA256::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureECDSA$SignatureECDSASHA256::*)($Provider*)>(&SignatureECDSA$SignatureECDSASHA256::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SignatureECDSA$SignatureECDSASHA256_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA256", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA", "SignatureECDSASHA256", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SignatureECDSA$SignatureECDSASHA256_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA256",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA",
	nullptr,
	nullptr,
	_SignatureECDSA$SignatureECDSASHA256_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureECDSA$SignatureECDSASHA256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA"
};

$Object* allocate$SignatureECDSA$SignatureECDSASHA256($Class* clazz) {
	return $of($alloc(SignatureECDSA$SignatureECDSASHA256));
}

void SignatureECDSA$SignatureECDSASHA256::init$() {
	$SignatureECDSA::init$();
}

void SignatureECDSA$SignatureECDSASHA256::init$($Provider* provider) {
	$SignatureECDSA::init$(provider);
}

$String* SignatureECDSA$SignatureECDSASHA256::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA256;
}

SignatureECDSA$SignatureECDSASHA256::SignatureECDSA$SignatureECDSASHA256() {
}

$Class* SignatureECDSA$SignatureECDSASHA256::load$($String* name, bool initialize) {
	$loadClass(SignatureECDSA$SignatureECDSASHA256, name, initialize, &_SignatureECDSA$SignatureECDSASHA256_ClassInfo_, allocate$SignatureECDSA$SignatureECDSASHA256);
	return class$;
}

$Class* SignatureECDSA$SignatureECDSASHA256::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com