#include <com/sun/org/apache/xml/internal/security/utils/RFC2253Parser.h>

#include <java/io/IOException.h>
#include <java/io/StringReader.h>
#include <java/lang/Byte.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef DN

using $IOException = ::java::io::IOException;
using $StringReader = ::java::io::StringReader;
using $Byte = ::java::lang::Byte;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $RuntimeException = ::java::lang::RuntimeException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$MethodInfo _RFC2253Parser_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RFC2253Parser::*)()>(&RFC2253Parser::init$))},
	{"changeLess32toRFC", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&RFC2253Parser::changeLess32toRFC)), "java.io.IOException"},
	{"changeLess32toXML", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&RFC2253Parser::changeLess32toXML)), "java.io.IOException"},
	{"changeWStoRFC", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&RFC2253Parser::changeWStoRFC))},
	{"changeWStoXML", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&RFC2253Parser::changeWStoXML)), "java.io.IOException"},
	{"countQuotes", "(Ljava/lang/String;II)I", nullptr, $PRIVATE | $STATIC, $method(static_cast<int32_t(*)($String*,int32_t,int32_t)>(&RFC2253Parser::countQuotes))},
	{"normalize", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&RFC2253Parser::normalize))},
	{"normalize", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*,bool)>(&RFC2253Parser::normalize))},
	{"normalizeAT", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&RFC2253Parser::normalizeAT))},
	{"normalizeV", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,bool)>(&RFC2253Parser::normalizeV)), "java.io.IOException"},
	{"parseATAV", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,bool)>(&RFC2253Parser::parseATAV)), "java.io.IOException"},
	{"parseRDN", "(Ljava/lang/String;Z)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,bool)>(&RFC2253Parser::parseRDN)), "java.io.IOException"},
	{"removeWSandReplace", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,$String*,$String*)>(&RFC2253Parser::removeWSandReplace))},
	{"removeWhiteSpace", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*,$String*)>(&RFC2253Parser::removeWhiteSpace))},
	{"rfc2253toXMLdsig", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&RFC2253Parser::rfc2253toXMLdsig))},
	{"rfctoXML", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&RFC2253Parser::rfctoXML))},
	{"semicolonToComma", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&RFC2253Parser::semicolonToComma))},
	{"trim", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&RFC2253Parser::trim))},
	{"xmldsigtoRFC2253", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&RFC2253Parser::xmldsigtoRFC2253))},
	{"xmltoRFC", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $STATIC, $method(static_cast<$String*(*)($String*)>(&RFC2253Parser::xmltoRFC))},
	{}
};

$ClassInfo _RFC2253Parser_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.RFC2253Parser",
	"java.lang.Object",
	nullptr,
	nullptr,
	_RFC2253Parser_MethodInfo_
};

$Object* allocate$RFC2253Parser($Class* clazz) {
	return $of($alloc(RFC2253Parser));
}

void RFC2253Parser::init$() {
}

$String* RFC2253Parser::rfc2253toXMLdsig($String* dn) {
	$var($String, normalized, normalize(dn, true));
	return rfctoXML(normalized);
}

$String* RFC2253Parser::xmldsigtoRFC2253($String* dn) {
	$var($String, normalized, normalize(dn, false));
	return xmltoRFC(normalized);
}

$String* RFC2253Parser::normalize($String* dn) {
	return normalize(dn, true);
}

$String* RFC2253Parser::normalize($String* dn, bool toXml) {
	if (dn == nullptr || $nc(dn)->isEmpty()) {
		return ""_s;
	}
	try {
		$var($String, DN, semicolonToComma(dn));
		$var($StringBuilder, sb, $new($StringBuilder));
		int32_t i = 0;
		int32_t l = 0;
		int32_t k = 0;
		for (int32_t j = 0; (k = $nc(DN)->indexOf((int32_t)u',', j)) >= 0; j = k + 1) {
			l += countQuotes(DN, j, k);
			if (k > 0 && DN->charAt(k - 1) != u'\\' && (l % 2) == 0) {
				sb->append($(parseRDN($($(DN->substring(i, k))->trim()), toXml)))->append(u',');
				i = k + 1;
				l = 0;
			}
		}
		sb->append($(parseRDN($(trim($($nc(DN)->substring(i)))), toXml)));
		return sb->toString();
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		return dn;
	}
	$shouldNotReachHere();
}

