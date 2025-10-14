#ifndef _com_sun_org_apache_xml_internal_security_c14n_implementations_Canonicalizer20010315ExclOmitComments_h_
#define _com_sun_org_apache_xml_internal_security_c14n_implementations_Canonicalizer20010315ExclOmitComments_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315ExclOmitComments
//$ extends com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315Excl

#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315Excl.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {

class Canonicalizer20010315ExclOmitComments : public ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315Excl {
	$class(Canonicalizer20010315ExclOmitComments, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315Excl)
public:
	Canonicalizer20010315ExclOmitComments();
	using ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315Excl::engineCanonicalizeSubTree;
	using ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315Excl::engineCanonicalize;
	using ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315Excl::engineCanonicalizeXPathNodeSet;
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

#endif // _com_sun_org_apache_xml_internal_security_c14n_implementations_Canonicalizer20010315ExclOmitComments_h_