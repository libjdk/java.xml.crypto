#ifndef _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverXPointer_h_
#define _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverXPointer_h_
//$ class com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverXPointer
//$ extends com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi

#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>

#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("XP")
#undef XP
#pragma push_macro("XP_LENGTH")
#undef XP_LENGTH

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

class ResolverXPointer : public ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi {
	$class(ResolverXPointer, 0, ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi)
public:
	ResolverXPointer();
	void init$();
	virtual bool engineCanResolveURI(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context) override;
	virtual ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* engineResolveURI(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context) override;
	static $String* getXPointerId($String* uri);
	static bool isXPointerId($String* uri);
	static bool isXPointerSlash($String* uri);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static $String* XP;
	static int32_t XP_LENGTH;
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
#pragma pop_macro("XP")
#pragma pop_macro("XP_LENGTH")

#endif // _com_sun_org_apache_xml_internal_security_utils_resolver_implementations_ResolverXPointer_h_