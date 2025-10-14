#include <javax/xml/crypto/dsig/spec/SignatureMethodParameterSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$ClassInfo _SignatureMethodParameterSpec_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.spec.SignatureMethodParameterSpec",
	nullptr,
	"java.security.spec.AlgorithmParameterSpec"
};

$Object* allocate$SignatureMethodParameterSpec($Class* clazz) {
	return $of($alloc(SignatureMethodParameterSpec));
}

$Class* SignatureMethodParameterSpec::load$($String* name, bool initialize) {
	$loadClass(SignatureMethodParameterSpec, name, initialize, &_SignatureMethodParameterSpec_ClassInfo_, allocate$SignatureMethodParameterSpec);
	return class$;
}

$Class* SignatureMethodParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax