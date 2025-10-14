#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod.h>

#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/Mac.h>
#include <javax/crypto/SecretKey.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/SignedInfo.h>
#include <javax/xml/crypto/dsig/XMLSignContext.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/XMLSignatureException.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <javax/xml/crypto/dsig/spec/HMACParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/SignatureMethodParameterSpec.h>
#include <org/jcp/xml/dsig/internal/MacOutputStream.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignedInfo.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef DOM_SIGNATURE_PROVIDER
#undef HMAC
#undef HMAC_RIPEMD160
#undef HMAC_SHA224
#undef HMAC_SHA256
#undef HMAC_SHA384
#undef HMAC_SHA512
#undef LOG
#undef XMLNS

using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Mac = ::javax::crypto::Mac;
using $SecretKey = ::javax::crypto::SecretKey;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $SignedInfo = ::javax::xml::crypto::dsig::SignedInfo;
using $XMLSignContext = ::javax::xml::crypto::dsig::XMLSignContext;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $XMLSignatureException = ::javax::xml::crypto::dsig::XMLSignatureException;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;
using $HMACParameterSpec = ::javax::xml::crypto::dsig::spec::HMACParameterSpec;
using $SignatureMethodParameterSpec = ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec;
using $MacOutputStream = ::org::jcp::xml::dsig::internal::MacOutputStream;
using $AbstractDOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod;
using $AbstractDOMSignatureMethod$Type = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type;
using $DOMSignedInfo = ::org::jcp::xml::dsig::internal::dom::DOMSignedInfo;
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

$FieldInfo _DOMHMACSignatureMethod_FieldInfo_[] = {
	{"DOM_SIGNATURE_PROVIDER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMHMACSignatureMethod, DOM_SIGNATURE_PROVIDER)},
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMHMACSignatureMethod, LOG)},
	{"HMAC_SHA224", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMHMACSignatureMethod, HMAC_SHA224)},
	{"HMAC_SHA256", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMHMACSignatureMethod, HMAC_SHA256)},
	{"HMAC_SHA384", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMHMACSignatureMethod, HMAC_SHA384)},
	{"HMAC_SHA512", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMHMACSignatureMethod, HMAC_SHA512)},
	{"HMAC_RIPEMD160", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMHMACSignatureMethod, HMAC_RIPEMD160)},
	{"hmac", "Ljavax/crypto/Mac;", nullptr, $PRIVATE, $field(DOMHMACSignatureMethod, hmac)},
	{"outputLength", "I", nullptr, $PRIVATE, $field(DOMHMACSignatureMethod, outputLength)},
	{"outputLengthSet", "Z", nullptr, $PRIVATE, $field(DOMHMACSignatureMethod, outputLengthSet)},
	{"params", "Ljavax/xml/crypto/dsig/spec/SignatureMethodParameterSpec;", nullptr, $PRIVATE, $field(DOMHMACSignatureMethod, params)},
	{}
};

$MethodInfo _DOMHMACSignatureMethod_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMHMACSignatureMethod::*)($AlgorithmParameterSpec*)>(&DOMHMACSignatureMethod::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMHMACSignatureMethod::*)($Element*)>(&DOMHMACSignatureMethod::init$)), "javax.xml.crypto.MarshalException"},
	{"checkParams", "(Ljavax/xml/crypto/dsig/spec/SignatureMethodParameterSpec;)V", nullptr, 0, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getAlgorithmType", "()Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, 0},
	{"getDigestLength", "()I", nullptr, $ABSTRACT},
	{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"marshalParams", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{"paramsEqual", "(Ljava/security/spec/AlgorithmParameterSpec;)Z", nullptr, 0},
	{"sign", "(Ljava/security/Key;Ljavax/xml/crypto/dsig/SignedInfo;Ljavax/xml/crypto/dsig/XMLSignContext;)[B", nullptr, 0, nullptr, "java.security.InvalidKeyException,javax.xml.crypto.dsig.XMLSignatureException"},
	{"unmarshalParams", "(Lorg/w3c/dom/Element;)Ljavax/xml/crypto/dsig/spec/SignatureMethodParameterSpec;", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{"verify", "(Ljava/security/Key;Ljavax/xml/crypto/dsig/SignedInfo;[BLjavax/xml/crypto/dsig/XMLValidateContext;)Z", nullptr, 0, nullptr, "java.security.InvalidKeyException,java.security.SignatureException,javax.xml.crypto.dsig.XMLSignatureException"},
	{}
};

$InnerClassInfo _DOMHMACSignatureMethod_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$RIPEMD160", "org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod", "RIPEMD160", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA512", "org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod", "SHA512", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA384", "org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod", "SHA384", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA256", "org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod", "SHA256", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA224", "org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod", "SHA224", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA1", "org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod", "SHA1", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMHMACSignatureMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod",
	"org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod",
	nullptr,
	_DOMHMACSignatureMethod_FieldInfo_,
	_DOMHMACSignatureMethod_MethodInfo_,
	nullptr,
	nullptr,
	_DOMHMACSignatureMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$RIPEMD160,org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA512,org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA384,org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA256,org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA224,org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA1"
};

