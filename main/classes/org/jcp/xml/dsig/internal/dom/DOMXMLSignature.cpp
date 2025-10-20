#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignature.h>

#include <com/sun/org/apache/xml/internal/security/Init.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
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
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/KeyException.h>
#include <java/security/Provider.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/xml/crypto/AlgorithmMethod.h>
#include <javax/xml/crypto/KeySelector$Purpose.h>
#include <javax/xml/crypto/KeySelector.h>
#include <javax/xml/crypto/KeySelectorException.h>
#include <javax/xml/crypto/KeySelectorResult.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/Manifest.h>
#include <javax/xml/crypto/dsig/Reference.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <javax/xml/crypto/dsig/SignedInfo.h>
#include <javax/xml/crypto/dsig/Transform.h>
#include <javax/xml/crypto/dsig/XMLObject.h>
#include <javax/xml/crypto/dsig/XMLSignContext.h>
#include <javax/xml/crypto/dsig/XMLSignature$SignatureValue.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/XMLSignatureException.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <javax/xml/crypto/dsig/dom/DOMSignContext.h>
#include <javax/xml/crypto/dsig/dom/DOMValidateContext.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyInfo.h>
#include <org/jcp/xml/dsig/internal/dom/DOMManifest.h>
#include <org/jcp/xml/dsig/internal/dom/DOMReference.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignedInfo.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLObject.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignature$DOMSignatureValue.h>
#include <org/jcp/xml/dsig/internal/dom/Utils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef LOG
#undef SIGN
#undef TRUE
#undef XMLNS
#undef XPATH
#undef XPATH2

using $Init = ::com::sun::org::apache::xml::internal::security::Init;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $KeyException = ::java::security::KeyException;
using $Provider = ::java::security::Provider;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $KeySelector = ::javax::xml::crypto::KeySelector;
using $KeySelector$Purpose = ::javax::xml::crypto::KeySelector$Purpose;
using $KeySelectorException = ::javax::xml::crypto::KeySelectorException;
using $KeySelectorResult = ::javax::xml::crypto::KeySelectorResult;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $URIReference = ::javax::xml::crypto::URIReference;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $Manifest = ::javax::xml::crypto::dsig::Manifest;
using $Reference = ::javax::xml::crypto::dsig::Reference;
using $SignatureMethod = ::javax::xml::crypto::dsig::SignatureMethod;
using $SignedInfo = ::javax::xml::crypto::dsig::SignedInfo;
using $Transform = ::javax::xml::crypto::dsig::Transform;
using $XMLObject = ::javax::xml::crypto::dsig::XMLObject;
using $XMLSignContext = ::javax::xml::crypto::dsig::XMLSignContext;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $XMLSignature$SignatureValue = ::javax::xml::crypto::dsig::XMLSignature$SignatureValue;
using $XMLSignatureException = ::javax::xml::crypto::dsig::XMLSignatureException;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;
using $DOMSignContext = ::javax::xml::crypto::dsig::dom::DOMSignContext;
using $DOMValidateContext = ::javax::xml::crypto::dsig::dom::DOMValidateContext;
using $KeyInfo = ::javax::xml::crypto::dsig::keyinfo::KeyInfo;
using $AbstractDOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod;
using $DOMKeyInfo = ::org::jcp::xml::dsig::internal::dom::DOMKeyInfo;
using $DOMManifest = ::org::jcp::xml::dsig::internal::dom::DOMManifest;
using $DOMReference = ::org::jcp::xml::dsig::internal::dom::DOMReference;
using $DOMSignedInfo = ::org::jcp::xml::dsig::internal::dom::DOMSignedInfo;
using $DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $DOMXMLObject = ::org::jcp::xml::dsig::internal::dom::DOMXMLObject;
using $DOMXMLSignature$DOMSignatureValue = ::org::jcp::xml::dsig::internal::dom::DOMXMLSignature$DOMSignatureValue;
using $Utils = ::org::jcp::xml::dsig::internal::dom::Utils;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMXMLSignature_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMXMLSignature, LOG)},
	{"id", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMXMLSignature, id)},
	{"sv", "Ljavax/xml/crypto/dsig/XMLSignature$SignatureValue;", nullptr, $PRIVATE, $field(DOMXMLSignature, sv)},
	{"ki", "Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;", nullptr, $PRIVATE, $field(DOMXMLSignature, ki)},
	{"objects", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/crypto/dsig/XMLObject;>;", $PRIVATE, $field(DOMXMLSignature, objects)},
	{"si", "Ljavax/xml/crypto/dsig/SignedInfo;", nullptr, $PRIVATE, $field(DOMXMLSignature, si)},
	{"ownerDoc", "Lorg/w3c/dom/Document;", nullptr, $PRIVATE, $field(DOMXMLSignature, ownerDoc)},
	{"localSigElem", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(DOMXMLSignature, localSigElem)},
	{"sigElem", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(DOMXMLSignature, sigElem)},
	{"validationStatus", "Z", nullptr, $PRIVATE, $field(DOMXMLSignature, validationStatus)},
	{"validated", "Z", nullptr, $PRIVATE, $field(DOMXMLSignature, validated)},
	{"ksr", "Ljavax/xml/crypto/KeySelectorResult;", nullptr, $PRIVATE, $field(DOMXMLSignature, ksr)},
	{"signatureIdMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljavax/xml/crypto/XMLStructure;>;", $PRIVATE, $field(DOMXMLSignature, signatureIdMap)},
	{}
};

