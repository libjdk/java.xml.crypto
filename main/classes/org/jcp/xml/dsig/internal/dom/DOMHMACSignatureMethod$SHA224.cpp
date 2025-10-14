#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA224.h>

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

#undef HMAC_SHA224

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

$MethodInfo _DOMHMACSignatureMethod$SHA224_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMHMACSignatureMethod$SHA224::*)($AlgorithmParameterSpec*)>(&DOMHMACSignatureMethod$SHA224::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMHMACSignatureMethod$SHA224::*)($Element*)>(&DOMHMACSignatureMethod$SHA224::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDigestLength", "()I", nullptr, 0},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMHMACSignatureMethod$SHA224_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA224", "org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod", "SHA224", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMHMACSignatureMethod$SHA224_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA224",
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod",
	nullptr,
	nullptr,
	_DOMHMACSignatureMethod$SHA224_MethodInfo_,
	nullptr,
	nullptr,
	_DOMHMACSignatureMethod$SHA224_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod"
};

$Object* allocate$DOMHMACSignatureMethod$SHA224($Class* clazz) {
	return $of($alloc(DOMHMACSignatureMethod$SHA224));
}

void DOMHMACSignatureMethod$SHA224::init$($AlgorithmParameterSpec* params) {
	$DOMHMACSignatureMethod::init$(params);
}

void DOMHMACSignatureMethod$SHA224::init$($Element* dmElem) {
	$DOMHMACSignatureMethod::init$(dmElem);
}

$String* DOMHMACSignatureMethod$SHA224::getAlgorithm() {
	$init($DOMHMACSignatureMethod);
	return $DOMHMACSignatureMethod::HMAC_SHA224;
}

$String* DOMHMACSignatureMethod$SHA224::getJCAAlgorithm() {
	return "HmacSHA224"_s;
}

int32_t DOMHMACSignatureMethod$SHA224::getDigestLength() {
	return 224;
}

DOMHMACSignatureMethod$SHA224::DOMHMACSignatureMethod$SHA224() {
}

$Class* DOMHMACSignatureMethod$SHA224::load$($String* name, bool initialize) {
	$loadClass(DOMHMACSignatureMethod$SHA224, name, initialize, &_DOMHMACSignatureMethod$SHA224_ClassInfo_, allocate$DOMHMACSignatureMethod$SHA224);
	return class$;
}

$Class* DOMHMACSignatureMethod$SHA224::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org