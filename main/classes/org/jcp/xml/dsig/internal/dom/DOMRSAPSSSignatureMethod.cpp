#include <org/jcp/xml/dsig/internal/dom/DOMRSAPSSSignatureMethod.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
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
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivateKey.h>
#include <java/security/Provider.h>
#include <java/security/PublicKey.h>
#include <java/security/Signature.h>
#include <java/security/SignatureException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/MGF1ParameterSpec.h>
#include <java/security/spec/PSSParameterSpec.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/DigestMethod.h>
#include <javax/xml/crypto/dsig/SignedInfo.h>
#include <javax/xml/crypto/dsig/XMLSignContext.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/XMLSignatureException.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <javax/xml/crypto/dsig/spec/RSAPSSParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/SignatureMethodParameterSpec.h>
#include <org/jcp/xml/dsig/internal/SignerOutputStream.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignedInfo.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef DEFAULT_PSS_SPEC
#undef DOM_SIGNATURE_PROVIDER
#undef LOG
#undef RSA_PSS
#undef TRAILER_FIELD_BC
#undef XMLNS
#undef _ATT_ALGORITHM
#undef _TAG_DIGESTMETHOD
#undef _TAG_MGF
#undef _TAG_RSAPSSPARAMS
#undef _TAG_SALTLENGTH
#undef _TAG_TRAILERFIELD

using $SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
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
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivateKey = ::java::security::PrivateKey;
using $Provider = ::java::security::Provider;
using $PublicKey = ::java::security::PublicKey;
using $Signature = ::java::security::Signature;
using $SignatureException = ::java::security::SignatureException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $MGF1ParameterSpec = ::java::security::spec::MGF1ParameterSpec;
using $PSSParameterSpec = ::java::security::spec::PSSParameterSpec;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DigestMethod = ::javax::xml::crypto::dsig::DigestMethod;
using $SignedInfo = ::javax::xml::crypto::dsig::SignedInfo;
using $XMLSignContext = ::javax::xml::crypto::dsig::XMLSignContext;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $1XMLSignatureException = ::javax::xml::crypto::dsig::XMLSignatureException;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;
using $RSAPSSParameterSpec = ::javax::xml::crypto::dsig::spec::RSAPSSParameterSpec;
using $SignatureMethodParameterSpec = ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec;
using $SignerOutputStream = ::org::jcp::xml::dsig::internal::SignerOutputStream;
using $AbstractDOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod;
using $DOMSignedInfo = ::org::jcp::xml::dsig::internal::dom::DOMSignedInfo;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $DOMException = ::org::w3c::dom::DOMException;
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

$FieldInfo _DOMRSAPSSSignatureMethod_FieldInfo_[] = {
	{"DOM_SIGNATURE_PROVIDER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMRSAPSSSignatureMethod, DOM_SIGNATURE_PROVIDER)},
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMRSAPSSSignatureMethod, LOG)},
	{"params", "Ljavax/xml/crypto/dsig/spec/SignatureMethodParameterSpec;", nullptr, $PRIVATE | $FINAL, $field(DOMRSAPSSSignatureMethod, params)},
	{"signature", "Ljava/security/Signature;", nullptr, $PRIVATE, $field(DOMRSAPSSSignatureMethod, signature)},
	{"RSA_PSS", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMRSAPSSSignatureMethod, RSA_PSS)},
	{"DEFAULT_PSS_SPEC", "Ljavax/xml/crypto/dsig/spec/RSAPSSParameterSpec;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMRSAPSSSignatureMethod, DEFAULT_PSS_SPEC)},
	{"spec", "Ljava/security/spec/PSSParameterSpec;", nullptr, $PRIVATE, $field(DOMRSAPSSSignatureMethod, spec)},
	{}
};

