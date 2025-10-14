#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSAMD5.h>

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

#undef ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5

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

$MethodInfo _SignatureBaseRSA$SignatureRSAMD5_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureBaseRSA$SignatureRSAMD5::*)()>(&SignatureBaseRSA$SignatureRSAMD5::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureBaseRSA$SignatureRSAMD5::*)($Provider*)>(&SignatureBaseRSA$SignatureRSAMD5::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SignatureBaseRSA$SignatureRSAMD5_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSAMD5", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSAMD5", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SignatureBaseRSA$SignatureRSAMD5_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSAMD5",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA",
	nullptr,
	nullptr,
	_SignatureBaseRSA$SignatureRSAMD5_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureBaseRSA$SignatureRSAMD5_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA"
};

$Object* allocate$SignatureBaseRSA$SignatureRSAMD5($Class* clazz) {
	return $of($alloc(SignatureBaseRSA$SignatureRSAMD5));
}

void SignatureBaseRSA$SignatureRSAMD5::init$() {
	$SignatureBaseRSA::init$();
}

void SignatureBaseRSA$SignatureRSAMD5::init$($Provider* provider) {
	$SignatureBaseRSA::init$(provider);
}

$String* SignatureBaseRSA$SignatureRSAMD5::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5;
}

SignatureBaseRSA$SignatureRSAMD5::SignatureBaseRSA$SignatureRSAMD5() {
}

$Class* SignatureBaseRSA$SignatureRSAMD5::load$($String* name, bool initialize) {
	$loadClass(SignatureBaseRSA$SignatureRSAMD5, name, initialize, &_SignatureBaseRSA$SignatureRSAMD5_ClassInfo_, allocate$SignatureBaseRSA$SignatureRSAMD5);
	return class$;
}

$Class* SignatureBaseRSA$SignatureRSAMD5::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com