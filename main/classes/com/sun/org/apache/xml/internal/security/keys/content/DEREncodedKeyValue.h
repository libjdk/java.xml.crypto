#ifndef _com_sun_org_apache_xml_internal_security_keys_content_DEREncodedKeyValue_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_DEREncodedKeyValue_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.DEREncodedKeyValue
//$ extends com.sun.org.apache.xml.internal.security.utils.Signature11ElementProxy
//$ implements com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent

#include <com/sun/org/apache/xml/internal/security/keys/content/KeyInfoContent.h>
#include <com/sun/org/apache/xml/internal/security/utils/Signature11ElementProxy.h>
#include <java/lang/Array.h>

namespace java {
	namespace security {
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

class DEREncodedKeyValue : public ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy, public ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent {
	$class(DEREncodedKeyValue, 0, ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy, ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent)
public:
	DEREncodedKeyValue();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Document* doc, ::java::security::PublicKey* publicKey);
	void init$(::org::w3c::dom::Document* doc, $bytes* encodedKey);
	virtual $String* getBaseLocalName() override;
	virtual $bytes* getEncodedDER(::java::security::PublicKey* publicKey);
	virtual $String* getId();
	virtual ::java::security::PublicKey* getPublicKey();
	virtual void setId($String* id);
	virtual $String* toString() override;
	static $StringArray* supportedKeyTypes;
};

								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_keys_content_DEREncodedKeyValue_h_