$MethodInfo _DOMRSAPSSSignatureMethod_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMRSAPSSSignatureMethod::*)($AlgorithmParameterSpec*)>(&DOMRSAPSSSignatureMethod::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMRSAPSSSignatureMethod::*)($Element*)>(&DOMRSAPSSSignatureMethod::init$)), "javax.xml.crypto.MarshalException"},
	{"checkParams", "(Ljavax/xml/crypto/dsig/spec/SignatureMethodParameterSpec;)V", nullptr, 0, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"marshalParams", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{"paramsEqual", "(Ljava/security/spec/AlgorithmParameterSpec;)Z", nullptr, 0},
	{"sign", "(Ljava/security/Key;Ljavax/xml/crypto/dsig/SignedInfo;Ljavax/xml/crypto/dsig/XMLSignContext;)[B", nullptr, 0, nullptr, "java.security.InvalidKeyException,javax.xml.crypto.dsig.XMLSignatureException"},
	{"unmarshalParams", "(Lorg/w3c/dom/Element;)Ljavax/xml/crypto/dsig/spec/SignatureMethodParameterSpec;", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{"validateDigestAlgorithm", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm*(*)($String*)>(&DOMRSAPSSSignatureMethod::validateDigestAlgorithm)), "javax.xml.crypto.MarshalException"},
	{"verify", "(Ljava/security/Key;Ljavax/xml/crypto/dsig/SignedInfo;[BLjavax/xml/crypto/dsig/XMLValidateContext;)Z", nullptr, 0, nullptr, "java.security.InvalidKeyException,java.security.SignatureException,javax.xml.crypto.dsig.XMLSignatureException"},
	{}
};

$InnerClassInfo _DOMRSAPSSSignatureMethod_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod$RSAPSS", "org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod", "RSAPSS", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMRSAPSSSignatureMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod",
	"org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod",
	nullptr,
	_DOMRSAPSSSignatureMethod_FieldInfo_,
	_DOMRSAPSSSignatureMethod_MethodInfo_,
	nullptr,
	nullptr,
	_DOMRSAPSSSignatureMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod$RSAPSS"
};

$Object* allocate$DOMRSAPSSSignatureMethod($Class* clazz) {
	return $of($alloc(DOMRSAPSSSignatureMethod));
}

$String* DOMRSAPSSSignatureMethod::DOM_SIGNATURE_PROVIDER = nullptr;
$Logger* DOMRSAPSSSignatureMethod::LOG = nullptr;
$String* DOMRSAPSSSignatureMethod::RSA_PSS = nullptr;
$RSAPSSParameterSpec* DOMRSAPSSSignatureMethod::DEFAULT_PSS_SPEC = nullptr;

void DOMRSAPSSSignatureMethod::init$($AlgorithmParameterSpec* params$renamed) {
	$var($AlgorithmParameterSpec, params, params$renamed);
	$AbstractDOMSignatureMethod::init$();
	if (params != nullptr && !($instanceOf($SignatureMethodParameterSpec, params))) {
		$throwNew($InvalidAlgorithmParameterException, "params must be of type SignatureMethodParameterSpec"_s);
	}
	if (params == nullptr) {
		$assign(params, DOMRSAPSSSignatureMethod::DEFAULT_PSS_SPEC);
	}
	checkParams($cast($SignatureMethodParameterSpec, params));
	$set(this, params, $cast($SignatureMethodParameterSpec, params));
}

void DOMRSAPSSSignatureMethod::init$($Element* smElem) {
	$AbstractDOMSignatureMethod::init$();
	$var($Element, paramsElem, $DOMUtils::getFirstChildElement(smElem));
	if (paramsElem != nullptr) {
		$set(this, params, unmarshalParams(paramsElem));
	} else {
		$set(this, params, DOMRSAPSSSignatureMethod::DEFAULT_PSS_SPEC);
	}
	try {
		checkParams(this->params);
	} catch ($InvalidAlgorithmParameterException&) {
		$var($InvalidAlgorithmParameterException, iape, $catch());
		$throwNew($MarshalException, static_cast<$Throwable*>(iape));
	}
}

void DOMRSAPSSSignatureMethod::checkParams($SignatureMethodParameterSpec* params) {
	if (!($instanceOf($RSAPSSParameterSpec, params))) {
		$throwNew($InvalidAlgorithmParameterException, "params must be of type RSAPSSParameterSpec"_s);
	}
	$set(this, spec, $nc(($cast($RSAPSSParameterSpec, params)))->getPSSParameterSpec());
	$nc(DOMRSAPSSSignatureMethod::LOG)->debug("Setting RSAPSSParameterSpec to: {}"_s, $$new($ObjectArray, {$($of($nc($of(params))->toString()))}));
}

