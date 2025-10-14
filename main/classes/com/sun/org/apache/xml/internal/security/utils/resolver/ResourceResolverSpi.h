#ifndef _com_sun_org_apache_xml_internal_security_utils_resolver_ResourceResolverSpi_h_
#define _com_sun_org_apache_xml_internal_security_utils_resolver_ResourceResolverSpi_h_
//$ class com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {
								namespace resolver {

class ResourceResolverSpi : public ::java::lang::Object {
	$class(ResourceResolverSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ResourceResolverSpi();
	void init$();
	virtual bool engineCanResolveURI(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context) {return false;}
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* engineResolveURI(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context) {return nullptr;}
};

								} // resolver
							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_utils_resolver_ResourceResolverSpi_h_