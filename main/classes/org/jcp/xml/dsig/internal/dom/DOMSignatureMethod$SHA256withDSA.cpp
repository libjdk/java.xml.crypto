#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA256withDSA.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractDSASignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef DSA
#undef DSA_SHA256

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractDOMSignatureMethod$Type = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type;
using $DOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod;
using $DOMSignatureMethod$AbstractDSASignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractDSASignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMSignatureMethod$SHA256withDSA_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$SHA256withDSA::*)($AlgorithmParameterSpec*)>(&DOMSignatureMethod$SHA256withDSA::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$SHA256withDSA::*)($Element*)>(&DOMSignatureMethod$SHA256withDSA::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAlgorithmType", "()Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, 0},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{"getJCAFallbackAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMSignatureMethod$SHA256withDSA_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withDSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA256withDSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractDSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractDSASignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$SHA256withDSA_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withDSA",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractDSASignatureMethod",
	nullptr,
	nullptr,
	_DOMSignatureMethod$SHA256withDSA_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$SHA256withDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$SHA256withDSA($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$SHA256withDSA));
}

void DOMSignatureMethod$SHA256withDSA::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod$AbstractDSASignatureMethod::init$(params);
}

void DOMSignatureMethod$SHA256withDSA::init$($Element* dmElem) {
	$DOMSignatureMethod$AbstractDSASignatureMethod::init$(dmElem);
}

$String* DOMSignatureMethod$SHA256withDSA::getAlgorithm() {
	$init($DOMSignatureMethod);
	return $DOMSignatureMethod::DSA_SHA256;
}

$String* DOMSignatureMethod$SHA256withDSA::getJCAAlgorithm() {
	return "SHA256withDSAinP1363Format"_s;
}

$String* DOMSignatureMethod$SHA256withDSA::getJCAFallbackAlgorithm() {
	return "SHA256withDSA"_s;
}

$AbstractDOMSignatureMethod$Type* DOMSignatureMethod$SHA256withDSA::getAlgorithmType() {
	$init($AbstractDOMSignatureMethod$Type);
	return $AbstractDOMSignatureMethod$Type::DSA;
}

DOMSignatureMethod$SHA256withDSA::DOMSignatureMethod$SHA256withDSA() {
}

$Class* DOMSignatureMethod$SHA256withDSA::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$SHA256withDSA, name, initialize, &_DOMSignatureMethod$SHA256withDSA_ClassInfo_, allocate$DOMSignatureMethod$SHA256withDSA);
	return class$;
}

$Class* DOMSignatureMethod$SHA256withDSA::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org