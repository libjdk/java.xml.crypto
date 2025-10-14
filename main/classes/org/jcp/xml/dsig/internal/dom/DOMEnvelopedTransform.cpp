#include <org/jcp/xml/dsig/internal/dom/DOMEnvelopedTransform.h>

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

$MethodInfo _DOMEnvelopedTransform_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DOMEnvelopedTransform::*)()>(&DOMEnvelopedTransform::init$))},
	{"init", "(Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{}
};

$ClassInfo _DOMEnvelopedTransform_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMEnvelopedTransform",
	"org.jcp.xml.dsig.internal.dom.ApacheTransform",
	nullptr,
	nullptr,
	_DOMEnvelopedTransform_MethodInfo_
};

$Object* allocate$DOMEnvelopedTransform($Class* clazz) {
	return $of($alloc(DOMEnvelopedTransform));
}

void DOMEnvelopedTransform::init$() {
	$ApacheTransform::init$();
}

void DOMEnvelopedTransform::init($TransformParameterSpec* params) {
	if (params != nullptr) {
		$throwNew($InvalidAlgorithmParameterException, "params must be null"_s);
	}
}

DOMEnvelopedTransform::DOMEnvelopedTransform() {
}

$Class* DOMEnvelopedTransform::load$($String* name, bool initialize) {
	$loadClass(DOMEnvelopedTransform, name, initialize, &_DOMEnvelopedTransform_ClassInfo_, allocate$DOMEnvelopedTransform);
	return class$;
}

$Class* DOMEnvelopedTransform::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org