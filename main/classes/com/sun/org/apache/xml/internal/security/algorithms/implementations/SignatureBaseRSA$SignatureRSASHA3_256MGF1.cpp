#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA3_256MGF1.h>

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

$MethodInfo _SignatureBaseRSA$SignatureRSASHA3_256MGF1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureBaseRSA$SignatureRSASHA3_256MGF1::*)()>(&SignatureBaseRSA$SignatureRSASHA3_256MGF1::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureBaseRSA$SignatureRSASHA3_256MGF1::*)($Provider*)>(&SignatureBaseRSA$SignatureRSASHA3_256MGF1::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SignatureBaseRSA$SignatureRSASHA3_256MGF1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_256MGF1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA3_256MGF1", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SignatureBaseRSA$SignatureRSASHA3_256MGF1_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_256MGF1",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA",
	nullptr,
	nullptr,
	_SignatureBaseRSA$SignatureRSASHA3_256MGF1_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureBaseRSA$SignatureRSASHA3_256MGF1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA"
};

$Object* allocate$SignatureBaseRSA$SignatureRSASHA3_256MGF1($Class* clazz) {
	return $of($alloc(SignatureBaseRSA$SignatureRSASHA3_256MGF1));
}

void SignatureBaseRSA$SignatureRSASHA3_256MGF1::init$() {
	$SignatureBaseRSA::init$();
}

void SignatureBaseRSA$SignatureRSASHA3_256MGF1::init$($Provider* provider) {
	$SignatureBaseRSA::init$(provider);
}

$String* SignatureBaseRSA$SignatureRSASHA3_256MGF1::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_256_MGF1;
}

SignatureBaseRSA$SignatureRSASHA3_256MGF1::SignatureBaseRSA$SignatureRSASHA3_256MGF1() {
}

$Class* SignatureBaseRSA$SignatureRSASHA3_256MGF1::load$($String* name, bool initialize) {
	$loadClass(SignatureBaseRSA$SignatureRSASHA3_256MGF1, name, initialize, &_SignatureBaseRSA$SignatureRSASHA3_256MGF1_ClassInfo_, allocate$SignatureBaseRSA$SignatureRSASHA3_256MGF1);
	return class$;
}

$Class* SignatureBaseRSA$SignatureRSASHA3_256MGF1::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com