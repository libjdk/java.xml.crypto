#include <com/sun/org/apache/xml/internal/security/utils/Base64.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/Base64DecodingException.h>
#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>
#include <com/sun/org/apache/xml/internal/security/utils/UnsyncByteArrayOutputStream.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/BufferedReader.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef BASE64DEFAULTLENGTH
#undef BASELENGTH
#undef EIGHTBIT
#undef FOURBYTE
#undef LOOKUPLENGTH
#undef MAX_VALUE
#undef PAD
#undef SIGN
#undef SIXTEENBIT
#undef TEXT_NODE
#undef TWENTYFOURBITGROUP

using $Base64DecodingException = ::com::sun::org::apache::xml::internal::security::exceptions::Base64DecodingException;
using $I18n = ::com::sun::org::apache::xml::internal::security::utils::I18n;
using $UnsyncByteArrayOutputStream = ::com::sun::org::apache::xml::internal::security::utils::UnsyncByteArrayOutputStream;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $BufferedReader = ::java::io::BufferedReader;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $Text = ::org::w3c::dom::Text;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {
$CompoundAttribute _Base64_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$FieldInfo _Base64_FieldInfo_[] = {
	{"BASE64DEFAULTLENGTH", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Base64, BASE64DEFAULTLENGTH)},
	{"BASELENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, BASELENGTH)},
	{"LOOKUPLENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, LOOKUPLENGTH)},
	{"TWENTYFOURBITGROUP", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, TWENTYFOURBITGROUP)},
	{"EIGHTBIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, EIGHTBIT)},
	{"SIXTEENBIT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, SIXTEENBIT)},
	{"FOURBYTE", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, FOURBYTE)},
	{"SIGN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, SIGN)},
	{"PAD", "C", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(Base64, PAD)},
	{"base64Alphabet", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64, base64Alphabet)},
	{"lookUpBase64Alphabet", "[C", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Base64, lookUpBase64Alphabet)},
	{}
};

$MethodInfo _Base64_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Base64::*)()>(&Base64::init$))},
	{"decode", "(Lorg/w3c/dom/Element;)[B", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$bytes*(*)($Element*)>(&Base64::decode)), "com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException"},
	{"decode", "([B)[B", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$bytes*(*)($bytes*)>(&Base64::decode)), "com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException"},
	{"decode", "(Ljava/io/BufferedReader;)[B", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$bytes*(*)($BufferedReader*)>(&Base64::decode)), "java.io.IOException,com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException"},
	{"decode", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$bytes*(*)($String*)>(&Base64::decode)), "com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException"},
	{"decode", "(Ljava/lang/String;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)($String*,$OutputStream*)>(&Base64::decode)), "com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException,java.io.IOException"},
	{"decode", "([BLjava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)($bytes*,$OutputStream*)>(&Base64::decode)), "com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException,java.io.IOException"},
	{"decode", "([BLjava/io/OutputStream;I)V", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<void(*)($bytes*,$OutputStream*,int32_t)>(&Base64::decode)), "com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException,java.io.IOException"},
	{"decode", "(Ljava/io/InputStream;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)($InputStream*,$OutputStream*)>(&Base64::decode)), "com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException,java.io.IOException"},
	{"decodeBigIntegerFromElement", "(Lorg/w3c/dom/Element;)Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$BigInteger*(*)($Element*)>(&Base64::decodeBigIntegerFromElement)), "com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException"},
	{"decodeBigIntegerFromText", "(Lorg/w3c/dom/Text;)Ljava/math/BigInteger;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$BigInteger*(*)($Text*)>(&Base64::decodeBigIntegerFromText)), "com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException"},
	{"decodeInternal", "([BI)[B", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<$bytes*(*)($bytes*,int32_t)>(&Base64::decodeInternal)), "com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException"},
	{"encode", "(Ljava/math/BigInteger;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$String*(*)($BigInteger*)>(&Base64::encode))},
	{"encode", "(Ljava/math/BigInteger;I)[B", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$bytes*(*)($BigInteger*,int32_t)>(&Base64::encode))},
	{"encode", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$String*(*)($bytes*)>(&Base64::encode))},
	{"encode", "([BI)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$String*(*)($bytes*,int32_t)>(&Base64::encode))},
	{"encodeToElement", "(Lorg/w3c/dom/Document;Ljava/lang/String;[B)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$Element*(*)($Document*,$String*,$bytes*)>(&Base64::encodeToElement))},
	{"fillElementWithBigInteger", "(Lorg/w3c/dom/Element;Ljava/math/BigInteger;)V", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<void(*)($Element*,$BigInteger*)>(&Base64::fillElementWithBigInteger))},
	{"getBytes", "(Ljava/math/BigInteger;I)[B", nullptr, $STATIC | $FINAL, $method(static_cast<$bytes*(*)($BigInteger*,int32_t)>(&Base64::getBytes))},
	{"getBytesInternal", "(Ljava/lang/String;[B)I", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<int32_t(*)($String*,$bytes*)>(&Base64::getBytesInternal))},
	{"isPad", "(B)Z", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<bool(*)(int8_t)>(&Base64::isPad))},
	{"isWhiteSpace", "(B)Z", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<bool(*)(int8_t)>(&Base64::isWhiteSpace))},
	{"removeWhiteSpace", "([B)I", nullptr, $PROTECTED | $STATIC | $FINAL, $method(static_cast<int32_t(*)($bytes*)>(&Base64::removeWhiteSpace))},
	{}
};

