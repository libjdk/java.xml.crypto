#include <javax/xml/crypto/dsig/spec/DigestMethodParameterSpec.h>

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

$ClassInfo _DigestMethodParameterSpec_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.spec.DigestMethodParameterSpec",
	nullptr,
	"java.security.spec.AlgorithmParameterSpec"
};

$Object* allocate$DigestMethodParameterSpec($Class* clazz) {
	return $of($alloc(DigestMethodParameterSpec));
}

$Class* DigestMethodParameterSpec::load$($String* name, bool initialize) {
	$loadClass(DigestMethodParameterSpec, name, initialize, &_DigestMethodParameterSpec_ClassInfo_, allocate$DigestMethodParameterSpec);
	return class$;
}

$Class* DigestMethodParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax