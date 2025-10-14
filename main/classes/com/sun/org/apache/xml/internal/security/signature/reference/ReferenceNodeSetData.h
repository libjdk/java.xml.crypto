#ifndef _com_sun_org_apache_xml_internal_security_signature_reference_ReferenceNodeSetData_h_
#define _com_sun_org_apache_xml_internal_security_signature_reference_ReferenceNodeSetData_h_
//$ interface com.sun.org.apache.xml.internal.security.signature.reference.ReferenceNodeSetData
//$ extends com.sun.org.apache.xml.internal.security.signature.reference.ReferenceData

#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceData.h>

namespace java {
	namespace util {
		class Iterator;
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
								namespace reference {

class ReferenceNodeSetData : public ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceData {
	$interface(ReferenceNodeSetData, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceData)
public:
	virtual ::java::util::Iterator* iterator() {return nullptr;}
};

								} // reference
							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_signature_reference_ReferenceNodeSetData_h_