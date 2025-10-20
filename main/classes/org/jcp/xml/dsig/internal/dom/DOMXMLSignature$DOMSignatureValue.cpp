#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignature$DOMSignatureValue.h>

#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <javax/xml/crypto/AlgorithmMethod.h>
#include <javax/xml/crypto/KeySelector$Purpose.h>
#include <javax/xml/crypto/KeySelector.h>
#include <javax/xml/crypto/KeySelectorException.h>
#include <javax/xml/crypto/KeySelectorResult.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <javax/xml/crypto/dsig/SignedInfo.h>
#include <javax/xml/crypto/dsig/XMLSignature$SignatureValue.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/XMLSignatureException.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignature.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef VERIFY
#undef XMLNS

using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Key = ::java::security::Key;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $KeySelector = ::javax::xml::crypto::KeySelector;
using $KeySelector$Purpose = ::javax::xml::crypto::KeySelector$Purpose;
using $KeySelectorException = ::javax::xml::crypto::KeySelectorException;
using $KeySelectorResult = ::javax::xml::crypto::KeySelectorResult;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $SignatureMethod = ::javax::xml::crypto::dsig::SignatureMethod;
using $SignedInfo = ::javax::xml::crypto::dsig::SignedInfo;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $XMLSignature$SignatureValue = ::javax::xml::crypto::dsig::XMLSignature$SignatureValue;
using $XMLSignatureException = ::javax::xml::crypto::dsig::XMLSignatureException;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;
using $KeyInfo = ::javax::xml::crypto::dsig::keyinfo::KeyInfo;
using $AbstractDOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod;
using $DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $DOMXMLSignature = ::org::jcp::xml::dsig::internal::dom::DOMXMLSignature;
using $Attr = ::org::w3c::dom::Attr;
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

$FieldInfo _DOMXMLSignature$DOMSignatureValue_FieldInfo_[] = {
	{"this$0", "Lorg/jcp/xml/dsig/internal/dom/DOMXMLSignature;", nullptr, $FINAL | $SYNTHETIC, $field(DOMXMLSignature$DOMSignatureValue, this$0)},
	{"id", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMXMLSignature$DOMSignatureValue, id)},
	{"value", "[B", nullptr, $PRIVATE, $field(DOMXMLSignature$DOMSignatureValue, value)},
	{"valueBase64", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMXMLSignature$DOMSignatureValue, valueBase64)},
	{"sigValueElem", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(DOMXMLSignature$DOMSignatureValue, sigValueElem)},
	{"validated", "Z", nullptr, $PRIVATE, $field(DOMXMLSignature$DOMSignatureValue, validated)},
	{"validationStatus", "Z", nullptr, $PRIVATE, $field(DOMXMLSignature$DOMSignatureValue, validationStatus)},
	{}
};

