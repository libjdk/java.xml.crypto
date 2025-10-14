#include <org/jcp/xml/dsig/internal/dom/DOMBase64Transform.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheTransform.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;
using $ApacheTransform = ::org::jcp::xml::dsig::internal::dom::ApacheTransform;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMBase64Transform_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DOMBase64Transform::*)()>(&DOMBase64Transform::init$))},
	{"init", "(Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{}
};

$ClassInfo _DOMBase64Transform_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMBase64Transform",
	"org.jcp.xml.dsig.internal.dom.ApacheTransform",
	nullptr,
	nullptr,
	_DOMBase64Transform_MethodInfo_
};

$Object* allocate$DOMBase64Transform($Class* clazz) {
	return $of($alloc(DOMBase64Transform));
}

void DOMBase64Transform::init$() {
	$ApacheTransform::init$();
}

void DOMBase64Transform::init($TransformParameterSpec* params) {
	if (params != nullptr) {
		$throwNew($InvalidAlgorithmParameterException, "params must be null"_s);
	}
}

DOMBase64Transform::DOMBase64Transform() {
}

$Class* DOMBase64Transform::load$($String* name, bool initialize) {
	$loadClass(DOMBase64Transform, name, initialize, &_DOMBase64Transform_ClassInfo_, allocate$DOMBase64Transform);
	return class$;
}

$Class* DOMBase64Transform::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org