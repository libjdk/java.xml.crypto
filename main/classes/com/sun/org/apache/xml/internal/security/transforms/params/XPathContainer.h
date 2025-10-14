#ifndef _com_sun_org_apache_xml_internal_security_transforms_params_XPathContainer_h_
#define _com_sun_org_apache_xml_internal_security_transforms_params_XPathContainer_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.params.XPathContainer
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy
//$ implements com.sun.org.apache.xml.internal.security.transforms.TransformParam

#include <com/sun/org/apache/xml/internal/security/transforms/TransformParam.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>

namespace org {
	namespace w3c {
		namespace dom {
			class Document;
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
							namespace transforms {
								namespace params {

class XPathContainer : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, public ::com::sun::org::apache::xml::internal::security::transforms::TransformParam {
	$class(XPathContainer, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy, ::com::sun::org::apache::xml::internal::security::transforms::TransformParam)
public:
	XPathContainer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Document* doc);
	virtual $String* getBaseLocalName() override;
	virtual $String* getXPath();
	virtual void setXPath($String* xpath);
	virtual $String* toString() override;
};

								} // params
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_transforms_params_XPathContainer_h_