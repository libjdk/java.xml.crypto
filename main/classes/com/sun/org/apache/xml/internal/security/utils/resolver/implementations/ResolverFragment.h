#ifndef _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverFragment_h_
#define _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverFragment_h_
//$ class com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverFragment
//$ extends com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi

#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>

#pragma push_macro("LOG")
#undef LOG

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
namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {
					class Logger;
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
									namespace implementations {

class ResolverFragment : public ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi {
	$class(ResolverFragment, 0, ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi)
public:
	ResolverFragment();
	void init$();
	virtual bool engineCanResolveURI(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context) override;
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* engineResolveURI(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context) override;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
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

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverFragment_h_