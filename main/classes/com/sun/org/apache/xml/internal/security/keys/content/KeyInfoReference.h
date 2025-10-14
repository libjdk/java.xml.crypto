#ifndef _com_sun_org_apache_xml_internal_security_keys_content_KeyInfoReference_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_KeyInfoReference_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.KeyInfoReference
//$ extends com.sun.org.apache.xml.internal.security.utils.Signature11ElementProxy
//$ implements com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent

#include <com/sun/org/apache/xml/internal/security/keys/content/KeyInfoContent.h>
#include <com/sun/org/apache/xml/internal/security/utils/Signature11ElementProxy.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
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

class KeyInfoReference : public ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy, public ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent {
	$class(KeyInfoReference, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy, ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent)
public:
	KeyInfoReference();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Document* doc, $String* uri);
	virtual $String* getBaseLocalName() override;
	virtual $String* getId();
	virtual $String* getURI();
	virtual ::org::w3c::dom::Attr* getURIAttr();
	virtual void setId($String* id);
	virtual $String* toString() override;
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

#endif // _com_sun_org_apache_xml_internal_security_keys_content_KeyInfoReference_h_