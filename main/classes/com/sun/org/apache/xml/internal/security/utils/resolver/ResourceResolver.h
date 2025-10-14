#ifndef _com_sun_org_apache_xml_internal_security_utils_resolver_ResourceResolver_h_
#define _com_sun_org_apache_xml_internal_security_utils_resolver_ResourceResolver_h_
//$ class com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
									class ResourceResolverSpi;
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
	namespace util {
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
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

class ResourceResolver : public ::java::lang::Object {
	$class(ResourceResolver, 0, ::java::lang::Object)
public:
	ResourceResolver();
	void init$();
	static void register$($String* className);
	static void register$(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi* resourceResolverSpi, bool start);
	static void registerAtStart($String* className);
	static void registerClassNames(::java::util::List* classNames);
	static void registerDefaultResolvers();
	static ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* resolve(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context);
	static ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* resolve(::java::util::List* individualResolvers, ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext* context);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static ::java::util::List* resolverList;
	static ::java::util::concurrent::atomic::AtomicBoolean* defaultResolversAdded;
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

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_utils_resolver_ResourceResolver_h_