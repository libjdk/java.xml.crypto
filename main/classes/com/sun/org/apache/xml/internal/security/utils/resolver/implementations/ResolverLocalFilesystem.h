#ifndef _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverLocalFilesystem_h_
#define _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverLocalFilesystem_h_
//$ class com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverLocalFilesystem
//$ extends com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi

#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>

#pragma push_macro("FILE_URI_LENGTH")
#undef FILE_URI_LENGTH
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
namespace java {
	namespace net {
		class URI;
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

class ResolverLocalFilesystem : public ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi {
	$class(ResolverLocalFilesystem, 0, ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi)
public:
	ResolverLocalFilesystem();
	void init$();
	virtual bool engineCanResolveURI(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context) override;
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* engineResolveURI(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context) override;
	static ::java::net::URI* getNewURI($String* uri, $String* baseURI);
	static $String* translateUriToFilename($String* uri);
	static int32_t FILE_URI_LENGTH;
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

#pragma pop_macro("FILE_URI_LENGTH")
#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverLocalFilesystem_h_