$MethodInfo _DOMXMLSignature$DOMSignatureValue_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Lorg/jcp/xml/dsig/internal/dom/DOMXMLSignature;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(DOMXMLSignature$DOMSignatureValue::*)($DOMXMLSignature*,$String*)>(&DOMXMLSignature$DOMSignatureValue::init$))},
	{"<init>", "(Lorg/jcp/xml/dsig/internal/dom/DOMXMLSignature;Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMXMLSignature$DOMSignatureValue::*)($DOMXMLSignature*,$Element*)>(&DOMXMLSignature$DOMSignatureValue::init$)), "javax.xml.crypto.MarshalException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getEncodedValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()[B", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"setValue", "([B)V", nullptr, 0},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "(Ljavax/xml/crypto/dsig/XMLValidateContext;)Z", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.dsig.XMLSignatureException"},
	{}
};

$InnerClassInfo _DOMXMLSignature$DOMSignatureValue_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMXMLSignature$DOMSignatureValue", "org.jcp.xml.dsig.internal.dom.DOMXMLSignature", "DOMSignatureValue", $PUBLIC},
	{"javax.xml.crypto.dsig.XMLSignature$SignatureValue", "javax.xml.crypto.dsig.XMLSignature", "SignatureValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _DOMXMLSignature$DOMSignatureValue_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMXMLSignature$DOMSignatureValue",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.XMLSignature$SignatureValue",
	_DOMXMLSignature$DOMSignatureValue_FieldInfo_,
	_DOMXMLSignature$DOMSignatureValue_MethodInfo_,
	nullptr,
	nullptr,
	_DOMXMLSignature$DOMSignatureValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMXMLSignature"
};

$Object* allocate$DOMXMLSignature$DOMSignatureValue($Class* clazz) {
	return $of($alloc(DOMXMLSignature$DOMSignatureValue));
}

bool DOMXMLSignature$DOMSignatureValue::isFeatureSupported($String* feature) {
	 return this->$DOMStructure::isFeatureSupported(feature);
}

$Object* DOMXMLSignature$DOMSignatureValue::clone() {
	 return this->$DOMStructure::clone();
}

$String* DOMXMLSignature$DOMSignatureValue::toString() {
	 return this->$DOMStructure::toString();
}

void DOMXMLSignature$DOMSignatureValue::finalize() {
	this->$DOMStructure::finalize();
}

void DOMXMLSignature$DOMSignatureValue::init$($DOMXMLSignature* this$0, $String* id) {
	$set(this, this$0, this$0);
	$DOMStructure::init$();
	this->validated = false;
	$set(this, id, id);
}

void DOMXMLSignature$DOMSignatureValue::init$($DOMXMLSignature* this$0, $Element* sigValueElem) {
	$useLocalCurrentObjectStackCache();
	$set(this, this$0, this$0);
	$DOMStructure::init$();
	this->validated = false;
	$var($String, content, $XMLUtils::getFullTextChildrenFromNode(sigValueElem));
	$set(this, value, $XMLUtils::decode(content));
	$var($Attr, attr, $nc(sigValueElem)->getAttributeNodeNS(nullptr, "Id"_s));
	if (attr != nullptr) {
		$set(this, id, attr->getValue());
		sigValueElem->setIdAttributeNode(attr, true);
	} else {
		$set(this, id, nullptr);
	}
	$set(this, sigValueElem, sigValueElem);
}

$String* DOMXMLSignature$DOMSignatureValue::getId() {
	return this->id;
}

$bytes* DOMXMLSignature$DOMSignatureValue::getValue() {
	return (this->value == nullptr) ? ($bytes*)nullptr : $cast($bytes, $nc(this->value)->clone());
}

$String* DOMXMLSignature$DOMSignatureValue::getEncodedValue() {
	return this->valueBase64;
}

bool DOMXMLSignature$DOMSignatureValue::validate($XMLValidateContext* validateContext) {
	$useLocalCurrentObjectStackCache();
	if (validateContext == nullptr) {
		$throwNew($NullPointerException, "context cannot be null"_s);
	}
	if (this->validated) {
		return this->validationStatus;
	}
	$var($SignatureMethod, sm, $nc(this->this$0->si)->getSignatureMethod());
	$var($Key, validationKey, nullptr);
	$var($KeySelectorResult, ksResult, nullptr);
	try {
		$var($KeySelector, keySelector, $nc(validateContext)->getKeySelector());
		if (keySelector != nullptr) {
			$init($KeySelector$Purpose);
			$assign(ksResult, keySelector->select(this->this$0->ki, $KeySelector$Purpose::VERIFY, sm, validateContext));
			if (ksResult != nullptr) {
				$assign(validationKey, ksResult->getKey());
			}
		}
		if (validationKey == nullptr) {
			$throwNew($XMLSignatureException, "the keyselector did not find a validation key"_s);
		}
	} catch ($KeySelectorException&) {
		$var($KeySelectorException, kse, $catch());
		$throwNew($XMLSignatureException, "cannot find validation key"_s, kse);
	}
	try {
		this->validationStatus = $nc(($cast($AbstractDOMSignatureMethod, sm)))->verify(validationKey, this->this$0->si, this->value, validateContext);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($XMLSignatureException, static_cast<$Throwable*>(e));
	}
	this->validated = true;
	$set(this->this$0, ksr, ksResult);
	return this->validationStatus;
}

bool DOMXMLSignature$DOMSignatureValue::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($XMLSignature$SignatureValue, o))) {
		return false;
	}
	$var($XMLSignature$SignatureValue, osv, $cast($XMLSignature$SignatureValue, o));
	bool idEqual = this->id == nullptr ? $nc(osv)->getId() == nullptr : $nc(this->id)->equals($(osv->getId()));
	return idEqual;
}

int32_t DOMXMLSignature$DOMSignatureValue::hashCode() {
	int32_t result = 17;
	if (this->id != nullptr) {
		result = 31 * result + $nc(this->id)->hashCode();
	}
	return result;
}

void DOMXMLSignature$DOMSignatureValue::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$init($XMLSignature);
	$set(this, sigValueElem, $DOMUtils::createElement(this->this$0->ownerDoc, "SignatureValue"_s, $XMLSignature::XMLNS, dsPrefix));
	if (this->valueBase64 != nullptr) {
		$nc(this->sigValueElem)->appendChild($($nc(this->this$0->ownerDoc)->createTextNode(this->valueBase64)));
	}
	$DOMUtils::setAttributeID(this->sigValueElem, "Id"_s, this->id);
	$nc(parent)->appendChild(this->sigValueElem);
}

void DOMXMLSignature$DOMSignatureValue::setValue($bytes* value) {
	$set(this, value, value);
	$set(this, valueBase64, $XMLUtils::encodeToString(value));
	$nc(this->sigValueElem)->appendChild($($nc(this->this$0->ownerDoc)->createTextNode(this->valueBase64)));
}

DOMXMLSignature$DOMSignatureValue::DOMXMLSignature$DOMSignatureValue() {
}

$Class* DOMXMLSignature$DOMSignatureValue::load$($String* name, bool initialize) {
	$loadClass(DOMXMLSignature$DOMSignatureValue, name, initialize, &_DOMXMLSignature$DOMSignatureValue_ClassInfo_, allocate$DOMXMLSignature$DOMSignatureValue);
	return class$;
}

$Class* DOMXMLSignature$DOMSignatureValue::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org