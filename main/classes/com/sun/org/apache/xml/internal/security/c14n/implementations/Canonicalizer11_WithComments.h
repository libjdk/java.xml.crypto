#ifndef _com_sun_org_apache_xml_internal_security_c14n_implementations_Canonicalizer11_WithComments_h_
#define _com_sun_org_apache_xml_internal_security_c14n_implementations_Canonicalizer11_WithComments_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer11_WithComments
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

class Canonicalizer11_WithComments : public ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315 {
	$class(Canonicalizer11_WithComments, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315)
public:
	Canonicalizer11_WithComments();
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

#endif // _com_sun_org_apache_xml_internal_security_c14n_implementations_Canonicalizer11_WithComments_h_