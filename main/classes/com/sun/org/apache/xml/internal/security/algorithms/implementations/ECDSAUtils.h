#ifndef _com_sun_org_apache_xml_internal_security_algorithms_implementations_ECDSAUtils_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_implementations_ECDSAUtils_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.implementations.ECDSAUtils
//$ extends java.lang.Object

#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {
									class ECDSAUtils$ECCurveDefinition;
								}
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace security {
		namespace interfaces {
			class ECPublicKey;
		}
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
namespace java {
	namespace util {
		class List;
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

class ECDSAUtils : public ::java::lang::Object {
	$class(ECDSAUtils, 0, ::java::lang::Object)
public:
	ECDSAUtils();
	void init$();
	static $bytes* convertASN1toXMLDSIG($bytes* asn1Bytes, int32_t rawLen);
	static $bytes* convertXMLDSIGtoASN1($bytes* xmldsigBytes);
	static ::java::security::spec::ECPoint* decodePoint($bytes* encodedBytes, ::java::security::spec::EllipticCurve* elliptiCcurve);
	static $bytes* encodePoint(::java::security::spec::ECPoint* ecPoint, ::java::security::spec::EllipticCurve* ellipticCurve);
	static ::com::sun::org::apache::xml::internal::security::algorithms::implementations::ECDSAUtils$ECCurveDefinition* getECCurveDefinition($String* oid);
	static $String* getOIDFromPublicKey(::java::security::interfaces::ECPublicKey* ecPublicKey);
	static $bytes* stripLeadingZeros($bytes* bytes);
	static ::java::util::List* ecCurveDefinitions;
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

#endif // _com_sun_org_apache_xml_internal_security_algorithms_implementations_ECDSAUtils_h_