#ifndef _org_jcp_xml_dsig_internal_dom_DOMKeyValue$EC$Curve_h_
#define _org_jcp_xml_dsig_internal_dom_DOMKeyValue$EC$Curve_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC$Curve
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

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class DOMKeyValue$EC$Curve : public ::java::security::spec::ECParameterSpec {
	$class(DOMKeyValue$EC$Curve, $NO_CLASS_INIT, ::java::security::spec::ECParameterSpec)
public:
	DOMKeyValue$EC$Curve();
	void init$($String* name, $String* oid, ::java::security::spec::EllipticCurve* curve, ::java::security::spec::ECPoint* g, ::java::math::BigInteger* n, int32_t h);
	$String* getName();
	$String* getObjectId();
	$String* name = nullptr;
	$String* oid = nullptr;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMKeyValue$EC$Curve_h_