#ifndef _com_sun_org_apache_xml_internal_security_signature_reference_ReferenceOctetStreamData_h_
#define _com_sun_org_apache_xml_internal_security_signature_reference_ReferenceOctetStreamData_h_
//$ class com.sun.org.apache.xml.internal.security.signature.reference.ReferenceOctetStreamData
//$ extends com.sun.org.apache.xml.internal.security.signature.reference.ReferenceData

#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceData.h>

namespace java {
	namespace io {
		class InputStream;
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

class ReferenceOctetStreamData : public ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceData {
	$class(ReferenceOctetStreamData, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceData)
public:
	ReferenceOctetStreamData();
	void init$(::java::io::InputStream* octetStream);
	void init$(::java::io::InputStream* octetStream, $String* uri, $String* mimeType);
	virtual $String* getMimeType();
	virtual ::java::io::InputStream* getOctetStream();
	virtual $String* getURI();
	::java::io::InputStream* octetStream = nullptr;
	$String* uri = nullptr;
	$String* mimeType = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_security_signature_reference_ReferenceOctetStreamData_h_