#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue$Curve.h>

#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue.h>
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
#include <jcpp.h>

using $ECKeyValue = ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::ECKeyValue;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $ECPoint = ::java::security::spec::ECPoint;
using $EllipticCurve = ::java::security::spec::EllipticCurve;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace content {
									namespace keyvalues {

$FieldInfo _ECKeyValue$Curve_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ECKeyValue$Curve, name)},
	{"oid", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ECKeyValue$Curve, oid)},
	{}
};

$MethodInfo _ECKeyValue$Curve_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/security/spec/EllipticCurve;Ljava/security/spec/ECPoint;Ljava/math/BigInteger;I)V", nullptr, 0, $method(static_cast<void(ECKeyValue$Curve::*)($String*,$String*,$EllipticCurve*,$ECPoint*,$BigInteger*,int32_t)>(&ECKeyValue$Curve::init$))},
	{"getName", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ECKeyValue$Curve::*)()>(&ECKeyValue$Curve::getName))},
	{"getObjectId", "()Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ECKeyValue$Curve::*)()>(&ECKeyValue$Curve::getObjectId))},
	{}
};

$InnerClassInfo _ECKeyValue$Curve_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue$Curve", "com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue", "Curve", $STATIC | $FINAL},
	{}
};

$ClassInfo _ECKeyValue$Curve_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue$Curve",
	"java.security.spec.ECParameterSpec",
	nullptr,
	_ECKeyValue$Curve_FieldInfo_,
	_ECKeyValue$Curve_MethodInfo_,
	nullptr,
	nullptr,
	_ECKeyValue$Curve_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue"
};

$Object* allocate$ECKeyValue$Curve($Class* clazz) {
	return $of($alloc(ECKeyValue$Curve));
}

void ECKeyValue$Curve::init$($String* name, $String* oid, $EllipticCurve* curve, $ECPoint* g, $BigInteger* n, int32_t h) {
	$ECParameterSpec::init$(curve, g, n, h);
	$set(this, name, name);
	$set(this, oid, oid);
}

$String* ECKeyValue$Curve::getName() {
	return this->name;
}

$String* ECKeyValue$Curve::getObjectId() {
	return this->oid;
}

ECKeyValue$Curve::ECKeyValue$Curve() {
}

$Class* ECKeyValue$Curve::load$($String* name, bool initialize) {
	$loadClass(ECKeyValue$Curve, name, initialize, &_ECKeyValue$Curve_ClassInfo_, allocate$ECKeyValue$Curve);
	return class$;
}

$Class* ECKeyValue$Curve::class$ = nullptr;

									} // keyvalues
								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com