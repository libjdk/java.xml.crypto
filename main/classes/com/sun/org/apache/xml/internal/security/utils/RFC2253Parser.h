#ifndef _com_sun_org_apache_xml_internal_security_utils_RFC2253Parser_h_
#define _com_sun_org_apache_xml_internal_security_utils_RFC2253Parser_h_
//$ class com.sun.org.apache.xml.internal.security.utils.RFC2253Parser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

class RFC2253Parser : public ::java::lang::Object {
	$class(RFC2253Parser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	RFC2253Parser();
	void init$();
	static $String* changeLess32toRFC($String* string);
	static $String* changeLess32toXML($String* string);
	static $String* changeWStoRFC($String* string);
	static $String* changeWStoXML($String* string);
	static int32_t countQuotes($String* s, int32_t i, int32_t j);
	static $String* normalize($String* dn);
	static $String* normalize($String* dn, bool toXml);
	static $String* normalizeAT($String* str);
	static $String* normalizeV($String* str, bool toXml);
	static $String* parseATAV($String* str, bool toXml);
	static $String* parseRDN($String* str, bool toXml);
	static $String* removeWSandReplace($String* str, $String* symbol, $String* replace);
	static $String* removeWhiteSpace($String* str, $String* symbol);
	static $String* rfc2253toXMLdsig($String* dn);
	static $String* rfctoXML($String* string);
	static $String* semicolonToComma($String* str);
	static $String* trim($String* str);
	static $String* xmldsigtoRFC2253($String* dn);
	static $String* xmltoRFC($String* string);
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_utils_RFC2253Parser_h_