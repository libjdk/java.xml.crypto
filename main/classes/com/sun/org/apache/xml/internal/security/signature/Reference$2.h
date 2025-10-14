#ifndef _com_sun_org_apache_xml_internal_security_signature_Reference$2_h_
#define _com_sun_org_apache_xml_internal_security_signature_Reference$2_h_
//$ class com.sun.org.apache.xml.internal.security.signature.Reference$2
//$ extends com.sun.org.apache.xml.internal.security.signature.reference.ReferenceNodeSetData

#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceNodeSetData.h>

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
namespace java {
	namespace util {
		class Iterator;
		class Set;
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

class Reference$2 : public ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceNodeSetData {
	$class(Reference$2, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceNodeSetData)
public:
	Reference$2();
	void init$(::com::sun::org::apache::xml::internal::security::signature::Reference* this$0, ::java::util::Set* val$s);
	virtual ::java::util::Iterator* iterator() override;
	::com::sun::org::apache::xml::internal::security::signature::Reference* this$0 = nullptr;
	::java::util::Set* val$s = nullptr;
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_signature_Reference$2_h_