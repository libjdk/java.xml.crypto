#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$WHIRLPOOL.h>

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

#undef WHIRLPOOL

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

$MethodInfo _DOMDigestMethod$WHIRLPOOL_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMDigestMethod$WHIRLPOOL::*)($AlgorithmParameterSpec*)>(&DOMDigestMethod$WHIRLPOOL::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMDigestMethod$WHIRLPOOL::*)($Element*)>(&DOMDigestMethod$WHIRLPOOL::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessageDigestAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMDigestMethod$WHIRLPOOL_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$WHIRLPOOL", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "WHIRLPOOL", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMDigestMethod$WHIRLPOOL_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$WHIRLPOOL",
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod",
	nullptr,
	nullptr,
	_DOMDigestMethod$WHIRLPOOL_MethodInfo_,
	nullptr,
	nullptr,
	_DOMDigestMethod$WHIRLPOOL_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod"
};

$Object* allocate$DOMDigestMethod$WHIRLPOOL($Class* clazz) {
	return $of($alloc(DOMDigestMethod$WHIRLPOOL));
}

void DOMDigestMethod$WHIRLPOOL::init$($AlgorithmParameterSpec* params) {
	$DOMDigestMethod::init$(params);
}

void DOMDigestMethod$WHIRLPOOL::init$($Element* dmElem) {
	$DOMDigestMethod::init$(dmElem);
}

$String* DOMDigestMethod$WHIRLPOOL::getAlgorithm() {
	$init($DOMDigestMethod);
	return $DOMDigestMethod::WHIRLPOOL;
}

$String* DOMDigestMethod$WHIRLPOOL::getMessageDigestAlgorithm() {
	return "WHIRLPOOL"_s;
}

DOMDigestMethod$WHIRLPOOL::DOMDigestMethod$WHIRLPOOL() {
}

$Class* DOMDigestMethod$WHIRLPOOL::load$($String* name, bool initialize) {
	$loadClass(DOMDigestMethod$WHIRLPOOL, name, initialize, &_DOMDigestMethod$WHIRLPOOL_ClassInfo_, allocate$DOMDigestMethod$WHIRLPOOL);
	return class$;
}

$Class* DOMDigestMethod$WHIRLPOOL::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org