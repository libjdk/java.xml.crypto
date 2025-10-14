#ifndef _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverDirectHTTP_h_
#define _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverDirectHTTP_h_
//$ class com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverDirectHTTP
//$ extends com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi

#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>
#include <java/lang/Array.h>

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
		class URL;
		class URLConnection;
	}
}
namespace java {
	namespace util {
		class Map;
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

class ResolverDirectHTTP : public ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi {
	$class(ResolverDirectHTTP, 0, ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi)
public:
	ResolverDirectHTTP();
	void init$();
	void init$(::java::util::Map* resolverProperties);
	virtual bool engineCanResolveURI(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context) override;
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* engineResolveURI(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context) override;
	static ::java::net::URI* getNewURI($String* uri, $String* baseURI);
	$String* getProperty(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context, $String* propertyName);
	::java::net::URLConnection* openConnection(::java::net::URL* url, ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static $StringArray* properties;
	static const int32_t HttpProxyHost = 0;
	static const int32_t HttpProxyPort = 1;
	static const int32_t HttpProxyUser = 2;
	static const int32_t HttpProxyPass = 3;
	static const int32_t HttpBasicUser = 4;
	static const int32_t HttpBasicPass = 5;
	::java::util::Map* resolverProperties = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverDirectHTTP_h_