$ClassInfo _Base64_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.Base64",
	"java.lang.Object",
	nullptr,
	_Base64_FieldInfo_,
	_Base64_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_Base64_Annotations_
};

$Object* allocate$Base64($Class* clazz) {
	return $of($alloc(Base64));
}

$bytes* Base64::base64Alphabet = nullptr;
$chars* Base64::lookUpBase64Alphabet = nullptr;

void Base64::init$() {
}

$bytes* Base64::getBytes($BigInteger* big, int32_t bitlen) {
	$init(Base64);
	$useLocalCurrentObjectStackCache();
	bitlen = ((bitlen + 7) >> 3) << 3;
	if (bitlen < $nc(big)->bitLength()) {
		$throwNew($IllegalArgumentException, $($I18n::translate("utils.Base64.IllegalBitlength"_s)));
	}
	$var($bytes, bigBytes, $nc(big)->toByteArray());
	bool var$0 = big->bitLength() % 8 != 0;
	if (var$0 && big->bitLength() / 8 + 1 == bitlen / 8) {
		return bigBytes;
	}
	int32_t startSrc = 0;
	int32_t bigLen = $nc(bigBytes)->length;
	if (big->bitLength() % 8 == 0) {
		startSrc = 1;
		--bigLen;
	}
	int32_t startDst = bitlen / 8 - bigLen;
	$var($bytes, resizedBytes, $new($bytes, bitlen / 8));
	$System::arraycopy(bigBytes, startSrc, resizedBytes, startDst, bigLen);
	return resizedBytes;
}

$String* Base64::encode($BigInteger* big) {
	$init(Base64);
	$var($bytes, bytes, $XMLUtils::getBytes(big, $nc(big)->bitLength()));
	return $XMLUtils::encodeToString(bytes);
}

$bytes* Base64::encode($BigInteger* big, int32_t bitlen) {
	$init(Base64);
	$useLocalCurrentObjectStackCache();
	bitlen = ((bitlen + 7) >> 3) << 3;
	if (bitlen < $nc(big)->bitLength()) {
		$throwNew($IllegalArgumentException, $($I18n::translate("utils.Base64.IllegalBitlength"_s)));
	}
	$var($bytes, bigBytes, $nc(big)->toByteArray());
	bool var$0 = big->bitLength() % 8 != 0;
	if (var$0 && big->bitLength() / 8 + 1 == bitlen / 8) {
		return bigBytes;
	}
	int32_t startSrc = 0;
	int32_t bigLen = $nc(bigBytes)->length;
	if (big->bitLength() % 8 == 0) {
		startSrc = 1;
		--bigLen;
	}
	int32_t startDst = bitlen / 8 - bigLen;
	$var($bytes, resizedBytes, $new($bytes, bitlen / 8));
	$System::arraycopy(bigBytes, startSrc, resizedBytes, startDst, bigLen);
	return resizedBytes;
}

