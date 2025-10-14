#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue$Curve.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>
#include <com/sun/org/apache/xml/internal/security/utils/Signature11ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
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
#include <java/security/Key.h>
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
#include <java/security/spec/InvalidKeySpecException.h>
#include <java/security/spec/KeySpec.h>
#include <java/util/Arrays.h>
#include <javax/xml/crypto/MarshalException.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef _TAG_ECKEYVALUE

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $ECKeyValue$Curve = ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::ECKeyValue$Curve;
using $KeyValueContent = ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::KeyValueContent;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $I18n = ::com::sun::org::apache::xml::internal::security::utils::I18n;
using $Signature11ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $BigInteger = ::java::math::BigInteger;
using $Key = ::java::security::Key;
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
using $InvalidKeySpecException = ::java::security::spec::InvalidKeySpecException;
using $KeySpec = ::java::security::spec::KeySpec;
using $Arrays = ::java::util::Arrays;
using $MarshalException = ::javax::xml::crypto::MarshalException;
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
							namespace keys {
								namespace content {
									namespace keyvalues {

$FieldInfo _ECKeyValue_FieldInfo_[] = {
	{"SECP256R1", "Lcom/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue$Curve;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ECKeyValue, SECP256R1)},
	{"SECP384R1", "Lcom/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue$Curve;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ECKeyValue, SECP384R1)},
	{"SECP521R1", "Lcom/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue$Curve;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ECKeyValue, SECP521R1)},
	{}
};

$MethodInfo _ECKeyValue_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ECKeyValue::*)($Element*,$String*)>(&ECKeyValue::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/security/Key;)V", nullptr, $PUBLIC, $method(static_cast<void(ECKeyValue::*)($Document*,$Key*)>(&ECKeyValue::init$)), "java.lang.IllegalArgumentException"},
	{"bigInt", "(Ljava/lang/String;)Ljava/math/BigInteger;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$BigInteger*(*)($String*)>(&ECKeyValue::bigInt))},
	{"decodePoint", "([BLjava/security/spec/EllipticCurve;)Ljava/security/spec/ECPoint;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ECPoint*(*)($bytes*,$EllipticCurve*)>(&ECKeyValue::decodePoint)), "java.io.IOException"},
	{"encodePoint", "(Ljava/security/spec/ECPoint;Ljava/security/spec/EllipticCurve;)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($ECPoint*,$EllipticCurve*)>(&ECKeyValue::encodePoint))},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCurveOid", "(Ljava/security/spec/ECParameterSpec;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($ECParameterSpec*)>(&ECKeyValue::getCurveOid))},
	{"getECParameterSpec", "(Ljava/lang/String;)Ljava/security/spec/ECParameterSpec;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ECParameterSpec*(*)($String*)>(&ECKeyValue::getECParameterSpec))},
	{"getFirstChildElement", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Element*(*)($Node*)>(&ECKeyValue::getFirstChildElement))},
	{"getNextSiblingElement", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Element*(*)($Node*,$String*,$String*)>(&ECKeyValue::getNextSiblingElement)), "javax.xml.crypto.MarshalException"},
	{"getNextSiblingElement", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Element*(*)($Node*)>(&ECKeyValue::getNextSiblingElement))},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"initializeCurve", "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;I)Lcom/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue$Curve;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ECKeyValue$Curve*(*)($String*,$String*,$String*,$String*,$String*,$String*,$String*,$String*,int32_t)>(&ECKeyValue::initializeCurve))},
	{"matchCurve", "(Ljava/security/spec/ECParameterSpec;Lcom/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue$Curve;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($ECParameterSpec*,$ECKeyValue$Curve*)>(&ECKeyValue::matchCurve))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"trimZeroes", "([B)[B", nullptr, $PRIVATE | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&ECKeyValue::trimZeroes))},
	{"verifyElement", "(Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Element*(*)($Element*,$String*,$String*)>(&ECKeyValue::verifyElement)), "javax.xml.crypto.MarshalException"},
	{}
};

$InnerClassInfo _ECKeyValue_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue$Curve", "com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue", "Curve", $STATIC | $FINAL},
	{}
};

$ClassInfo _ECKeyValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue",
	"com.sun.org.apache.xml.internal.security.utils.Signature11ElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.KeyValueContent",
	_ECKeyValue_FieldInfo_,
	_ECKeyValue_MethodInfo_,
	nullptr,
	nullptr,
	_ECKeyValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue$Curve"
};

$Object* allocate$ECKeyValue($Class* clazz) {
	return $of($alloc(ECKeyValue));
}

int32_t ECKeyValue::hashCode() {
	 return this->$Signature11ElementProxy::hashCode();
}

bool ECKeyValue::equals(Object$* arg0) {
	 return this->$Signature11ElementProxy::equals(arg0);
}

$Object* ECKeyValue::clone() {
	 return this->$Signature11ElementProxy::clone();
}

$String* ECKeyValue::toString() {
	 return this->$Signature11ElementProxy::toString();
}

void ECKeyValue::finalize() {
	this->$Signature11ElementProxy::finalize();
}

$ECKeyValue$Curve* ECKeyValue::SECP256R1 = nullptr;
$ECKeyValue$Curve* ECKeyValue::SECP384R1 = nullptr;
$ECKeyValue$Curve* ECKeyValue::SECP521R1 = nullptr;

$ECKeyValue$Curve* ECKeyValue::initializeCurve($String* name, $String* oid, $String* sfield, $String* a, $String* b, $String* x, $String* y, $String* n, int32_t h) {
	$init(ECKeyValue);
	$var($BigInteger, p, bigInt(sfield));
	$var($ECField, field, $new($ECFieldFp, p));
	$var($ECField, var$0, field);
	$var($BigInteger, var$1, bigInt(a));
	$var($EllipticCurve, curve, $new($EllipticCurve, var$0, var$1, $(bigInt(b))));
	$var($BigInteger, var$2, bigInt(x));
	$var($ECPoint, g, $new($ECPoint, var$2, $(bigInt(y))));
	return $new($ECKeyValue$Curve, name, oid, curve, g, $(bigInt(n)), h);
}

void ECKeyValue::init$($Element* element, $String* baseURI) {
	$Signature11ElementProxy::init$(element, baseURI);
}

void ECKeyValue::init$($Document* doc, $Key* key) {
	$Signature11ElementProxy::init$(doc);
	addReturnToSelf();
	if ($instanceOf($ECPublicKey, key)) {
		$var($ECParameterSpec, ecParams, $nc(($cast($ECPublicKey, key)))->getParams());
		$var($String, oid, getCurveOid(ecParams));
		if (oid == nullptr) {
			$throwNew($IllegalArgumentException, "Invalid ECParameterSpec"_s);
		}
		$var($Element, namedCurveElement, $XMLUtils::createElementInSignature11Space($(getDocument()), "NamedCurve"_s));
		$nc(namedCurveElement)->setAttributeNS(nullptr, "URI"_s, $$str({"urn:oid:"_s, oid}));
		appendSelf(static_cast<$Node*>(namedCurveElement));
		addReturnToSelf();
		$var($ECPoint, ecPoint, ($cast($ECPublicKey, key))->getW());
		$var($bytes, secPublicKey, encodePoint(ecPoint, $($nc(ecParams)->getCurve())));
		$var($String, encoded, $XMLUtils::encodeToString(secPublicKey));
		$var($Element, publicKeyElement, $XMLUtils::createElementInSignature11Space($(getDocument()), "PublicKey"_s));
		$var($Text, text, $nc($(getDocument()))->createTextNode(encoded));
		$nc(publicKeyElement)->appendChild(text);
		appendSelf(static_cast<$Node*>(publicKeyElement));
		addReturnToSelf();
	} else {
			$init($Constants);
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of($Constants::_TAG_ECKEYVALUE),
			$($of($nc($of(key))->getClass()->getName()))
		}));
		$throwNew($IllegalArgumentException, $($I18n::translate("KeyValue.IllegalArgument"_s, exArgs)));
	}
}

$PublicKey* ECKeyValue::getPublicKey() {
	try {
		$var($ECParameterSpec, ecParams, nullptr);
		$var($Element, curElem, getFirstChildElement($(getElement())));
		if (curElem == nullptr) {
			$throwNew($MarshalException, "KeyValue must contain at least one type"_s);
		}
		bool var$0 = "ECParameters"_s->equals($($nc(curElem)->getLocalName()));
		$init($Constants);
		if (var$0 && $nc($Constants::SignatureSpec11NS)->equals($($nc(curElem)->getNamespaceURI()))) {
			$throwNew($UnsupportedOperationException, "ECParameters not supported"_s);
		} else {
			bool var$2 = "NamedCurve"_s->equals($($nc(curElem)->getLocalName()));
			if (var$2 && $nc($Constants::SignatureSpec11NS)->equals($($nc(curElem)->getNamespaceURI()))) {
				$var($String, uri, nullptr);
				if ($nc(curElem)->hasAttributeNS(nullptr, "URI"_s)) {
					$assign(uri, curElem->getAttributeNS(nullptr, "URI"_s));
				}
				if (uri != nullptr && uri->startsWith("urn:oid:"_s)) {
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
		$assign(curElem, getNextSiblingElement(curElem, "PublicKey"_s, $Constants::SignatureSpec11NS));
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
		return $nc($($KeyFactory::getInstance("EC"_s)))->generatePublic(spec);
	} catch ($NoSuchAlgorithmException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSecurityException, ex);
	} catch ($InvalidKeySpecException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSecurityException, ex);
	} catch ($MarshalException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSecurityException, ex);
	}
	$shouldNotReachHere();
}

$String* ECKeyValue::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_ECKEYVALUE;
}

$Element* ECKeyValue::getFirstChildElement($Node* node) {
	$init(ECKeyValue);
	$var($Node, child, $nc(node)->getFirstChild());
	while (child != nullptr && child->getNodeType() != $Node::ELEMENT_NODE) {
		$assign(child, child->getNextSibling());
	}
	return $cast($Element, child);
}

$Element* ECKeyValue::getNextSiblingElement($Node* node, $String* localName, $String* namespaceURI) {
	$init(ECKeyValue);
	return verifyElement($(getNextSiblingElement(node)), localName, namespaceURI);
}

$Element* ECKeyValue::getNextSiblingElement($Node* node) {
	$init(ECKeyValue);
	$var($Node, sibling, $nc(node)->getNextSibling());
	while (sibling != nullptr && sibling->getNodeType() != $Node::ELEMENT_NODE) {
		$assign(sibling, sibling->getNextSibling());
	}
	return $cast($Element, sibling);
}

$Element* ECKeyValue::verifyElement($Element* elem, $String* localName, $String* namespaceURI) {
	$init(ECKeyValue);
	if (elem == nullptr) {
		$throwNew($MarshalException, $$str({"Missing "_s, localName, " element"_s}));
	}
	$var($String, name, $nc(elem)->getLocalName());
	$var($String, namespace$, elem->getNamespaceURI());
	bool var$0 = !$nc(name)->equals(localName) || namespace$ == nullptr && namespaceURI != nullptr;
	if (var$0 || namespace$ != nullptr && !namespace$->equals(namespaceURI)) {
		$throwNew($MarshalException, $$str({"Invalid element name: "_s, namespace$, ":"_s, name, ", expected "_s, namespaceURI, ":"_s, localName}));
	}
	return elem;
}

$String* ECKeyValue::getCurveOid($ECParameterSpec* params) {
	$init(ECKeyValue);
	$var($ECKeyValue$Curve, match, nullptr);
	if (matchCurve(params, ECKeyValue::SECP256R1)) {
		$assign(match, ECKeyValue::SECP256R1);
	} else {
		if (matchCurve(params, ECKeyValue::SECP384R1)) {
			$assign(match, ECKeyValue::SECP384R1);
		} else {
			if (matchCurve(params, ECKeyValue::SECP521R1)) {
				$assign(match, ECKeyValue::SECP521R1);
			} else {
				return nullptr;
			}
		}
	}
	return $nc(match)->getObjectId();
}

bool ECKeyValue::matchCurve($ECParameterSpec* params, $ECKeyValue$Curve* curve) {
	$init(ECKeyValue);
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

$ECPoint* ECKeyValue::decodePoint($bytes* data, $EllipticCurve* curve) {
	$init(ECKeyValue);
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

$bytes* ECKeyValue::encodePoint($ECPoint* point, $EllipticCurve* curve) {
	$init(ECKeyValue);
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

$bytes* ECKeyValue::trimZeroes($bytes* b) {
	$init(ECKeyValue);
	int32_t i = 0;
	while (i < $nc(b)->length - 1 && b->get(i) == 0) {
		++i;
	}
	if (i == 0) {
		return b;
	}
	return $Arrays::copyOfRange(b, i, $nc(b)->length);
}

$ECParameterSpec* ECKeyValue::getECParameterSpec($String* oid) {
	$init(ECKeyValue);
	if ($nc(oid)->equals($($nc(ECKeyValue::SECP256R1)->getObjectId()))) {
		return ECKeyValue::SECP256R1;
	} else {
		if (oid->equals($($nc(ECKeyValue::SECP384R1)->getObjectId()))) {
			return ECKeyValue::SECP384R1;
		} else {
			if (oid->equals($($nc(ECKeyValue::SECP521R1)->getObjectId()))) {
				return ECKeyValue::SECP521R1;
			} else {
				return nullptr;
			}
		}
	}
}

$BigInteger* ECKeyValue::bigInt($String* s) {
	$init(ECKeyValue);
	return $new($BigInteger, s, 16);
}

void clinit$ECKeyValue($Class* class$) {
	$assignStatic(ECKeyValue::SECP256R1, ECKeyValue::initializeCurve("secp256r1 [NIST P-256, X9.62 prime256v1]"_s, "1.2.840.10045.3.1.7"_s, "FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFF"_s, "FFFFFFFF00000001000000000000000000000000FFFFFFFFFFFFFFFFFFFFFFFC"_s, "5AC635D8AA3A93E7B3EBBD55769886BC651D06B0CC53B0F63BCE3C3E27D2604B"_s, "6B17D1F2E12C4247F8BCE6E563A440F277037D812DEB33A0F4A13945D898C296"_s, "4FE342E2FE1A7F9B8EE7EB4A7C0F9E162BCE33576B315ECECBB6406837BF51F5"_s, "FFFFFFFF00000000FFFFFFFFFFFFFFFFBCE6FAADA7179E84F3B9CAC2FC632551"_s, 1));
	$assignStatic(ECKeyValue::SECP384R1, ECKeyValue::initializeCurve("secp384r1 [NIST P-384]"_s, "1.3.132.0.34"_s, "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFF0000000000000000FFFFFFFF"_s, "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFEFFFFFFFF0000000000000000FFFFFFFC"_s, "B3312FA7E23EE7E4988E056BE3F82D19181D9C6EFE8141120314088F5013875AC656398D8A2ED19D2A85C8EDD3EC2AEF"_s, "AA87CA22BE8B05378EB1C71EF320AD746E1D3B628BA79B9859F741E082542A385502F25DBF55296C3A545E3872760AB7"_s, "3617DE4A96262C6F5D9E98BF9292DC29F8F41DBD289A147CE9DA3113B5F0B8C00A60B1CE1D7E819D7A431D7C90EA0E5F"_s, "FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC7634D81F4372DDF581A0DB248B0A77AECEC196ACCC52973"_s, 1));
	$assignStatic(ECKeyValue::SECP521R1, ECKeyValue::initializeCurve("secp521r1 [NIST P-521]"_s, "1.3.132.0.35"_s, "01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"_s, "01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFC"_s, "0051953EB9618E1C9A1F929A21A0B68540EEA2DA725B99B315F3B8B489918EF109E156193951EC7E937B1652C0BD3BB1BF073573DF883D2C34F1EF451FD46B503F00"_s, "00C6858E06B70404E9CD9E3ECB662395B4429C648139053FB521F828AF606B4D3DBAA14B5E77EFE75928FE1DC127A2FFA8DE3348B3C1856A429BF97E7E31C2E5BD66"_s, "011839296A789A3BC0045C8A5FB42C7D1BD998F54449579B446817AFBD17273E662C97EE72995EF42640C550B9013FAD0761353C7086A272C24088BE94769FD16650"_s, "01FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFA51868783BF2F966B7FCC0148F709A5D03BB5C9B8899C47AEBB6FB71E91386409"_s, 1));
}

ECKeyValue::ECKeyValue() {
}

$Class* ECKeyValue::load$($String* name, bool initialize) {
	$loadClass(ECKeyValue, name, initialize, &_ECKeyValue_ClassInfo_, clinit$ECKeyValue, allocate$ECKeyValue);
	return class$;
}

$Class* ECKeyValue::class$ = nullptr;

									} // keyvalues
								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com