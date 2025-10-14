#ifndef _com_sun_org_apache_xml_internal_security_c14n_implementations_Canonicalizer20010315WithComments_h_
#define _com_sun_org_apache_xml_internal_security_c14n_implementations_Canonicalizer20010315WithComments_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315WithComments
//$ extends com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315

#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {

class Canonicalizer20010315WithComments : public ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315 {
	$class(Canonicalizer20010315WithComments, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315)
public:
	Canonicalizer20010315WithComments();
	using ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315::engineCanonicalizeXPathNodeSet;
	using ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315::engineCanonicalizeSubTree;
	using ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315::engineCanonicalize;
	void init$();
	virtual $String* engineGetURI() override;
};

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_c14n_implementations_Canonicalizer20010315WithComments_h_