#ifndef _com_sun_org_apache_xml_internal_security_parser_XMLParserImpl_h_
#define _com_sun_org_apache_xml_internal_security_parser_XMLParserImpl_h_
//$ class com.sun.org.apache.xml.internal.security.parser.XMLParserImpl
//$ extends com.sun.org.apache.xml.internal.security.parser.XMLParser

#include <com/sun/org/apache/xml/internal/security/parser/XMLParser.h>

#pragma push_macro("DOCUMENT_BUILDERS")
#undef DOCUMENT_BUILDERS
#pragma push_macro("DOCUMENT_BUILDERS_DISALLOW_DOCTYPE")
#undef DOCUMENT_BUILDERS_DISALLOW_DOCTYPE

namespace java {
	namespace io {
		class InputStream;
	}
}
namespace java {
	namespace lang {
		class ClassLoader;
		class Integer;
	}
}
namespace java {
	namespace util {
		class Map;
		class Queue;
	}
}
namespace javax {
	namespace xml {
		namespace parsers {
			class DocumentBuilder;
		}
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

class XMLParserImpl : public ::com::sun::org::apache::xml::internal::security::parser::XMLParser {
	$class(XMLParserImpl, 0, ::com::sun::org::apache::xml::internal::security::parser::XMLParser)
public:
	XMLParserImpl();
	void init$();
	static ::javax::xml::parsers::DocumentBuilder* createDocumentBuilder(bool disallowDocTypeDeclarations);
	static ::java::lang::ClassLoader* getClassLoader($Class* clazz);
	static ::java::lang::ClassLoader* getContextClassLoader();
	static ::javax::xml::parsers::DocumentBuilder* getDocumentBuilder(bool disallowDocTypeDeclarations, ::java::util::Queue* queue);
	static ::java::util::Queue* getDocumentBuilderQueue(bool disallowDocTypeDeclarations, ::java::lang::ClassLoader* loader);
	static ::java::lang::Integer* lambda$static$0();
	virtual ::org::w3c::dom::Document* parse(::java::io::InputStream* inputStream, bool disallowDocTypeDeclarations) override;
	static void repoolDocumentBuilder(::javax::xml::parsers::DocumentBuilder* db, ::java::util::Queue* queue);
	static int32_t parserPoolSize;
	static ::java::util::Map* DOCUMENT_BUILDERS;
	static ::java::util::Map* DOCUMENT_BUILDERS_DISALLOW_DOCTYPE;
};

							} // parser
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("DOCUMENT_BUILDERS")
#pragma pop_macro("DOCUMENT_BUILDERS_DISALLOW_DOCTYPE")

#endif // _com_sun_org_apache_xml_internal_security_parser_XMLParserImpl_h_