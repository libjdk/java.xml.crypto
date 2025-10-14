#ifndef _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverAnonymous_h_
#define _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverAnonymous_h_
//$ class com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverAnonymous
//$ extends com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi

#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								class XMLSignatureInput;
							}
						}
					}
				}
			}
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
							namespace utils {
								namespace resolver {
									class ResourceResolverContext;
								}
							}
						}
					}
				}
			}
		}
	}
}
namespace java {
	namespace nio {
		namespace file {
			class Path;
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
							namespace utils {
								namespace resolver {
									namespace implementations {

class ResolverAnonymous : public ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi {
	$class(ResolverAnonymous, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi)
public:
	ResolverAnonymous();
	void init$($String* filename);
	void init$(::java::nio::file::Path* resourcePath);
	virtual bool engineCanResolveURI(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context) override;
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* engineResolveURI(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context) override;
	::java::nio::file::Path* resourcePath = nullptr;
};

									} // implementations
								} // resolver
							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverAnonymous_h_