$MethodInfo _DOMXMLSignature_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljavax/xml/crypto/dsig/SignedInfo;Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V", "(Ljavax/xml/crypto/dsig/SignedInfo;Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;Ljava/util/List<+Ljavax/xml/crypto/dsig/XMLObject;>;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(DOMXMLSignature::*)($SignedInfo*,$KeyInfo*,$List*,$String*,$String*)>(&DOMXMLSignature::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljavax/xml/crypto/XMLCryptoContext;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMXMLSignature::*)($Element*,$XMLCryptoContext*,$Provider*)>(&DOMXMLSignature::init$)), "javax.xml.crypto.MarshalException"},
	{"digestReference", "(Lorg/jcp/xml/dsig/internal/dom/DOMReference;Ljavax/xml/crypto/dsig/XMLSignContext;)V", nullptr, $PRIVATE, $method(static_cast<void(DOMXMLSignature::*)($DOMReference*,$XMLSignContext*)>(&DOMXMLSignature::digestReference)), "javax.xml.crypto.dsig.XMLSignatureException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getKeyInfo", "()Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;", nullptr, $PUBLIC},
	{"getKeySelectorResult", "()Ljavax/xml/crypto/KeySelectorResult;", nullptr, $PUBLIC},
	{"getObjects", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/XMLObject;>;", $PUBLIC},
	{"getSignatureValue", "()Ljavax/xml/crypto/dsig/XMLSignature$SignatureValue;", nullptr, $PUBLIC},
	{"getSignedInfo", "()Ljavax/xml/crypto/dsig/SignedInfo;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"marshal", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMXMLSignature::*)($Node*,$Node*,$String*,$DOMCryptoContext*)>(&DOMXMLSignature::marshal)), "javax.xml.crypto.MarshalException"},
	{"sign", "(Ljavax/xml/crypto/dsig/XMLSignContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException,javax.xml.crypto.dsig.XMLSignatureException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "(Ljavax/xml/crypto/dsig/XMLValidateContext;)Z", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.dsig.XMLSignatureException"},
	{}
};

$InnerClassInfo _DOMXMLSignature_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMXMLSignature$DOMSignatureValue", "org.jcp.xml.dsig.internal.dom.DOMXMLSignature", "DOMSignatureValue", $PUBLIC},
	{}
};

$ClassInfo _DOMXMLSignature_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMXMLSignature",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.XMLSignature",
	_DOMXMLSignature_FieldInfo_,
	_DOMXMLSignature_MethodInfo_,
	nullptr,
	nullptr,
	_DOMXMLSignature_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMXMLSignature$DOMSignatureValue"
};

$Object* allocate$DOMXMLSignature($Class* clazz) {
	return $of($alloc(DOMXMLSignature));
}

bool DOMXMLSignature::isFeatureSupported($String* feature) {
	 return this->$DOMStructure::isFeatureSupported(feature);
}

$Object* DOMXMLSignature::clone() {
	 return this->$DOMStructure::clone();
}

$String* DOMXMLSignature::toString() {
	 return this->$DOMStructure::toString();
}

