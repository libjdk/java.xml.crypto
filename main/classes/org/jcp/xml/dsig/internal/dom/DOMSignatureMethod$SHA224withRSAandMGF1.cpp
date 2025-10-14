#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA224withRSAandMGF1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/MGF1ParameterSpec.h>
#include <java/security/spec/PSSParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractRSAPSSSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef RSA
#undef TRAILER_FIELD_BC

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $MGF1ParameterSpec = ::java::security::spec::MGF1ParameterSpec;
using $PSSParameterSpec = ::java::security::spec::PSSParameterSpec;
using $AbstractDOMSignatureMethod$Type = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type;
using $DOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod;
using $DOMSignatureMethod$AbstractRSAPSSSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSAPSSSignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMSignatureMethod$SHA224withRSAandMGF1_FieldInfo_[] = {
	{"spec", "Ljava/security/spec/PSSParameterSpec;", nullptr, $PRIVATE | $STATIC, $staticField(DOMSignatureMethod$SHA224withRSAandMGF1, spec)},
	{}
};

$MethodInfo _DOMSignatureMethod$SHA224withRSAandMGF1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$SHA224withRSAandMGF1::*)($AlgorithmParameterSpec*)>(&DOMSignatureMethod$SHA224withRSAandMGF1::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$SHA224withRSAandMGF1::*)($Element*)>(&DOMSignatureMethod$SHA224withRSAandMGF1::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAlgorithmType", "()Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, 0},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{"getPSSParameterSpec", "()Ljava/security/spec/PSSParameterSpec;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DOMSignatureMethod$SHA224withRSAandMGF1_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA224withRSAandMGF1", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA224withRSAandMGF1", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSAPSSSignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractRSAPSSSignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$SHA224withRSAandMGF1_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA224withRSAandMGF1",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSAPSSSignatureMethod",
	nullptr,
	_DOMSignatureMethod$SHA224withRSAandMGF1_FieldInfo_,
	_DOMSignatureMethod$SHA224withRSAandMGF1_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$SHA224withRSAandMGF1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$SHA224withRSAandMGF1($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$SHA224withRSAandMGF1));
}

$PSSParameterSpec* DOMSignatureMethod$SHA224withRSAandMGF1::spec = nullptr;

void DOMSignatureMethod$SHA224withRSAandMGF1::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod$AbstractRSAPSSSignatureMethod::init$(params);
}

void DOMSignatureMethod$SHA224withRSAandMGF1::init$($Element* dmElem) {
	$DOMSignatureMethod$AbstractRSAPSSSignatureMethod::init$(dmElem);
}

$String* DOMSignatureMethod$SHA224withRSAandMGF1::getAlgorithm() {
	$init($DOMSignatureMethod);
	return $DOMSignatureMethod::RSA_SHA224_MGF1;
}

$PSSParameterSpec* DOMSignatureMethod$SHA224withRSAandMGF1::getPSSParameterSpec() {
	return DOMSignatureMethod$SHA224withRSAandMGF1::spec;
}

$String* DOMSignatureMethod$SHA224withRSAandMGF1::getJCAAlgorithm() {
	return "SHA224withRSAandMGF1"_s;
}

$AbstractDOMSignatureMethod$Type* DOMSignatureMethod$SHA224withRSAandMGF1::getAlgorithmType() {
	$init($AbstractDOMSignatureMethod$Type);
	return $AbstractDOMSignatureMethod$Type::RSA;
}

void clinit$DOMSignatureMethod$SHA224withRSAandMGF1($Class* class$) {
	$init($MGF1ParameterSpec);
	$assignStatic(DOMSignatureMethod$SHA224withRSAandMGF1::spec, $new($PSSParameterSpec, "SHA-224"_s, "MGF1"_s, $MGF1ParameterSpec::SHA224, 28, $PSSParameterSpec::TRAILER_FIELD_BC));
}

DOMSignatureMethod$SHA224withRSAandMGF1::DOMSignatureMethod$SHA224withRSAandMGF1() {
}

$Class* DOMSignatureMethod$SHA224withRSAandMGF1::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$SHA224withRSAandMGF1, name, initialize, &_DOMSignatureMethod$SHA224withRSAandMGF1_ClassInfo_, clinit$DOMSignatureMethod$SHA224withRSAandMGF1, allocate$DOMSignatureMethod$SHA224withRSAandMGF1);
	return class$;
}

$Class* DOMSignatureMethod$SHA224withRSAandMGF1::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org