$String* RFC2253Parser::parseRDN($String* str, bool toXml) {
	$var($StringBuilder, sb, $new($StringBuilder));
	int32_t i = 0;
	int32_t l = 0;
	int32_t k = 0;
	for (int32_t j = 0; (k = $nc(str)->indexOf((int32_t)u'+', j)) >= 0; j = k + 1) {
		l += countQuotes(str, j, k);
		if (k > 0 && str->charAt(k - 1) != u'\\' && (l % 2) == 0) {
			sb->append($(parseATAV($(trim($(str->substring(i, k)))), toXml)))->append(u'+');
			i = k + 1;
			l = 0;
		}
	}
	sb->append($(parseATAV($(trim($($nc(str)->substring(i)))), toXml)));
	return sb->toString();
}

$String* RFC2253Parser::parseATAV($String* str, bool toXml) {
	int32_t i = $nc(str)->indexOf((int32_t)u'=');
	if (i == -1 || i > 0 && str->charAt(i - 1) == u'\\') {
		return str;
	}
	$var($String, attrType, normalizeAT($(str->substring(0, i))));
	$var($String, attrValue, nullptr);
	bool var$0 = $nc(attrType)->charAt(0) >= u'0';
	if (var$0 && attrType->charAt(0) <= u'9') {
		$assign(attrValue, str->substring(i + 1));
	} else {
		$assign(attrValue, normalizeV($(str->substring(i + 1)), toXml));
	}
	return $str({attrType, "="_s, attrValue});
}

$String* RFC2253Parser::normalizeAT($String* str) {
	$var($String, at, $($nc(str)->toUpperCase())->trim());
	if (at->startsWith("OID"_s)) {
		$assign(at, at->substring(3));
	}
	return at;
}

$String* RFC2253Parser::normalizeV($String* str, bool toXml) {
	$var($String, value, trim(str));
	if ($nc(value)->startsWith("\""_s)) {
		$var($StringBuilder, sb, $new($StringBuilder));
		$var($StringReader, sr, $new($StringReader, $(value->substring(1, value->length() - 1))));
		int32_t i = 0;
		char16_t c = 0;
		while ((i = sr->read()) > -1) {
			c = (char16_t)i;
			if (c == u',' || c == u'=' || c == u'+' || c == u'<' || c == u'>' || c == u'#' || c == u';') {
				sb->append(u'\\');
			}
			sb->append(c);
		}
		$assign(value, trim($(sb->toString())));
	}
	if (toXml) {
		bool var$0 = $nc(value)->length() > 0;
		if (var$0 && value->charAt(0) == u'#') {
			$assign(value, $str({$$str(u'\\'), value}));
		}
	} else if (value->startsWith("\\#"_s)) {
		$assign(value, value->substring(1));
	}
	return value;
}

$String* RFC2253Parser::rfctoXML($String* string) {
	try {
		$var($String, s, changeLess32toXML(string));
		return changeWStoXML(s);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		return string;
	}
	$shouldNotReachHere();
}

$String* RFC2253Parser::xmltoRFC($String* string) {
	try {
		$var($String, s, changeLess32toRFC(string));
		return changeWStoRFC(s);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		return string;
	}
	$shouldNotReachHere();
}

$String* RFC2253Parser::changeLess32toRFC($String* string) {
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($StringReader, sr, $new($StringReader, string));
	int32_t i = 0;
	char16_t c = 0;
	while ((i = sr->read()) > -1) {
		c = (char16_t)i;
		if (c == u'\\') {
			sb->append(c);
			char16_t c1 = (char16_t)sr->read();
			char16_t c2 = (char16_t)sr->read();
			if ((c1 >= 48 && c1 <= 57 || c1 >= 65 && c1 <= 70 || c1 >= 97 && c1 <= 102) && (c2 >= 48 && c2 <= 57 || c2 >= 65 && c2 <= 70 || c2 >= 97 && c2 <= 102)) {
				try {
					char16_t ch = (char16_t)$Byte::parseByte($$str({""_s, $$str(c1), $$str(c2)}), 16);
					sb->append(ch);
				} catch ($NumberFormatException&) {
					$var($NumberFormatException, ex, $catch());
					$throwNew($IOException, static_cast<$Throwable*>(ex));
				}
			} else {
				sb->append(c1);
				sb->append(c2);
			}
		} else {
			sb->append(c);
		}
	}
	return sb->toString();
}

