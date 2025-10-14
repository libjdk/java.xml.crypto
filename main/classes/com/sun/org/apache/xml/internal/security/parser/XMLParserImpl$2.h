#ifndef _com_sun_org_apache_xml_internal_security_parser_XMLParserImpl$2_h_
#define _com_sun_org_apache_xml_internal_security_parser_XMLParserImpl$2_h_
//$ class com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$2
//$ extends java.security.PrivilegedAction

#include <java/security/PrivilegedAction.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace parser {

class XMLParserImpl$2 : public ::java::security::PrivilegedAction {
	$class(XMLParserImpl$2, $NO_CLASS_INIT, ::java::security::PrivilegedAction)
public:
	XMLParserImpl$2();
	void init$($Class* val$clazz);
	virtual $Object* run() override;
	$Class* val$clazz = nullptr;
};

							} // parser
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_parser_XMLParserImpl$2_h_