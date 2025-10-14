#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractECDSASignatureMethod.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <java/security/interfaces/ECPrivateKey.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/ECField.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/EllipticCurve.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractP1363FormatSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $SignatureECDSA = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $ECKey = ::java::security::interfaces::ECKey;
using $ECPrivateKey = ::java::security::interfaces::ECPrivateKey;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $ECField = ::java::security::spec::ECField;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $EllipticCurve = ::java::security::spec::EllipticCurve;
using $DOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod;
using $DOMSignatureMethod$AbstractP1363FormatSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractP1363FormatSignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMSignatureMethod$AbstractECDSASignatureMethod_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$AbstractECDSASignatureMethod::*)($AlgorithmParameterSpec*)>(&DOMSignatureMethod$AbstractECDSASignatureMethod::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$AbstractECDSASignatureMethod::*)($Element*)>(&DOMSignatureMethod$AbstractECDSASignatureMethod::init$)), "javax.xml.crypto.MarshalException"},
	{"postSignFormat", "(Ljava/security/Key;[B)[B", nullptr, 0, nullptr, "java.io.IOException"},
	{"preVerifyFormat", "(Ljava/security/Key;[B)[B", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DOMSignatureMethod$AbstractECDSASignatureMethod_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractECDSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractECDSASignatureMethod", $STATIC | $ABSTRACT},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractP1363FormatSignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractP1363FormatSignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$AbstractECDSASignatureMethod_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractECDSASignatureMethod",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractP1363FormatSignatureMethod",
	nullptr,
	nullptr,
	_DOMSignatureMethod$AbstractECDSASignatureMethod_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$AbstractECDSASignatureMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$AbstractECDSASignatureMethod($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$AbstractECDSASignatureMethod));
}

void DOMSignatureMethod$AbstractECDSASignatureMethod::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod$AbstractP1363FormatSignatureMethod::init$(params);
}

void DOMSignatureMethod$AbstractECDSASignatureMethod::init$($Element* dmElem) {
	$DOMSignatureMethod$AbstractP1363FormatSignatureMethod::init$(dmElem);
}

$bytes* DOMSignatureMethod$AbstractECDSASignatureMethod::postSignFormat($Key* key, $bytes* sig) {
	if (this->asn1) {
		int32_t rawLen = -1;
		if ($instanceOf($ECPrivateKey, key)) {
			$var($ECPrivateKey, ecKey, $cast($ECPrivateKey, key));
			rawLen = ($nc($($nc($($nc($($nc(ecKey)->getParams()))->getCurve()))->getField()))->getFieldSize() + 7) / 8;
		}
		return $SignatureECDSA::convertASN1toXMLDSIG(sig, rawLen);
	} else {
		return sig;
	}
}

$bytes* DOMSignatureMethod$AbstractECDSASignatureMethod::preVerifyFormat($Key* key, $bytes* sig) {
	if (this->asn1) {
		return $SignatureECDSA::convertXMLDSIGtoASN1(sig);
	} else {
		return sig;
	}
}

DOMSignatureMethod$AbstractECDSASignatureMethod::DOMSignatureMethod$AbstractECDSASignatureMethod() {
}

$Class* DOMSignatureMethod$AbstractECDSASignatureMethod::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$AbstractECDSASignatureMethod, name, initialize, &_DOMSignatureMethod$AbstractECDSASignatureMethod_ClassInfo_, allocate$DOMSignatureMethod$AbstractECDSASignatureMethod);
	return class$;
}

$Class* DOMSignatureMethod$AbstractECDSASignatureMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org