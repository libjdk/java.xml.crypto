#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractP1363FormatSignatureMethod.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider.h>
#include <java/security/Signature.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $Signature = ::java::security::Signature;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractDOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod;
using $DOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMSignatureMethod$AbstractP1363FormatSignatureMethod_FieldInfo_[] = {
	{"asn1", "Z", nullptr, 0, $field(DOMSignatureMethod$AbstractP1363FormatSignatureMethod, asn1)},
	{}
};

$MethodInfo _DOMSignatureMethod$AbstractP1363FormatSignatureMethod_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$AbstractP1363FormatSignatureMethod::*)($AlgorithmParameterSpec*)>(&DOMSignatureMethod$AbstractP1363FormatSignatureMethod::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$AbstractP1363FormatSignatureMethod::*)($Element*)>(&DOMSignatureMethod$AbstractP1363FormatSignatureMethod::init$)), "javax.xml.crypto.MarshalException"},
	{"getJCAFallbackAlgorithm", "()Ljava/lang/String;", nullptr, $ABSTRACT},
	{"getSignature", "(Ljava/security/Provider;)Ljava/security/Signature;", nullptr, 0, nullptr, "java.security.NoSuchAlgorithmException"},
	{}
};

$InnerClassInfo _DOMSignatureMethod$AbstractP1363FormatSignatureMethod_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractP1363FormatSignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractP1363FormatSignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$AbstractP1363FormatSignatureMethod_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractP1363FormatSignatureMethod",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod",
	nullptr,
	_DOMSignatureMethod$AbstractP1363FormatSignatureMethod_FieldInfo_,
	_DOMSignatureMethod$AbstractP1363FormatSignatureMethod_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$AbstractP1363FormatSignatureMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$AbstractP1363FormatSignatureMethod($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$AbstractP1363FormatSignatureMethod));
}

void DOMSignatureMethod$AbstractP1363FormatSignatureMethod::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod::init$(params);
}

void DOMSignatureMethod$AbstractP1363FormatSignatureMethod::init$($Element* dmElem) {
	$DOMSignatureMethod::init$(dmElem);
}

$Signature* DOMSignatureMethod$AbstractP1363FormatSignatureMethod::getSignature($Provider* p) {
	try {
		return (p == nullptr) ? $Signature::getInstance($(getJCAAlgorithm())) : $Signature::getInstance($(getJCAAlgorithm()), p);
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, nsae, $catch());
		$var($Signature, s, (p == nullptr) ? $Signature::getInstance($(getJCAFallbackAlgorithm())) : $Signature::getInstance($(getJCAFallbackAlgorithm()), p));
		this->asn1 = true;
		return s;
	}
	$shouldNotReachHere();
}

DOMSignatureMethod$AbstractP1363FormatSignatureMethod::DOMSignatureMethod$AbstractP1363FormatSignatureMethod() {
}

$Class* DOMSignatureMethod$AbstractP1363FormatSignatureMethod::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$AbstractP1363FormatSignatureMethod, name, initialize, &_DOMSignatureMethod$AbstractP1363FormatSignatureMethod_ClassInfo_, allocate$DOMSignatureMethod$AbstractP1363FormatSignatureMethod);
	return class$;
}

$Class* DOMSignatureMethod$AbstractP1363FormatSignatureMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org