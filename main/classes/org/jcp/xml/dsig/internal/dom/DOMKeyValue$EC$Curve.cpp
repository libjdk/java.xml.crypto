#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$EC$Curve.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/ECPoint.h>
#include <java/security/spec/EllipticCurve.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$EC.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $ECPoint = ::java::security::spec::ECPoint;
using $EllipticCurve = ::java::security::spec::EllipticCurve;
using $DOMKeyValue$EC = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$EC;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMKeyValue$EC$Curve_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMKeyValue$EC$Curve, name)},
	{"oid", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMKeyValue$EC$Curve, oid)},
	{}
};

$MethodInfo _DOMKeyValue$EC$Curve_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/EllipticCurve;Ljava/security/spec/ECPoint;Ljava/math/BigInteger;I)V", nullptr, 0, $method(static_cast<void(DOMKeyValue$EC$Curve::*)($String*,$String*,$EllipticCurve*,$ECPoint*,$BigInteger*,int32_t)>(&DOMKeyValue$EC$Curve::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DOMKeyValue$EC$Curve::*)()>(&DOMKeyValue$EC$Curve::getName))},
	{"getObjectId", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(DOMKeyValue$EC$Curve::*)()>(&DOMKeyValue$EC$Curve::getObjectId))},
	{}
};

$InnerClassInfo _DOMKeyValue$EC$Curve_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC", "org.jcp.xml.dsig.internal.dom.DOMKeyValue", "EC", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC$Curve", "org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC", "Curve", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMKeyValue$EC$Curve_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC$Curve",
	"java.security.spec.ECParameterSpec",
	nullptr,
	_DOMKeyValue$EC$Curve_FieldInfo_,
	_DOMKeyValue$EC$Curve_MethodInfo_,
	nullptr,
	nullptr,
	_DOMKeyValue$EC$Curve_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMKeyValue"
};

$Object* allocate$DOMKeyValue$EC$Curve($Class* clazz) {
	return $of($alloc(DOMKeyValue$EC$Curve));
}

void DOMKeyValue$EC$Curve::init$($String* name, $String* oid, $EllipticCurve* curve, $ECPoint* g, $BigInteger* n, int32_t h) {
	$ECParameterSpec::init$(curve, g, n, h);
	$set(this, name, name);
	$set(this, oid, oid);
}

$String* DOMKeyValue$EC$Curve::getName() {
	return this->name;
}

$String* DOMKeyValue$EC$Curve::getObjectId() {
	return this->oid;
}

DOMKeyValue$EC$Curve::DOMKeyValue$EC$Curve() {
}

$Class* DOMKeyValue$EC$Curve::load$($String* name, bool initialize) {
	$loadClass(DOMKeyValue$EC$Curve, name, initialize, &_DOMKeyValue$EC$Curve_ClassInfo_, allocate$DOMKeyValue$EC$Curve);
	return class$;
}

$Class* DOMKeyValue$EC$Curve::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org