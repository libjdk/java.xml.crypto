#ifndef _com_sun_org_apache_xml_internal_security_keys_content_KeyValue_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_KeyValue_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.KeyValue
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy
//$ implements com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent

#include <com/sun/org/apache/xml/internal/security/keys/content/KeyInfoContent.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>

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
										class DSAKeyValue;
										class RSAKeyValue;
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

class KeyValue : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, public ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent {
	$class(KeyValue, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent)
public:
	KeyValue();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Document* doc, ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::DSAKeyValue* dsaKeyValue);
	void init$(::org::w3c::dom::Document* doc, ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::RSAKeyValue* rsaKeyValue);
	void init$(::org::w3c::dom::Document* doc, ::org::w3c::dom::Element* unknownKeyValue);
	void init$(::org::w3c::dom::Document* doc, ::java::security::PublicKey* pk);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual $String* getBaseLocalName() override;
	virtual ::java::security::PublicKey* getPublicKey();
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

#endif // _com_sun_org_apache_xml_internal_security_keys_content_KeyValue_h_