$Object* allocate$DOMHMACSignatureMethod($Class* clazz) {
	return $of($alloc(DOMHMACSignatureMethod));
}

$String* DOMHMACSignatureMethod::DOM_SIGNATURE_PROVIDER = nullptr;
$Logger* DOMHMACSignatureMethod::LOG = nullptr;
$String* DOMHMACSignatureMethod::HMAC_SHA224 = nullptr;
$String* DOMHMACSignatureMethod::HMAC_SHA256 = nullptr;
$String* DOMHMACSignatureMethod::HMAC_SHA384 = nullptr;
$String* DOMHMACSignatureMethod::HMAC_SHA512 = nullptr;
$String* DOMHMACSignatureMethod::HMAC_RIPEMD160 = nullptr;

void DOMHMACSignatureMethod::init$($AlgorithmParameterSpec* params) {
	$AbstractDOMSignatureMethod::init$();
	checkParams($cast($SignatureMethodParameterSpec, params));
	$set(this, params, $cast($SignatureMethodParameterSpec, params));
}

void DOMHMACSignatureMethod::init$($Element* smElem) {
	$AbstractDOMSignatureMethod::init$();
	$var($Element, paramsElem, $DOMUtils::getFirstChildElement(smElem));
	if (paramsElem != nullptr) {
		$set(this, params, unmarshalParams(paramsElem));
	}
	try {
		checkParams(this->params);
	} catch ($InvalidAlgorithmParameterException&) {
		$var($InvalidAlgorithmParameterException, iape, $catch());
		$throwNew($MarshalException, static_cast<$Throwable*>(iape));
	}
}

void DOMHMACSignatureMethod::checkParams($SignatureMethodParameterSpec* params) {
	if (params != nullptr) {
		if (!($instanceOf($HMACParameterSpec, params))) {
			$throwNew($InvalidAlgorithmParameterException, "params must be of type HMACParameterSpec"_s);
		}
		this->outputLength = $nc(($cast($HMACParameterSpec, params)))->getOutputLength();
		this->outputLengthSet = true;
		$nc(DOMHMACSignatureMethod::LOG)->debug("Setting outputLength from HMACParameterSpec to: {}"_s, $$new($ObjectArray, {$($of($Integer::valueOf(this->outputLength)))}));
	}
}

$AlgorithmParameterSpec* DOMHMACSignatureMethod::getParameterSpec() {
	return this->params;
}

$SignatureMethodParameterSpec* DOMHMACSignatureMethod::unmarshalParams($Element* paramsElem) {
	try {
		this->outputLength = $Integer::parseInt($($nc($($nc(paramsElem)->getFirstChild()))->getNodeValue()));
	} catch ($NumberFormatException&) {
		$var($NumberFormatException, ex, $catch());
		$throwNew($MarshalException, $$str({"Invalid output length supplied: "_s, $($nc($($nc(paramsElem)->getFirstChild()))->getNodeValue())}));
	}
	this->outputLengthSet = true;
	$nc(DOMHMACSignatureMethod::LOG)->debug("unmarshalled outputLength: {}"_s, $$new($ObjectArray, {$($of($Integer::valueOf(this->outputLength)))}));
	return $new($HMACParameterSpec, this->outputLength);
}

void DOMHMACSignatureMethod::marshalParams($Element* parent, $String* prefix) {
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, hmacElem, $DOMUtils::createElement(ownerDoc, "HMACOutputLength"_s, $XMLSignature::XMLNS, prefix));
	$nc(hmacElem)->appendChild($($nc(ownerDoc)->createTextNode($($String::valueOf(this->outputLength)))));
	$nc(parent)->appendChild(hmacElem);
}

