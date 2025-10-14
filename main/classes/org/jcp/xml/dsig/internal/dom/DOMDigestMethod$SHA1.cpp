#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA1.h>

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

#undef SHA1

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

$MethodInfo _DOMDigestMethod$SHA1_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMDigestMethod$SHA1::*)($AlgorithmParameterSpec*)>(&DOMDigestMethod$SHA1::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMDigestMethod$SHA1::*)($Element*)>(&DOMDigestMethod$SHA1::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessageDigestAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMDigestMethod$SHA1_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA1", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA1", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMDigestMethod$SHA1_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA1",
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod",
	nullptr,
	nullptr,
	_DOMDigestMethod$SHA1_MethodInfo_,
	nullptr,
	nullptr,
	_DOMDigestMethod$SHA1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod"
};

$Object* allocate$DOMDigestMethod$SHA1($Class* clazz) {
	return $of($alloc(DOMDigestMethod$SHA1));
}

void DOMDigestMethod$SHA1::init$($AlgorithmParameterSpec* params) {
	$DOMDigestMethod::init$(params);
}

void DOMDigestMethod$SHA1::init$($Element* dmElem) {
	$DOMDigestMethod::init$(dmElem);
}

$String* DOMDigestMethod$SHA1::getAlgorithm() {
	$init($DigestMethod);
	return $DigestMethod::SHA1;
}

$String* DOMDigestMethod$SHA1::getMessageDigestAlgorithm() {
	return "SHA-1"_s;
}

DOMDigestMethod$SHA1::DOMDigestMethod$SHA1() {
}

$Class* DOMDigestMethod$SHA1::load$($String* name, bool initialize) {
	$loadClass(DOMDigestMethod$SHA1, name, initialize, &_DOMDigestMethod$SHA1_ClassInfo_, allocate$DOMDigestMethod$SHA1);
	return class$;
}

$Class* DOMDigestMethod$SHA1::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org