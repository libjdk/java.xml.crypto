#ifndef _com_sun_org_apache_xml_internal_security_algorithms_Algorithm_h_
#define _com_sun_org_apache_xml_internal_security_algorithms_Algorithm_h_
//$ class com.sun.org.apache.xml.internal.security.algorithms.Algorithm
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy

#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>

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
							namespace algorithms {

class Algorithm : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy {
	$class(Algorithm, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy)
public:
	Algorithm();
	void init$(::org::w3c::dom::Document* doc, $String* algorithmURI);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual $String* getAlgorithmURI();
	virtual void setAlgorithmURI($String* algorithmURI);
};

							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_algorithms_Algorithm_h_