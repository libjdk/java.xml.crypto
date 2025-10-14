#ifndef _com_sun_org_apache_xml_internal_security_signature_reference_ReferenceSubTreeData_h_
#define _com_sun_org_apache_xml_internal_security_signature_reference_ReferenceSubTreeData_h_
//$ class com.sun.org.apache.xml.internal.security.signature.reference.ReferenceSubTreeData
//$ extends com.sun.org.apache.xml.internal.security.signature.reference.ReferenceNodeSetData

#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceNodeSetData.h>

namespace java {
	namespace util {
		class Iterator;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
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
								namespace reference {

class ReferenceSubTreeData : public ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceNodeSetData {
	$class(ReferenceSubTreeData, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceNodeSetData)
public:
	ReferenceSubTreeData();
	void init$(::org::w3c::dom::Node* root, bool excludeComments);
	virtual bool excludeComments();
	virtual ::org::w3c::dom::Node* getRoot();
	virtual ::java::util::Iterator* iterator() override;
	bool excludeComments$ = false;
	::org::w3c::dom::Node* root = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_security_signature_reference_ReferenceSubTreeData_h_