#ifndef _com_sun_org_apache_xml_internal_security_keys_content_keyvalues_DSAKeyValue_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_keyvalues_DSAKeyValue_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.keyvalues.DSAKeyValue
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy
//$ implements com.sun.org.apache.xml.internal.security.keys.content.keyvalues.KeyValueContent

#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/KeyValueContent.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>

#pragma push_macro("G")
#undef G
#pragma push_macro("P")
#undef P
#pragma push_macro("Q")
#undef Q
#pragma push_macro("Y")
#undef Y

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
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
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

class DSAKeyValue : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, public ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::KeyValueContent {
	$class(DSAKeyValue, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::KeyValueContent)
public:
	DSAKeyValue();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Document* doc, ::java::math::BigInteger* P, ::java::math::BigInteger* Q, ::java::math::BigInteger* G, ::java::math::BigInteger* Y);
	void init$(::org::w3c::dom::Document* doc, ::java::security::Key* key);
	virtual $String* getBaseLocalName() override;
	virtual ::java::security::PublicKey* getPublicKey() override;
	virtual $String* toString() override;
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

#pragma pop_macro("G")
#pragma pop_macro("P")
#pragma pop_macro("Q")
#pragma pop_macro("Y")

#endif // _com_sun_org_apache_xml_internal_security_keys_content_keyvalues_DSAKeyValue_h_