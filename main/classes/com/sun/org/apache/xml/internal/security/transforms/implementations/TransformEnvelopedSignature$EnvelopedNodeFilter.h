#ifndef _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformEnvelopedSignature$EnvelopedNodeFilter_h_
#define _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformEnvelopedSignature$EnvelopedNodeFilter_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.implementations.TransformEnvelopedSignature$EnvelopedNodeFilter
//$ extends com.sun.org.apache.xml.internal.security.signature.NodeFilter

#include <com/sun/org/apache/xml/internal/security/signature/NodeFilter.h>

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
							namespace transforms {
								namespace implementations {

class TransformEnvelopedSignature$EnvelopedNodeFilter : public ::com::sun::org::apache::xml::internal::security::signature::NodeFilter {
	$class(TransformEnvelopedSignature$EnvelopedNodeFilter, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::signature::NodeFilter)
public:
	TransformEnvelopedSignature$EnvelopedNodeFilter();
	void init$(::org::w3c::dom::Node* n);
	virtual int32_t isNodeInclude(::org::w3c::dom::Node* n) override;
	virtual int32_t isNodeIncludeDO(::org::w3c::dom::Node* n, int32_t level) override;
	::org::w3c::dom::Node* exclude = nullptr;
};

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_transforms_implementations_TransformEnvelopedSignature$EnvelopedNodeFilter_h_