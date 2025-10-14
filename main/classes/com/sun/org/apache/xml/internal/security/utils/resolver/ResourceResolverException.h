#ifndef _com_sun_org_apache_xml_internal_security_utils_resolver_ResourceResolverException_h_
#define _com_sun_org_apache_xml_internal_security_utils_resolver_ResourceResolverException_h_
//$ class com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException
//$ extends com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <java/lang/Array.h>

namespace java {
	namespace lang {
		class Exception;
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

class ResourceResolverException : public ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException {
	$class(ResourceResolverException, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException)
public:
	ResourceResolverException();
	void init$($String* msgID, $String* uri, $String* baseURI);
	void init$($String* msgID, $ObjectArray* exArgs, $String* uri, $String* baseURI);
	void init$(::java::lang::Exception* originalException, $String* uri, $String* baseURI, $String* msgID);
	void init$($String* msgID, ::java::lang::Exception* originalException, $String* uri, $String* baseURI);
	void init$(::java::lang::Exception* originalException, $String* uri, $String* baseURI, $String* msgID, $ObjectArray* exArgs);
	void init$($String* msgID, $ObjectArray* exArgs, ::java::lang::Exception* originalException, $String* uri, $String* baseURI);
	virtual $String* getURI();
	virtual $String* getbaseURI();
	using ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException::printStackTrace;
	virtual void setURI($String* uri);
	virtual void setbaseURI($String* baseURI);
	static const int64_t serialVersionUID = (int64_t)1;
	$String* uri = nullptr;
	$String* baseURI = nullptr;
	ResourceResolverException(const ResourceResolverException& e);
	ResourceResolverException wrapper$();
	virtual void throwWrapper$() override;
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

#endif // _com_sun_org_apache_xml_internal_security_utils_resolver_ResourceResolverException_h_