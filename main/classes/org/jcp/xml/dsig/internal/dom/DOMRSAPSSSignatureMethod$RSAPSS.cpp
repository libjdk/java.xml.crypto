#include <org/jcp/xml/dsig/internal/dom/DOMRSAPSSSignatureMethod$RSAPSS.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>
#include <org/jcp/xml/dsig/internal/dom/DOMRSAPSSSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef RSA
#undef RSA_PSS

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractDOMSignatureMethod$Type = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type;
using $DOMRSAPSSSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMRSAPSSSignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMRSAPSSSignatureMethod$RSAPSS_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMRSAPSSSignatureMethod$RSAPSS::*)($AlgorithmParameterSpec*)>(&DOMRSAPSSSignatureMethod$RSAPSS::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMRSAPSSSignatureMethod$RSAPSS::*)($Element*)>(&DOMRSAPSSSignatureMethod$RSAPSS::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAlgorithmType", "()Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, 0},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMRSAPSSSignatureMethod$RSAPSS_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod$RSAPSS", "org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod", "RSAPSS", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMRSAPSSSignatureMethod$RSAPSS_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod$RSAPSS",
	"org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod",
	nullptr,
	nullptr,
	_DOMRSAPSSSignatureMethod$RSAPSS_MethodInfo_,
	nullptr,
	nullptr,
	_DOMRSAPSSSignatureMethod$RSAPSS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod"
};

$Object* allocate$DOMRSAPSSSignatureMethod$RSAPSS($Class* clazz) {
	return $of($alloc(DOMRSAPSSSignatureMethod$RSAPSS));
}

void DOMRSAPSSSignatureMethod$RSAPSS::init$($AlgorithmParameterSpec* params) {
	$DOMRSAPSSSignatureMethod::init$(params);
}

void DOMRSAPSSSignatureMethod$RSAPSS::init$($Element* dmElem) {
	$DOMRSAPSSSignatureMethod::init$(dmElem);
}

$String* DOMRSAPSSSignatureMethod$RSAPSS::getAlgorithm() {
	$init($DOMRSAPSSSignatureMethod);
	return $DOMRSAPSSSignatureMethod::RSA_PSS;
}

$String* DOMRSAPSSSignatureMethod$RSAPSS::getJCAAlgorithm() {
	return "RSASSA-PSS"_s;
}

$AbstractDOMSignatureMethod$Type* DOMRSAPSSSignatureMethod$RSAPSS::getAlgorithmType() {
	$init($AbstractDOMSignatureMethod$Type);
	return $AbstractDOMSignatureMethod$Type::RSA;
}

DOMRSAPSSSignatureMethod$RSAPSS::DOMRSAPSSSignatureMethod$RSAPSS() {
}

$Class* DOMRSAPSSSignatureMethod$RSAPSS::load$($String* name, bool initialize) {
	$loadClass(DOMRSAPSSSignatureMethod$RSAPSS, name, initialize, &_DOMRSAPSSSignatureMethod$RSAPSS_ClassInfo_, allocate$DOMRSAPSSSignatureMethod$RSAPSS);
	return class$;
}

$Class* DOMRSAPSSSignatureMethod$RSAPSS::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org