$String* RFC2253Parser::changeLess32toXML($String* string) {
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($StringReader, sr, $new($StringReader, string));
	int32_t i = 0;
	while ((i = sr->read()) > -1) {
		if (i < 32) {
			sb->append(u'\\');
			sb->append($($Integer::toHexString(i)));
		} else {
			sb->append((char16_t)i);
		}
	}
	return sb->toString();
}

$String* RFC2253Parser::changeWStoXML($String* string) {
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($StringReader, sr, $new($StringReader, string));
	int32_t i = 0;
	char16_t c = 0;
	while ((i = sr->read()) > -1) {
		c = (char16_t)i;
		if (c == u'\\') {
			char16_t c1 = (char16_t)sr->read();
			if (c1 == u' ') {
				sb->append(u'\\');
				$var($String, s, "20"_s);
				sb->append(s);
			} else {
				sb->append(u'\\');
				sb->append(c1);
			}
		} else {
			sb->append(c);
		}
	}
	return sb->toString();
}

$String* RFC2253Parser::changeWStoRFC($String* string) {
	$var($StringBuilder, sb, $new($StringBuilder));
	int32_t i = 0;
	int32_t k = 0;
	for (int32_t j = 0; (k = $nc(string)->indexOf("\\20"_s, j)) >= 0; j = k + 3) {
		sb->append($(trim($(string->substring(i, k)))))->append("\\ "_s);
		i = k + 3;
	}
	sb->append($($nc(string)->substring(i)));
	return sb->toString();
}

$String* RFC2253Parser::semicolonToComma($String* str) {
	return removeWSandReplace(str, ";"_s, ","_s);
}

$String* RFC2253Parser::removeWhiteSpace($String* str, $String* symbol) {
	return removeWSandReplace(str, symbol, symbol);
}

$String* RFC2253Parser::removeWSandReplace($String* str, $String* symbol, $String* replace) {
	$var($StringBuilder, sb, $new($StringBuilder));
	int32_t i = 0;
	int32_t l = 0;
	int32_t k = 0;
	for (int32_t j = 0; (k = $nc(str)->indexOf(symbol, j)) >= 0; j = k + 1) {
		l += countQuotes(str, j, k);
		if (k > 0 && str->charAt(k - 1) != u'\\' && (l % 2) == 0) {
			sb->append($(trim($(str->substring(i, k)))))->append(replace);
			i = k + 1;
			l = 0;
		}
	}
	sb->append($(trim($($nc(str)->substring(i)))));
	return sb->toString();
}

int32_t RFC2253Parser::countQuotes($String* s, int32_t i, int32_t j) {
	int32_t k = 0;
	for (int32_t l = i; l < j; ++l) {
		if ($nc(s)->charAt(l) == u'\"') {
			++k;
		}
	}
	return k;
}

$String* RFC2253Parser::trim($String* str) {
	$var($String, trimed, $nc(str)->trim());
	int32_t var$0 = str->indexOf(trimed);
	int32_t i = var$0 + trimed->length();
	bool var$3 = str->length() > i;
	bool var$2 = var$3 && trimed->endsWith("\\"_s);
	bool var$1 = var$2 && !trimed->endsWith("\\\\"_s);
	if (var$1 && str->charAt(i) == u' ') {
		$assign(trimed, $str({trimed, " "_s}));
	}
	return trimed;
}

RFC2253Parser::RFC2253Parser() {
}

$Class* RFC2253Parser::load$($String* name, bool initialize) {
	$loadClass(RFC2253Parser, name, initialize, &_RFC2253Parser_ClassInfo_, allocate$RFC2253Parser);
	return class$;
}

$Class* RFC2253Parser::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com