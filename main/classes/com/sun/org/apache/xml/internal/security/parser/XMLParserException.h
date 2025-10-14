#ifndef _com_sun_org_apache_xml_internal_security_parser_XMLParserException_h_
#define _com_sun_org_apache_xml_internal_security_parser_XMLParserException_h_
//$ class com.sun.org.apache.xml.internal.security.parser.XMLParserException
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
							namespace parser {

class XMLParserException : public ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException {
	$class(XMLParserException, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException)
public:
	XMLParserException();
	void init$();
	void init$($String* msgID);
	void init$($String* msgID, $ObjectArray* exArgs);
	void init$(::java::lang::Exception* originalException, $String* msgID);
	void init$(::java::lang::Exception* originalException, $String* msgID, $ObjectArray* exArgs);
	using ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException::printStackTrace;
	static const int64_t serialVersionUID = (int64_t)1;
	XMLParserException(const XMLParserException& e);
	XMLParserException wrapper$();
	virtual void throwWrapper$() override;
};

							} // parser
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_parser_XMLParserException_h_