#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$EC.h>

#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/security/KeyFactory.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PublicKey.h>
#include <java/security/interfaces/ECPublicKey.h>
#include <java/security/spec/ECField.h>
#include <java/security/spec/ECFieldFp.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/ECPoint.h>
#include <java/security/spec/ECPublicKeySpec.h>
#include <java/security/spec/EllipticCurve.h>
#include <java/security/spec/KeySpec.h>
#include <java/util/Arrays.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$EC$Curve.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BigInteger = ::java::math::BigInteger;
using $KeyFactory = ::java::security::KeyFactory;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PublicKey = ::java::security::PublicKey;
using $ECKey = ::java::security::interfaces::ECKey;
using $ECPublicKey = ::java::security::interfaces::ECPublicKey;
using $ECField = ::java::security::spec::ECField;
using $ECFieldFp = ::java::security::spec::ECFieldFp;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $ECPoint = ::java::security::spec::ECPoint;
using $ECPublicKeySpec = ::java::security::spec::ECPublicKeySpec;
using $EllipticCurve = ::java::security::spec::EllipticCurve;
using $KeySpec = ::java::security::spec::KeySpec;
using $Arrays = ::java::util::Arrays;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMKeyValue = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue;
using $DOMKeyValue$EC$Curve = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$EC$Curve;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $Text = ::org::w3c::dom::Text;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMKeyValue$EC_FieldInfo_[] = {
	{"ecPublicKey", "[B", nullptr, $PRIVATE, $field(DOMKeyValue$EC, ecPublicKey)},
	{"eckf", "Ljava/security/KeyFactory;", nullptr, $PRIVATE, $field(DOMKeyValue$EC, eckf)},
	{"ecParams", "Ljava/security/spec/ECParameterSpec;", nullptr, $PRIVATE, $field(DOMKeyValue$EC, ecParams)},
	{"SECP256R1", "Lorg/jcp/xml/dsig/internal/dom/DOMKeyValue$EC$Curve;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMKeyValue$EC, SECP256R1)},
	{"SECP384R1", "Lorg/jcp/xml/dsig/internal/dom/DOMKeyValue$EC$Curve;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMKeyValue$EC, SECP384R1)},
	{"SECP521R1", "Lorg/jcp/xml/dsig/internal/dom/DOMKeyValue$EC$Curve;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMKeyValue$EC, SECP521R1)},
	{}
};

$MethodInfo _DOMKeyValue$EC_MethodInfo_[] = {
	{"<init>", "(Ljava/security/interfaces/ECPublicKey;)V", nullptr, 0, $method(static_cast<void(DOMKeyValue$EC::*)($ECPublicKey*)>(&DOMKeyValue$EC::init$)), "java.security.KeyException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMKeyValue$EC::*)($Element*)>(&DOMKeyValue$EC::init$)), "javax.xml.crypto.MarshalException"},
	{"decodePoint", "([BLjava/security/spec/EllipticCurve;)Ljava/security/spec/ECPoint;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ECPoint*(*)($bytes*,$EllipticCurve*)>(&DOMKeyValue$EC::decodePoint)), "java.io.IOException"},
	{"encodePoint", "(Ljava/security/spec/ECPoint;Ljava/security/spec/EllipticCurve;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($ECPoint*,$EllipticCurve*)>(&DOMKeyValue$EC::encodePoint))},
	{"getCurveOid", "(Ljava/security/spec/ECParameterSpec;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($ECParameterSpec*)>(&DOMKeyValue$EC::getCurveOid))},
	{"getECParameterSpec", "(Ljava/lang/String;)Ljava/security/spec/ECParameterSpec;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ECParameterSpec*(*)($String*)>(&DOMKeyValue$EC::getECParameterSpec))},
	{"initializeCurve", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Lorg/jcp/xml/dsig/internal/dom/DOMKeyValue$EC$Curve;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$DOMKeyValue$EC$Curve*(*)($String*,$String*,$String*,$String*,$String*,$String*,$String*,$String*,int32_t)>(&DOMKeyValue$EC::initializeCurve))},
	{"marshalPublicKey", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Document;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{"matchCurve", "(Ljava/security/spec/ECParameterSpec;Lorg/jcp/xml/dsig/internal/dom/DOMKeyValue$EC$Curve;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ECParameterSpec*,$DOMKeyValue$EC$Curve*)>(&DOMKeyValue$EC::matchCurve))},
	{"trimZeroes", "([B)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&DOMKeyValue$EC::trimZeroes))},
	{"unmarshalKeyValue", "(Lorg/w3c/dom/Element;)Ljava/security/interfaces/ECPublicKey;", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{}
};

$InnerClassInfo _DOMKeyValue$EC_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC", "org.jcp.xml.dsig.internal.dom.DOMKeyValue", "EC", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC$Curve", "org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC", "Curve", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMKeyValue$EC_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC",
	"org.jcp.xml.dsig.internal.dom.DOMKeyValue",
	nullptr,
	_DOMKeyValue$EC_FieldInfo_,
	_DOMKeyValue$EC_MethodInfo_,
	"Lorg/jcp/xml/dsig/internal/dom/DOMKeyValue<Ljava/security/interfaces/ECPublicKey;>;",
	nullptr,
	_DOMKeyValue$EC_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMKeyValue"
};

$Object* allocate$DOMKeyValue$EC($Class* clazz) {
	return $of($alloc(DOMKeyValue$EC));
}

$DOMKeyValue$EC$Curve* DOMKeyValue$EC::SECP256R1 = nullptr;
$DOMKeyValue$EC$Curve* DOMKeyValue$EC::SECP384R1 = nullptr;
$DOMKeyValue$EC$Curve* DOMKeyValue$EC::SECP521R1 = nullptr;

$DOMKeyValue$EC$Curve* DOMKeyValue$EC::initializeCurve($String* name, $String* oid, $String* sfield, $String* a, $String* b, $String* x, $String* y, $String* n, int32_t h) {
	$init(DOMKeyValue$EC);
	$useLocalCurrentObjectStackCache();
	$var($BigInteger, p, $DOMKeyValue::bigInt(sfield));
	$var($ECField, field, $new($ECFieldFp, p));
	$var($ECField, var$0, field);
	$var($BigInteger, var$1, $DOMKeyValue::bigInt(a));
	$var($EllipticCurve, curve, $new($EllipticCurve, var$0, var$1, $($DOMKeyValue::bigInt(b))));
	$var($BigInteger, var$2, $DOMKeyValue::bigInt(x));
	$var($ECPoint, g, $new($ECPoint, var$2, $($DOMKeyValue::bigInt(y))));
	return $new($DOMKeyValue$EC$Curve, name, oid, curve, g, $($DOMKeyValue::bigInt(n)), h);
}

void DOMKeyValue$EC::init$($ECPublicKey* ecKey) {
	$useLocalCurrentObjectStackCache();
	$DOMKeyValue::init$(static_cast<$PublicKey*>(ecKey));
	$var($ECPoint, ecPoint, $nc(ecKey)->getW());
	$set(this, ecParams, ecKey->getParams());
	$set(this, ecPublicKey, encodePoint(ecPoint, $($nc(this->ecParams)->getCurve())));
}

void DOMKeyValue$EC::init$($Element* dmElem) {
	$DOMKeyValue::init$(dmElem);
}

$ECPoint* DOMKeyValue$EC::decodePoint($bytes* data, $EllipticCurve* curve) {
	$init(DOMKeyValue$EC);
	$useLocalCurrentObjectStackCache();
	if ($nc(data)->length == 0 || $nc(data)->get(0) != 4) {
		$throwNew($IOException, "Only uncompressed point format supported"_s);
	}
	int32_t n = ($nc(data)->length - 1) / 2;
	if (n != ($nc($($nc(curve)->getField()))->getFieldSize() + 7) >> 3) {
		$throwNew($IOException, "Point does not match field size"_s);
	}
	$var($bytes, xb, $Arrays::copyOfRange(data, 1, 1 + n));
	$var($bytes, yb, $Arrays::copyOfRange(data, n + 1, n + 1 + n));
	$var($BigInteger, var$0, $new($BigInteger, 1, xb));
	return $new($ECPoint, var$0, $$new($BigInteger, 1, yb));
}

$bytes* DOMKeyValue$EC::encodePoint($ECPoint* point, $EllipticCurve* curve) {
	$init(DOMKeyValue$EC);
	$useLocalCurrentObjectStackCache();
	int32_t n = ($nc($($nc(curve)->getField()))->getFieldSize() + 7) >> 3;
	$var($bytes, xb, trimZeroes($($nc($($nc(point)->getAffineX()))->toByteArray())));
	$var($bytes, yb, trimZeroes($($nc($($nc(point)->getAffineY()))->toByteArray())));
	if ($nc(xb)->length > n || $nc(yb)->length > n) {
		$throwNew($RuntimeException, "Point coordinates do not match field size"_s);
	}
	$var($bytes, b, $new($bytes, 1 + (n << 1)));
	b->set(0, (int8_t)4);
	$System::arraycopy(xb, 0, b, n - $nc(xb)->length + 1, xb->length);
	$System::arraycopy(yb, 0, b, b->length - $nc(yb)->length, yb->length);
	return b;
}

$bytes* DOMKeyValue$EC::trimZeroes($bytes* b) {
	$init(DOMKeyValue$EC);
	int32_t i = 0;
	while (i < $nc(b)->length - 1 && b->get(i) == 0) {
		++i;
	}
	if (i == 0) {
		return b;
	}
	return $Arrays::copyOfRange(b, i, $nc(b)->length);
}

$String* DOMKeyValue$EC::getCurveOid($ECParameterSpec* params) {
	$init(DOMKeyValue$EC);
	$var($DOMKeyValue$EC$Curve, match, nullptr);
	if (matchCurve(params, DOMKeyValue$EC::SECP256R1)) {
		$assign(match, DOMKeyValue$EC::SECP256R1);
	} else {
		if (matchCurve(params, DOMKeyValue$EC::SECP384R1)) {
			$assign(match, DOMKeyValue$EC::SECP384R1);
		} else {
			if (matchCurve(params, DOMKeyValue$EC::SECP521R1)) {
				$assign(match, DOMKeyValue$EC::SECP521R1);
			} else {
				return nullptr;
			}
		}
	}
	return $nc(match)->getObjectId();
}

bool DOMKeyValue$EC::matchCurve($ECParameterSpec* params, $DOMKeyValue$EC$Curve* curve) {
	$init(DOMKeyValue$EC);
	$useLocalCurrentObjectStackCache();
	int32_t fieldSize = $nc($($nc($($nc(params)->getCurve()))->getField()))->getFieldSize();
	bool var$3 = $nc($($nc($($nc(curve)->getCurve()))->getField()))->getFieldSize() == fieldSize;
	bool var$2 = var$3 && $nc($(curve->getCurve()))->equals($(params->getCurve()));
	bool var$1 = var$2 && $nc($(curve->getGenerator()))->equals($(params->getGenerator()));
	bool var$0 = var$1 && $nc($(curve->getOrder()))->equals($(params->getOrder()));
	if (var$0) {
		int32_t var$4 = curve->getCofactor();
		var$0 = var$4 == params->getCofactor();
	}
	return var$0;
}

void DOMKeyValue$EC::marshalPublicKey($Node* parent, $Document* doc, $String* dsPrefix, $DOMCryptoContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefix, $DOMUtils::getNSPrefix(context, "http://www.w3.org/2009/xmldsig11#"_s));
	$var($Element, ecKeyValueElem, $DOMUtils::createElement(doc, "ECKeyValue"_s, "http://www.w3.org/2009/xmldsig11#"_s, prefix));
	$var($Element, namedCurveElem, $DOMUtils::createElement(doc, "NamedCurve"_s, "http://www.w3.org/2009/xmldsig11#"_s, prefix));
	$var($Element, publicKeyElem, $DOMUtils::createElement(doc, "PublicKey"_s, "http://www.w3.org/2009/xmldsig11#"_s, prefix));
	$var($String, oid, getCurveOid(this->ecParams));
	if (oid == nullptr) {
		$throwNew($MarshalException, "Invalid ECParameterSpec"_s);
	}
	$DOMUtils::setAttribute(namedCurveElem, "URI"_s, $$str({"urn:oid:"_s, oid}));
	$var($String, qname, (prefix == nullptr || $nc(prefix)->length() == 0) ? "xmlns"_s : $str({"xmlns:"_s, prefix}));
	$nc(namedCurveElem)->setAttributeNS("http://www.w3.org/2000/xmlns/"_s, qname, "http://www.w3.org/2009/xmldsig11#"_s);
	$nc(ecKeyValueElem)->appendChild(namedCurveElem);
	$var($String, encoded, $XMLUtils::encodeToString(this->ecPublicKey));
	$nc(publicKeyElem)->appendChild($($nc($($DOMUtils::getOwnerDocument(publicKeyElem)))->createTextNode(encoded)));
	ecKeyValueElem->appendChild(publicKeyElem);
	$nc(parent)->appendChild(ecKeyValueElem);
}

$PublicKey* DOMKeyValue$EC::unmarshalKeyValue($Element* kvtElem) {
	$useLocalCurrentObjectStackCache();
	if (this->eckf == nullptr) {
		try {
			$set(this, eckf, $KeyFactory::getInstance("EC"_s));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, e, $catch());
			$throwNew($RuntimeException, $$str({"unable to create EC KeyFactory: "_s, $(e->getMessage())}));
		}
	}
	$var($ECParameterSpec, ecParams, nullptr);
	$var($Element, curElem, $DOMUtils::getFirstChildElement(kvtElem));
	if (curElem == nullptr) {
		$throwNew($MarshalException, "KeyValue must contain at least one type"_s);
	}
	bool var$0 = "ECParameters"_s->equals($($nc(curElem)->getLocalName()));
	if (var$0 && "http://www.w3.org/2009/xmldsig11#"_s->equals($($nc(curElem)->getNamespaceURI()))) {
		$throwNew($UnsupportedOperationException, "ECParameters not supported"_s);
	} else {
		bool var$2 = "NamedCurve"_s->equals($($nc(curElem)->getLocalName()));
		if (var$2 && "http://www.w3.org/2009/xmldsig11#"_s->equals($($nc(curElem)->getNamespaceURI()))) {
			$var($String, uri, $DOMUtils::getAttributeValue(curElem, "URI"_s));
			if ($nc(uri)->startsWith("urn:oid:"_s)) {
				$var($String, oid, uri->substring("urn:oid:"_s->length()));
				$assign(ecParams, getECParameterSpec(oid));
				if (ecParams == nullptr) {
					$throwNew($MarshalException, "Invalid curve OID"_s);
				}
			} else {
				$throwNew($MarshalException, "Invalid NamedCurve URI"_s);
			}
		} else {
			$throwNew($MarshalException, "Invalid ECKeyValue"_s);
		}
	}
	$assign(curElem, $DOMUtils::getNextSiblingElement(curElem, "PublicKey"_s, "http://www.w3.org/2009/xmldsig11#"_s));
	$var($ECPoint, ecPoint, nullptr);
	try {
		$var($String, content, $XMLUtils::getFullTextChildrenFromNode(curElem));
		$var($bytes, var$3, $XMLUtils::decode(content));
		$assign(ecPoint, decodePoint(var$3, $($nc(ecParams)->getCurve())));
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($MarshalException, "Invalid EC Point"_s, ioe);
	}
	$var($ECPublicKeySpec, spec, $new($ECPublicKeySpec, ecPoint, ecParams));
	return $cast($ECPublicKey, $DOMKeyValue::generatePublicKey(this->eckf, spec));
}

$ECParameterSpec* DOMKeyValue$EC::getECParameterSpec($String* oid) {
	$init(DOMKeyValue$EC);
	$useLocalCurrentObjectStackCache();
	if ($nc(oid)->equals($($nc(DOMKeyValue$EC::SECP256R1)->getObjectId()))) {
		return DOMKeyValue$EC::SECP256R1;
	} else {
		if (oid->equals($($nc(DOMKeyValue$EC::SECP384R1)->getObjectId()))) {
			return DOMKeyValue$EC::SECP384R1;
		} else {
			if (oid->equals($($nc(DOMKeyValue$EC::SECP521R1)->getObjectId()))) {
				return DOMKeyValue$EC::SECP521R1;
			} else {
				return nullptr;
			}
		}
	}
}

void clinit$DOMKeyValue$EC($Class* class$) {
	$assignStatic(DOMKeyValue$EC::SECP256R1, DOMKeyValue$EC::initializeCurve("secp256r1 [NIST P-256, X9.62 prime256v1]"_s, "1.2.840.10045.3.1.7"_s, "FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFF"_s, "FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFC"_s, "5AC635D8AA3A93E7B3EBBD55769886BC651D06B0CC53B0F63BCE3C3E27D2604B"_s, "6B17D1F2E12C4247F8BCE6E563A440F277037D812DEB33A0F4A13945D898C296"_s, "4FE342E2FE1A7F9B8EE7EB4A7C0F9E162BCE33576B315ECECBB6406837BF51F5"_s, "FFFFFFFF00000000FFFFFFFFFFFFFFFFBCE6FAADA7179E84F3B9CAC2FC632551"_s, 1));
	$assignStatic(DOMKeyValue$EC::SECP384R1, DOMKeyValue$EC::initializeCurve("secp384r1 [NIST P-384]"_s, "1.3.132.0.34"_s, "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFF0000000000000000FFFFFFFF"_s, "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFF0000000000000000FFFFFFFC"_s, "B3312FA7E23EE7E4988E056BE3F82D19181D9C6EFE8141120314088F5013875AC656398D8A2ED19D2A85C8EDD3EC2AEF"_s, "AA87CA22BE8B05378EB1C71EF320AD746E1D3B628BA79B9859F741E082542A385502F25DBF55296C3A545E3872760AB7"_s, "3617DE4A96262C6F5D9E98BF9292DC29F8F41DBD289A147CE9DA3113B5F0B8C00A60B1CE1D7E819D7A431D7C90EA0E5F"_s, "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC7634D81F4372DDF581A0DB248B0A77AECEC196ACCC52973"_s, 1));
	$assignStatic(DOMKeyValue$EC::SECP521R1, DOMKeyValue$EC::initializeCurve("secp521r1 [NIST P-521]"_s, "1.3.132.0.35"_s, "01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"_s, "01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC"_s, "0051953EB9618E1C9A1F929A21A0B68540EEA2DA725B99B315F3B8B489918EF109E156193951EC7E937B1652C0BD3BB1BF073573DF883D2C34F1EF451FD46B503F00"_s, "00C6858E06B70404E9CD9E3ECB662395B4429C648139053FB521F828AF606B4D3DBAA14B5E77EFE75928FE1DC127A2FFA8DE3348B3C1856A429BF97E7E31C2E5BD66"_s, "011839296A789A3BC0045C8A5FB42C7D1BD998F54449579B446817AFBD17273E662C97EE72995EF42640C550B9013FAD0761353C7086A272C24088BE94769FD16650"_s, "01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFA51868783BF2F966B7FCC0148F709A5D03BB5C9B8899C47AEBB6FB71E91386409"_s, 1));
}

DOMKeyValue$EC::DOMKeyValue$EC() {
}

$Class* DOMKeyValue$EC::load$($String* name, bool initialize) {
	$loadClass(DOMKeyValue$EC, name, initialize, &_DOMKeyValue$EC_ClassInfo_, clinit$DOMKeyValue$EC, allocate$DOMKeyValue$EC);
	return class$;
}

$Class* DOMKeyValue$EC::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org