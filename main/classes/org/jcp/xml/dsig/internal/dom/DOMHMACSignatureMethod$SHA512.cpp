#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA512.h>

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

#undef HMAC_SHA512

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

$MethodInfo _DOMHMACSignatureMethod$SHA512_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMHMACSignatureMethod$SHA512::*)($AlgorithmParameterSpec*)>(&DOMHMACSignatureMethod$SHA512::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMHMACSignatureMethod$SHA512::*)($Element*)>(&DOMHMACSignatureMethod$SHA512::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDigestLength", "()I", nullptr, 0},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMHMACSignatureMethod$SHA512_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA512", "org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod", "SHA512", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMHMACSignatureMethod$SHA512_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA512",
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod",
	nullptr,
	nullptr,
	_DOMHMACSignatureMethod$SHA512_MethodInfo_,
	nullptr,
	nullptr,
	_DOMHMACSignatureMethod$SHA512_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod"
};

$Object* allocate$DOMHMACSignatureMethod$SHA512($Class* clazz) {
	return $of($alloc(DOMHMACSignatureMethod$SHA512));
}

void DOMHMACSignatureMethod$SHA512::init$($AlgorithmParameterSpec* params) {
	$DOMHMACSignatureMethod::init$(params);
}

void DOMHMACSignatureMethod$SHA512::init$($Element* dmElem) {
	$DOMHMACSignatureMethod::init$(dmElem);
}

$String* DOMHMACSignatureMethod$SHA512::getAlgorithm() {
	$init($DOMHMACSignatureMethod);
	return $DOMHMACSignatureMethod::HMAC_SHA512;
}

$String* DOMHMACSignatureMethod$SHA512::getJCAAlgorithm() {
	return "HmacSHA512"_s;
}

int32_t DOMHMACSignatureMethod$SHA512::getDigestLength() {
	return 512;
}

DOMHMACSignatureMethod$SHA512::DOMHMACSignatureMethod$SHA512() {
}

$Class* DOMHMACSignatureMethod$SHA512::load$($String* name, bool initialize) {
	$loadClass(DOMHMACSignatureMethod$SHA512, name, initialize, &_DOMHMACSignatureMethod$SHA512_ClassInfo_, allocate$DOMHMACSignatureMethod$SHA512);
	return class$;
}

$Class* DOMHMACSignatureMethod$SHA512::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org