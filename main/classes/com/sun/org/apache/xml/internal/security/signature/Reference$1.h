#ifndef _com_sun_org_apache_xml_internal_security_signature_Reference$1_h_
#define _com_sun_org_apache_xml_internal_security_signature_Reference$1_h_
//$ class com.sun.org.apache.xml.internal.security.signature.Reference$1
//$ extends com.sun.org.apache.xml.internal.security.algorithms.Algorithm

#include <com/sun/org/apache/xml/internal/security/algorithms/Algorithm.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								class Reference;
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
							namespace signature {

class Reference$1 : public ::com::sun::org::apache::xml::internal::security::algorithms::Algorithm {
	$class(Reference$1, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::algorithms::Algorithm)
public:
	Reference$1();
	void init$(::com::sun::org::apache::xml::internal::security::signature::Reference* this$0, ::org::w3c::dom::Document* doc, $String* algorithmURI);
	virtual $String* getBaseLocalName() override;
	virtual $String* getBaseNamespace() override;
	::com::sun::org::apache::xml::internal::security::signature::Reference* this$0 = nullptr;
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_signature_Reference$1_h_