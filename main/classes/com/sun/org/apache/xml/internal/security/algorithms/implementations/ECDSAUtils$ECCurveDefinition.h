#ifndef _com_sun_org_apache_xml_internal_security_algorithms_implementations_ECDSAUtils$ECCurveDefinition_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_implementations_ECDSAUtils$ECCurveDefinition_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.implementations.ECDSAUtils$ECCurveDefinition
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {

class ECDSAUtils$ECCurveDefinition : public ::java::lang::Object {
	$class(ECDSAUtils$ECCurveDefinition, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ECDSAUtils$ECCurveDefinition();
	using ::java::lang::Object::equals;
	void init$($String* name, $String* oid, $String* field, $String* a, $String* b, $String* x, $String* y, $String* n, int32_t h);
	virtual $String* equals(::java::math::BigInteger* field, ::java::math::BigInteger* a, ::java::math::BigInteger* b, ::java::math::BigInteger* x, ::java::math::BigInteger* y, ::java::math::BigInteger* n, int32_t h);
	virtual $String* getA();
	virtual $String* getB();
	virtual $String* getField();
	virtual int32_t getH();
	virtual $String* getN();
	virtual $String* getName();
	virtual $String* getOid();
	virtual $String* getX();
	virtual $String* getY();
	$String* name = nullptr;
	$String* oid = nullptr;
	$String* field = nullptr;
	$String* a = nullptr;
	$String* b = nullptr;
	$String* x = nullptr;
	$String* y = nullptr;
	$String* n = nullptr;
	int32_t h = 0;
};

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_algorithms_implementations_ECDSAUtils$ECCurveDefinition_h_