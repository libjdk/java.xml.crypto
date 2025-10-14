#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA1withECDSA.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractECDSASignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef ECDSA
#undef ECDSA_SHA1

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractDOMSignatureMethod$Type = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type;
using $DOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod;
using $DOMSignatureMethod$AbstractECDSASignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractECDSASignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMSignatureMethod$SHA1withECDSA_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$SHA1withECDSA::*)($AlgorithmParameterSpec*)>(&DOMSignatureMethod$SHA1withECDSA::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$SHA1withECDSA::*)($Element*)>(&DOMSignatureMethod$SHA1withECDSA::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAlgorithmType", "()Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, 0},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{"getJCAFallbackAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMSignatureMethod$SHA1withECDSA_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withECDSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA1withECDSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractECDSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractECDSASignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$SHA1withECDSA_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withECDSA",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractECDSASignatureMethod",
	nullptr,
	nullptr,
	_DOMSignatureMethod$SHA1withECDSA_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$SHA1withECDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$SHA1withECDSA($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$SHA1withECDSA));
}

void DOMSignatureMethod$SHA1withECDSA::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod$AbstractECDSASignatureMethod::init$(params);
}

void DOMSignatureMethod$SHA1withECDSA::init$($Element* dmElem) {
	$DOMSignatureMethod$AbstractECDSASignatureMethod::init$(dmElem);
}

$String* DOMSignatureMethod$SHA1withECDSA::getAlgorithm() {
	$init($DOMSignatureMethod);
	return $DOMSignatureMethod::ECDSA_SHA1;
}

$String* DOMSignatureMethod$SHA1withECDSA::getJCAAlgorithm() {
	return "SHA1withECDSAinP1363Format"_s;
}

$String* DOMSignatureMethod$SHA1withECDSA::getJCAFallbackAlgorithm() {
	return "SHA1withECDSA"_s;
}

$AbstractDOMSignatureMethod$Type* DOMSignatureMethod$SHA1withECDSA::getAlgorithmType() {
	$init($AbstractDOMSignatureMethod$Type);
	return $AbstractDOMSignatureMethod$Type::ECDSA;
}

DOMSignatureMethod$SHA1withECDSA::DOMSignatureMethod$SHA1withECDSA() {
}

$Class* DOMSignatureMethod$SHA1withECDSA::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$SHA1withECDSA, name, initialize, &_DOMSignatureMethod$SHA1withECDSA_ClassInfo_, allocate$DOMSignatureMethod$SHA1withECDSA);
	return class$;
}

$Class* DOMSignatureMethod$SHA1withECDSA::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org