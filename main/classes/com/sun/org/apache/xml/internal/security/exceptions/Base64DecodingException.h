#ifndef _com_sun_org_apache_xml_internal_security_exceptions_Base64DecodingException_h_
#define _com_sun_org_apache_xml_internal_security_exceptions_Base64DecodingException_h_
//$ class com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException
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
							namespace exceptions {

class Base64DecodingException : public ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException {
	$class(Base64DecodingException, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException)
public:
	Base64DecodingException();
	void init$();
	void init$($String* msgID);
	void init$($String* msgID, $ObjectArray* exArgs);
	void init$(::java::lang::Exception* originalException, $String* msgID);
	void init$($String* msgID, ::java::lang::Exception* originalException);
	void init$(::java::lang::Exception* originalException, $String* msgID, $ObjectArray* exArgs);
	void init$($String* msgID, $ObjectArray* exArgs, ::java::lang::Exception* originalException);
	using ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException::printStackTrace;
	static const int64_t serialVersionUID = (int64_t)1;
	Base64DecodingException(const Base64DecodingException& e);
	Base64DecodingException wrapper$();
	virtual void throwWrapper$() override;
};

							} // exceptions
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_exceptions_Base64DecodingException_h_