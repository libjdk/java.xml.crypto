#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractDSASignatureMethod.h>

#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/Key.h>
#include <java/security/interfaces/DSAKey.h>
#include <java/security/interfaces/DSAParams.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractP1363FormatSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $JavaUtils = ::com::sun::org::apache::xml::internal::security::utils::JavaUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $Key = ::java::security::Key;
using $DSAKey = ::java::security::interfaces::DSAKey;
using $DSAParams = ::java::security::interfaces::DSAParams;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $DOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod;
using $DOMSignatureMethod$AbstractP1363FormatSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractP1363FormatSignatureMethod;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMSignatureMethod$AbstractDSASignatureMethod_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$AbstractDSASignatureMethod::*)($AlgorithmParameterSpec*)>(&DOMSignatureMethod$AbstractDSASignatureMethod::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod$AbstractDSASignatureMethod::*)($Element*)>(&DOMSignatureMethod$AbstractDSASignatureMethod::init$)), "javax.xml.crypto.MarshalException"},
	{"postSignFormat", "(Ljava/security/Key;[B)[B", nullptr, 0, nullptr, "java.io.IOException"},
	{"preVerifyFormat", "(Ljava/security/Key;[B)[B", nullptr, 0, nullptr, "java.io.IOException"},
	{}
};

$InnerClassInfo _DOMSignatureMethod$AbstractDSASignatureMethod_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractDSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractDSASignatureMethod", $STATIC | $ABSTRACT},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractP1363FormatSignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractP1363FormatSignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod$AbstractDSASignatureMethod_ClassInfo_ = {
	$ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractDSASignatureMethod",
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractP1363FormatSignatureMethod",
	nullptr,
	nullptr,
	_DOMSignatureMethod$AbstractDSASignatureMethod_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod$AbstractDSASignatureMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod"
};

$Object* allocate$DOMSignatureMethod$AbstractDSASignatureMethod($Class* clazz) {
	return $of($alloc(DOMSignatureMethod$AbstractDSASignatureMethod));
}

void DOMSignatureMethod$AbstractDSASignatureMethod::init$($AlgorithmParameterSpec* params) {
	$DOMSignatureMethod$AbstractP1363FormatSignatureMethod::init$(params);
}

void DOMSignatureMethod$AbstractDSASignatureMethod::init$($Element* dmElem) {
	$DOMSignatureMethod$AbstractP1363FormatSignatureMethod::init$(dmElem);
}

$bytes* DOMSignatureMethod$AbstractDSASignatureMethod::postSignFormat($Key* key, $bytes* sig) {
	if (this->asn1) {
		int32_t size = $nc($($nc($($nc(($cast($DSAKey, key)))->getParams()))->getQ()))->bitLength();
		return $JavaUtils::convertDsaASN1toXMLDSIG(sig, size / 8);
	} else {
		return sig;
	}
}

$bytes* DOMSignatureMethod$AbstractDSASignatureMethod::preVerifyFormat($Key* key, $bytes* sig) {
	if (this->asn1) {
		int32_t size = $nc($($nc($($nc(($cast($DSAKey, key)))->getParams()))->getQ()))->bitLength();
		return $JavaUtils::convertDsaXMLDSIGtoASN1(sig, size / 8);
	} else {
		return sig;
	}
}

DOMSignatureMethod$AbstractDSASignatureMethod::DOMSignatureMethod$AbstractDSASignatureMethod() {
}

$Class* DOMSignatureMethod$AbstractDSASignatureMethod::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod$AbstractDSASignatureMethod, name, initialize, &_DOMSignatureMethod$AbstractDSASignatureMethod_ClassInfo_, allocate$DOMSignatureMethod$AbstractDSASignatureMethod);
	return class$;
}

$Class* DOMSignatureMethod$AbstractDSASignatureMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org