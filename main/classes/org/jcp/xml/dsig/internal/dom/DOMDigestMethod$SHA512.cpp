#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA512.h>

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

$MethodInfo _DOMDigestMethod$SHA512_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMDigestMethod$SHA512::*)($AlgorithmParameterSpec*)>(&DOMDigestMethod$SHA512::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMDigestMethod$SHA512::*)($Element*)>(&DOMDigestMethod$SHA512::init$)), "javax.xml.crypto.MarshalException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessageDigestAlgorithm", "()Ljava/lang/String;", nullptr, 0},
	{}
};

$InnerClassInfo _DOMDigestMethod$SHA512_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA512", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA512", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMDigestMethod$SHA512_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA512",
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod",
	nullptr,
	nullptr,
	_DOMDigestMethod$SHA512_MethodInfo_,
	nullptr,
	nullptr,
	_DOMDigestMethod$SHA512_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod"
};

$Object* allocate$DOMDigestMethod$SHA512($Class* clazz) {
	return $of($alloc(DOMDigestMethod$SHA512));
}

void DOMDigestMethod$SHA512::init$($AlgorithmParameterSpec* params) {
	$DOMDigestMethod::init$(params);
}

void DOMDigestMethod$SHA512::init$($Element* dmElem) {
	$DOMDigestMethod::init$(dmElem);
}

$String* DOMDigestMethod$SHA512::getAlgorithm() {
	$init($DigestMethod);
	return $DigestMethod::SHA512;
}

$String* DOMDigestMethod$SHA512::getMessageDigestAlgorithm() {
	return "SHA-512"_s;
}

DOMDigestMethod$SHA512::DOMDigestMethod$SHA512() {
}

$Class* DOMDigestMethod$SHA512::load$($String* name, bool initialize) {
	$loadClass(DOMDigestMethod$SHA512, name, initialize, &_DOMDigestMethod$SHA512_ClassInfo_, allocate$DOMDigestMethod$SHA512);
	return class$;
}

$Class* DOMDigestMethod$SHA512::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org