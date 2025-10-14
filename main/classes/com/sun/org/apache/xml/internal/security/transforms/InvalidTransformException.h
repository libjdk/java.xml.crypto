#ifndef _com_sun_org_apache_xml_internal_security_transforms_InvalidTransformException_h_
#define _com_sun_org_apache_xml_internal_security_transforms_InvalidTransformException_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.InvalidTransformException
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
							namespace transforms {

class InvalidTransformException : public ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException {
	$class(InvalidTransformException, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException)
public:
	InvalidTransformException();
	void init$();
	void init$($String* msgId);
	void init$($String* msgId, $ObjectArray* exArgs);
	void init$(::java::lang::Exception* originalException, $String* msgId);
	void init$($String* msgID, ::java::lang::Exception* originalException);
	void init$(::java::lang::Exception* originalException, $String* msgId, $ObjectArray* exArgs);
	void init$($String* msgID, $ObjectArray* exArgs, ::java::lang::Exception* originalException);
	using ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException::printStackTrace;
	static const int64_t serialVersionUID = (int64_t)1;
	InvalidTransformException(const InvalidTransformException& e);
	InvalidTransformException wrapper$();
	virtual void throwWrapper$() override;
};

							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_transforms_InvalidTransformException_h_