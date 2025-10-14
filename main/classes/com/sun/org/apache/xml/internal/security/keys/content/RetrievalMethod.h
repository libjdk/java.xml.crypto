#ifndef _com_sun_org_apache_xml_internal_security_keys_content_RetrievalMethod_h_
#define _com_sun_org_apache_xml_internal_security_keys_content_RetrievalMethod_h_
//$ class com.sun.org.apache.xml.internal.security.keys.content.RetrievalMethod
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy
//$ implements com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent

#include <com/sun/org/apache/xml/internal/security/keys/content/KeyInfoContent.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>

#pragma push_macro("TYPE_DSA")
#undef TYPE_DSA
#pragma push_macro("TYPE_MGMT")
#undef TYPE_MGMT
#pragma push_macro("TYPE_PGP")
#undef TYPE_PGP
#pragma push_macro("TYPE_RAWX509")
#undef TYPE_RAWX509
#pragma push_macro("TYPE_RSA")
#undef TYPE_RSA
#pragma push_macro("TYPE_SPKI")
#undef TYPE_SPKI
#pragma push_macro("TYPE_X509")
#undef TYPE_X509
#pragma push_macro("URI")
#undef URI

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								class Transforms;
							}
						}
					}
				}
			}
		}
	}
}
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

class RetrievalMethod : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, public ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent {
	$class(RetrievalMethod, 0, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent)
public:
	RetrievalMethod();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Document* doc, $String* URI, ::com::sun::org::apache::xml::internal::security::transforms::Transforms* transforms, $String* Type);
	virtual $String* getBaseLocalName() override;
	virtual ::com::sun::org::apache::xml::internal::security::transforms::Transforms* getTransforms();
	virtual $String* getType();
	virtual $String* getURI();
	virtual ::org::w3c::dom::Attr* getURIAttr();
	virtual $String* toString() override;
	static $String* TYPE_DSA;
	static $String* TYPE_RSA;
	static $String* TYPE_PGP;
	static $String* TYPE_SPKI;
	static $String* TYPE_MGMT;
	static $String* TYPE_X509;
	static $String* TYPE_RAWX509;
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

#pragma pop_macro("TYPE_DSA")
#pragma pop_macro("TYPE_MGMT")
#pragma pop_macro("TYPE_PGP")
#pragma pop_macro("TYPE_RAWX509")
#pragma pop_macro("TYPE_RSA")
#pragma pop_macro("TYPE_SPKI")
#pragma pop_macro("TYPE_X509")
#pragma pop_macro("URI")

#endif // _com_sun_org_apache_xml_internal_security_keys_content_RetrievalMethod_h_