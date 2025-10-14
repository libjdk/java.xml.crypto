#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA3_256.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DOMDigestMethod = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMDigestMethod$SHA3_256_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMDigestMethod$SHA3_256::*)($AlgorithmParameterSpec*)>(&DOMDigestMethod$SHA3_256::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMDigestMethod$SHA3_256::*)($Element*)>(&DOMDigestMethod$SHA3_256::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessageDigestAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMDigestMethod$SHA3_256_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_256", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA3_256", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMDigestMethod$SHA3_256_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_256",
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod",
	nullptr,
	nullptr,
	_DOMDigestMethod$SHA3_256_MethodInfo_,
	nullptr,
	nullptr,
	_DOMDigestMethod$SHA3_256_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod"
};

$Object* allocate$DOMDigestMethod$SHA3_256($Class* clazz) {
	return $of($alloc(DOMDigestMethod$SHA3_256));
}

void DOMDigestMethod$SHA3_256::init$($AlgorithmParameterSpec* params) {
	$DOMDigestMethod::init$(params);
}

void DOMDigestMethod$SHA3_256::init$($Element* dmElem) {
	$DOMDigestMethod::init$(dmElem);
}

$String* DOMDigestMethod$SHA3_256::getAlgorithm() {
	$init($DOMDigestMethod);
	return $DOMDigestMethod::SHA3_256;
}

$String* DOMDigestMethod$SHA3_256::getMessageDigestAlgorithm() {
	return "SHA3-256"_s;
}

DOMDigestMethod$SHA3_256::DOMDigestMethod$SHA3_256() {
}

$Class* DOMDigestMethod$SHA3_256::load$($String* name, bool initialize) {
	$loadClass(DOMDigestMethod$SHA3_256, name, initialize, &_DOMDigestMethod$SHA3_256_ClassInfo_, allocate$DOMDigestMethod$SHA3_256);
	return class$;
}

$Class* DOMDigestMethod$SHA3_256::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org