void DOMXMLSignature::finalize() {
	this->$DOMStructure::finalize();
}

$Logger* DOMXMLSignature::LOG = nullptr;

void DOMXMLSignature::init$($SignedInfo* si, $KeyInfo* ki, $List* objs, $String* id, $String* signatureValueId) {
	$useLocalCurrentObjectStackCache();
	$DOMStructure::init$();
	$set(this, ownerDoc, nullptr);
	$set(this, localSigElem, nullptr);
	$set(this, sigElem, nullptr);
	this->validated = false;
	if (si == nullptr) {
		$throwNew($NullPointerException, "signedInfo cannot be null"_s);
	}
	$set(this, si, si);
	$set(this, id, id);
	$set(this, sv, $new($DOMXMLSignature$DOMSignatureValue, this, signatureValueId));
	if (objs == nullptr) {
		$set(this, objects, $Collections::emptyList());
	} else {
		$set(this, objects, $Collections::unmodifiableList($$new($ArrayList, static_cast<$Collection*>(objs))));
		{
			int32_t i = 0;
			int32_t size = $nc(this->objects)->size();
			for (; i < size; ++i) {
				if (!($instanceOf($XMLObject, $($nc(this->objects)->get(i))))) {
					$throwNew($ClassCastException, $$str({"objs["_s, $$str(i), "] is not an XMLObject"_s}));
				}
			}
		}
	}
	$set(this, ki, ki);
}

void DOMXMLSignature::init$($Element* sigElem, $XMLCryptoContext* context, $Provider* provider) {
	$useLocalCurrentObjectStackCache();
	$DOMStructure::init$();
	$set(this, ownerDoc, nullptr);
	$set(this, localSigElem, nullptr);
	$set(this, sigElem, nullptr);
	this->validated = false;
	$set(this, localSigElem, sigElem);
	$set(this, ownerDoc, $nc(this->localSigElem)->getOwnerDocument());
	$set(this, id, $DOMUtils::getAttributeValue(this->localSigElem, "Id"_s));
	$init($XMLSignature);
	$var($Element, siElem, $DOMUtils::getFirstChildElement(this->localSigElem, "SignedInfo"_s, $XMLSignature::XMLNS));
	$set(this, si, $new($DOMSignedInfo, siElem, context, provider));
	$var($Element, sigValElem, $DOMUtils::getNextSiblingElement(siElem, "SignatureValue"_s, $XMLSignature::XMLNS));
	$set(this, sv, $new($DOMXMLSignature$DOMSignatureValue, this, sigValElem));
	$var($Element, nextSibling, $DOMUtils::getNextSiblingElement(sigValElem));
	bool var$0 = nextSibling != nullptr && "KeyInfo"_s->equals($(nextSibling->getLocalName()));
	if (var$0 && $nc($XMLSignature::XMLNS)->equals($(nextSibling->getNamespaceURI()))) {
		$set(this, ki, $new($DOMKeyInfo, nextSibling, context, provider));
		$assign(nextSibling, $DOMUtils::getNextSiblingElement(nextSibling));
	}
	if (nextSibling == nullptr) {
		$set(this, objects, $Collections::emptyList());
	} else {
		$var($List, tempObjects, $new($ArrayList));
		while (nextSibling != nullptr) {
			$var($String, name, nextSibling->getLocalName());
			$var($String, namespace$, nextSibling->getNamespaceURI());
			bool var$1 = !"Object"_s->equals(name);
			if (var$1 || !$nc($XMLSignature::XMLNS)->equals(namespace$)) {
				$throwNew($MarshalException, $$str({"Invalid element name: "_s, namespace$, ":"_s, name, ", expected KeyInfo or Object"_s}));
			}
			tempObjects->add($$new($DOMXMLObject, nextSibling, context, provider));
			$assign(nextSibling, $DOMUtils::getNextSiblingElement(nextSibling));
		}
		$set(this, objects, $Collections::unmodifiableList(tempObjects));
	}
}

$String* DOMXMLSignature::getId() {
	return this->id;
}

$KeyInfo* DOMXMLSignature::getKeyInfo() {
	return this->ki;
}

$SignedInfo* DOMXMLSignature::getSignedInfo() {
	return this->si;
}

