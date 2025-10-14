#ifndef _com_sun_org_apache_xml_internal_security_utils_resolver_ResourceResolverContext_h_
#define _com_sun_org_apache_xml_internal_security_utils_resolver_ResourceResolverContext_h_
//$ class com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverContext
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace util {
		class Map;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
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

class ResourceResolverContext : public ::java::lang::Object {
	$class(ResourceResolverContext, $NO_CLASS_INIT, ::java::lang::Object)
public:
	ResourceResolverContext();
	void init$(::org::w3c::dom::Attr* attr, $String* baseUri, bool secureValidation);
	void init$(::org::w3c::dom::Attr* attr, $String* baseUri, bool secureValidation, ::java::util::Map* properties);
	virtual ::java::util::Map* getProperties();
	::java::util::Map* properties = nullptr;
	$String* uriToResolve = nullptr;
	bool secureValidation = false;
	$String* baseUri = nullptr;
	::org::w3c::dom::Attr* attr = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_security_utils_resolver_ResourceResolverContext_h_