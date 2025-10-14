#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/ECDSAUtils.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/ECDSAUtils$ECCurveDefinition.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Math.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/interfaces/ECPublicKey.h>
#include <java/security/spec/ECField.h>
#include <java/security/spec/ECFieldF2m.h>
#include <java/security/spec/ECFieldFp.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/ECPoint.h>
#include <java/security/spec/EllipticCurve.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ECDSAUtils$ECCurveDefinition = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::ECDSAUtils$ECCurveDefinition;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Math = ::java::lang::Math;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $ECKey = ::java::security::interfaces::ECKey;
using $ECPublicKey = ::java::security::interfaces::ECPublicKey;
using $ECField = ::java::security::spec::ECField;
using $ECFieldF2m = ::java::security::spec::ECFieldF2m;
using $ECFieldFp = ::java::security::spec::ECFieldFp;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $ECPoint = ::java::security::spec::ECPoint;
using $EllipticCurve = ::java::security::spec::EllipticCurve;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {

$FieldInfo _ECDSAUtils_FieldInfo_[] = {
	{"ecCurveDefinitions", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/ECDSAUtils$ECCurveDefinition;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ECDSAUtils, ecCurveDefinitions)},
	{}
};

$MethodInfo _ECDSAUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(ECDSAUtils::*)()>(&ECDSAUtils::init$))},
	{"convertASN1toXMLDSIG", "([BI)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t)>(&ECDSAUtils::convertASN1toXMLDSIG)), "java.io.IOException"},
	{"convertXMLDSIGtoASN1", "([B)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&ECDSAUtils::convertXMLDSIGtoASN1)), "java.io.IOException"},
	{"decodePoint", "([BLjava/security/spec/EllipticCurve;)Ljava/security/spec/ECPoint;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ECPoint*(*)($bytes*,$EllipticCurve*)>(&ECDSAUtils::decodePoint))},
	{"encodePoint", "(Ljava/security/spec/ECPoint;Ljava/security/spec/EllipticCurve;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($ECPoint*,$EllipticCurve*)>(&ECDSAUtils::encodePoint))},
	{"getECCurveDefinition", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/ECDSAUtils$ECCurveDefinition;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ECDSAUtils$ECCurveDefinition*(*)($String*)>(&ECDSAUtils::getECCurveDefinition))},
	{"getOIDFromPublicKey", "(Ljava/security/interfaces/ECPublicKey;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($ECPublicKey*)>(&ECDSAUtils::getOIDFromPublicKey))},
	{"stripLeadingZeros", "([B)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&ECDSAUtils::stripLeadingZeros))},
	{}
};

$InnerClassInfo _ECDSAUtils_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.ECDSAUtils$ECCurveDefinition", "com.sun.org.apache.xml.internal.security.algorithms.implementations.ECDSAUtils", "ECCurveDefinition", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _ECDSAUtils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.ECDSAUtils",
	"java.lang.Object",
	nullptr,
	_ECDSAUtils_FieldInfo_,
	_ECDSAUtils_MethodInfo_,
	nullptr,
	nullptr,
	_ECDSAUtils_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.ECDSAUtils$ECCurveDefinition"
};

$Object* allocate$ECDSAUtils($Class* clazz) {
	return $of($alloc(ECDSAUtils));
}

$List* ECDSAUtils::ecCurveDefinitions = nullptr;

void ECDSAUtils::init$() {
}

$bytes* ECDSAUtils::convertASN1toXMLDSIG($bytes* asn1Bytes, int32_t rawLen) {
	$init(ECDSAUtils);
	if ($nc(asn1Bytes)->length < 8 || $nc(asn1Bytes)->get(0) != 48) {
		$throwNew($IOException, "Invalid ASN.1 format of ECDSA signature"_s);
	}
	int32_t offset = 0;
	if ($nc(asn1Bytes)->get(1) > 0) {
		offset = 2;
	} else if (asn1Bytes->get(1) == (int8_t)129) {
		offset = 3;
	} else {
		$throwNew($IOException, "Invalid ASN.1 format of ECDSA signature"_s);
	}
	int8_t rLength = asn1Bytes->get(offset + 1);
	int32_t i = 0;
	for (i = rLength; i > 0 && asn1Bytes->get(offset + 2 + rLength - i) == 0; --i) {
	}
	int8_t sLength = asn1Bytes->get(offset + 2 + rLength + 1);
	int32_t j = 0;
	for (j = sLength; j > 0 && asn1Bytes->get(offset + 2 + rLength + 2 + sLength - j) == 0; --j) {
	}
	int32_t maxLen = $Math::max(i, j);
	if (rawLen < 0) {
		rawLen = maxLen;
	} else if (rawLen < maxLen) {
		$throwNew($IOException, "Invalid signature length"_s);
	}
	if (((int32_t)(asn1Bytes->get(offset - 1) & (uint32_t)255)) != asn1Bytes->length - offset || ((int32_t)(asn1Bytes->get(offset - 1) & (uint32_t)255)) != 2 + rLength + 2 + sLength || asn1Bytes->get(offset) != 2 || asn1Bytes->get(offset + 2 + rLength) != 2) {
		$throwNew($IOException, "Invalid ASN.1 format of ECDSA signature"_s);
	}
	$var($bytes, xmldsigBytes, $new($bytes, 2 * rawLen));
	$System::arraycopy(asn1Bytes, offset + 2 + rLength - i, xmldsigBytes, rawLen - i, i);
	$System::arraycopy(asn1Bytes, offset + 2 + rLength + 2 + sLength - j, xmldsigBytes, 2 * rawLen - j, j);
	return xmldsigBytes;
}

$bytes* ECDSAUtils::convertXMLDSIGtoASN1($bytes* xmldsigBytes) {
	$init(ECDSAUtils);
	int32_t rawLen = $nc(xmldsigBytes)->length / 2;
	int32_t i = 0;
	for (i = rawLen; i > 0 && xmldsigBytes->get(rawLen - i) == 0; --i) {
	}
	int32_t j = i;
	if (xmldsigBytes->get(rawLen - i) < 0) {
		j += 1;
	}
	int32_t k = 0;
	for (k = rawLen; k > 0 && xmldsigBytes->get(2 * rawLen - k) == 0; --k) {
	}
	int32_t l = k;
	if (xmldsigBytes->get(2 * rawLen - k) < 0) {
		l += 1;
	}
	int32_t len = 2 + j + 2 + l;
	if (len > 255) {
		$throwNew($IOException, "Invalid XMLDSIG format of ECDSA signature"_s);
	}
	int32_t offset = 0;
	$var($bytes, asn1Bytes, nullptr);
	if (len < 128) {
		$assign(asn1Bytes, $new($bytes, 2 + 2 + j + 2 + l));
		offset = 1;
	} else {
		$assign(asn1Bytes, $new($bytes, 3 + 2 + j + 2 + l));
		asn1Bytes->set(1, (int8_t)129);
		offset = 2;
	}
	$nc(asn1Bytes)->set(0, (int8_t)48);
	asn1Bytes->set(offset++, (int8_t)len);
	asn1Bytes->set(offset++, (int8_t)2);
	asn1Bytes->set(offset++, (int8_t)j);
	$System::arraycopy(xmldsigBytes, rawLen - i, asn1Bytes, offset + j - i, i);
	offset += j;
	asn1Bytes->set(offset++, (int8_t)2);
	asn1Bytes->set(offset++, (int8_t)l);
	$System::arraycopy(xmldsigBytes, 2 * rawLen - k, asn1Bytes, offset + l - k, k);
	return asn1Bytes;
}

$String* ECDSAUtils::getOIDFromPublicKey($ECPublicKey* ecPublicKey) {
	$init(ECDSAUtils);
	$var($ECParameterSpec, ecParameterSpec, $nc(ecPublicKey)->getParams());
	$var($BigInteger, order, $nc(ecParameterSpec)->getOrder());
	$var($BigInteger, affineX, $nc($(ecParameterSpec->getGenerator()))->getAffineX());
	$var($BigInteger, affineY, $nc($(ecParameterSpec->getGenerator()))->getAffineY());
	$var($BigInteger, a, $nc($(ecParameterSpec->getCurve()))->getA());
	$var($BigInteger, b, $nc($(ecParameterSpec->getCurve()))->getB());
	int32_t h = ecParameterSpec->getCofactor();
	$var($ECField, ecField, $nc($(ecParameterSpec->getCurve()))->getField());
	$var($BigInteger, field, nullptr);
	if ($instanceOf($ECFieldFp, ecField)) {
		$var($ECFieldFp, ecFieldFp, $cast($ECFieldFp, ecField));
		$assign(field, $nc(ecFieldFp)->getP());
	} else {
		$var($ECFieldF2m, ecFieldF2m, $cast($ECFieldF2m, ecField));
		$assign(field, $nc(ecFieldF2m)->getReductionPolynomial());
	}
	$var($Iterator, ecCurveDefinitionIterator, $nc(ECDSAUtils::ecCurveDefinitions)->iterator());
	while ($nc(ecCurveDefinitionIterator)->hasNext()) {
		$var($ECDSAUtils$ECCurveDefinition, ecCurveDefinition, $cast($ECDSAUtils$ECCurveDefinition, ecCurveDefinitionIterator->next()));
		$var($String, oid, $nc(ecCurveDefinition)->equals(field, a, b, affineX, affineY, order, h));
		if (oid != nullptr) {
			return oid;
		}
	}
	return nullptr;
}

$ECDSAUtils$ECCurveDefinition* ECDSAUtils::getECCurveDefinition($String* oid) {
	$init(ECDSAUtils);
	$var($Iterator, ecCurveDefinitionIterator, $nc(ECDSAUtils::ecCurveDefinitions)->iterator());
	while ($nc(ecCurveDefinitionIterator)->hasNext()) {
		$var($ECDSAUtils$ECCurveDefinition, ecCurveDefinition, $cast($ECDSAUtils$ECCurveDefinition, ecCurveDefinitionIterator->next()));
		if ($nc($($nc(ecCurveDefinition)->getOid()))->equals(oid)) {
			return ecCurveDefinition;
		}
	}
	return nullptr;
}

$bytes* ECDSAUtils::encodePoint($ECPoint* ecPoint, $EllipticCurve* ellipticCurve) {
	$init(ECDSAUtils);
	int32_t size = ($nc($($nc(ellipticCurve)->getField()))->getFieldSize() + 7) / 8;
	$var($bytes, affineXBytes, stripLeadingZeros($($nc($($nc(ecPoint)->getAffineX()))->toByteArray())));
	$var($bytes, affineYBytes, stripLeadingZeros($($nc($($nc(ecPoint)->getAffineY()))->toByteArray())));
	$var($bytes, encodedBytes, $new($bytes, size * 2 + 1));
	encodedBytes->set(0, (int8_t)4);
	$System::arraycopy(affineXBytes, 0, encodedBytes, size - $nc(affineXBytes)->length + 1, affineXBytes->length);
	$System::arraycopy(affineYBytes, 0, encodedBytes, encodedBytes->length - $nc(affineYBytes)->length, affineYBytes->length);
	return encodedBytes;
}

$ECPoint* ECDSAUtils::decodePoint($bytes* encodedBytes, $EllipticCurve* elliptiCcurve) {
	$init(ECDSAUtils);
	if ($nc(encodedBytes)->get(0) != 4) {
		$throwNew($IllegalArgumentException, "Only uncompressed format is supported"_s);
	}
	int32_t size = ($nc($($nc(elliptiCcurve)->getField()))->getFieldSize() + 7) / 8;
	$var($bytes, affineXBytes, $new($bytes, size));
	$var($bytes, affineYBytes, $new($bytes, size));
	$System::arraycopy(encodedBytes, 1, affineXBytes, 0, size);
	$System::arraycopy(encodedBytes, size + 1, affineYBytes, 0, size);
	$var($BigInteger, var$0, $new($BigInteger, 1, affineXBytes));
	return $new($ECPoint, var$0, $$new($BigInteger, 1, affineYBytes));
}

$bytes* ECDSAUtils::stripLeadingZeros($bytes* bytes) {
	$init(ECDSAUtils);
	int32_t i = 0;
	for (i = 0; i < $nc(bytes)->length - 1; ++i) {
		if (bytes->get(i) != 0) {
			break;
		}
	}
	if (i == 0) {
		return bytes;
	} else {
		$var($bytes, stripped, $new($bytes, $nc(bytes)->length - i));
		$System::arraycopy(bytes, i, stripped, 0, stripped->length);
		return stripped;
	}
}

void clinit$ECDSAUtils($Class* class$) {
	$assignStatic(ECDSAUtils::ecCurveDefinitions, $new($ArrayList));
	{
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp112r1"_s, "1.3.132.0.6"_s, "db7c2abf62e35e668076bead208b"_s, "db7c2abf62e35e668076bead2088"_s, "659ef8ba043916eede8911702b22"_s, "09487239995a5ee76b55f9c2f098"_s, "a89ce5af8724c0a23e0e0ff77500"_s, "db7c2abf62e35e7628dfac6561c5"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp112r2"_s, "1.3.132.0.7"_s, "db7c2abf62e35e668076bead208b"_s, "6127c24c05f38a0aaaf65c0ef02c"_s, "51def1815db5ed74fcc34c85d709"_s, "4ba30ab5e892b4e1649dd0928643"_s, "adcd46f5882e3747def36e956e97"_s, "36df0aafd8b8d7597ca10520d04b"_s, 4));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp128r1"_s, "1.3.132.0.28"_s, "fffffffdffffffffffffffffffffffff"_s, "fffffffdfffffffffffffffffffffffc"_s, "e87579c11079f43dd824993c2cee5ed3"_s, "161ff7528b899b2d0c28607ca52c5b86"_s, "cf5ac8395bafeb13c02da292dded7a83"_s, "fffffffe0000000075a30d1b9038a115"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp128r2"_s, "1.3.132.0.29"_s, "fffffffdffffffffffffffffffffffff"_s, "d6031998d1b3bbfebf59cc9bbff9aee1"_s, "5eeefca380d02919dc2c6558bb6d8a5d"_s, "7b6aa5d85e572983e6fb32a7cdebc140"_s, "27b6916a894d3aee7106fe805fc34b44"_s, "3fffffff7fffffffbe0024720613b5a3"_s, 4));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp160k1"_s, "1.3.132.0.9"_s, "fffffffffffffffffffffffffffffffeffffac73"_s, "0000000000000000000000000000000000000000"_s, "0000000000000000000000000000000000000007"_s, "3b4c382ce37aa192a4019e763036f4f5dd4d7ebb"_s, "938cf935318fdced6bc28286531733c3f03c4fee"_s, "0100000000000000000001b8fa16dfab9aca16b6b3"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp160r1"_s, "1.3.132.0.8"_s, "ffffffffffffffffffffffffffffffff7fffffff"_s, "ffffffffffffffffffffffffffffffff7ffffffc"_s, "1c97befc54bd7a8b65acf89f81d4d4adc565fa45"_s, "4a96b5688ef573284664698968c38bb913cbfc82"_s, "23a628553168947d59dcc912042351377ac5fb32"_s, "0100000000000000000001f4c8f927aed3ca752257"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp160r2"_s, "1.3.132.0.30"_s, "fffffffffffffffffffffffffffffffeffffac73"_s, "fffffffffffffffffffffffffffffffeffffac70"_s, "b4e134d3fb59eb8bab57274904664d5af50388ba"_s, "52dcb034293a117e1f4ff11b30f7199d3144ce6d"_s, "feaffef2e331f296e071fa0df9982cfea7d43f2e"_s, "0100000000000000000000351ee786a818f3a1a16b"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp192k1"_s, "1.3.132.0.31"_s, "fffffffffffffffffffffffffffffffffffffffeffffee37"_s, "000000000000000000000000000000000000000000000000"_s, "000000000000000000000000000000000000000000000003"_s, "db4ff10ec057e9ae26b07d0280b7f4341da5d1b1eae06c7d"_s, "9b2f2f6d9c5628a7844163d015be86344082aa88d95e2f9d"_s, "fffffffffffffffffffffffe26f2fc170f69466a74defd8d"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp192r1 [NIST P-192, X9.62 prime192v1]"_s, "1.2.840.10045.3.1.1"_s, "fffffffffffffffffffffffffffffffeffffffffffffffff"_s, "fffffffffffffffffffffffffffffffefffffffffffffffc"_s, "64210519e59c80e70fa7e9ab72243049feb8deecc146b9b1"_s, "188da80eb03090f67cbf20eb43a18800f4ff0afd82ff1012"_s, "07192b95ffc8da78631011ed6b24cdd573f977a11e794811"_s, "ffffffffffffffffffffffff99def836146bc9b1b4d22831"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp224k1"_s, "1.3.132.0.32"_s, "fffffffffffffffffffffffffffffffffffffffffffffffeffffe56d"_s, "00000000000000000000000000000000000000000000000000000000"_s, "00000000000000000000000000000000000000000000000000000005"_s, "a1455b334df099df30fc28a169a467e9e47075a90f7e650eb6b7a45c"_s, "7e089fed7fba344282cafbd6f7e319f7c0b0bd59e2ca4bdb556d61a5"_s, "010000000000000000000000000001dce8d2ec6184caf0a971769fb1f7"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp224r1 [NIST P-224]"_s, "1.3.132.0.33"_s, "ffffffffffffffffffffffffffffffff000000000000000000000001"_s, "fffffffffffffffffffffffffffffffefffffffffffffffffffffffe"_s, "b4050a850c04b3abf54132565044b0b7d7bfd8ba270b39432355ffb4"_s, "b70e0cbd6bb4bf7f321390b94a03c1d356c21122343280d6115c1d21"_s, "bd376388b5f723fb4c22dfe6cd4375a05a07476444d5819985007e34"_s, "ffffffffffffffffffffffffffff16a2e0b8f03e13dd29455c5c2a3d"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp256k1"_s, "1.3.132.0.10"_s, "fffffffffffffffffffffffffffffffffffffffffffffffffffffffefffffc2f"_s, "0000000000000000000000000000000000000000000000000000000000000000"_s, "0000000000000000000000000000000000000000000000000000000000000007"_s, "79be667ef9dcbbac55a06295ce870b07029bfcdb2dce28d959f2815b16f81798"_s, "483ada7726a3c4655da4fbfc0e1108a8fd17b448a68554199c47d08ffb10d4b8"_s, "fffffffffffffffffffffffffffffffebaaedce6af48a03bbfd25e8cd0364141"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp256r1 [NIST P-256, X9.62 prime256v1]"_s, "1.2.840.10045.3.1.7"_s, "ffffffff00000001000000000000000000000000ffffffffffffffffffffffff"_s, "ffffffff00000001000000000000000000000000fffffffffffffffffffffffc"_s, "5ac635d8aa3a93e7b3ebbd55769886bc651d06b0cc53b0f63bce3c3e27d2604b"_s, "6b17d1f2e12c4247f8bce6e563a440f277037d812deb33a0f4a13945d898c296"_s, "4fe342e2fe1a7f9b8ee7eb4a7c0f9e162bce33576b315ececbb6406837bf51f5"_s, "ffffffff00000000ffffffffffffffffbce6faada7179e84f3b9cac2fc632551"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp384r1 [NIST P-384]"_s, "1.3.132.0.34"_s, "fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffeffffffff0000000000000000ffffffff"_s, "fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffeffffffff0000000000000000fffffffc"_s, "b3312fa7e23ee7e4988e056be3f82d19181d9c6efe8141120314088f5013875ac656398d8a2ed19d2a85c8edd3ec2aef"_s, "aa87ca22be8b05378eb1c71ef320ad746e1d3b628ba79b9859f741e082542a385502f25dbf55296c3a545e3872760ab7"_s, "3617de4a96262c6f5d9e98bf9292dc29f8f41dbd289a147ce9da3113b5f0b8c00a60b1ce1d7e819d7a431d7c90ea0e5f"_s, "ffffffffffffffffffffffffffffffffffffffffffffffffc7634d81f4372ddf581a0db248b0a77aecec196accc52973"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "secp521r1 [NIST P-521]"_s, "1.3.132.0.35"_s, "01ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff"_s, "01fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffc"_s, "0051953eb9618e1c9a1f929a21a0b68540eea2da725b99b315f3b8b489918ef109e156193951ec7e937b1652c0bd3bb1bf073573df883d2c34f1ef451fd46b503f00"_s, "00c6858e06b70404e9cd9e3ecb662395b4429c648139053fb521f828af606b4d3dbaa14b5e77efe75928fe1dc127a2ffa8de3348b3c1856a429bf97e7e31c2e5bd66"_s, "011839296a789a3bc0045c8a5fb42c7d1bd998f54449579b446817afbd17273e662c97ee72995ef42640c550b9013fad0761353c7086a272c24088be94769fd16650"_s, "01fffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffa51868783bf2f966b7fcc0148f709a5d03bb5c9b8899c47aebb6fb71e91386409"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "X9.62 prime192v2"_s, "1.2.840.10045.3.1.2"_s, "fffffffffffffffffffffffffffffffeffffffffffffffff"_s, "fffffffffffffffffffffffffffffffefffffffffffffffc"_s, "cc22d6dfb95c6b25e49c0d6364a4e5980c393aa21668d953"_s, "eea2bae7e1497842f2de7769cfe9c989c072ad696f48034a"_s, "6574d11d69b6ec7a672bb82a083df2f2b0847de970b2de15"_s, "fffffffffffffffffffffffe5fb1a724dc80418648d8dd31"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "X9.62 prime192v3"_s, "1.2.840.10045.3.1.3"_s, "fffffffffffffffffffffffffffffffeffffffffffffffff"_s, "fffffffffffffffffffffffffffffffefffffffffffffffc"_s, "22123dc2395a05caa7423daeccc94760a7d462256bd56916"_s, "7d29778100c65a1da1783716588dce2b8b4aee8e228f1896"_s, "38a90f22637337334b49dcb66a6dc8f9978aca7648a943b0"_s, "ffffffffffffffffffffffff7a62d031c83f4294f640ec13"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "X9.62 prime239v1"_s, "1.2.840.10045.3.1.4"_s, "7fffffffffffffffffffffff7fffffffffff8000000000007fffffffffff"_s, "7fffffffffffffffffffffff7fffffffffff8000000000007ffffffffffc"_s, "6b016c3bdcf18941d0d654921475ca71a9db2fb27d1d37796185c2942c0a"_s, "0ffa963cdca8816ccc33b8642bedf905c3d358573d3f27fbbd3b3cb9aaaf"_s, "7debe8e4e90a5dae6e4054ca530ba04654b36818ce226b39fccb7b02f1ae"_s, "7fffffffffffffffffffffff7fffff9e5e9a9f5d9071fbd1522688909d0b"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "X9.62 prime239v2"_s, "1.2.840.10045.3.1.5"_s, "7fffffffffffffffffffffff7fffffffffff8000000000007fffffffffff"_s, "7fffffffffffffffffffffff7fffffffffff8000000000007ffffffffffc"_s, "617fab6832576cbbfed50d99f0249c3fee58b94ba0038c7ae84c8c832f2c"_s, "38af09d98727705120c921bb5e9e26296a3cdcf2f35757a0eafd87b830e7"_s, "5b0125e4dbea0ec7206da0fc01d9b081329fb555de6ef460237dff8be4ba"_s, "7fffffffffffffffffffffff800000cfa7e8594377d414c03821bc582063"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "X9.62 prime239v3"_s, "1.2.840.10045.3.1.6"_s, "7fffffffffffffffffffffff7fffffffffff8000000000007fffffffffff"_s, "7fffffffffffffffffffffff7fffffffffff8000000000007ffffffffffc"_s, "255705fa2a306654b1f4cb03d6a750a30c250102d4988717d9ba15ab6d3e"_s, "6768ae8e18bb92cfcf005c949aa2c6d94853d0e660bbf854b1c9505fe95a"_s, "1607e6898f390c06bc1d552bad226f3b6fcfe48b6e818499af18e3ed6cf3"_s, "7fffffffffffffffffffffff7fffff975deb41b3a6057c3c432146526551"_s, 1));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect113r1"_s, "1.3.132.0.4"_s, "020000000000000000000000000201"_s, "003088250ca6e7c7fe649ce85820f7"_s, "00e8bee4d3e2260744188be0e9c723"_s, "009d73616f35f4ab1407d73562c10f"_s, "00a52830277958ee84d1315ed31886"_s, "0100000000000000d9ccec8a39e56f"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect113r2"_s, "1.3.132.0.5"_s, "020000000000000000000000000201"_s, "00689918dbec7e5a0dd6dfc0aa55c7"_s, "0095e9a9ec9b297bd4bf36e059184f"_s, "01a57a6a7b26ca5ef52fcdb8164797"_s, "00b3adc94ed1fe674c06e695baba1d"_s, "010000000000000108789b2496af93"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect131r1"_s, "1.3.132.0.22"_s, "080000000000000000000000000000010d"_s, "07a11b09a76b562144418ff3ff8c2570b8"_s, "0217c05610884b63b9c6c7291678f9d341"_s, "0081baf91fdf9833c40f9c181343638399"_s, "078c6e7ea38c001f73c8134b1b4ef9e150"_s, "0400000000000000023123953a9464b54d"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect131r2"_s, "1.3.132.0.23"_s, "080000000000000000000000000000010d"_s, "03e5a88919d7cafcbf415f07c2176573b2"_s, "04b8266a46c55657ac734ce38f018f2192"_s, "0356dcd8f2f95031ad652d23951bb366a8"_s, "0648f06d867940a5366d9e265de9eb240f"_s, "0400000000000000016954a233049ba98f"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect163k1 [NIST K-163]"_s, "1.3.132.0.1"_s, "0800000000000000000000000000000000000000c9"_s, "000000000000000000000000000000000000000001"_s, "000000000000000000000000000000000000000001"_s, "02fe13c0537bbc11acaa07d793de4e6d5e5c94eee8"_s, "0289070fb05d38ff58321f2e800536d538ccdaa3d9"_s, "04000000000000000000020108a2e0cc0d99f8a5ef"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect163r1"_s, "1.3.132.0.2"_s, "0800000000000000000000000000000000000000c9"_s, "07b6882caaefa84f9554ff8428bd88e246d2782ae2"_s, "0713612dcddcb40aab946bda29ca91f73af958afd9"_s, "0369979697ab43897789566789567f787a7876a654"_s, "00435edb42efafb2989d51fefce3c80988f41ff883"_s, "03ffffffffffffffffffff48aab689c29ca710279b"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect163r2 [NIST B-163]"_s, "1.3.132.0.15"_s, "0800000000000000000000000000000000000000c9"_s, "000000000000000000000000000000000000000001"_s, "020a601907b8c953ca1481eb10512f78744a3205fd"_s, "03f0eba16286a2d57ea0991168d4994637e8343e36"_s, "00d51fbc6c71a0094fa2cdd545b11c5c0c797324f1"_s, "040000000000000000000292fe77e70c12a4234c33"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect193r1"_s, "1.3.132.0.24"_s, "02000000000000000000000000000000000000000000008001"_s, "0017858feb7a98975169e171f77b4087de098ac8a911df7b01"_s, "00fdfb49bfe6c3a89facadaa7a1e5bbc7cc1c2e5d831478814"_s, "01f481bc5f0ff84a74ad6cdf6fdef4bf6179625372d8c0c5e1"_s, "0025e399f2903712ccf3ea9e3a1ad17fb0b3201b6af7ce1b05"_s, "01000000000000000000000000c7f34a778f443acc920eba49"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect193r2"_s, "1.3.132.0.25"_s, "02000000000000000000000000000000000000000000008001"_s, "0163f35a5137c2ce3ea6ed8667190b0bc43ecd69977702709b"_s, "00c9bb9e8927d4d64c377e2ab2856a5b16e3efb7f61d4316ae"_s, "00d9b67d192e0367c803f39e1a7e82ca14a651350aae617e8f"_s, "01ce94335607c304ac29e7defbd9ca01f596f927224cdecf6c"_s, "010000000000000000000000015aab561b005413ccd4ee99d5"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect233k1 [NIST K-233]"_s, "1.3.132.0.26"_s, "020000000000000000000000000000000000000004000000000000000001"_s, "000000000000000000000000000000000000000000000000000000000000"_s, "000000000000000000000000000000000000000000000000000000000001"_s, "017232ba853a7e731af129f22ff4149563a419c26bf50a4c9d6eefad6126"_s, "01db537dece819b7f70f555a67c427a8cd9bf18aeb9b56e0c11056fae6a3"_s, "008000000000000000000000000000069d5bb915bcd46efb1ad5f173abdf"_s, 4));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect233r1 [NIST B-233]"_s, "1.3.132.0.27"_s, "020000000000000000000000000000000000000004000000000000000001"_s, "000000000000000000000000000000000000000000000000000000000001"_s, "0066647ede6c332c7f8c0923bb58213b333b20e9ce4281fe115f7d8f90ad"_s, "00fac9dfcbac8313bb2139f1bb755fef65bc391f8b36f8f8eb7371fd558b"_s, "01006a08a41903350678e58528bebf8a0beff867a7ca36716f7e01f81052"_s, "01000000000000000000000000000013e974e72f8a6922031d2603cfe0d7"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect239k1"_s, "1.3.132.0.3"_s, "800000000000000000004000000000000000000000000000000000000001"_s, "000000000000000000000000000000000000000000000000000000000000"_s, "000000000000000000000000000000000000000000000000000000000001"_s, "29a0b6a887a983e9730988a68727a8b2d126c44cc2cc7b2a6555193035dc"_s, "76310804f12e549bdb011c103089e73510acb275fc312a5dc6b76553f0ca"_s, "2000000000000000000000000000005a79fec67cb6e91f1c1da800e478a5"_s, 4));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect283k1 [NIST K-283]"_s, "1.3.132.0.16"_s, "0800000000000000000000000000000000000000000000000000000000000000000010a1"_s, "000000000000000000000000000000000000000000000000000000000000000000000000"_s, "000000000000000000000000000000000000000000000000000000000000000000000001"_s, "0503213f78ca44883f1a3b8162f188e553cd265f23c1567a16876913b0c2ac2458492836"_s, "01ccda380f1c9e318d90f95d07e5426fe87e45c0e8184698e45962364e34116177dd2259"_s, "01ffffffffffffffffffffffffffffffffffe9ae2ed07577265dff7f94451e061e163c61"_s, 4));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect283r1 [NIST B-283]"_s, "1.3.132.0.17"_s, "0800000000000000000000000000000000000000000000000000000000000000000010a1"_s, "000000000000000000000000000000000000000000000000000000000000000000000001"_s, "027b680ac8b8596da5a4af8a19a0303fca97fd7645309fa2a581485af6263e313b79a2f5"_s, "05f939258db7dd90e1934f8c70b0dfec2eed25b8557eac9c80e2e198f8cdbecd86b12053"_s, "03676854fe24141cb98fe6d4b20d02b4516ff702350eddb0826779c813f0df45be8112f4"_s, "03ffffffffffffffffffffffffffffffffffef90399660fc938a90165b042a7cefadb307"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect409k1 [NIST K-409]"_s, "1.3.132.0.36"_s, "02000000000000000000000000000000000000000000000000000000000000000000000000000000008000000000000000000001"_s, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"_s, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"_s, "0060f05f658f49c1ad3ab1890f7184210efd0987e307c84c27accfb8f9f67cc2c460189eb5aaaa62ee222eb1b35540cfe9023746"_s, "01e369050b7c4e42acba1dacbf04299c3460782f918ea427e6325165e9ea10e3da5f6c42e9c55215aa9ca27a5863ec48d8e0286b"_s, "007ffffffffffffffffffffffffffffffffffffffffffffffffffe5f83b2d4ea20400ec4557d5ed3e3e7ca5b4b5c83b8e01e5fcf"_s, 4));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect409r1 [NIST B-409]"_s, "1.3.132.0.37"_s, "02000000000000000000000000000000000000000000000000000000000000000000000000000000008000000000000000000001"_s, "00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"_s, "0021a5c2c8ee9feb5c4b9a753b7b476b7fd6422ef1f3dd674761fa99d6ac27c8a9a197b272822f6cd57a55aa4f50ae317b13545f"_s, "015d4860d088ddb3496b0c6064756260441cde4af1771d4db01ffe5b34e59703dc255a868a1180515603aeab60794e54bb7996a7"_s, "0061b1cfab6be5f32bbfa78324ed106a7636b9c5a7bd198d0158aa4f5488d08f38514f1fdf4b4f40d2181b3681c364ba0273c706"_s, "010000000000000000000000000000000000000000000000000001e2aad6a612f33307be5fa47c3c9e052f838164cd37d9a21173"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect571k1 [NIST K-571]"_s, "1.3.132.0.38"_s, "080000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000425"_s, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000"_s, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"_s, "026eb7a859923fbc82189631f8103fe4ac9ca2970012d5d46024804801841ca44370958493b205e647da304db4ceb08cbbd1ba39494776fb988b47174dca88c7e2945283a01c8972"_s, "0349dc807f4fbf374f4aeade3bca95314dd58cec9f307a54ffc61efc006d8a2c9d4979c0ac44aea74fbebbb9f772aedcb620b01a7ba7af1b320430c8591984f601cd4c143ef1c7a3"_s, "020000000000000000000000000000000000000000000000000000000000000000000000131850e1f19a63e4b391a8db917f4138b630d84be5d639381e91deb45cfe778f637c1001"_s, 4));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "sect571r1 [NIST B-571]"_s, "1.3.132.0.39"_s, "080000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000425"_s, "000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000001"_s, "02f40e7e2221f295de297117b7f3d62f5c6a97ffcb8ceff1cd6ba8ce4a9a18ad84ffabbd8efa59332be7ad6756a66e294afd185a78ff12aa520e4de739baca0c7ffeff7f2955727a"_s, "0303001d34b856296c16c0d40d3cd7750a93d1d2955fa80aa5f40fc8db7b2abdbde53950f4c0d293cdd711a35b67fb1499ae60038614f1394abfa3b4c850d927e1e7769c8eec2d19"_s, "037bf27342da639b6dccfffeb73d69d78c6c27a6009cbbca1980f8533921e8a684423e43bab08a576291af8f461bb2a8b3531d2f0485c19b16e2f1516e23dd3c1a4827af1b8ac15b"_s, "03ffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffe661ce18ff55987308059b186823851ec7dd9ca1161de93d5174d66e8382e9bb2fe84e47"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "X9.62 c2tnb191v1"_s, "1.2.840.10045.3.0.5"_s, "800000000000000000000000000000000000000000000201"_s, "2866537b676752636a68f56554e12640276b649ef7526267"_s, "2e45ef571f00786f67b0081b9495a3d95462f5de0aa185ec"_s, "36b3daf8a23206f9c4f299d7b21a9c369137f2c84ae1aa0d"_s, "765be73433b3f95e332932e70ea245ca2418ea0ef98018fb"_s, "40000000000000000000000004a20e90c39067c893bbb9a5"_s, 2));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "X9.62 c2tnb191v2"_s, "1.2.840.10045.3.0.6"_s, "800000000000000000000000000000000000000000000201"_s, "401028774d7777c7b7666d1366ea432071274f89ff01e718"_s, "0620048d28bcbd03b6249c99182b7c8cd19700c362c46a01"_s, "3809b2b7cc1b28cc5a87926aad83fd28789e81e2c9e3bf10"_s, "17434386626d14f3dbf01760d9213a3e1cf37aec437d668a"_s, "20000000000000000000000050508cb89f652824e06b8173"_s, 4));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "X9.62 c2tnb191v3"_s, "1.2.840.10045.3.0.7"_s, "800000000000000000000000000000000000000000000201"_s, "6c01074756099122221056911c77d77e77a777e7e7e77fcb"_s, "71fe1af926cf847989efef8db459f66394d90f32ad3f15e8"_s, "375d4ce24fde434489de8746e71786015009e66e38a926dd"_s, "545a39176196575d985999366e6ad34ce0a77cd7127b06be"_s, "155555555555555555555555610c0b196812bfb6288a3ea3"_s, 6));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "X9.62 c2tnb239v1"_s, "1.2.840.10045.3.0.11"_s, "800000000000000000000000000000000000000000000000001000000001"_s, "32010857077c5431123a46b808906756f543423e8d27877578125778ac76"_s, "790408f2eedaf392b012edefb3392f30f4327c0ca3f31fc383c422aa8c16"_s, "57927098fa932e7c0a96d3fd5b706ef7e5f5c156e16b7e7c86038552e91d"_s, "61d8ee5077c33fecf6f1a16b268de469c3c7744ea9a971649fc7a9616305"_s, "2000000000000000000000000000000f4d42ffe1492a4993f1cad666e447"_s, 4));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "X9.62 c2tnb239v2"_s, "1.2.840.10045.3.0.12"_s, "800000000000000000000000000000000000000000000000001000000001"_s, "4230017757a767fae42398569b746325d45313af0766266479b75654e65f"_s, "5037ea654196cff0cd82b2c14a2fcf2e3ff8775285b545722f03eacdb74b"_s, "28f9d04e900069c8dc47a08534fe76d2b900b7d7ef31f5709f200c4ca205"_s, "5667334c45aff3b5a03bad9dd75e2c71a99362567d5453f7fa6e227ec833"_s, "1555555555555555555555555555553c6f2885259c31e3fcdf154624522d"_s, 6));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "X9.62 c2tnb239v3"_s, "1.2.840.10045.3.0.13"_s, "800000000000000000000000000000000000000000000000001000000001"_s, "01238774666a67766d6676f778e676b66999176666e687666d8766c66a9f"_s, "6a941977ba9f6a435199acfc51067ed587f519c5ecb541b8e44111de1d40"_s, "70f6e9d04d289c4e89913ce3530bfde903977d42b146d539bf1bde4e9c92"_s, "2e5a0eaf6e5e1305b9004dce5c0ed7fe59a35608f33837c816d80b79f461"_s, "0cccccccccccccccccccccccccccccac4912d2d9df903ef9888b8a0e4cff"_s, 10));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "X9.62 c2tnb359v1"_s, "1.2.840.10045.3.0.18"_s, "800000000000000000000000000000000000000000000000000000000000000000000000100000000000000001"_s, "5667676a654b20754f356ea92017d946567c46675556f19556a04616b567d223a5e05656fb549016a96656a557"_s, "2472e2d0197c49363f1fe7f5b6db075d52b6947d135d8ca445805d39bc345626089687742b6329e70680231988"_s, "3c258ef3047767e7ede0f1fdaa79daee3841366a132e163aced4ed2401df9c6bdcde98e8e707c07a2239b1b097"_s, "53d7e08529547048121e9c95f3791dd804963948f34fae7bf44ea82365dc7868fe57e4ae2de211305a407104bd"_s, "01af286bca1af286bca1af286bca1af286bca1af286bc9fb8f6b85c556892c20a7eb964fe7719e74f490758d3b"_s, 76));
		$nc(ECDSAUtils::ecCurveDefinitions)->add($$new($ECDSAUtils$ECCurveDefinition, "X9.62 c2tnb431r1"_s, "1.2.840.10045.3.0.20"_s, "800000000000000000000000000000000000000000000000000000000000000000000000000001000000000000000000000000000001"_s, "1a827ef00dd6fc0e234caf046c6a5d8a85395b236cc4ad2cf32a0cadbdc9ddf620b0eb9906d0957f6c6feacd615468df104de296cd8f"_s, "10d9b4a3d9047d8b154359abfb1b7f5485b04ceb868237ddc9deda982a679a5a919b626d4e50a8dd731b107a9962381fb5d807bf2618"_s, "120fc05d3c67a99de161d2f4092622feca701be4f50f4758714e8a87bbf2a658ef8c21e7c5efe965361f6c2999c0c247b0dbd70ce6b7"_s, "20d0af8903a96f8d5fa2c255745d3c451b302c9346d9b7e485e7bce41f6b591f3e8f6addcbb0bc4c2f947a7de1a89b625d6a598b3760"_s, "0340340340340340340340340340340340340340340340340340340323c313fab50589703b5ec68d3587fec60d161cc149c1ad4a91"_s, 10080));
	}
}

ECDSAUtils::ECDSAUtils() {
}

$Class* ECDSAUtils::load$($String* name, bool initialize) {
	$loadClass(ECDSAUtils, name, initialize, &_ECDSAUtils_ClassInfo_, clinit$ECDSAUtils, allocate$ECDSAUtils);
	return class$;
}

$Class* ECDSAUtils::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com