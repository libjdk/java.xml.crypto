#include <com/sun/org/apache/xml/internal/security/parser/XMLParser.h>

#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Document.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace parser {

$MethodInfo _XMLParser_MethodInfo_[] = {
	{"parse", "(Ljava/io/InputStream;Z)Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.parser.XMLParserException"},
	{}
};

$ClassInfo _XMLParser_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.parser.XMLParser",
	nullptr,
	nullptr,
	nullptr,
	_XMLParser_MethodInfo_
};

$Object* allocate$XMLParser($Class* clazz) {
	return $of($alloc(XMLParser));
}

$Class* XMLParser::load$($String* name, bool initialize) {
	$loadClass(XMLParser, name, initialize, &_XMLParser_ClassInfo_, allocate$XMLParser);
	return class$;
}

$Class* XMLParser::class$ = nullptr;

							} // parser
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com