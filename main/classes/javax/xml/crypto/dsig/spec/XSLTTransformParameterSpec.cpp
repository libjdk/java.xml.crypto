#include <javax/xml/crypto/dsig/spec/XSLTTransformParameterSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$FieldInfo _XSLTTransformParameterSpec_FieldInfo_[] = {
	{"stylesheet", "Ljavax/xml/crypto/XMLStructure;", nullptr, $PRIVATE, $field(XSLTTransformParameterSpec, stylesheet)},
	{}
};

$MethodInfo _XSLTTransformParameterSpec_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/crypto/XMLStructure;)V", nullptr, $PUBLIC, $method(static_cast<void(XSLTTransformParameterSpec::*)($XMLStructure*)>(&XSLTTransformParameterSpec::init$))},
	{"getStylesheet", "()Ljavax/xml/crypto/XMLStructure;", nullptr, $PUBLIC, $method(static_cast<$XMLStructure*(XSLTTransformParameterSpec::*)()>(&XSLTTransformParameterSpec::getStylesheet))},
	{}
};

$ClassInfo _XSLTTransformParameterSpec_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.xml.crypto.dsig.spec.XSLTTransformParameterSpec",
	"java.lang.Object",
	"javax.xml.crypto.dsig.spec.TransformParameterSpec",
	_XSLTTransformParameterSpec_FieldInfo_,
	_XSLTTransformParameterSpec_MethodInfo_
};

$Object* allocate$XSLTTransformParameterSpec($Class* clazz) {
	return $of($alloc(XSLTTransformParameterSpec));
}

void XSLTTransformParameterSpec::init$($XMLStructure* stylesheet) {
	if (stylesheet == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, stylesheet, stylesheet);
}

$XMLStructure* XSLTTransformParameterSpec::getStylesheet() {
	return this->stylesheet;
}

XSLTTransformParameterSpec::XSLTTransformParameterSpec() {
}

$Class* XSLTTransformParameterSpec::load$($String* name, bool initialize) {
	$loadClass(XSLTTransformParameterSpec, name, initialize, &_XSLTTransformParameterSpec_ClassInfo_, allocate$XSLTTransformParameterSpec);
	return class$;
}

$Class* XSLTTransformParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax