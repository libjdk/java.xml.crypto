#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSARIPEMD160.h>

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

#undef ALGO_ID_SIGNATURE_RSA_RIPEMD160

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

$MethodInfo _SignatureBaseRSA$SignatureRSARIPEMD160_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureBaseRSA$SignatureRSARIPEMD160::*)()>(&SignatureBaseRSA$SignatureRSARIPEMD160::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureBaseRSA$SignatureRSARIPEMD160::*)($Provider*)>(&SignatureBaseRSA$SignatureRSARIPEMD160::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SignatureBaseRSA$SignatureRSARIPEMD160_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSARIPEMD160", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSARIPEMD160", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SignatureBaseRSA$SignatureRSARIPEMD160_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSARIPEMD160",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA",
	nullptr,
	nullptr,
	_SignatureBaseRSA$SignatureRSARIPEMD160_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureBaseRSA$SignatureRSARIPEMD160_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA"
};

$Object* allocate$SignatureBaseRSA$SignatureRSARIPEMD160($Class* clazz) {
	return $of($alloc(SignatureBaseRSA$SignatureRSARIPEMD160));
}

void SignatureBaseRSA$SignatureRSARIPEMD160::init$() {
	$SignatureBaseRSA::init$();
}

void SignatureBaseRSA$SignatureRSARIPEMD160::init$($Provider* provider) {
	$SignatureBaseRSA::init$(provider);
}

$String* SignatureBaseRSA$SignatureRSARIPEMD160::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_SIGNATURE_RSA_RIPEMD160;
}

SignatureBaseRSA$SignatureRSARIPEMD160::SignatureBaseRSA$SignatureRSARIPEMD160() {
}

$Class* SignatureBaseRSA$SignatureRSARIPEMD160::load$($String* name, bool initialize) {
	$loadClass(SignatureBaseRSA$SignatureRSARIPEMD160, name, initialize, &_SignatureBaseRSA$SignatureRSARIPEMD160_ClassInfo_, allocate$SignatureBaseRSA$SignatureRSARIPEMD160);
	return class$;
}

$Class* SignatureBaseRSA$SignatureRSARIPEMD160::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com