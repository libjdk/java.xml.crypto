#include <javax/xml/crypto/dsig/spec/C14NMethodParameterSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$ClassInfo _C14NMethodParameterSpec_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.spec.C14NMethodParameterSpec",
	nullptr,
	"javax.xml.crypto.dsig.spec.TransformParameterSpec"
};

$Object* allocate$C14NMethodParameterSpec($Class* clazz) {
	return $of($alloc(C14NMethodParameterSpec));
}

$Class* C14NMethodParameterSpec::load$($String* name, bool initialize) {
	$loadClass(C14NMethodParameterSpec, name, initialize, &_C14NMethodParameterSpec_ClassInfo_, allocate$C14NMethodParameterSpec);
	return class$;
}

$Class* C14NMethodParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax