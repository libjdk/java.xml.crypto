#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$RIPEMD160withECDSA.h>

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
#undef ECDSA_RIPEMD160

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

$MethodInfo _DOMSignatureMethod$RIPEMD160withECDSA_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$RIPEMD160withECDSA::*)($AlgorithmParameterSpec*)>(&DOMSignatureMethod$RIPEMD160withECDSA::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$RIPEMD160withECDSA::*)($Element*)>(&DOMSignatureMethod$RIPEMD160withECDSA::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAlgorithmType", "()Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, 0},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{"getJCAFallbackAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMSignatureMethod$RIPEMD160withECDSA_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$RIPEMD160withECDSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "RIPEMD160withECDSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractECDSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractECDSASignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$RIPEMD160withECDSA_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$RIPEMD160withECDSA",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractECDSASignatureMethod",
	nullptr,
	nullptr,
	_DOMSignatureMethod$RIPEMD160withECDSA_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$RIPEMD160withECDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$RIPEMD160withECDSA($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$RIPEMD160withECDSA));
}

void DOMSignatureMethod$RIPEMD160withECDSA::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod$AbstractECDSASignatureMethod::init$(params);
}

void DOMSignatureMethod$RIPEMD160withECDSA::init$($Element* dmElem) {
	$DOMSignatureMethod$AbstractECDSASignatureMethod::init$(dmElem);
}

$String* DOMSignatureMethod$RIPEMD160withECDSA::getAlgorithm() {
	$init($DOMSignatureMethod);
	return $DOMSignatureMethod::ECDSA_RIPEMD160;
}

$String* DOMSignatureMethod$RIPEMD160withECDSA::getJCAAlgorithm() {
	return "RIPEMD160withECDSAinP1363Format"_s;
}

$String* DOMSignatureMethod$RIPEMD160withECDSA::getJCAFallbackAlgorithm() {
	return "RIPEMD160withECDSA"_s;
}

$AbstractDOMSignatureMethod$Type* DOMSignatureMethod$RIPEMD160withECDSA::getAlgorithmType() {
	$init($AbstractDOMSignatureMethod$Type);
	return $AbstractDOMSignatureMethod$Type::ECDSA;
}

DOMSignatureMethod$RIPEMD160withECDSA::DOMSignatureMethod$RIPEMD160withECDSA() {
}

$Class* DOMSignatureMethod$RIPEMD160withECDSA::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$RIPEMD160withECDSA, name, initialize, &_DOMSignatureMethod$RIPEMD160withECDSA_ClassInfo_, allocate$DOMSignatureMethod$RIPEMD160withECDSA);
	return class$;
}

$Class* DOMSignatureMethod$RIPEMD160withECDSA::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org