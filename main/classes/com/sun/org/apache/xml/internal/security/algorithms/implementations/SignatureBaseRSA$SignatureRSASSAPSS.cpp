#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignature.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NumberFormatException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/MGF1ParameterSpec.h>
#include <java/security/spec/PSSParameterSpec.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef ALGO_ID_SIGNATURE_RSA_PSS
#undef _ATT_ALGORITHM
#undef _TAG_DIGESTMETHOD
#undef _TAG_RSAPSSPARAMS
#undef _TAG_SALTLENGTH
#undef _TAG_TRAILERFIELD

using $SignatureAlgorithmSpi = ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithmSpi;
using $SignatureBaseRSA = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA;
using $SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;
using $XMLSignature = ::com::sun::org::apache::xml::internal::security::signature::XMLSignature;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NumberFormatException = ::java::lang::NumberFormatException;
using $Provider = ::java::security::Provider;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $MGF1ParameterSpec = ::java::security::spec::MGF1ParameterSpec;
using $PSSParameterSpec = ::java::security::spec::PSSParameterSpec;
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
							namespace algorithms {
								namespace implementations {

$FieldInfo _SignatureBaseRSA$SignatureRSASSAPSS_FieldInfo_[] = {
	{"pssParameterSpec", "Ljava/security/spec/PSSParameterSpec;", nullptr, 0, $field(SignatureBaseRSA$SignatureRSASSAPSS, pssParameterSpec)},
	{}
};

$MethodInfo _SignatureBaseRSA$SignatureRSASSAPSS_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureBaseRSA$SignatureRSASSAPSS::*)()>(&SignatureBaseRSA$SignatureRSASSAPSS::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureBaseRSA$SignatureRSASSAPSS::*)($Provider*)>(&SignatureBaseRSA$SignatureRSASSAPSS::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineAddContextToElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetContextFromElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"engineSetParameter", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{}
};

$InnerClassInfo _SignatureBaseRSA$SignatureRSASSAPSS_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASSAPSS", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS", "DigestAlgorithm", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SignatureBaseRSA$SignatureRSASSAPSS_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA",
	nullptr,
	_SignatureBaseRSA$SignatureRSASSAPSS_FieldInfo_,
	_SignatureBaseRSA$SignatureRSASSAPSS_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureBaseRSA$SignatureRSASSAPSS_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA"
};

$Object* allocate$SignatureBaseRSA$SignatureRSASSAPSS($Class* clazz) {
	return $of($alloc(SignatureBaseRSA$SignatureRSASSAPSS));
}

void SignatureBaseRSA$SignatureRSASSAPSS::init$() {
	$SignatureBaseRSA::init$();
}

void SignatureBaseRSA$SignatureRSASSAPSS::init$($Provider* provider) {
	$SignatureBaseRSA::init$(provider);
}

$String* SignatureBaseRSA$SignatureRSASSAPSS::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_SIGNATURE_RSA_PSS;
}

void SignatureBaseRSA$SignatureRSASSAPSS::engineAddContextToElement($Element* element) {
	$useLocalCurrentObjectStackCache();
	if (element == nullptr) {
		$throwNew($IllegalArgumentException, "null element"_s);
	}
	$var($Document, doc, $nc(element)->getOwnerDocument());
	$init($Constants);
	$var($Element, rsaPssParamsElement, $nc(doc)->createElementNS($Constants::XML_DSIG_NS_MORE_07_05, $$str({"pss:"_s, $Constants::_TAG_RSAPSSPARAMS})));
	$nc(rsaPssParamsElement)->setAttributeNS($Constants::NamespaceSpecNS, "xmlns:pss"_s, $Constants::XML_DSIG_NS_MORE_07_05);
	$var($Element, digestMethodElement, $XMLUtils::createElementInSignatureSpace($(rsaPssParamsElement->getOwnerDocument()), $Constants::_TAG_DIGESTMETHOD));
	$nc(digestMethodElement)->setAttributeNS(nullptr, $Constants::_ATT_ALGORITHM, $($nc($($SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::fromDigestAlgorithm($($nc(this->pssParameterSpec)->getDigestAlgorithm()))))->getXmlDigestAlgorithm()));
	$XMLUtils::addReturnToElement(rsaPssParamsElement);
	rsaPssParamsElement->appendChild(digestMethodElement);
	$XMLUtils::addReturnToElement(rsaPssParamsElement);
	$var($Element, saltLengthElement, $nc($(rsaPssParamsElement->getOwnerDocument()))->createElementNS($Constants::XML_DSIG_NS_MORE_07_05, $$str({"pss:"_s, $Constants::_TAG_SALTLENGTH})));
	$var($Text, saltLengthText, $nc($(rsaPssParamsElement->getOwnerDocument()))->createTextNode($($String::valueOf($nc(this->pssParameterSpec)->getSaltLength()))));
	$nc(saltLengthElement)->appendChild(saltLengthText);
	rsaPssParamsElement->appendChild(saltLengthElement);
	$XMLUtils::addReturnToElement(rsaPssParamsElement);
	$var($Element, trailerFieldElement, $nc($(rsaPssParamsElement->getOwnerDocument()))->createElementNS($Constants::XML_DSIG_NS_MORE_07_05, $$str({"pss:"_s, $Constants::_TAG_TRAILERFIELD})));
	$var($Text, trailerFieldText, $nc($(rsaPssParamsElement->getOwnerDocument()))->createTextNode($($String::valueOf($nc(this->pssParameterSpec)->getTrailerField()))));
	$nc(trailerFieldElement)->appendChild(trailerFieldText);
	rsaPssParamsElement->appendChild(trailerFieldElement);
	$XMLUtils::addReturnToElement(rsaPssParamsElement);
	$XMLUtils::addReturnToElement(element);
	element->appendChild(rsaPssParamsElement);
	$XMLUtils::addReturnToElement(element);
}