$AlgorithmParameterSpec* DOMRSAPSSSignatureMethod::getParameterSpec() {
	return this->params;
}

void DOMRSAPSSSignatureMethod::marshalParams($Element* parent, $String* prefix) {
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($Constants);
	$var($Element, rsaPssParamsElement, $nc(ownerDoc)->createElementNS($Constants::XML_DSIG_NS_MORE_07_05, $$str({"pss:"_s, $Constants::_TAG_RSAPSSPARAMS})));
	$nc(rsaPssParamsElement)->setAttributeNS($Constants::NamespaceSpecNS, "xmlns:pss"_s, $Constants::XML_DSIG_NS_MORE_07_05);
	$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* digestAlgorithm = nullptr;
	try {
		digestAlgorithm = $SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::fromDigestAlgorithm($($nc(this->spec)->getDigestAlgorithm()));
		$var($String, xmlDigestAlgorithm, $nc(digestAlgorithm)->getXmlDigestAlgorithm());
		$init($DigestMethod);
		if (!$nc(xmlDigestAlgorithm)->equals($DigestMethod::SHA256)) {
			$init($XMLSignature);
			$var($Element, digestMethodElement, $DOMUtils::createElement($(rsaPssParamsElement->getOwnerDocument()), $Constants::_TAG_DIGESTMETHOD, $XMLSignature::XMLNS, prefix));
			$nc(digestMethodElement)->setAttributeNS(nullptr, $Constants::_ATT_ALGORITHM, xmlDigestAlgorithm);
			rsaPssParamsElement->appendChild(digestMethodElement);
		}
		int32_t var$0 = $nc(this->spec)->getSaltLength();
		if (var$0 != digestAlgorithm->getSaltLength()) {
			$var($Element, saltLengthElement, $nc($(rsaPssParamsElement->getOwnerDocument()))->createElementNS($Constants::XML_DSIG_NS_MORE_07_05, $$str({"pss:"_s, $Constants::_TAG_SALTLENGTH})));
			$var($Text, saltLengthText, $nc($(rsaPssParamsElement->getOwnerDocument()))->createTextNode($($String::valueOf($nc(this->spec)->getSaltLength()))));
			$nc(saltLengthElement)->appendChild(saltLengthText);
			rsaPssParamsElement->appendChild(saltLengthElement);
		}
	} catch ($DOMException&) {
		$var($Exception, e, $catch());
		$throwNew($MarshalException, $$str({"Invalid digest name supplied: "_s, $($nc(this->spec)->getDigestAlgorithm())}));
	} catch ($XMLSignatureException&) {
		$var($Exception, e, $catch());
		$throwNew($MarshalException, $$str({"Invalid digest name supplied: "_s, $($nc(this->spec)->getDigestAlgorithm())}));
	}
	if (!$nc($($nc(this->spec)->getMGFAlgorithm()))->equals("MGF1"_s)) {
		$throwNew($MarshalException, $$str({"Unsupported MGF algorithm supplied: "_s, $($nc(this->spec)->getMGFAlgorithm())}));
	}
	$var($MGF1ParameterSpec, mgfSpec, $cast($MGF1ParameterSpec, $nc(this->spec)->getMGFParameters()));
	try {
		$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* mgfDigestAlgorithm = $SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::fromDigestAlgorithm($($nc(mgfSpec)->getDigestAlgorithm()));
		if (mgfDigestAlgorithm != digestAlgorithm) {
			$var($Element, mgfElement, $nc($(rsaPssParamsElement->getOwnerDocument()))->createElementNS($Constants::XML_DSIG_NS_MORE_07_05, $$str({"pss:"_s, $Constants::_TAG_MGF})));
			try {
				$nc(mgfElement)->setAttributeNS(nullptr, $Constants::_ATT_ALGORITHM, "http://www.w3.org/2007/05/xmldsig-more#MGF1"_s);
			} catch ($DOMException&) {
				$var($DOMException, e, $catch());
				$throwNew($MarshalException, "Should not happen"_s);
			}
			$init($XMLSignature);
			$var($Element, mgfDigestMethodElement, $DOMUtils::createElement($(rsaPssParamsElement->getOwnerDocument()), $Constants::_TAG_DIGESTMETHOD, $XMLSignature::XMLNS, prefix));
			$var($String, xmlDigestAlgorithm, $nc(mgfDigestAlgorithm)->getXmlDigestAlgorithm());
			$nc(mgfDigestMethodElement)->setAttributeNS(nullptr, $Constants::_ATT_ALGORITHM, xmlDigestAlgorithm);
			$nc(mgfElement)->appendChild(mgfDigestMethodElement);
			rsaPssParamsElement->appendChild(mgfElement);
		}
	} catch ($DOMException&) {
		$var($Exception, e, $catch());
		$throwNew($MarshalException, $$str({"Invalid digest name supplied: "_s, $($nc(mgfSpec)->getDigestAlgorithm())}));
	} catch ($XMLSignatureException&) {
		$var($Exception, e, $catch());
		$throwNew($MarshalException, $$str({"Invalid digest name supplied: "_s, $($nc(mgfSpec)->getDigestAlgorithm())}));
	}
	if ($nc(this->spec)->getTrailerField() != 1) {
		$var($Element, trailerFieldElement, $nc($(rsaPssParamsElement->getOwnerDocument()))->createElementNS($Constants::XML_DSIG_NS_MORE_07_05, $$str({"pss:"_s, $Constants::_TAG_TRAILERFIELD})));
		$var($Text, trailerFieldText, $nc($(rsaPssParamsElement->getOwnerDocument()))->createTextNode($($String::valueOf($nc(this->spec)->getTrailerField()))));
		$nc(trailerFieldElement)->appendChild(trailerFieldText);
		rsaPssParamsElement->appendChild(trailerFieldElement);
	}
	if (rsaPssParamsElement->hasChildNodes()) {
		$nc(parent)->appendChild(rsaPssParamsElement);
	}
}

