#include <javax/xml/crypto/AlgorithmMethod.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace javax {
	namespace xml {
		namespace crypto {

$MethodInfo _AlgorithmMethod_MethodInfo_[] = {
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _AlgorithmMethod_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.AlgorithmMethod",
	nullptr,
	nullptr,
	nullptr,
	_AlgorithmMethod_MethodInfo_
};

$Object* allocate$AlgorithmMethod($Class* clazz) {
	return $of($alloc(AlgorithmMethod));
}

$Class* AlgorithmMethod::load$($String* name, bool initialize) {
	$loadClass(AlgorithmMethod, name, initialize, &_AlgorithmMethod_ClassInfo_, allocate$AlgorithmMethod);
	return class$;
}

$Class* AlgorithmMethod::class$ = nullptr;

		} // crypto
	} // xml
} // javax