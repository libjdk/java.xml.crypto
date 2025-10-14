#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$RIPEMD160.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef HMAC_RIPEMD160

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DOMHMACSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMHMACSignatureMethod$RIPEMD160_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMHMACSignatureMethod$RIPEMD160::*)($AlgorithmParameterSpec*)>(&DOMHMACSignatureMethod$RIPEMD160::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMHMACSignatureMethod$RIPEMD160::*)($Element*)>(&DOMHMACSignatureMethod$RIPEMD160::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDigestLength", "()I", nullptr, 0},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMHMACSignatureMethod$RIPEMD160_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$RIPEMD160", "org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod", "RIPEMD160", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMHMACSignatureMethod$RIPEMD160_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$RIPEMD160",
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod",
	nullptr,
	nullptr,
	_DOMHMACSignatureMethod$RIPEMD160_MethodInfo_,
	nullptr,
	nullptr,
	_DOMHMACSignatureMethod$RIPEMD160_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod"
};

$Object* allocate$DOMHMACSignatureMethod$RIPEMD160($Class* clazz) {
	return $of($alloc(DOMHMACSignatureMethod$RIPEMD160));
}

void DOMHMACSignatureMethod$RIPEMD160::init$($AlgorithmParameterSpec* params) {
	$DOMHMACSignatureMethod::init$(params);
}

void DOMHMACSignatureMethod$RIPEMD160::init$($Element* dmElem) {
	$DOMHMACSignatureMethod::init$(dmElem);
}

$String* DOMHMACSignatureMethod$RIPEMD160::getAlgorithm() {
	$init($DOMHMACSignatureMethod);
	return $DOMHMACSignatureMethod::HMAC_RIPEMD160;
}

$String* DOMHMACSignatureMethod$RIPEMD160::getJCAAlgorithm() {
	return "HMACRIPEMD160"_s;
}

int32_t DOMHMACSignatureMethod$RIPEMD160::getDigestLength() {
	return 160;
}

DOMHMACSignatureMethod$RIPEMD160::DOMHMACSignatureMethod$RIPEMD160() {
}

$Class* DOMHMACSignatureMethod$RIPEMD160::load$($String* name, bool initialize) {
	$loadClass(DOMHMACSignatureMethod$RIPEMD160, name, initialize, &_DOMHMACSignatureMethod$RIPEMD160_ClassInfo_, allocate$DOMHMACSignatureMethod$RIPEMD160);
	return class$;
}

$Class* DOMHMACSignatureMethod$RIPEMD160::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org