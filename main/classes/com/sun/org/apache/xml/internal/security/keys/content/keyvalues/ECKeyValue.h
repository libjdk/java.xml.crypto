#ifndef _com_sun_org_apache_xml_internal_security_keys_content_keyvalues_ECKeyValue_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_keyvalues_ECKeyValue_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue
//$ extends com.sun.org.apache.xml.internal.security.utils.Signature11ElementProxy
//$ implements com.sun.org.apache.xml.internal.security.keys.content.keyvalues.KeyValueContent

#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/KeyValueContent.h>
#include <com/sun/org/apache/xml/internal/security/utils/Signature11ElementProxy.h>
#include <java/lang/Array.h>

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
										class ECKeyValue$Curve;
									}
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
	namespace math {
		class BigInteger;
	}
}
namespace java {
	namespace security {
		class Key;
		class PublicKey;
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
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
			class Node;
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

class ECKeyValue : public ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy, public ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::KeyValueContent {
	$class(ECKeyValue, 0, ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy, ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::KeyValueContent)
public:
	ECKeyValue();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Document* doc, ::java::security::Key* key);
	static ::java::math::BigInteger* bigInt($String* s);
	static ::java::security::spec::ECPoint* decodePoint($bytes* data, ::java::security::spec::EllipticCurve* curve);
	static $bytes* encodePoint(::java::security::spec::ECPoint* point, ::java::security::spec::EllipticCurve* curve);
	virtual $String* getBaseLocalName() override;
	static $String* getCurveOid(::java::security::spec::ECParameterSpec* params);
	static ::java::security::spec::ECParameterSpec* getECParameterSpec($String* oid);
	static ::org::w3c::dom::Element* getFirstChildElement(::org::w3c::dom::Node* node);
	static ::org::w3c::dom::Element* getNextSiblingElement(::org::w3c::dom::Node* node, $String* localName, $String* namespaceURI);
	static ::org::w3c::dom::Element* getNextSiblingElement(::org::w3c::dom::Node* node);
	virtual ::java::security::PublicKey* getPublicKey() override;
	static ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::ECKeyValue$Curve* initializeCurve($String* name, $String* oid, $String* sfield, $String* a, $String* b, $String* x, $String* y, $String* n, int32_t h);
	static bool matchCurve(::java::security::spec::ECParameterSpec* params, ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::ECKeyValue$Curve* curve);
	virtual $String* toString() override;
	static $bytes* trimZeroes($bytes* b);
	static ::org::w3c::dom::Element* verifyElement(::org::w3c::dom::Element* elem, $String* localName, $String* namespaceURI);
	static ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::ECKeyValue$Curve* SECP256R1;
	static ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::ECKeyValue$Curve* SECP384R1;
	static ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::ECKeyValue$Curve* SECP521R1;
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

#endif // _com_sun_org_apache_xml_internal_security_keys_content_keyvalues_ECKeyValue_h_