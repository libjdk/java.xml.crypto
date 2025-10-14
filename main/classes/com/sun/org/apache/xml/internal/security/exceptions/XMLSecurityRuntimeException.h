#ifndef _com_sun_org_apache_xml_internal_security_exceptions_XMLSecurityRuntimeException_h_
#define _com_sun_org_apache_xml_internal_security_exceptions_XMLSecurityRuntimeException_h_
//$ class com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityRuntimeException
//$ extends java.lang.RuntimeException

#include <java/lang/Array.h>
#include <java/lang/RuntimeException.h>

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

class XMLSecurityRuntimeException : public ::java::lang::RuntimeException {
	$class(XMLSecurityRuntimeException, $NO_CLASS_INIT, ::java::lang::RuntimeException)
public:
	XMLSecurityRuntimeException();
	void init$();
	void init$($String* msgID);
	void init$($String* msgID, $ObjectArray* exArgs);
	void init$(::java::lang::Exception* originalException);
	void init$($String* msgID, ::java::lang::Exception* originalException);
	void init$($String* msgID, $ObjectArray* exArgs, ::java::lang::Exception* originalException);
	virtual $String* getMsgID();
	virtual ::java::lang::Exception* getOriginalException();
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)1;
	$String* msgID = nullptr;
	XMLSecurityRuntimeException(const XMLSecurityRuntimeException& e);
	XMLSecurityRuntimeException wrapper$();
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

#endif // _com_sun_org_apache_xml_internal_security_exceptions_XMLSecurityRuntimeException_h_