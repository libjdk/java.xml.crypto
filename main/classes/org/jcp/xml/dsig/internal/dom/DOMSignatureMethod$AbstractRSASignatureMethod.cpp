#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractRSASignatureMethod.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMSignatureMethod$AbstractRSASignatureMethod_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$AbstractRSASignatureMethod::*)($AlgorithmParameterSpec*)>(&DOMSignatureMethod$AbstractRSASignatureMethod::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$AbstractRSASignatureMethod::*)($Element*)>(&DOMSignatureMethod$AbstractRSASignatureMethod::init$)), "javax.xml.crypto.MarshalException"},
	{"postSignFormat", "(Ljava/security/Key;[B)[B", nullptr, 0},
	{"preVerifyFormat", "(Ljava/security/Key;[B)[B", nullptr, 0},
	{}
};

$InnerClassInfo _DOMSignatureMethod$AbstractRSASignatureMethod_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractRSASignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$AbstractRSASignatureMethod_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod",
	nullptr,
	nullptr,
	_DOMSignatureMethod$AbstractRSASignatureMethod_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$AbstractRSASignatureMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$AbstractRSASignatureMethod($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$AbstractRSASignatureMethod));
}

void DOMSignatureMethod$AbstractRSASignatureMethod::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod::init$(params);
}

void DOMSignatureMethod$AbstractRSASignatureMethod::init$($Element* dmElem) {
	$DOMSignatureMethod::init$(dmElem);
}

$bytes* DOMSignatureMethod$AbstractRSASignatureMethod::postSignFormat($Key* key, $bytes* sig) {
	return sig;
}

$bytes* DOMSignatureMethod$AbstractRSASignatureMethod::preVerifyFormat($Key* key, $bytes* sig) {
	return sig;
}

DOMSignatureMethod$AbstractRSASignatureMethod::DOMSignatureMethod$AbstractRSASignatureMethod() {
}

$Class* DOMSignatureMethod$AbstractRSASignatureMethod::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$AbstractRSASignatureMethod, name, initialize, &_DOMSignatureMethod$AbstractRSASignatureMethod_ClassInfo_, allocate$DOMSignatureMethod$AbstractRSASignatureMethod);
	return class$;
}

$Class* DOMSignatureMethod$AbstractRSASignatureMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org