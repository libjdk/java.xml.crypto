#ifndef _com_sun_org_apache_xml_internal_security_signature_MissingResourceFailureException_h_
#define _com_sun_org_apache_xml_internal_security_signature_MissingResourceFailureException_h_
//$ class com.sun.org.apache.xml.internal.security.signature.MissingResourceFailureException
//$ extends com.sun.org.apache.xml.internal.security.signature.XMLSignatureException

#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <java/lang/Array.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								class Reference;
							}
						}
					}
				}
			}
		}
	}
}
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

class MissingResourceFailureException : public ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException {
	$class(MissingResourceFailureException, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException)
public:
	MissingResourceFailureException();
	void init$(::com::sun::org::apache::xml::internal::security::signature::Reference* reference, $String* msgID);
	void init$($String* msgID, ::com::sun::org::apache::xml::internal::security::signature::Reference* reference);
	void init$(::com::sun::org::apache::xml::internal::security::signature::Reference* reference, $String* msgID, $ObjectArray* exArgs);
	void init$($String* msgID, $ObjectArray* exArgs, ::com::sun::org::apache::xml::internal::security::signature::Reference* reference);
	void init$(::java::lang::Exception* originalException, ::com::sun::org::apache::xml::internal::security::signature::Reference* reference, $String* msgID);
	void init$($String* msgID, ::java::lang::Exception* originalException, ::com::sun::org::apache::xml::internal::security::signature::Reference* reference);
	void init$(::java::lang::Exception* originalException, ::com::sun::org::apache::xml::internal::security::signature::Reference* reference, $String* msgID, $ObjectArray* exArgs);
	void init$($String* msgID, $ObjectArray* exArgs, ::java::lang::Exception* originalException, ::com::sun::org::apache::xml::internal::security::signature::Reference* reference);
	virtual ::com::sun::org::apache::xml::internal::security::signature::Reference* getReference();
	using ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException::printStackTrace;
	virtual void setReference(::com::sun::org::apache::xml::internal::security::signature::Reference* reference);
	static const int64_t serialVersionUID = (int64_t)1;
	::com::sun::org::apache::xml::internal::security::signature::Reference* uninitializedReference = nullptr;
	MissingResourceFailureException(const MissingResourceFailureException& e);
	MissingResourceFailureException wrapper$();
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

#endif // _com_sun_org_apache_xml_internal_security_signature_MissingResourceFailureException_h_