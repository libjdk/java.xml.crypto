#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA1withRSA.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractRSASignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef RSA
#undef RSA_SHA1

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SignatureMethod = ::javax::xml::crypto::dsig::SignatureMethod;
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

$MethodInfo _DOMSignatureMethod$SHA1withRSA_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$SHA1withRSA::*)($AlgorithmParameterSpec*)>(&DOMSignatureMethod$SHA1withRSA::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$SHA1withRSA::*)($Element*)>(&DOMSignatureMethod$SHA1withRSA::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAlgorithmType", "()Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, 0},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMSignatureMethod$SHA1withRSA_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withRSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA1withRSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractRSASignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$SHA1withRSA_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withRSA",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod",
	nullptr,
	nullptr,
	_DOMSignatureMethod$SHA1withRSA_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$SHA1withRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$SHA1withRSA($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$SHA1withRSA));
}

void DOMSignatureMethod$SHA1withRSA::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod$AbstractRSASignatureMethod::init$(params);
}

void DOMSignatureMethod$SHA1withRSA::init$($Element* dmElem) {
	$DOMSignatureMethod$AbstractRSASignatureMethod::init$(dmElem);
}

$String* DOMSignatureMethod$SHA1withRSA::getAlgorithm() {
	$init($SignatureMethod);
	return $SignatureMethod::RSA_SHA1;
}

$String* DOMSignatureMethod$SHA1withRSA::getJCAAlgorithm() {
	return "SHA1withRSA"_s;
}

$AbstractDOMSignatureMethod$Type* DOMSignatureMethod$SHA1withRSA::getAlgorithmType() {
	$init($AbstractDOMSignatureMethod$Type);
	return $AbstractDOMSignatureMethod$Type::RSA;
}

DOMSignatureMethod$SHA1withRSA::DOMSignatureMethod$SHA1withRSA() {
}

$Class* DOMSignatureMethod$SHA1withRSA::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$SHA1withRSA, name, initialize, &_DOMSignatureMethod$SHA1withRSA_ClassInfo_, allocate$DOMSignatureMethod$SHA1withRSA);
	return class$;
}

$Class* DOMSignatureMethod$SHA1withRSA::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org