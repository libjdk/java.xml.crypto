#include <javax/xml/crypto/dsig/spec/RSAPSSParameterSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/PSSParameterSpec.h>
#include <java/util/Objects.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PSSParameterSpec = ::java::security::spec::PSSParameterSpec;
using $Objects = ::java::util::Objects;
using $SignatureMethodParameterSpec = ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$FieldInfo _RSAPSSParameterSpec_FieldInfo_[] = {
	{"spec", "Ljava/security/spec/PSSParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(RSAPSSParameterSpec, spec)},
	{}
};

$MethodInfo _RSAPSSParameterSpec_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/PSSParameterSpec;)V", nullptr, $PUBLIC, $method(static_cast<void(RSAPSSParameterSpec::*)($PSSParameterSpec*)>(&RSAPSSParameterSpec::init$))},
	{"getPSSParameterSpec", "()Ljava/security/spec/PSSParameterSpec;", nullptr, $PUBLIC, $method(static_cast<$PSSParameterSpec*(RSAPSSParameterSpec::*)()>(&RSAPSSParameterSpec::getPSSParameterSpec))},
	{}
};

$ClassInfo _RSAPSSParameterSpec_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.xml.crypto.dsig.spec.RSAPSSParameterSpec",
	"java.lang.Object",
	"javax.xml.crypto.dsig.spec.SignatureMethodParameterSpec",
	_RSAPSSParameterSpec_FieldInfo_,
	_RSAPSSParameterSpec_MethodInfo_
};

$Object* allocate$RSAPSSParameterSpec($Class* clazz) {
	return $of($alloc(RSAPSSParameterSpec));
}

void RSAPSSParameterSpec::init$($PSSParameterSpec* spec) {
	$set(this, spec, $cast($PSSParameterSpec, $Objects::requireNonNull(spec)));
}

$PSSParameterSpec* RSAPSSParameterSpec::getPSSParameterSpec() {
	return this->spec;
}

RSAPSSParameterSpec::RSAPSSParameterSpec() {
}

$Class* RSAPSSParameterSpec::load$($String* name, bool initialize) {
	$loadClass(RSAPSSParameterSpec, name, initialize, &_RSAPSSParameterSpec_ClassInfo_, allocate$RSAPSSParameterSpec);
	return class$;
}

$Class* RSAPSSParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax