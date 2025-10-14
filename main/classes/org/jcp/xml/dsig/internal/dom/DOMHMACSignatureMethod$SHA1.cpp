#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef HMAC_SHA1

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SignatureMethod = ::javax::xml::crypto::dsig::SignatureMethod;
using $DOMHMACSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMHMACSignatureMethod$SHA1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMHMACSignatureMethod$SHA1::*)($AlgorithmParameterSpec*)>(&DOMHMACSignatureMethod$SHA1::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMHMACSignatureMethod$SHA1::*)($Element*)>(&DOMHMACSignatureMethod$SHA1::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDigestLength", "()I", nullptr, 0},
	{"getJCAAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMHMACSignatureMethod$SHA1_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA1", "org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod", "SHA1", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMHMACSignatureMethod$SHA1_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA1",
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod",
	nullptr,
	nullptr,
	_DOMHMACSignatureMethod$SHA1_MethodInfo_,
	nullptr,
	nullptr,
	_DOMHMACSignatureMethod$SHA1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod"
};

$Object* allocate$DOMHMACSignatureMethod$SHA1($Class* clazz) {
	return $of($alloc(DOMHMACSignatureMethod$SHA1));
}

void DOMHMACSignatureMethod$SHA1::init$($AlgorithmParameterSpec* params) {
	$DOMHMACSignatureMethod::init$(params);
}

void DOMHMACSignatureMethod$SHA1::init$($Element* dmElem) {
	$DOMHMACSignatureMethod::init$(dmElem);
}

$String* DOMHMACSignatureMethod$SHA1::getAlgorithm() {
	$init($SignatureMethod);
	return $SignatureMethod::HMAC_SHA1;
}

$String* DOMHMACSignatureMethod$SHA1::getJCAAlgorithm() {
	return "HmacSHA1"_s;
}

int32_t DOMHMACSignatureMethod$SHA1::getDigestLength() {
	return 160;
}

DOMHMACSignatureMethod$SHA1::DOMHMACSignatureMethod$SHA1() {
}

$Class* DOMHMACSignatureMethod$SHA1::load$($String* name, bool initialize) {
	$loadClass(DOMHMACSignatureMethod$SHA1, name, initialize, &_DOMHMACSignatureMethod$SHA1_ClassInfo_, allocate$DOMHMACSignatureMethod$SHA1);
	return class$;
}

$Class* DOMHMACSignatureMethod$SHA1::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org