#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSARIPEMD160.h>

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

#undef ALGO_ID_SIGNATURE_ECDSA_RIPEMD160

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

$MethodInfo _SignatureECDSA$SignatureECDSARIPEMD160_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureECDSA$SignatureECDSARIPEMD160::*)()>(&SignatureECDSA$SignatureECDSARIPEMD160::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureECDSA$SignatureECDSARIPEMD160::*)($Provider*)>(&SignatureECDSA$SignatureECDSARIPEMD160::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SignatureECDSA$SignatureECDSARIPEMD160_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSARIPEMD160", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA", "SignatureECDSARIPEMD160", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SignatureECDSA$SignatureECDSARIPEMD160_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSARIPEMD160",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA",
	nullptr,
	nullptr,
	_SignatureECDSA$SignatureECDSARIPEMD160_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureECDSA$SignatureECDSARIPEMD160_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA"
};

$Object* allocate$SignatureECDSA$SignatureECDSARIPEMD160($Class* clazz) {
	return $of($alloc(SignatureECDSA$SignatureECDSARIPEMD160));
}

void SignatureECDSA$SignatureECDSARIPEMD160::init$() {
	$SignatureECDSA::init$();
}

void SignatureECDSA$SignatureECDSARIPEMD160::init$($Provider* provider) {
	$SignatureECDSA::init$(provider);
}

$String* SignatureECDSA$SignatureECDSARIPEMD160::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_SIGNATURE_ECDSA_RIPEMD160;
}

SignatureECDSA$SignatureECDSARIPEMD160::SignatureECDSA$SignatureECDSARIPEMD160() {
}

$Class* SignatureECDSA$SignatureECDSARIPEMD160::load$($String* name, bool initialize) {
	$loadClass(SignatureECDSA$SignatureECDSARIPEMD160, name, initialize, &_SignatureECDSA$SignatureECDSARIPEMD160_ClassInfo_, allocate$SignatureECDSA$SignatureECDSARIPEMD160);
	return class$;
}

$Class* SignatureECDSA$SignatureECDSARIPEMD160::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com