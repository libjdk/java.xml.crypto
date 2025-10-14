#ifndef _org_jcp_xml_dsig_internal_dom_DOMKeyValue$EC_h_
#define _org_jcp_xml_dsig_internal_dom_DOMKeyValue$EC_h_
//$ class org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC
//$ extends org.jcp.xml.dsig.internal.dom.DOMKeyValue

#include <java/lang/Array.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue.h>

namespace java {
	namespace security {
		class KeyFactory;
		class PublicKey;
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
			class ECParameterSpec;
			class ECPoint;
			class EllipticCurve;
		}
	}
}
namespace javax {
	namespace xml {
		namespace crypto {
			namespace dom {
				class DOMCryptoContext;
			}
		}
	}
}
namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {
						class DOMKeyValue$EC$Curve;
					}
				}
			}
		}
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
			class Node;
		}
	}
}

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

class DOMKeyValue$EC : public ::org::jcp::xml::dsig::internal::dom::DOMKeyValue {
	$class(DOMKeyValue$EC, 0, ::org::jcp::xml::dsig::internal::dom::DOMKeyValue)
public:
	DOMKeyValue$EC();
	void init$(::java::security::interfaces::ECPublicKey* ecKey);
	void init$(::org::w3c::dom::Element* dmElem);
	static ::java::security::spec::ECPoint* decodePoint($bytes* data, ::java::security::spec::EllipticCurve* curve);
	static $bytes* encodePoint(::java::security::spec::ECPoint* point, ::java::security::spec::EllipticCurve* curve);
	static $String* getCurveOid(::java::security::spec::ECParameterSpec* params);
	static ::java::security::spec::ECParameterSpec* getECParameterSpec($String* oid);
	static ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$EC$Curve* initializeCurve($String* name, $String* oid, $String* sfield, $String* a, $String* b, $String* x, $String* y, $String* n, int32_t h);
	virtual void marshalPublicKey(::org::w3c::dom::Node* parent, ::org::w3c::dom::Document* doc, $String* dsPrefix, ::javax::xml::crypto::dom::DOMCryptoContext* context) override;
	static bool matchCurve(::java::security::spec::ECParameterSpec* params, ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$EC$Curve* curve);
	static $bytes* trimZeroes($bytes* b);
	virtual ::java::security::PublicKey* unmarshalKeyValue(::org::w3c::dom::Element* kvtElem) override;
	$bytes* ecPublicKey = nullptr;
	::java::security::KeyFactory* eckf = nullptr;
	::java::security::spec::ECParameterSpec* ecParams = nullptr;
	static ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$EC$Curve* SECP256R1;
	static ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$EC$Curve* SECP384R1;
	static ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$EC$Curve* SECP521R1;
};

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org

#endif // _org_jcp_xml_dsig_internal_dom_DOMKeyValue$EC_h_