$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* DOMRSAPSSSignatureMethod::validateDigestAlgorithm($String* input) {
	$init(DOMRSAPSSSignatureMethod);
	try {
		return $SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::fromXmlDigestAlgorithm(input);
	} catch ($XMLSignatureException&) {
		$var($XMLSignatureException, e, $catch());
		$throwNew($MarshalException, $$str({"Invalid digest algorithm supplied: "_s, input}));
	}
	$shouldNotReachHere();
}

$SignatureMethodParameterSpec* DOMRSAPSSSignatureMethod::unmarshalParams($Element* paramsElem) {
	if (paramsElem != nullptr) {
		$init($Constants);
		$var($Element, saltLengthNode, $XMLUtils::selectNode($(paramsElem->getFirstChild()), $Constants::XML_DSIG_NS_MORE_07_05, $Constants::_TAG_SALTLENGTH, 0));
		$var($Element, trailerFieldNode, $XMLUtils::selectNode($(paramsElem->getFirstChild()), $Constants::XML_DSIG_NS_MORE_07_05, $Constants::_TAG_TRAILERFIELD, 0));
		$var($Element, digestAlgorithmNode, $XMLUtils::selectDsNode($(paramsElem->getFirstChild()), $Constants::_TAG_DIGESTMETHOD, 0));
		$var($Element, mgfNode, $XMLUtils::selectNode($(paramsElem->getFirstChild()), $Constants::XML_DSIG_NS_MORE_07_05, $Constants::_TAG_MGF, 0));
		$init($SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm);
		$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* digestAlgorithm = digestAlgorithmNode != nullptr ? validateDigestAlgorithm($($nc(digestAlgorithmNode)->getAttribute($Constants::_ATT_ALGORITHM))) : $SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA256;
		$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* mgfDigestAlgorithm = digestAlgorithm;
		if (mgfNode != nullptr) {
			$var($String, mgfAlgorithm, mgfNode->getAttribute($Constants::_ATT_ALGORITHM));
			if (!$nc(mgfAlgorithm)->equals("http://www.w3.org/2007/05/xmldsig-more#MGF1"_s)) {
				$throwNew($MarshalException, $$str({"Unknown MGF algorithm: "_s, mgfAlgorithm}));
			}
			$var($Element, mgfDigestAlgorithmNode, $XMLUtils::selectDsNode($(mgfNode->getFirstChild()), $Constants::_TAG_DIGESTMETHOD, 0));
			if (mgfDigestAlgorithmNode != nullptr) {
				mgfDigestAlgorithm = validateDigestAlgorithm($(mgfDigestAlgorithmNode->getAttribute($Constants::_ATT_ALGORITHM)));
			}
		}
		int32_t saltLength = 0;
		try {
			saltLength = saltLengthNode == nullptr ? $nc(digestAlgorithm)->getSaltLength() : $Integer::parseUnsignedInt($($nc(saltLengthNode)->getTextContent()));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, ex, $catch());
			$throwNew($MarshalException, $$str({"Invalid salt length supplied: "_s, $($nc(saltLengthNode)->getTextContent())}));
		}
		int32_t trailerField = 0;
		try {
			trailerField = trailerFieldNode == nullptr ? 1 : $Integer::parseUnsignedInt($($nc(trailerFieldNode)->getTextContent()));
		} catch ($NumberFormatException&) {
			$var($NumberFormatException, ex, $catch());
			$throwNew($MarshalException, $$str({"Invalid trailer field supplied: "_s, $($nc(trailerFieldNode)->getTextContent())}));
		}
		$var($String, var$0, $nc(digestAlgorithm)->getDigestAlgorithm());
		$var($String, var$1, "MGF1"_s);
		return $new($RSAPSSParameterSpec, $$new($PSSParameterSpec, var$0, var$1, $$new($MGF1ParameterSpec, $($nc(mgfDigestAlgorithm)->getDigestAlgorithm())), saltLength, trailerField));
	}
	return DOMRSAPSSSignatureMethod::DEFAULT_PSS_SPEC;
}

