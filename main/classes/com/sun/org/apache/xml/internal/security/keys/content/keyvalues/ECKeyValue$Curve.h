#ifndef _com_sun_org_apache_xml_internal_security_keys_content_keyvalues_ECKeyValue$Curve_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_keyvalues_ECKeyValue$Curve_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue$Curve
//$ extends java.security.spec.ECParameterSpec

#include <java/security/spec/ECParameterSpec.h>

namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		namespace spec {
			class ECPoint;
			class EllipticCurve;
		}
	}
}

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

class ECKeyValue$Curve : public ::java::security::spec::ECParameterSpec {
	$class(ECKeyValue$Curve, $NO_CLASS_INIT, ::java::security::spec::ECParameterSpec)
public:
	ECKeyValue$Curve();
	void init$($String* name, $String* oid, ::java::security::spec::EllipticCurve* curve, ::java::security::spec::ECPoint* g, ::java::math::BigInteger* n, int32_t h);
	$String* getName();
	$String* getObjectId();
	$String* name = nullptr;
	$String* oid = nullptr;
};

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

#endif // _com_sun_org_apache_xml_internal_security_keys_content_keyvalues_ECKeyValue$Curve_h_