#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$RIPEMD160withRSA.h>

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
#undef RSA_RIPEMD160

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

$MethodInfo _DOMSignatureMethod$RIPEMD160withRSA_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$RIPEMD160withRSA::*)($AlgorithmParameterSpec*)>(&DOMSignatureMethod$RIPEMD160withRSA::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$RIPEMD160withRSA::*)($Element*)>(&DOMSignatureMethod$RIPEMD160withRSA::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAlgorithmType", "()Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, 0},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMSignatureMethod$RIPEMD160withRSA_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$RIPEMD160withRSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "RIPEMD160withRSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractRSASignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$RIPEMD160withRSA_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$RIPEMD160withRSA",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod",
	nullptr,
	nullptr,
	_DOMSignatureMethod$RIPEMD160withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$RIPEMD160withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$RIPEMD160withRSA($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$RIPEMD160withRSA));
}

void DOMSignatureMethod$RIPEMD160withRSA::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod$AbstractRSASignatureMethod::init$(params);
}

void DOMSignatureMethod$RIPEMD160withRSA::init$($Element* dmElem) {
	$DOMSignatureMethod$AbstractRSASignatureMethod::init$(dmElem);
}

$String* DOMSignatureMethod$RIPEMD160withRSA::getAlgorithm() {
	$init($DOMSignatureMethod);
	return $DOMSignatureMethod::RSA_RIPEMD160;
}

$String* DOMSignatureMethod$RIPEMD160withRSA::getJCAAlgorithm() {
	return "RIPEMD160withRSA"_s;
}

$AbstractDOMSignatureMethod$Type* DOMSignatureMethod$RIPEMD160withRSA::getAlgorithmType() {
	$init($AbstractDOMSignatureMethod$Type);
	return $AbstractDOMSignatureMethod$Type::RSA;
}

DOMSignatureMethod$RIPEMD160withRSA::DOMSignatureMethod$RIPEMD160withRSA() {
}

$Class* DOMSignatureMethod$RIPEMD160withRSA::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$RIPEMD160withRSA, name, initialize, &_DOMSignatureMethod$RIPEMD160withRSA_ClassInfo_, allocate$DOMSignatureMethod$RIPEMD160withRSA);
	return class$;
}

$Class* DOMSignatureMethod$RIPEMD160withRSA::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org