bool DOMHMACSignatureMethod::verify($Key* key, $SignedInfo* si, $bytes* sig, $XMLValidateContext* context) {
	if (key == nullptr || si == nullptr || sig == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($SecretKey, key))) {
		$throwNew($InvalidKeyException, "key must be SecretKey"_s);
	}
	if (this->hmac == nullptr) {
		try {
			$var($Provider, p, $cast($Provider, $nc(context)->getProperty(DOMHMACSignatureMethod::DOM_SIGNATURE_PROVIDER)));
			$set(this, hmac, (p == nullptr) ? $Mac::getInstance($(getJCAAlgorithm())) : $Mac::getInstance($(getJCAAlgorithm()), p));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$throwNew($XMLSignatureException, static_cast<$Throwable*>(nsae));
		}
	}
	if (this->outputLengthSet && this->outputLength < getDigestLength()) {
		$throwNew($XMLSignatureException, $$str({"HMACOutputLength must not be less than "_s, $$str(getDigestLength())}));
	}
	$nc(this->hmac)->init(key);
	$nc(($cast($DOMSignedInfo, si)))->canonicalize(context, $$new($MacOutputStream, this->hmac));
	$var($bytes, result, $nc(this->hmac)->doFinal());
	return $MessageDigest::isEqual(sig, result);
}

$bytes* DOMHMACSignatureMethod::sign($Key* key, $SignedInfo* si, $XMLSignContext* context) {
	if (key == nullptr || si == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($SecretKey, key))) {
		$throwNew($InvalidKeyException, "key must be SecretKey"_s);
	}
	if (this->hmac == nullptr) {
		try {
			$var($Provider, p, $cast($Provider, $nc(context)->getProperty(DOMHMACSignatureMethod::DOM_SIGNATURE_PROVIDER)));
			$set(this, hmac, (p == nullptr) ? $Mac::getInstance($(getJCAAlgorithm())) : $Mac::getInstance($(getJCAAlgorithm()), p));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$throwNew($XMLSignatureException, static_cast<$Throwable*>(nsae));
		}
	}
	if (this->outputLengthSet && this->outputLength < getDigestLength()) {
		$throwNew($XMLSignatureException, $$str({"HMACOutputLength must not be less than "_s, $$str(getDigestLength())}));
	}
	$nc(this->hmac)->init(key);
	$nc(($cast($DOMSignedInfo, si)))->canonicalize(context, $$new($MacOutputStream, this->hmac));
	return $nc(this->hmac)->doFinal();
}

bool DOMHMACSignatureMethod::paramsEqual($AlgorithmParameterSpec* spec) {
	if (getParameterSpec() == spec) {
		return true;
	}
	if (!($instanceOf($HMACParameterSpec, spec))) {
		return false;
	}
	$var($HMACParameterSpec, ospec, $cast($HMACParameterSpec, spec));
	return this->outputLength == $nc(ospec)->getOutputLength();
}

$AbstractDOMSignatureMethod$Type* DOMHMACSignatureMethod::getAlgorithmType() {
	$init($AbstractDOMSignatureMethod$Type);
	return $AbstractDOMSignatureMethod$Type::HMAC;
}

int32_t DOMHMACSignatureMethod::hashCode() {
	return $AbstractDOMSignatureMethod::hashCode();
}

bool DOMHMACSignatureMethod::equals(Object$* o) {
	return $AbstractDOMSignatureMethod::equals(o);
}

void DOMHMACSignatureMethod::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$AbstractDOMSignatureMethod::marshal(parent, dsPrefix, context);
}

void clinit$DOMHMACSignatureMethod($Class* class$) {
	$assignStatic(DOMHMACSignatureMethod::DOM_SIGNATURE_PROVIDER, "org.jcp.xml.dsig.internal.dom.MacProvider"_s);
	$assignStatic(DOMHMACSignatureMethod::HMAC_SHA224, "http://www.w3.org/2001/04/xmldsig-more#hmac-sha224"_s);
	$assignStatic(DOMHMACSignatureMethod::HMAC_SHA256, "http://www.w3.org/2001/04/xmldsig-more#hmac-sha256"_s);
	$assignStatic(DOMHMACSignatureMethod::HMAC_SHA384, "http://www.w3.org/2001/04/xmldsig-more#hmac-sha384"_s);
	$assignStatic(DOMHMACSignatureMethod::HMAC_SHA512, "http://www.w3.org/2001/04/xmldsig-more#hmac-sha512"_s);
	$assignStatic(DOMHMACSignatureMethod::HMAC_RIPEMD160, "http://www.w3.org/2001/04/xmldsig-more#hmac-ripemd160"_s);
	$assignStatic(DOMHMACSignatureMethod::LOG, $LoggerFactory::getLogger(DOMHMACSignatureMethod::class$));
}

DOMHMACSignatureMethod::DOMHMACSignatureMethod() {
}

$Class* DOMHMACSignatureMethod::load$($String* name, bool initialize) {
	$loadClass(DOMHMACSignatureMethod, name, initialize, &_DOMHMACSignatureMethod_ClassInfo_, clinit$DOMHMACSignatureMethod, allocate$DOMHMACSignatureMethod);
	return class$;
}

$Class* DOMHMACSignatureMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org