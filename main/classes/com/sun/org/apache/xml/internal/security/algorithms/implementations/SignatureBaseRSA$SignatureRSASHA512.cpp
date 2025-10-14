#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA512.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA.h>
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

#undef ALGO_ID_SIGNATURE_RSA_SHA512

using $SignatureBaseRSA = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA;
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

$MethodInfo _SignatureBaseRSA$SignatureRSASHA512_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureBaseRSA$SignatureRSASHA512::*)()>(&SignatureBaseRSA$SignatureRSASHA512::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureBaseRSA$SignatureRSASHA512::*)($Provider*)>(&SignatureBaseRSA$SignatureRSASHA512::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SignatureBaseRSA$SignatureRSASHA512_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA512", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA512", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SignatureBaseRSA$SignatureRSASHA512_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA512",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA",
	nullptr,
	nullptr,
	_SignatureBaseRSA$SignatureRSASHA512_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureBaseRSA$SignatureRSASHA512_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA"
};

$Object* allocate$SignatureBaseRSA$SignatureRSASHA512($Class* clazz) {
	return $of($alloc(SignatureBaseRSA$SignatureRSASHA512));
}

void SignatureBaseRSA$SignatureRSASHA512::init$() {
	$SignatureBaseRSA::init$();
}

void SignatureBaseRSA$SignatureRSASHA512::init$($Provider* provider) {
	$SignatureBaseRSA::init$(provider);
}

$String* SignatureBaseRSA$SignatureRSASHA512::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA512;
}

SignatureBaseRSA$SignatureRSASHA512::SignatureBaseRSA$SignatureRSASHA512() {
}

$Class* SignatureBaseRSA$SignatureRSASHA512::load$($String* name, bool initialize) {
	$loadClass(SignatureBaseRSA$SignatureRSASHA512, name, initialize, &_SignatureBaseRSA$SignatureRSASHA512_ClassInfo_, allocate$SignatureBaseRSA$SignatureRSASHA512);
	return class$;
}

$Class* SignatureBaseRSA$SignatureRSASHA512::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com