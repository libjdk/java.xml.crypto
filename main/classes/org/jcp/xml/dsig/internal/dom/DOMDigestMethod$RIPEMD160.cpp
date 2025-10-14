#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$RIPEMD160.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/xml/crypto/dsig/DigestMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef RIPEMD160

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DigestMethod = ::javax::xml::crypto::dsig::DigestMethod;
using $DOMDigestMethod = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMDigestMethod$RIPEMD160_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMDigestMethod$RIPEMD160::*)($AlgorithmParameterSpec*)>(&DOMDigestMethod$RIPEMD160::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMDigestMethod$RIPEMD160::*)($Element*)>(&DOMDigestMethod$RIPEMD160::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessageDigestAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMDigestMethod$RIPEMD160_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$RIPEMD160", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "RIPEMD160", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMDigestMethod$RIPEMD160_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$RIPEMD160",
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod",
	nullptr,
	nullptr,
	_DOMDigestMethod$RIPEMD160_MethodInfo_,
	nullptr,
	nullptr,
	_DOMDigestMethod$RIPEMD160_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod"
};

$Object* allocate$DOMDigestMethod$RIPEMD160($Class* clazz) {
	return $of($alloc(DOMDigestMethod$RIPEMD160));
}

void DOMDigestMethod$RIPEMD160::init$($AlgorithmParameterSpec* params) {
	$DOMDigestMethod::init$(params);
}

void DOMDigestMethod$RIPEMD160::init$($Element* dmElem) {
	$DOMDigestMethod::init$(dmElem);
}

$String* DOMDigestMethod$RIPEMD160::getAlgorithm() {
	$init($DigestMethod);
	return $DigestMethod::RIPEMD160;
}

$String* DOMDigestMethod$RIPEMD160::getMessageDigestAlgorithm() {
	return "RIPEMD160"_s;
}

DOMDigestMethod$RIPEMD160::DOMDigestMethod$RIPEMD160() {
}

$Class* DOMDigestMethod$RIPEMD160::load$($String* name, bool initialize) {
	$loadClass(DOMDigestMethod$RIPEMD160, name, initialize, &_DOMDigestMethod$RIPEMD160_ClassInfo_, allocate$DOMDigestMethod$RIPEMD160);
	return class$;
}

$Class* DOMDigestMethod$RIPEMD160::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org