$BigInteger* Base64::decodeBigIntegerFromElement($Element* element) {
	$init(Base64);
	return $new($BigInteger, 1, $(Base64::decode(element)));
}

$BigInteger* Base64::decodeBigIntegerFromText($Text* text) {
	$init(Base64);
	$useLocalCurrentObjectStackCache();
	return $new($BigInteger, 1, $(Base64::decode($($nc(text)->getData()))));
}

void Base64::fillElementWithBigInteger($Element* element, $BigInteger* biginteger) {
	$init(Base64);
	$useLocalCurrentObjectStackCache();
	$var($String, encodedInt, encode(biginteger));
	bool var$0 = !$XMLUtils::ignoreLineBreaks();
	if (var$0 && $nc(encodedInt)->length() > Base64::BASE64DEFAULTLENGTH) {
		$assign(encodedInt, $str({"\n"_s, encodedInt, "\n"_s}));
	}
	$var($Document, doc, $nc(element)->getOwnerDocument());
	$var($Text, text, $nc(doc)->createTextNode(encodedInt));
	element->appendChild(text);
}

$bytes* Base64::decode($Element* element) {
	$init(Base64);
	$useLocalCurrentObjectStackCache();
	$var($Node, sibling, $nc(element)->getFirstChild());
	$var($StringBuilder, sb, $new($StringBuilder));
	while (sibling != nullptr) {
		if (sibling->getNodeType() == $Node::TEXT_NODE) {
			$var($Text, t, $cast($Text, sibling));
			sb->append($(t->getData()));
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return decode($(sb->toString()));
}

$Element* Base64::encodeToElement($Document* doc, $String* localName, $bytes* bytes) {
	$init(Base64);
	$useLocalCurrentObjectStackCache();
	$var($Element, el, $XMLUtils::createElementInSignatureSpace(doc, localName));
	$var($Text, text, $nc(doc)->createTextNode($(encode(bytes))));
	$nc(el)->appendChild(text);
	return el;
}

$bytes* Base64::decode($bytes* base64) {
	$init(Base64);
	return decodeInternal(base64, -1);
}

$String* Base64::encode($bytes* binaryData) {
	$init(Base64);
	return $XMLUtils::ignoreLineBreaks() ? encode(binaryData, $Integer::MAX_VALUE) : encode(binaryData, Base64::BASE64DEFAULTLENGTH);
}

$bytes* Base64::decode($BufferedReader* reader) {
	$init(Base64);
	$useLocalCurrentObjectStackCache();
	$var($bytes, retBytes, nullptr);
	$var($UnsyncByteArrayOutputStream, baos, $new($UnsyncByteArrayOutputStream));
	{
		$var($Throwable, var$0, nullptr);
		try {
			$var($String, line, nullptr);
			while (nullptr != ($assign(line, $nc(reader)->readLine()))) {
				$var($bytes, bytes, decode(line));
				baos->write(bytes);
			}
			$assign(retBytes, baos->toByteArray());
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} /*finally*/ {
			baos->close();
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
	}
	return retBytes;
}

bool Base64::isWhiteSpace(int8_t octet) {
	$init(Base64);
	return octet == 32 || octet == 13 || octet == 10 || octet == 9;
}

bool Base64::isPad(int8_t octet) {
	$init(Base64);
	return octet == Base64::PAD;
}

$String* Base64::encode($bytes* binaryData, int32_t length) {
	$init(Base64);
	if (length < 4) {
		length = $Integer::MAX_VALUE;
	}
	if (binaryData == nullptr) {
		return nullptr;
	}
	int64_t lengthDataBits = ((int64_t)$nc(binaryData)->length) * ((int64_t)Base64::EIGHTBIT);
	if (lengthDataBits == (int64_t)0) {
		return ""_s;
	}
	int64_t fewerThan24bits = $mod(lengthDataBits, (Base64::TWENTYFOURBITGROUP));
	int32_t numberTriplets = (int32_t)($div(lengthDataBits, Base64::TWENTYFOURBITGROUP));
	int32_t numberQuartet = fewerThan24bits != (int64_t)0 ? numberTriplets + 1 : numberTriplets;
	int32_t quartesPerLine = length / 4;
	int32_t numberLines = $div((numberQuartet - 1), quartesPerLine);
	$var($chars, encodedData, nullptr);
	$assign(encodedData, $new($chars, numberQuartet * 4 + numberLines * 2));
	int8_t k = (int8_t)0;
	int8_t l = (int8_t)0;
	int8_t b1 = (int8_t)0;
	int8_t b2 = (int8_t)0;
	int8_t b3 = (int8_t)0;
	int32_t encodedIndex = 0;
	int32_t dataIndex = 0;
	int32_t i = 0;
	for (int32_t line = 0; line < numberLines; ++line) {
		for (int32_t quartet = 0; quartet < 19; ++quartet) {
			b1 = binaryData->get(dataIndex++);
			b2 = binaryData->get(dataIndex++);
			b3 = binaryData->get(dataIndex++);
			l = (int8_t)((int32_t)(b2 & (uint32_t)15));
			k = (int8_t)((int32_t)(b1 & (uint32_t)3));
			int8_t val1 = (((int32_t)(b1 & (uint32_t)Base64::SIGN)) == 0) ? (int8_t)(b1 >> 2) : (int8_t)(((b1) >> 2) ^ 192);
			int8_t val2 = (((int32_t)(b2 & (uint32_t)Base64::SIGN)) == 0) ? (int8_t)(b2 >> 4) : (int8_t)(((b2) >> 4) ^ 240);
			int8_t val3 = (((int32_t)(b3 & (uint32_t)Base64::SIGN)) == 0) ? (int8_t)(b3 >> 6) : (int8_t)(((b3) >> 6) ^ 252);
			encodedData->set(encodedIndex++, $nc(Base64::lookUpBase64Alphabet)->get(val1));
			encodedData->set(encodedIndex++, $nc(Base64::lookUpBase64Alphabet)->get(val2 | (k << 4)));
			encodedData->set(encodedIndex++, $nc(Base64::lookUpBase64Alphabet)->get((l << 2) | val3));
			encodedData->set(encodedIndex++, $nc(Base64::lookUpBase64Alphabet)->get((int32_t)(b3 & (uint32_t)63)));
			++i;
		}
		encodedData->set(encodedIndex++, (char16_t)13);
		encodedData->set(encodedIndex++, (char16_t)10);
	}
	for (; i < numberTriplets; ++i) {
		b1 = binaryData->get(dataIndex++);
		b2 = binaryData->get(dataIndex++);
		b3 = binaryData->get(dataIndex++);
		l = (int8_t)((int32_t)(b2 & (uint32_t)15));
		k = (int8_t)((int32_t)(b1 & (uint32_t)3));
		int8_t val1 = (((int32_t)(b1 & (uint32_t)Base64::SIGN)) == 0) ? (int8_t)(b1 >> 2) : (int8_t)(((b1) >> 2) ^ 192);
		int8_t val2 = (((int32_t)(b2 & (uint32_t)Base64::SIGN)) == 0) ? (int8_t)(b2 >> 4) : (int8_t)(((b2) >> 4) ^ 240);
		int8_t val3 = (((int32_t)(b3 & (uint32_t)Base64::SIGN)) == 0) ? (int8_t)(b3 >> 6) : (int8_t)(((b3) >> 6) ^ 252);
		encodedData->set(encodedIndex++, $nc(Base64::lookUpBase64Alphabet)->get(val1));
		encodedData->set(encodedIndex++, $nc(Base64::lookUpBase64Alphabet)->get(val2 | (k << 4)));
		encodedData->set(encodedIndex++, $nc(Base64::lookUpBase64Alphabet)->get((l << 2) | val3));
		encodedData->set(encodedIndex++, $nc(Base64::lookUpBase64Alphabet)->get((int32_t)(b3 & (uint32_t)63)));
	}
	if (fewerThan24bits == Base64::EIGHTBIT) {
		b1 = binaryData->get(dataIndex);
		k = (int8_t)((int32_t)(b1 & (uint32_t)3));
		int8_t val1 = (((int32_t)(b1 & (uint32_t)Base64::SIGN)) == 0) ? (int8_t)(b1 >> 2) : (int8_t)(((b1) >> 2) ^ 192);
		encodedData->set(encodedIndex++, $nc(Base64::lookUpBase64Alphabet)->get(val1));
		encodedData->set(encodedIndex++, $nc(Base64::lookUpBase64Alphabet)->get(k << 4));
		encodedData->set(encodedIndex++, Base64::PAD);
		encodedData->set(encodedIndex++, Base64::PAD);
	} else if (fewerThan24bits == Base64::SIXTEENBIT) {
		b1 = binaryData->get(dataIndex);
		b2 = binaryData->get(dataIndex + 1);
		l = (int8_t)((int32_t)(b2 & (uint32_t)15));
		k = (int8_t)((int32_t)(b1 & (uint32_t)3));
		int8_t val1 = (((int32_t)(b1 & (uint32_t)Base64::SIGN)) == 0) ? (int8_t)(b1 >> 2) : (int8_t)(((b1) >> 2) ^ 192);
		int8_t val2 = (((int32_t)(b2 & (uint32_t)Base64::SIGN)) == 0) ? (int8_t)(b2 >> 4) : (int8_t)(((b2) >> 4) ^ 240);
		encodedData->set(encodedIndex++, $nc(Base64::lookUpBase64Alphabet)->get(val1));
		encodedData->set(encodedIndex++, $nc(Base64::lookUpBase64Alphabet)->get(val2 | (k << 4)));
		encodedData->set(encodedIndex++, $nc(Base64::lookUpBase64Alphabet)->get(l << 2));
		encodedData->set(encodedIndex++, Base64::PAD);
	}
	return $new($String, encodedData);
}

$bytes* Base64::decode($String* encoded) {
	$init(Base64);
	if (encoded == nullptr) {
		return nullptr;
	}
	$var($bytes, bytes, $new($bytes, $nc(encoded)->length()));
	int32_t len = getBytesInternal(encoded, bytes);
	return decodeInternal(bytes, len);
}

int32_t Base64::getBytesInternal($String* s, $bytes* result) {
	$init(Base64);
	int32_t length = $nc(s)->length();
	int32_t newSize = 0;
	for (int32_t i = 0; i < length; ++i) {
		int8_t dataS = (int8_t)s->charAt(i);
		if (!isWhiteSpace(dataS)) {
			$nc(result)->set(newSize++, dataS);
		}
	}
	return newSize;
}

$bytes* Base64::decodeInternal($bytes* base64Data, int32_t len) {
	$init(Base64);
	if (len == -1) {
		len = removeWhiteSpace(base64Data);
	}
	if ($mod(len, Base64::FOURBYTE) != 0) {
		$throwNew($Base64DecodingException, "decoding.divisible.four"_s);
	}
	int32_t numberQuadruple = $div(len, Base64::FOURBYTE);
	if (numberQuadruple == 0) {
		return $new($bytes, 0);
	}
	$var($bytes, decodedData, nullptr);
	int8_t b1 = (int8_t)0;
	int8_t b2 = (int8_t)0;
	int8_t b3 = (int8_t)0;
	int8_t b4 = (int8_t)0;
	int32_t i = 0;
	int32_t encodedIndex = 0;
	int32_t dataIndex = 0;
	dataIndex = (numberQuadruple - 1) * 4;
	encodedIndex = (numberQuadruple - 1) * 3;
	b1 = $nc(Base64::base64Alphabet)->get($nc(base64Data)->get(dataIndex++));
	b2 = $nc(Base64::base64Alphabet)->get(base64Data->get(dataIndex++));
	if (b1 == -1 || b2 == -1) {
		$throwNew($Base64DecodingException, "decoding.general"_s);
	}
	int8_t d3 = 0;
	int8_t d4 = 0;
	b3 = $nc(Base64::base64Alphabet)->get(d3 = base64Data->get(dataIndex++));
	b4 = $nc(Base64::base64Alphabet)->get(d4 = base64Data->get(dataIndex++));
	if (b3 == -1 || b4 == -1) {
		bool var$0 = isPad(d3);
		if (var$0 && isPad(d4)) {
			if (((int32_t)(b2 & (uint32_t)15)) != 0) {
				$throwNew($Base64DecodingException, "decoding.general"_s);
			}
			$assign(decodedData, $new($bytes, encodedIndex + 1));
			decodedData->set(encodedIndex, (int8_t)((b1 << 2) | (b2 >> 4)));
		} else {
			bool var$2 = !isPad(d3);
			if (var$2 && isPad(d4)) {
				if (((int32_t)(b3 & (uint32_t)3)) != 0) {
					$throwNew($Base64DecodingException, "decoding.general"_s);
				}
				$assign(decodedData, $new($bytes, encodedIndex + 2));
				decodedData->set(encodedIndex++, (int8_t)((b1 << 2) | (b2 >> 4)));
				decodedData->set(encodedIndex, (int8_t)((((int32_t)(b2 & (uint32_t)15)) << 4) | ((int32_t)((b3 >> 2) & (uint32_t)15))));
			} else {
				$throwNew($Base64DecodingException, "decoding.general"_s);
			}
		}
	} else {
		$assign(decodedData, $new($bytes, encodedIndex + 3));
		decodedData->set(encodedIndex++, (int8_t)((b1 << 2) | (b2 >> 4)));
		decodedData->set(encodedIndex++, (int8_t)((((int32_t)(b2 & (uint32_t)15)) << 4) | ((int32_t)((b3 >> 2) & (uint32_t)15))));
		decodedData->set(encodedIndex++, (int8_t)((b3 << 6) | b4));
	}
	encodedIndex = 0;
	dataIndex = 0;
	for (i = numberQuadruple - 1; i > 0; --i) {
		b1 = $nc(Base64::base64Alphabet)->get(base64Data->get(dataIndex++));
		b2 = $nc(Base64::base64Alphabet)->get(base64Data->get(dataIndex++));
		b3 = $nc(Base64::base64Alphabet)->get(base64Data->get(dataIndex++));
		b4 = $nc(Base64::base64Alphabet)->get(base64Data->get(dataIndex++));
		if (b1 == -1 || b2 == -1 || b3 == -1 || b4 == -1) {
			$throwNew($Base64DecodingException, "decoding.general"_s);
		}
		$nc(decodedData)->set(encodedIndex++, (int8_t)((b1 << 2) | (b2 >> 4)));
		decodedData->set(encodedIndex++, (int8_t)((((int32_t)(b2 & (uint32_t)15)) << 4) | ((int32_t)((b3 >> 2) & (uint32_t)15))));
		decodedData->set(encodedIndex++, (int8_t)((b3 << 6) | b4));
	}
	return decodedData;
}

void Base64::decode($String* base64Data, $OutputStream* os) {
	$init(Base64);
	$var($bytes, bytes, $new($bytes, $nc(base64Data)->length()));
	int32_t len = getBytesInternal(base64Data, bytes);
	decode(bytes, os, len);
}

void Base64::decode($bytes* base64Data, $OutputStream* os) {
	$init(Base64);
	decode(base64Data, os, -1);
}

void Base64::decode($bytes* base64Data, $OutputStream* os, int32_t len) {
	$init(Base64);
	if (len == -1) {
		len = removeWhiteSpace(base64Data);
	}
	if ($mod(len, Base64::FOURBYTE) != 0) {
		$throwNew($Base64DecodingException, "decoding.divisible.four"_s);
	}
	int32_t numberQuadruple = $div(len, Base64::FOURBYTE);
	if (numberQuadruple == 0) {
		return;
	}
	int8_t b1 = (int8_t)0;
	int8_t b2 = (int8_t)0;
	int8_t b3 = (int8_t)0;
	int8_t b4 = (int8_t)0;
	int32_t i = 0;
	int32_t dataIndex = 0;
	for (i = numberQuadruple - 1; i > 0; --i) {
		b1 = $nc(Base64::base64Alphabet)->get($nc(base64Data)->get(dataIndex++));
		b2 = $nc(Base64::base64Alphabet)->get(base64Data->get(dataIndex++));
		b3 = $nc(Base64::base64Alphabet)->get(base64Data->get(dataIndex++));
		b4 = $nc(Base64::base64Alphabet)->get(base64Data->get(dataIndex++));
		if (b1 == -1 || b2 == -1 || b3 == -1 || b4 == -1) {
			$throwNew($Base64DecodingException, "decoding.general"_s);
		}
		$nc(os)->write((int32_t)(int8_t)((b1 << 2) | (b2 >> 4)));
		os->write((int32_t)(int8_t)((((int32_t)(b2 & (uint32_t)15)) << 4) | ((int32_t)((b3 >> 2) & (uint32_t)15))));
		os->write((int32_t)(int8_t)((b3 << 6) | b4));
	}
	b1 = $nc(Base64::base64Alphabet)->get($nc(base64Data)->get(dataIndex++));
	b2 = $nc(Base64::base64Alphabet)->get(base64Data->get(dataIndex++));
	if (b1 == -1 || b2 == -1) {
		$throwNew($Base64DecodingException, "decoding.general"_s);
	}
	int8_t d3 = 0;
	int8_t d4 = 0;
	b3 = $nc(Base64::base64Alphabet)->get(d3 = base64Data->get(dataIndex++));
	b4 = $nc(Base64::base64Alphabet)->get(d4 = base64Data->get(dataIndex++));
	if (b3 == -1 || b4 == -1) {
		bool var$0 = isPad(d3);
		if (var$0 && isPad(d4)) {
			if (((int32_t)(b2 & (uint32_t)15)) != 0) {
				$throwNew($Base64DecodingException, "decoding.general"_s);
			}
			$nc(os)->write((int32_t)(int8_t)((b1 << 2) | (b2 >> 4)));
		} else {
			bool var$2 = !isPad(d3);
			if (var$2 && isPad(d4)) {
				if (((int32_t)(b3 & (uint32_t)3)) != 0) {
					$throwNew($Base64DecodingException, "decoding.general"_s);
				}
				$nc(os)->write((int32_t)(int8_t)((b1 << 2) | (b2 >> 4)));
				os->write((int32_t)(int8_t)((((int32_t)(b2 & (uint32_t)15)) << 4) | ((int32_t)((b3 >> 2) & (uint32_t)15))));
			} else {
				$throwNew($Base64DecodingException, "decoding.general"_s);
			}
		}
	} else {
		$nc(os)->write((int32_t)(int8_t)((b1 << 2) | (b2 >> 4)));
		os->write((int32_t)(int8_t)((((int32_t)(b2 & (uint32_t)15)) << 4) | ((int32_t)((b3 >> 2) & (uint32_t)15))));
		os->write((int32_t)(int8_t)((b3 << 6) | b4));
	}
}

void Base64::decode($InputStream* is, $OutputStream* os) {
	$init(Base64);
	int8_t b1 = (int8_t)0;
	int8_t b2 = (int8_t)0;
	int8_t b3 = (int8_t)0;
	int8_t b4 = (int8_t)0;
	int32_t index = 0;
	$var($bytes, data, $new($bytes, 4));
	int32_t read = 0;
	while ((read = $nc(is)->read()) > 0) {
		int8_t readed = (int8_t)read;
		if (isWhiteSpace(readed)) {
			continue;
		}
		if (isPad(readed)) {
			data->set(index++, readed);
			if (index == 3) {
				data->set(index++, (int8_t)is->read());
			}
			break;
		}
		if ((data->set(index++, readed)) == -1) {
			$throwNew($Base64DecodingException, "decoding.general"_s);
		}
		if (index != 4) {
			continue;
		}
		index = 0;
		b1 = $nc(Base64::base64Alphabet)->get(data->get(0));
		b2 = $nc(Base64::base64Alphabet)->get(data->get(1));
		b3 = $nc(Base64::base64Alphabet)->get(data->get(2));
		b4 = $nc(Base64::base64Alphabet)->get(data->get(3));
		$nc(os)->write((int32_t)(int8_t)((b1 << 2) | (b2 >> 4)));
		os->write((int32_t)(int8_t)((((int32_t)(b2 & (uint32_t)15)) << 4) | ((int32_t)((b3 >> 2) & (uint32_t)15))));
		os->write((int32_t)(int8_t)((b3 << 6) | b4));
	}
	int8_t d1 = data->get(0);
	int8_t d2 = data->get(1);
	int8_t d3 = data->get(2);
	int8_t d4 = data->get(3);
	b1 = $nc(Base64::base64Alphabet)->get(d1);
	b2 = $nc(Base64::base64Alphabet)->get(d2);
	b3 = $nc(Base64::base64Alphabet)->get(d3);
	b4 = $nc(Base64::base64Alphabet)->get(d4);
	if (b3 == -1 || b4 == -1) {
		bool var$0 = isPad(d3);
		if (var$0 && isPad(d4)) {
			if (((int32_t)(b2 & (uint32_t)15)) != 0) {
				$throwNew($Base64DecodingException, "decoding.general"_s);
			}
			$nc(os)->write((int32_t)(int8_t)((b1 << 2) | (b2 >> 4)));
		} else {
			bool var$2 = !isPad(d3);
			if (var$2 && isPad(d4)) {
				b3 = $nc(Base64::base64Alphabet)->get(d3);
				if (((int32_t)(b3 & (uint32_t)3)) != 0) {
					$throwNew($Base64DecodingException, "decoding.general"_s);
				}
				$nc(os)->write((int32_t)(int8_t)((b1 << 2) | (b2 >> 4)));
				os->write((int32_t)(int8_t)((((int32_t)(b2 & (uint32_t)15)) << 4) | ((int32_t)((b3 >> 2) & (uint32_t)15))));
			} else {
				$throwNew($Base64DecodingException, "decoding.general"_s);
			}
		}
	} else {
		$nc(os)->write((int32_t)(int8_t)((b1 << 2) | (b2 >> 4)));
		os->write((int32_t)(int8_t)((((int32_t)(b2 & (uint32_t)15)) << 4) | ((int32_t)((b3 >> 2) & (uint32_t)15))));
		os->write((int32_t)(int8_t)((b3 << 6) | b4));
	}
}

int32_t Base64::removeWhiteSpace($bytes* data) {
	$init(Base64);
	if (data == nullptr) {
		return 0;
	}
	int32_t newSize = 0;
	int32_t len = $nc(data)->length;
	for (int32_t i = 0; i < len; ++i) {
		int8_t dataS = data->get(i);
		if (!isWhiteSpace(dataS)) {
			data->set(newSize++, dataS);
		}
	}
	return newSize;
}

void clinit$Base64($Class* class$) {
	$assignStatic(Base64::base64Alphabet, $new($bytes, Base64::BASELENGTH));
	$assignStatic(Base64::lookUpBase64Alphabet, $new($chars, Base64::LOOKUPLENGTH));
	{
		for (int32_t i = 0; i < Base64::BASELENGTH; ++i) {
			$nc(Base64::base64Alphabet)->set(i, (int8_t)-1);
		}
		for (int32_t i = u'Z'; i >= u'A'; --i) {
			$nc(Base64::base64Alphabet)->set(i, (int8_t)(i - u'A'));
		}
		for (int32_t i = u'z'; i >= u'a'; --i) {
			$nc(Base64::base64Alphabet)->set(i, (int8_t)(i - u'a' + 26));
		}
		for (int32_t i = u'9'; i >= u'0'; --i) {
			$nc(Base64::base64Alphabet)->set(i, (int8_t)(i - u'0' + 52));
		}
		$nc(Base64::base64Alphabet)->set(u'+', (int8_t)62);
		$nc(Base64::base64Alphabet)->set(u'/', (int8_t)63);
		for (int32_t i = 0; i <= 25; ++i) {
			$nc(Base64::lookUpBase64Alphabet)->set(i, (char16_t)(u'A' + i));
		}
		{
			int32_t i = 26;
			int32_t j = 0;
			for (; i <= 51; ++i, ++j) {
				$nc(Base64::lookUpBase64Alphabet)->set(i, (char16_t)(u'a' + j));
			}
		}
		{
			int32_t i = 52;
			int32_t j = 0;
			for (; i <= 61; ++i, ++j) {
				$nc(Base64::lookUpBase64Alphabet)->set(i, (char16_t)(u'0' + j));
			}
		}
		$nc(Base64::lookUpBase64Alphabet)->set(62, u'+');
		$nc(Base64::lookUpBase64Alphabet)->set(63, u'/');
	}
}

Base64::Base64() {
}

$Class* Base64::load$($String* name, bool initialize) {
	$loadClass(Base64, name, initialize, &_Base64_ClassInfo_, clinit$Base64, allocate$Base64);
	return class$;
}

$Class* Base64::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com