$List* DOMXMLSignature::getObjects() {
	return this->objects;
}

$XMLSignature$SignatureValue* DOMXMLSignature::getSignatureValue() {
	return this->sv;
}

$KeySelectorResult* DOMXMLSignature::getKeySelectorResult() {
	return this->ksr;
}

void DOMXMLSignature::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	marshal(parent, nullptr, dsPrefix, context);
}

void DOMXMLSignature::marshal($Node* parent, $Node* nextSibling, $String* dsPrefix, $DOMCryptoContext* context) {
	$useLocalCurrentObjectStackCache();
	$set(this, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$set(this, sigElem, $DOMUtils::createElement(this->ownerDoc, "Signature"_s, $XMLSignature::XMLNS, dsPrefix));
	if (dsPrefix == nullptr || $nc(dsPrefix)->length() == 0) {
		$nc(this->sigElem)->setAttributeNS("http://www.w3.org/2000/xmlns/"_s, "xmlns"_s, $XMLSignature::XMLNS);
	} else {
		$nc(this->sigElem)->setAttributeNS("http://www.w3.org/2000/xmlns/"_s, $$str({"xmlns:"_s, dsPrefix}), $XMLSignature::XMLNS);
	}
	$nc(($cast($DOMSignedInfo, this->si)))->marshal(this->sigElem, dsPrefix, context);
	$nc(($cast($DOMXMLSignature$DOMSignatureValue, this->sv)))->marshal(this->sigElem, dsPrefix, context);
	if (this->ki != nullptr) {
		$nc(($cast($DOMKeyInfo, this->ki)))->marshal(this->sigElem, nullptr, dsPrefix, context);
	}
	{
		int32_t i = 0;
		int32_t size = $nc(this->objects)->size();
		for (; i < size; ++i) {
			$nc(($cast($DOMXMLObject, $($nc(this->objects)->get(i)))))->marshal(this->sigElem, dsPrefix, context);
		}
	}
	$DOMUtils::setAttributeID(this->sigElem, "Id"_s, this->id);
	$nc(parent)->insertBefore(this->sigElem, nextSibling);
}

bool DOMXMLSignature::validate($XMLValidateContext* vc) {
	$useLocalCurrentObjectStackCache();
	if (vc == nullptr) {
		$throwNew($NullPointerException, "validateContext is null"_s);
	}
	if (!($instanceOf($DOMValidateContext, vc))) {
		$throwNew($ClassCastException, "validateContext must be of type DOMValidateContext"_s);
	}
	if (this->validated) {
		return this->validationStatus;
	}
	bool sigValidity = $nc(this->sv)->validate(vc);
	if (!sigValidity) {
		this->validationStatus = false;
		this->validated = true;
		return this->validationStatus;
	}
	$var($List, refs, $nc(this->si)->getReferences());
	bool validateRefs = true;
	{
		int32_t i = 0;
		int32_t size = $nc(refs)->size();
		for (; validateRefs && i < size; ++i) {
			$var($Reference, ref, $cast($Reference, refs->get(i)));
			bool refValid = $nc(ref)->validate(vc);
			$nc(DOMXMLSignature::LOG)->debug("Reference [{}] is valid: {}"_s, $$new($ObjectArray, {
				$($of(ref->getURI())),
				$($of($Boolean::valueOf(refValid)))
			}));
			validateRefs &= refValid;
		}
	}
	if (!validateRefs) {
		$nc(DOMXMLSignature::LOG)->debug("Couldn\'t validate the References"_s);
		this->validationStatus = false;
		this->validated = true;
		return this->validationStatus;
	}
	bool validateMans = true;
	$init($Boolean);
	if ($nc($Boolean::TRUE)->equals($($nc(vc)->getProperty("org.jcp.xml.dsig.validateManifests"_s)))) {
		{
			int32_t i = 0;
			int32_t size = $nc(this->objects)->size();
			for (; validateMans && i < size; ++i) {
				$var($XMLObject, xo, $cast($XMLObject, $nc(this->objects)->get(i)));
				$var($List, content, $nc(xo)->getContent());
				int32_t csize = $nc(content)->size();
				for (int32_t j = 0; validateMans && j < csize; ++j) {
					$var($XMLStructure, xs, $cast($XMLStructure, content->get(j)));
					if ($instanceOf($Manifest, xs)) {
						$nc(DOMXMLSignature::LOG)->debug("validating manifest"_s);
						$var($Manifest, man, $cast($Manifest, xs));
						$var($List, manRefs, $nc(man)->getReferences());
						int32_t rsize = $nc(manRefs)->size();
						for (int32_t k = 0; validateMans && k < rsize; ++k) {
							$var($Reference, ref, $cast($Reference, manRefs->get(k)));
							bool refValid = $nc(ref)->validate(vc);
							$nc(DOMXMLSignature::LOG)->debug("Manifest ref [{}] is valid: {}"_s, $$new($ObjectArray, {
								$($of(ref->getURI())),
								$($of($Boolean::valueOf(refValid)))
							}));
							validateMans &= refValid;
						}
					}
				}
			}
		}
	}
	this->validationStatus = validateMans;
	this->validated = true;
	return this->validationStatus;
}

void DOMXMLSignature::sign($XMLSignContext* signContext) {
	$useLocalCurrentObjectStackCache();
	if (signContext == nullptr) {
		$throwNew($NullPointerException, "signContext cannot be null"_s);
	}
	$var($DOMSignContext, context, $cast($DOMSignContext, signContext));
	$var($Node, var$0, $nc(context)->getParent());
	$var($Node, var$1, context->getNextSibling());
	marshal(var$0, var$1, $($DOMUtils::getSignaturePrefix(static_cast<$XMLCryptoContext*>(static_cast<$DOMCryptoContext*>(context)))), context);
	$var($List, allReferences, $new($ArrayList));
	$set(this, signatureIdMap, $new($HashMap));
	$nc(this->signatureIdMap)->put(this->id, this);
	$nc(this->signatureIdMap)->put($($nc(this->si)->getId()), this->si);
	$var($List, refs, $nc(this->si)->getReferences());
	{
		$var($Iterator, i$, $nc(refs)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Reference, ref, $cast($Reference, i$->next()));
			{
				$nc(this->signatureIdMap)->put($($nc(ref)->getId()), ref);
			}
		}
	}
	{
		$var($Iterator, i$, $nc(this->objects)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLObject, obj, $cast($XMLObject, i$->next()));
			{
				$nc(this->signatureIdMap)->put($($nc(obj)->getId()), obj);
				$var($List, content, $nc(obj)->getContent());
				{
					$var($Iterator, i$, $nc(content)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($XMLStructure, xs, $cast($XMLStructure, i$->next()));
						{
							if ($instanceOf($Manifest, xs)) {
								$var($Manifest, man, $cast($Manifest, xs));
								$nc(this->signatureIdMap)->put($($nc(man)->getId()), man);
								$var($List, manRefs, $nc(man)->getReferences());
								{
									$var($Iterator, i$, $nc(manRefs)->iterator());
									for (; $nc(i$)->hasNext();) {
										$var($Reference, ref, $cast($Reference, i$->next()));
										{
											allReferences->add(ref);
											$nc(this->signatureIdMap)->put($($nc(ref)->getId()), ref);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	allReferences->addAll(refs);
	{
		$var($Iterator, i$, allReferences->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Reference, ref, $cast($Reference, i$->next()));
			{
				digestReference($cast($DOMReference, ref), signContext);
			}
		}
	}
	{
		$var($Iterator, i$, allReferences->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Reference, ref, $cast($Reference, i$->next()));
			{
				if ($nc(($cast($DOMReference, ref)))->isDigested()) {
					continue;
				}
				$nc(($cast($DOMReference, ref)))->digest(signContext);
			}
		}
	}
	$var($Key, signingKey, nullptr);
	try {
		$init($KeySelector$Purpose);
		$var($KeySelectorResult, keySelectorResult, $nc($($nc(signContext)->getKeySelector()))->select(this->ki, $KeySelector$Purpose::SIGN, $($nc(this->si)->getSignatureMethod()), signContext));
		$assign(signingKey, $nc(keySelectorResult)->getKey());
		if (signingKey == nullptr) {
			$throwNew($XMLSignatureException, "the keySelector did not find a signing key"_s);
		}
		$set(this, ksr, keySelectorResult);
	} catch ($KeySelectorException&) {
		$var($KeySelectorException, kse, $catch());
		$throwNew($XMLSignatureException, "cannot find signing key"_s, kse);
	}
	try {
		$var($bytes, val, $nc(($cast($AbstractDOMSignatureMethod, $($nc(this->si)->getSignatureMethod()))))->sign(signingKey, this->si, signContext));
		$nc(($cast($DOMXMLSignature$DOMSignatureValue, this->sv)))->setValue(val);
	} catch ($InvalidKeyException&) {
		$var($InvalidKeyException, ike, $catch());
		$throwNew($XMLSignatureException, static_cast<$Throwable*>(ike));
	}
	$set(this, localSigElem, this->sigElem);
}

bool DOMXMLSignature::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($XMLSignature, o))) {
		return false;
	}
	$var($XMLSignature, osig, $cast($XMLSignature, o));
	bool idEqual = this->id == nullptr ? $nc(osig)->getId() == nullptr : $nc(this->id)->equals($(osig->getId()));
	bool keyInfoEqual = this->ki == nullptr ? osig->getKeyInfo() == nullptr : $nc($of(this->ki))->equals($(osig->getKeyInfo()));
	bool var$1 = idEqual && keyInfoEqual && $nc($of(this->sv))->equals($(osig->getSignatureValue()));
	bool var$0 = var$1 && $nc($of(this->si))->equals($(osig->getSignedInfo()));
	return var$0 && $nc(this->objects)->equals($(osig->getObjects()));
}

int32_t DOMXMLSignature::hashCode() {
	int32_t result = 17;
	if (this->id != nullptr) {
		result = 31 * result + $nc(this->id)->hashCode();
	}
	if (this->ki != nullptr) {
		result = 31 * result + $nc($of(this->ki))->hashCode();
	}
	result = 31 * result + $nc($of(this->sv))->hashCode();
	result = 31 * result + $nc($of(this->si))->hashCode();
	result = 31 * result + $nc(this->objects)->hashCode();
	return result;
}

void DOMXMLSignature::digestReference($DOMReference* ref, $XMLSignContext* signContext) {
	$useLocalCurrentObjectStackCache();
	if ($nc(ref)->isDigested()) {
		return;
	}
	$var($String, uri, $nc(ref)->getURI());
	if ($Utils::sameDocumentURI(uri)) {
		$var($String, parsedId, $Utils::parseIdFromSameDocumentURI(uri));
		if (parsedId != nullptr && $nc(this->signatureIdMap)->containsKey(parsedId)) {
			$var($XMLStructure, xs, $cast($XMLStructure, $nc(this->signatureIdMap)->get(parsedId)));
			if ($instanceOf($DOMReference, xs)) {
				digestReference($cast($DOMReference, xs), signContext);
			} else if ($instanceOf($Manifest, xs)) {
				$var($Manifest, man, $cast($Manifest, xs));
				$var($List, manRefs, $DOMManifest::getManifestReferences(man));
				{
					int32_t i = 0;
					int32_t size = $nc(manRefs)->size();
					for (; i < size; ++i) {
						digestReference($cast($DOMReference, $(manRefs->get(i))), signContext);
					}
				}
			}
		}
		if ($nc(uri)->length() == 0) {
			$var($List, transforms, ref->getTransforms());
			{
				$var($Iterator, i$, $nc(transforms)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($Transform, transform, $cast($Transform, i$->next()));
					{
						$var($String, transformAlg, $nc(transform)->getAlgorithm());
						bool var$0 = $nc(transformAlg)->equals($Transform::XPATH);
						if (var$0 || $nc(transformAlg)->equals($Transform::XPATH2)) {
							return;
						}
					}
				}
			}
		}
	}
	ref->digest(signContext);
}

void clinit$DOMXMLSignature($Class* class$) {
	$assignStatic(DOMXMLSignature::LOG, $LoggerFactory::getLogger(DOMXMLSignature::class$));
	{
		$Init::init();
	}
}

DOMXMLSignature::DOMXMLSignature() {
}

$Class* DOMXMLSignature::load$($String* name, bool initialize) {
	$loadClass(DOMXMLSignature, name, initialize, &_DOMXMLSignature_ClassInfo_, clinit$DOMXMLSignature, allocate$DOMXMLSignature);
	return class$;
}

$Class* DOMXMLSignature::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org