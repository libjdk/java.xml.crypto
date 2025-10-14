#ifndef _com_sun_org_apache_xml_internal_security_signature_InvalidDigestValueException_h_
#define _com_sun_org_apache_xml_internal_security_signature_InvalidDigestValueException_h_
//$ class com.sun.org.apache.xml.internal.security.signature.InvalidDigestValueException
//$ extends com.sun.org.apache.xml.internal.security.signature.XMLSignatureException

#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
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
							namespace signature {

class InvalidDigestValueException : public ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException {
	$class(InvalidDigestValueException, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException)
public:
	InvalidDigestValueException();
	void init$();
	void init$($String* msgID);
	void init$($String* msgID, $ObjectArray* exArgs);
	void init$(::java::lang::Exception* originalException, $String* msgID);
	void init$($String* msgID, ::java::lang::Exception* originalException);
	void init$(::java::lang::Exception* originalException, $String* msgID, $ObjectArray* exArgs);
	void init$($String* msgID, $ObjectArray* exArgs, ::java::lang::Exception* originalException);
	using ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException::printStackTrace;
	static const int64_t serialVersionUID = (int64_t)1;
	InvalidDigestValueException(const InvalidDigestValueException& e);
	InvalidDigestValueException wrapper$();
	virtual void throwWrapper$() override;
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_signature_InvalidDigestValueException_h_