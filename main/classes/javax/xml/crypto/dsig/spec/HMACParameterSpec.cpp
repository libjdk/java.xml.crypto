#include <javax/xml/crypto/dsig/spec/HMACParameterSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $SignatureMethodParameterSpec = ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$FieldInfo _HMACParameterSpec_FieldInfo_[] = {
	{"outputLength", "I", nullptr, $PRIVATE, $field(HMACParameterSpec, outputLength)},
	{}
};

$MethodInfo _HMACParameterSpec_MethodInfo_[] = {
	{"<init>", "(I)V", nullptr, $PUBLIC, $method(static_cast<void(HMACParameterSpec::*)(int32_t)>(&HMACParameterSpec::init$))},
	{"getOutputLength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(HMACParameterSpec::*)()>(&HMACParameterSpec::getOutputLength))},
	{}
};

$ClassInfo _HMACParameterSpec_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.xml.crypto.dsig.spec.HMACParameterSpec",
	"java.lang.Object",
	"javax.xml.crypto.dsig.spec.SignatureMethodParameterSpec",
	_HMACParameterSpec_FieldInfo_,
	_HMACParameterSpec_MethodInfo_
};

$Object* allocate$HMACParameterSpec($Class* clazz) {
	return $of($alloc(HMACParameterSpec));
}

void HMACParameterSpec::init$(int32_t outputLength) {
	this->outputLength = outputLength;
}

int32_t HMACParameterSpec::getOutputLength() {
	return this->outputLength;
}

HMACParameterSpec::HMACParameterSpec() {
}

$Class* HMACParameterSpec::load$($String* name, bool initialize) {
	$loadClass(HMACParameterSpec, name, initialize, &_HMACParameterSpec_ClassInfo_, allocate$HMACParameterSpec);
	return class$;
}

$Class* HMACParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax