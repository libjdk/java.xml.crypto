#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>

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

$ClassInfo _TransformParameterSpec_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.spec.TransformParameterSpec",
	nullptr,
	"java.security.spec.AlgorithmParameterSpec"
};

$Object* allocate$TransformParameterSpec($Class* clazz) {
	return $of($alloc(TransformParameterSpec));
}

$Class* TransformParameterSpec::load$($String* name, bool initialize) {
	$loadClass(TransformParameterSpec, name, initialize, &_TransformParameterSpec_ClassInfo_, allocate$TransformParameterSpec);
	return class$;
}

$Class* TransformParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax