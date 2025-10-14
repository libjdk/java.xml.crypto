#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/ECDSAUtils$ECCurveDefinition.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/ECDSAUtils.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ECDSAUtils = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::ECDSAUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {

$FieldInfo _ECDSAUtils$ECCurveDefinition_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ECDSAUtils$ECCurveDefinition, name)},
	{"oid", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ECDSAUtils$ECCurveDefinition, oid)},
	{"field", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ECDSAUtils$ECCurveDefinition, field)},
	{"a", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ECDSAUtils$ECCurveDefinition, a)},
	{"b", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ECDSAUtils$ECCurveDefinition, b)},
	{"x", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ECDSAUtils$ECCurveDefinition, x)},
	{"y", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ECDSAUtils$ECCurveDefinition, y)},
	{"n", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(ECDSAUtils$ECCurveDefinition, n)},
	{"h", "I", nullptr, $PRIVATE | $FINAL, $field(ECDSAUtils$ECCurveDefinition, h)},
	{}
};

$MethodInfo _ECDSAUtils$ECCurveDefinition_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(ECDSAUtils$ECCurveDefinition::*)($String*,$String*,$String*,$String*,$String*,$String*,$String*,$String*,int32_t)>(&ECDSAUtils$ECCurveDefinition::init$))},
	{"equals", "(Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;Ljava/math/BigInteger;I)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getA", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getB", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getField", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getH", "()I", nullptr, $PUBLIC},
	{"getN", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOid", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getX", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getY", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ECDSAUtils$ECCurveDefinition_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.ECDSAUtils$ECCurveDefinition", "com.sun.org.apache.xml.internal.security.algorithms.implementations.ECDSAUtils", "ECCurveDefinition", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ECDSAUtils$ECCurveDefinition_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.ECDSAUtils$ECCurveDefinition",
	"java.lang.Object",
	nullptr,
	_ECDSAUtils$ECCurveDefinition_FieldInfo_,
	_ECDSAUtils$ECCurveDefinition_MethodInfo_,
	nullptr,
	nullptr,
	_ECDSAUtils$ECCurveDefinition_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.ECDSAUtils"
};

$Object* allocate$ECDSAUtils$ECCurveDefinition($Class* clazz) {
	return $of($alloc(ECDSAUtils$ECCurveDefinition));
}

void ECDSAUtils$ECCurveDefinition::init$($String* name, $String* oid, $String* field, $String* a, $String* b, $String* x, $String* y, $String* n, int32_t h) {
	$set(this, name, name);
	$set(this, oid, oid);
	$set(this, field, field);
	$set(this, a, a);
	$set(this, b, b);
	$set(this, x, x);
	$set(this, y, y);
	$set(this, n, n);
	this->h = h;
}

$String* ECDSAUtils$ECCurveDefinition::equals($BigInteger* field, $BigInteger* a, $BigInteger* b, $BigInteger* x, $BigInteger* y, $BigInteger* n, int32_t h) {
	bool var$4 = $nc(this->field)->equals($($nc(field)->toString(16)));
	bool var$3 = var$4 && $nc(this->a)->equals($($nc(a)->toString(16)));
	bool var$2 = var$3 && $nc(this->b)->equals($($nc(b)->toString(16)));
	bool var$1 = var$2 && $nc(this->x)->equals($($nc(x)->toString(16)));
	bool var$0 = var$1 && $nc(this->y)->equals($($nc(y)->toString(16)));
	if (var$0 && $nc(this->n)->equals($($nc(n)->toString(16))) && this->h == h) {
		return this->oid;
	}
	return nullptr;
}

$String* ECDSAUtils$ECCurveDefinition::getName() {
	return this->name;
}

$String* ECDSAUtils$ECCurveDefinition::getOid() {
	return this->oid;
}

$String* ECDSAUtils$ECCurveDefinition::getField() {
	return this->field;
}

$String* ECDSAUtils$ECCurveDefinition::getA() {
	return this->a;
}

$String* ECDSAUtils$ECCurveDefinition::getB() {
	return this->b;
}

$String* ECDSAUtils$ECCurveDefinition::getX() {
	return this->x;
}

$String* ECDSAUtils$ECCurveDefinition::getY() {
	return this->y;
}

$String* ECDSAUtils$ECCurveDefinition::getN() {
	return this->n;
}

int32_t ECDSAUtils$ECCurveDefinition::getH() {
	return this->h;
}

ECDSAUtils$ECCurveDefinition::ECDSAUtils$ECCurveDefinition() {
}

$Class* ECDSAUtils$ECCurveDefinition::load$($String* name, bool initialize) {
	$loadClass(ECDSAUtils$ECCurveDefinition, name, initialize, &_ECDSAUtils$ECCurveDefinition_ClassInfo_, allocate$ECDSAUtils$ECCurveDefinition);
	return class$;
}

$Class* ECDSAUtils$ECCurveDefinition::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com