bool DOMRSAPSSSignatureMethod::verify($Key* key, $SignedInfo* si, $bytes* sig, $XMLValidateContext* context) {
	if (key == nullptr || si == nullptr || sig == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($PublicKey, key))) {
		$throwNew($InvalidKeyException, "key must be PublicKey"_s);
	}
	if (this->signature == nullptr) {
		try {
			$var($Provider, p, $cast($Provider, $nc(context)->getProperty(DOMRSAPSSSignatureMethod::DOM_SIGNATURE_PROVIDER)));
			$set(this, signature, (p == nullptr) ? $Signature::getInstance($(getJCAAlgorithm())) : $Signature::getInstance($(getJCAAlgorithm()), p));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$throwNew($1XMLSignatureException, static_cast<$Throwable*>(nsae));
		}
	}
	$nc(this->signature)->initVerify($cast($PublicKey, key));
	try {
		$nc(this->signature)->setParameter(this->spec);
	} catch ($InvalidAlgorithmParameterException&) {
		$var($InvalidAlgorithmParameterException, e, $catch());
		$throwNew($1XMLSignatureException, static_cast<$Throwable*>(e));
	}
	$nc(DOMRSAPSSSignatureMethod::LOG)->debug("Signature provider: {}"_s, $$new($ObjectArray, {$($of($nc(this->signature)->getProvider()))}));
	$nc(DOMRSAPSSSignatureMethod::LOG)->debug("Verifying with key: {}"_s, $$new($ObjectArray, {$of(key)}));
	$nc(DOMRSAPSSSignatureMethod::LOG)->debug("JCA Algorithm: {}"_s, $$new($ObjectArray, {$($of(getJCAAlgorithm()))}));
	$nc(DOMRSAPSSSignatureMethod::LOG)->debug("Signature Bytes length: {}"_s, $$new($ObjectArray, {$($of($Integer::valueOf($nc(sig)->length)))}));
	try {
		$var($SignerOutputStream, outputStream, $new($SignerOutputStream, this->signature));
		{
			$var($Throwable, var$0, nullptr);
			bool var$2 = false;
			bool return$1 = false;
			try {
				try {
					$nc(($cast($DOMSignedInfo, si)))->canonicalize(context, outputStream);
					var$2 = $nc(this->signature)->verify(sig);
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						outputStream->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				outputStream->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($1XMLSignatureException, static_cast<$Throwable*>(ioe));
	}
	$shouldNotReachHere();
}

$bytes* DOMRSAPSSSignatureMethod::sign($Key* key, $SignedInfo* si, $XMLSignContext* context) {
	if (key == nullptr || si == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($PrivateKey, key))) {
		$throwNew($InvalidKeyException, "key must be PrivateKey"_s);
	}
	if (this->signature == nullptr) {
		try {
			$var($Provider, p, $cast($Provider, $nc(context)->getProperty(DOMRSAPSSSignatureMethod::DOM_SIGNATURE_PROVIDER)));
			$set(this, signature, (p == nullptr) ? $Signature::getInstance($(getJCAAlgorithm())) : $Signature::getInstance($(getJCAAlgorithm()), p));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$throwNew($1XMLSignatureException, static_cast<$Throwable*>(nsae));
		}
	}
	$nc(this->signature)->initSign($cast($PrivateKey, key));
	try {
		$nc(this->signature)->setParameter(this->spec);
	} catch ($InvalidAlgorithmParameterException&) {
		$var($InvalidAlgorithmParameterException, e, $catch());
		$throwNew($1XMLSignatureException, static_cast<$Throwable*>(e));
	}
	$nc(DOMRSAPSSSignatureMethod::LOG)->debug("Signature provider: {}"_s, $$new($ObjectArray, {$($of($nc(this->signature)->getProvider()))}));
	$nc(DOMRSAPSSSignatureMethod::LOG)->debug("Signing with key: {}"_s, $$new($ObjectArray, {$of(key)}));
	$nc(DOMRSAPSSSignatureMethod::LOG)->debug("JCA Algorithm: {}"_s, $$new($ObjectArray, {$($of(getJCAAlgorithm()))}));
	try {
		$var($SignerOutputStream, outputStream, $new($SignerOutputStream, this->signature));
		{
			$var($Throwable, var$0, nullptr);
			$var($bytes, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$nc(($cast($DOMSignedInfo, si)))->canonicalize(context, outputStream);
					$assign(var$2, $nc(this->signature)->sign());
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						outputStream->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				outputStream->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($SignatureException&) {
		$var($Exception, e, $catch());
		$throwNew($1XMLSignatureException, static_cast<$Throwable*>(e));
	} catch ($IOException&) {
		$var($Exception, e, $catch());
		$throwNew($1XMLSignatureException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

bool DOMRSAPSSSignatureMethod::paramsEqual($AlgorithmParameterSpec* spec) {
	return $nc($of($(getParameterSpec())))->equals(spec);
}

int32_t DOMRSAPSSSignatureMethod::hashCode() {
	return $AbstractDOMSignatureMethod::hashCode();
}

bool DOMRSAPSSSignatureMethod::equals(Object$* o) {
	return $AbstractDOMSignatureMethod::equals(o);
}

void DOMRSAPSSSignatureMethod::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$AbstractDOMSignatureMethod::marshal(parent, dsPrefix, context);
}

void clinit$DOMRSAPSSSignatureMethod($Class* class$) {
	$assignStatic(DOMRSAPSSSignatureMethod::DOM_SIGNATURE_PROVIDER, "org.jcp.xml.dsig.internal.dom.SignatureProvider"_s);
	$assignStatic(DOMRSAPSSSignatureMethod::RSA_PSS, "http://www.w3.org/2007/05/xmldsig-more#rsa-pss"_s);
	$assignStatic(DOMRSAPSSSignatureMethod::LOG, $LoggerFactory::getLogger(DOMRSAPSSSignatureMethod::class$));
	$assignStatic(DOMRSAPSSSignatureMethod::DEFAULT_PSS_SPEC, $new($RSAPSSParameterSpec, $$new($PSSParameterSpec, "SHA-256"_s, "MGF1"_s, $$new($MGF1ParameterSpec, "SHA-256"_s), 32, $PSSParameterSpec::TRAILER_FIELD_BC)));
}

DOMRSAPSSSignatureMethod::DOMRSAPSSSignatureMethod() {
}

$Class* DOMRSAPSSSignatureMethod::load$($String* name, bool initialize) {
	$loadClass(DOMRSAPSSSignatureMethod, name, initialize, &_DOMRSAPSSSignatureMethod_ClassInfo_, clinit$DOMRSAPSSSignatureMethod, allocate$DOMRSAPSSSignatureMethod);
	return class$;
}

$Class* DOMRSAPSSSignatureMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org