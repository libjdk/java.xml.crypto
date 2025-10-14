#ifndef _com_sun_org_apache_xml_internal_security_exceptions_XMLSecurityException_h_
#define _com_sun_org_apache_xml_internal_security_exceptions_XMLSecurityException_h_
//$ class com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException
//$ extends java.lang.Exception

#include <java/lang/Array.h>
#include <java/lang/Exception.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace exceptions {

class XMLSecurityException : public ::java::lang::Exception {
	$class(XMLSecurityException, $NO_CLASS_INIT, ::java::lang::Exception)
public:
	XMLSecurityException();
	void init$();
	void init$($String* msgID);
	void init$($String* msgID, $ObjectArray* exArgs);
	void init$(::java::lang::Exception* originalException);
	void init$(::java::lang::Exception* originalException, $String* msgID);
	void init$($String* msgID, ::java::lang::Exception* originalException);
	void init$(::java::lang::Exception* originalException, $String* msgID, $ObjectArray* exArgs);
	void init$($String* msgID, $ObjectArray* exArgs, ::java::lang::Exception* originalException);
	virtual $String* getMsgID();
	virtual ::java::lang::Exception* getOriginalException();
	using ::java::lang::Exception::printStackTrace;
	virtual void printStackTrace() override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)1;
	$String* msgID = nullptr;
	XMLSecurityException(const XMLSecurityException& e);
	XMLSecurityException wrapper$();
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

#endif // _com_sun_org_apache_xml_internal_security_exceptions_XMLSecurityException_h_