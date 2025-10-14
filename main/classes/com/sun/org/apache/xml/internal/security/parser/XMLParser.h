#ifndef _com_sun_org_apache_xml_internal_security_parser_XMLParser_h_
#define _com_sun_org_apache_xml_internal_security_parser_XMLParser_h_
//$ interface com.sun.org.apache.xml.internal.security.parser.XMLParser
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
		}
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

class XMLParser : public ::java::lang::Object {
	$interface(XMLParser, $NO_CLASS_INIT, ::java::lang::Object)
public:
	virtual ::org::w3c::dom::Document* parse(::java::io::InputStream* inputStream, bool disallowDocTypeDeclarations) {return nullptr;}
};

							} // parser
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_parser_XMLParser_h_