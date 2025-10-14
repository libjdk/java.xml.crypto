#ifndef _com_sun_org_apache_xml_internal_security_utils_Signature11ElementProxy_h_
#define _com_sun_org_apache_xml_internal_security_utils_Signature11ElementProxy_h_
//$ class com.sun.org.apache.xml.internal.security.utils.Signature11ElementProxy
//$ extends com.sun.org.apache.xml.internal.security.utils.ElementProxy

#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>

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
							namespace utils {

class Signature11ElementProxy : public ::com::sun::org::apache::xml::internal::security::utils::ElementProxy {
	$class(Signature11ElementProxy, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::ElementProxy)
public:
	Signature11ElementProxy();
	void init$();
	void init$(::org::w3c::dom::Document* doc);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual $String* getBaseNamespace() override;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_utils_Signature11ElementProxy_h_