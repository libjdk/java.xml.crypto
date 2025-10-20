#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractRSAPSSSignatureMethod.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider.h>
#include <java/security/Signature.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/PSSParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractRSASignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $Signature = ::java::security::Signature;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $PSSParameterSpec = ::java::security::spec::PSSParameterSpec;
using $AbstractDOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod;
using $DOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod;
using $DOMSignatureMethod$AbstractRSASignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSASignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMSignatureMethod$AbstractRSAPSSSignatureMethod_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$AbstractRSAPSSSignatureMethod::*)($AlgorithmParameterSpec*)>(&DOMSignatureMethod$AbstractRSAPSSSignatureMethod::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$AbstractRSAPSSSignatureMethod::*)($Element*)>(&DOMSignatureMethod$AbstractRSAPSSSignatureMethod::init$)), "javax.xml.crypto.MarshalException"},
	{"getPSSParameterSpec", "()Ljava/security/spec/PSSParameterSpec;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSignature", "(Ljava/security/Provider;)Ljava/security/Signature;", nullptr, 0, nullptr, "java.security.NoSuchAlgorithmException"},
	{}
};

$InnerClassInfo _DOMSignatureMethod$AbstractRSAPSSSignatureMethod_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSAPSSSignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractRSAPSSSignatureMethod", $STATIC | $ABSTRACT},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractRSASignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$AbstractRSAPSSSignatureMethod_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSAPSSSignatureMethod",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod",
	nullptr,
	nullptr,
	_DOMSignatureMethod$AbstractRSAPSSSignatureMethod_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$AbstractRSAPSSSignatureMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$AbstractRSAPSSSignatureMethod($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$AbstractRSAPSSSignatureMethod));
}

void DOMSignatureMethod$AbstractRSAPSSSignatureMethod::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod$AbstractRSASignatureMethod::init$(params);
}

void DOMSignatureMethod$AbstractRSAPSSSignatureMethod::init$($Element* dmElem) {
	$DOMSignatureMethod$AbstractRSASignatureMethod::init$(dmElem);
}

$Signature* DOMSignatureMethod$AbstractRSAPSSSignatureMethod::getSignature($Provider* p) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($Signature, s, (p == nullptr) ? $Signature::getInstance("RSASSA-PSS"_s) : $Signature::getInstance("RSASSA-PSS"_s, p));
		try {
			$nc(s)->setParameter($(getPSSParameterSpec()));
		} catch ($InvalidAlgorithmParameterException&) {
			$var($InvalidAlgorithmParameterException, e, $catch());
			$throwNew($NoSuchAlgorithmException, "Should not happen"_s, e);
		}
		return s;
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, nsae, $catch());
		return (p == nullptr) ? $Signature::getInstance($(getJCAAlgorithm())) : $Signature::getInstance($(getJCAAlgorithm()), p);
	}
	$shouldNotReachHere();
}

DOMSignatureMethod$AbstractRSAPSSSignatureMethod::DOMSignatureMethod$AbstractRSAPSSSignatureMethod() {
}

$Class* DOMSignatureMethod$AbstractRSAPSSSignatureMethod::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$AbstractRSAPSSSignatureMethod, name, initialize, &_DOMSignatureMethod$AbstractRSAPSSSignatureMethod_ClassInfo_, allocate$DOMSignatureMethod$AbstractRSAPSSSignatureMethod);
	return class$;
}

$Class* DOMSignatureMethod$AbstractRSAPSSSignatureMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org