void SignatureBaseRSA$SignatureRSASSAPSS::engineGetContextFromElement($Element* element) {
	$useLocalCurrentObjectStackCache();
	if (this->pssParameterSpec == nullptr) {
		$SignatureBaseRSA::engineGetContextFromElement(element);
		$init($Constants);
		$var($Element, rsaPssParams, $XMLUtils::selectNode($($nc(element)->getFirstChild()), $Constants::XML_DSIG_NS_MORE_07_05, $Constants::_TAG_RSAPSSPARAMS, 0));
		if (rsaPssParams == nullptr) {
			$throwNew($XMLSignatureException, "algorithms.MissingRSAPSSParams"_s);
		}
		$var($Element, saltLengthNode, $XMLUtils::selectNode($($nc(rsaPssParams)->getFirstChild()), $Constants::XML_DSIG_NS_MORE_07_05, $Constants::_TAG_SALTLENGTH, 0));
		$var($Element, trailerFieldNode, $XMLUtils::selectNode($($nc(rsaPssParams)->getFirstChild()), $Constants::XML_DSIG_NS_MORE_07_05, $Constants::_TAG_TRAILERFIELD, 0));
		int32_t trailerField = 1;
		if (trailerFieldNode != nullptr) {
			try {
				trailerField = $Integer::parseInt($(trailerFieldNode->getTextContent()));
			} catch ($NumberFormatException&) {
				$var($NumberFormatException, ex, $catch());
				$throwNew($XMLSignatureException, "empty"_s, $$new($ObjectArray, {$of("Invalid trailer field value supplied"_s)}));
			}
		}
		$var($String, xmlAlgorithm, $nc($($XMLUtils::selectDsNode($($nc(rsaPssParams)->getFirstChild()), $Constants::_TAG_DIGESTMETHOD, 0)))->getAttribute($Constants::_ATT_ALGORITHM));
		$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* digestAlgorithm = $SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::fromXmlDigestAlgorithm(xmlAlgorithm);
		$var($String, digestAlgorithmName, $nc(digestAlgorithm)->getDigestAlgorithm());
		int32_t saltLength = digestAlgorithm->getSaltLength();
		if (saltLengthNode != nullptr) {
			try {
				saltLength = $Integer::parseInt($(saltLengthNode->getTextContent()));
			} catch ($NumberFormatException&) {
				$var($NumberFormatException, ex, $catch());
				$throwNew($XMLSignatureException, "empty"_s, $$new($ObjectArray, {$of("Invalid salt length value supplied"_s)}));
			}
		}
		engineSetParameter($$new($PSSParameterSpec, digestAlgorithmName, "MGF1"_s, $$new($MGF1ParameterSpec, digestAlgorithmName), saltLength, trailerField));
	}
}

void SignatureBaseRSA$SignatureRSASSAPSS::engineSetParameter($AlgorithmParameterSpec* params) {
	$set(this, pssParameterSpec, $cast($PSSParameterSpec, params));
	$SignatureBaseRSA::engineSetParameter(params);
}

SignatureBaseRSA$SignatureRSASSAPSS::SignatureBaseRSA$SignatureRSASSAPSS() {
}

$Class* SignatureBaseRSA$SignatureRSASSAPSS::load$($String* name, bool initialize) {
	$loadClass(SignatureBaseRSA$SignatureRSASSAPSS, name, initialize, &_SignatureBaseRSA$SignatureRSASSAPSS_ClassInfo_, allocate$SignatureBaseRSA$SignatureRSASSAPSS);
	return class$;
}

$Class* SignatureBaseRSA$SignatureRSASSAPSS::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com