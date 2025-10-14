#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA256withRSA.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractRSASignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef RSA
#undef RSA_SHA256

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractDOMSignatureMethod$Type = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type;
using $DOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod;
using $DOMSignatureMethod$AbstractRSASignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSASignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMSignatureMethod$SHA256withRSA_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$SHA256withRSA::*)($AlgorithmParameterSpec*)>(&DOMSignatureMethod$SHA256withRSA::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$SHA256withRSA::*)($Element*)>(&DOMSignatureMethod$SHA256withRSA::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAlgorithmType", "()Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, 0},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMSignatureMethod$SHA256withRSA_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withRSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA256withRSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractRSASignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$SHA256withRSA_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withRSA",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod",
	nullptr,
	nullptr,
	_DOMSignatureMethod$SHA256withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$SHA256withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$SHA256withRSA($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$SHA256withRSA));
}

void DOMSignatureMethod$SHA256withRSA::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod$AbstractRSASignatureMethod::init$(params);
}

void DOMSignatureMethod$SHA256withRSA::init$($Element* dmElem) {
	$DOMSignatureMethod$AbstractRSASignatureMethod::init$(dmElem);
}

$String* DOMSignatureMethod$SHA256withRSA::getAlgorithm() {
	$init($DOMSignatureMethod);
	return $DOMSignatureMethod::RSA_SHA256;
}

$String* DOMSignatureMethod$SHA256withRSA::getJCAAlgorithm() {
	return "SHA256withRSA"_s;
}

$AbstractDOMSignatureMethod$Type* DOMSignatureMethod$SHA256withRSA::getAlgorithmType() {
	$init($AbstractDOMSignatureMethod$Type);
	return $AbstractDOMSignatureMethod$Type::RSA;
}

DOMSignatureMethod$SHA256withRSA::DOMSignatureMethod$SHA256withRSA() {
}

$Class* DOMSignatureMethod$SHA256withRSA::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$SHA256withRSA, name, initialize, &_DOMSignatureMethod$SHA256withRSA_ClassInfo_, allocate$DOMSignatureMethod$SHA256withRSA);
	return class$;
}

$Class* DOMSignatureMethod$SHA256withRSA::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org