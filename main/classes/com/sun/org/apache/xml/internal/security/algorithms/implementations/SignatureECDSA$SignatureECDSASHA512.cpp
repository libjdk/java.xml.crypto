#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSASHA512.h>

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

#undef ALGO_ID_SIGNATURE_ECDSA_SHA512

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

$MethodInfo _SignatureECDSA$SignatureECDSASHA512_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureECDSA$SignatureECDSASHA512::*)()>(&SignatureECDSA$SignatureECDSASHA512::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureECDSA$SignatureECDSASHA512::*)($Provider*)>(&SignatureECDSA$SignatureECDSASHA512::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SignatureECDSA$SignatureECDSASHA512_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA512", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA", "SignatureECDSASHA512", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SignatureECDSA$SignatureECDSASHA512_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA512",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA",
	nullptr,
	nullptr,
	_SignatureECDSA$SignatureECDSASHA512_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureECDSA$SignatureECDSASHA512_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA"
};

$Object* allocate$SignatureECDSA$SignatureECDSASHA512($Class* clazz) {
	return $of($alloc(SignatureECDSA$SignatureECDSASHA512));
}

void SignatureECDSA$SignatureECDSASHA512::init$() {
	$SignatureECDSA::init$();
}

void SignatureECDSA$SignatureECDSASHA512::init$($Provider* provider) {
	$SignatureECDSA::init$(provider);
}

$String* SignatureECDSA$SignatureECDSASHA512::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA512;
}

SignatureECDSA$SignatureECDSASHA512::SignatureECDSA$SignatureECDSASHA512() {
}

$Class* SignatureECDSA$SignatureECDSASHA512::load$($String* name, bool initialize) {
	$loadClass(SignatureECDSA$SignatureECDSASHA512, name, initialize, &_SignatureECDSA$SignatureECDSASHA512_ClassInfo_, allocate$SignatureECDSA$SignatureECDSASHA512);
	return class$;
}

$Class* SignatureECDSA$SignatureECDSASHA512::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com