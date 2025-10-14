#ifndef _com_sun_org_apache_xml_internal_security_utils_Base64_h_
#define _com_sun_org_apache_xml_internal_security_utils_Base64_h_
//$ class com.sun.org.apache.xml.internal.security.utils.Base64
//$ extends java.lang.Object

#include <java/lang/Array.h>

#pragma push_macro("BASE64DEFAULTLENGTH")
#undef BASE64DEFAULTLENGTH
#pragma push_macro("BASELENGTH")
#undef BASELENGTH
#pragma push_macro("EIGHTBIT")
#undef EIGHTBIT
#pragma push_macro("FOURBYTE")
#undef FOURBYTE
#pragma push_macro("LOOKUPLENGTH")
#undef LOOKUPLENGTH
#pragma push_macro("PAD")
#undef PAD
#pragma push_macro("SIGN")
#undef SIGN
#pragma push_macro("SIXTEENBIT")
#undef SIXTEENBIT
#pragma push_macro("TWENTYFOURBITGROUP")
#undef TWENTYFOURBITGROUP

namespace java {
	namespace io {
		class BufferedReader;
		class InputStream;
		class OutputStream;
	}
}
namespace java {
	namespace math {
		class BigInteger;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
			class Text;
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
							namespace utils {

class Base64 : public ::java::lang::Object {
	$class(Base64, 0, ::java::lang::Object)
public:
	Base64();
	void init$();
	static $bytes* decode(::org::w3c::dom::Element* element);
	static $bytes* decode($bytes* base64);
	static $bytes* decode(::java::io::BufferedReader* reader);
	static $bytes* decode($String* encoded);
	static void decode($String* base64Data, ::java::io::OutputStream* os);
	static void decode($bytes* base64Data, ::java::io::OutputStream* os);
	static void decode($bytes* base64Data, ::java::io::OutputStream* os, int32_t len);
	static void decode(::java::io::InputStream* is, ::java::io::OutputStream* os);
	static ::java::math::BigInteger* decodeBigIntegerFromElement(::org::w3c::dom::Element* element);
	static ::java::math::BigInteger* decodeBigIntegerFromText(::org::w3c::dom::Text* text);
	static $bytes* decodeInternal($bytes* base64Data, int32_t len);
	static $String* encode(::java::math::BigInteger* big);
	static $bytes* encode(::java::math::BigInteger* big, int32_t bitlen);
	static $String* encode($bytes* binaryData);
	static $String* encode($bytes* binaryData, int32_t length);
	static ::org::w3c::dom::Element* encodeToElement(::org::w3c::dom::Document* doc, $String* localName, $bytes* bytes);
	static void fillElementWithBigInteger(::org::w3c::dom::Element* element, ::java::math::BigInteger* biginteger);
	static $bytes* getBytes(::java::math::BigInteger* big, int32_t bitlen);
	static int32_t getBytesInternal($String* s, $bytes* result);
	static bool isPad(int8_t octet);
	static bool isWhiteSpace(int8_t octet);
	static int32_t removeWhiteSpace($bytes* data);
	static const int32_t BASE64DEFAULTLENGTH = 76;
	static const int32_t BASELENGTH = 255;
	static const int32_t LOOKUPLENGTH = 64;
	static const int32_t TWENTYFOURBITGROUP = 24;
	static const int32_t EIGHTBIT = 8;
	static const int32_t SIXTEENBIT = 16;
	static const int32_t FOURBYTE = 4;
	static const int32_t SIGN = (-128);
	static const char16_t PAD = ((char16_t)61);
	static $bytes* base64Alphabet;
	static $chars* lookUpBase64Alphabet;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("BASE64DEFAULTLENGTH")
#pragma pop_macro("BASELENGTH")
#pragma pop_macro("EIGHTBIT")
#pragma pop_macro("FOURBYTE")
#pragma pop_macro("LOOKUPLENGTH")
#pragma pop_macro("PAD")
#pragma pop_macro("SIGN")
#pragma pop_macro("SIXTEENBIT")
#pragma pop_macro("TWENTYFOURBITGROUP")

#endif // _com_sun_org_apache_xml_internal_security_utils_Base64_h_