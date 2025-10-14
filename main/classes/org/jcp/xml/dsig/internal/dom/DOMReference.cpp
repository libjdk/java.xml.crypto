#include <org/jcp/xml/dsig/internal/dom/DOMReference.h>

#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/UnsyncBufferedOutputStream.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/security/AccessController.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/NodeSetData.h>
#include <javax/xml/crypto/OctetStreamData.h>
#include <javax/xml/crypto/URIDereferencer.h>
#include <javax/xml/crypto/URIReference.h>
#include <javax/xml/crypto/URIReferenceException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <javax/xml/crypto/dsig/DigestMethod.h>
#include <javax/xml/crypto/dsig/Reference.h>
#include <javax/xml/crypto/dsig/Transform.h>
#include <javax/xml/crypto/dsig/TransformException.h>
#include <javax/xml/crypto/dsig/TransformService.h>
#include <javax/xml/crypto/dsig/XMLSignContext.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/XMLSignatureException.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <org/jcp/xml/dsig/internal/DigesterOutputStream.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMReference$1.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMTransform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMURIDereferencer.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/jcp/xml/dsig/internal/dom/Policy.h>
#include <org/jcp/xml/dsig/internal/dom/Utils.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef INCLUSIVE
#undef INSTANCE
#undef LOG
#undef MAXIMUM_TRANSFORM_COUNT
#undef XMLNS

using $CanonicalizationException = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizationException;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $UnsyncBufferedOutputStream = ::com::sun::org::apache::xml::internal::security::utils::UnsyncBufferedOutputStream;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $AccessController = ::java::security::AccessController;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $Data = ::javax::xml::crypto::Data;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $NodeSetData = ::javax::xml::crypto::NodeSetData;
using $OctetStreamData = ::javax::xml::crypto::OctetStreamData;
using $URIDereferencer = ::javax::xml::crypto::URIDereferencer;
using $URIReference = ::javax::xml::crypto::URIReference;
using $URIReferenceException = ::javax::xml::crypto::URIReferenceException;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMURIReference = ::javax::xml::crypto::dom::DOMURIReference;
using $CanonicalizationMethod = ::javax::xml::crypto::dsig::CanonicalizationMethod;
using $DigestMethod = ::javax::xml::crypto::dsig::DigestMethod;
using $Reference = ::javax::xml::crypto::dsig::Reference;
using $Transform = ::javax::xml::crypto::dsig::Transform;
using $TransformException = ::javax::xml::crypto::dsig::TransformException;
using $TransformService = ::javax::xml::crypto::dsig::TransformService;
using $XMLSignContext = ::javax::xml::crypto::dsig::XMLSignContext;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $XMLSignatureException = ::javax::xml::crypto::dsig::XMLSignatureException;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;
using $DigesterOutputStream = ::org::jcp::xml::dsig::internal::DigesterOutputStream;
using $ApacheData = ::org::jcp::xml::dsig::internal::dom::ApacheData;
using $DOMDigestMethod = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod;
using $DOMReference$1 = ::org::jcp::xml::dsig::internal::dom::DOMReference$1;
using $DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMSubTreeData = ::org::jcp::xml::dsig::internal::dom::DOMSubTreeData;
using $DOMTransform = ::org::jcp::xml::dsig::internal::dom::DOMTransform;
using $DOMURIDereferencer = ::org::jcp::xml::dsig::internal::dom::DOMURIDereferencer;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Policy = ::org::jcp::xml::dsig::internal::dom::Policy;
using $Utils = ::org::jcp::xml::dsig::internal::dom::Utils;
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

class DOMReference$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(DOMReference$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(DOMReference::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<DOMReference$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo DOMReference$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DOMReference$$Lambda$lambda$static$0::*)()>(&DOMReference$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo DOMReference$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"org.jcp.xml.dsig.internal.dom.DOMReference$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* DOMReference$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(DOMReference$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* DOMReference$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _DOMReference_FieldInfo_[] = {
	{"MAXIMUM_TRANSFORM_COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(DOMReference, MAXIMUM_TRANSFORM_COUNT)},
	{"useC14N11", "Z", nullptr, $PRIVATE | $STATIC, $staticField(DOMReference, useC14N11)},
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMReference, LOG)},
	{"digestMethod", "Ljavax/xml/crypto/dsig/DigestMethod;", nullptr, $PRIVATE | $FINAL, $field(DOMReference, digestMethod)},
	{"id", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMReference, id)},
	{"transforms", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/crypto/dsig/Transform;>;", $PRIVATE | $FINAL, $field(DOMReference, transforms)},
	{"allTransforms", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/crypto/dsig/Transform;>;", $PRIVATE, $field(DOMReference, allTransforms)},
	{"appliedTransformData", "Ljavax/xml/crypto/Data;", nullptr, $PRIVATE | $FINAL, $field(DOMReference, appliedTransformData)},
	{"here", "Lorg/w3c/dom/Attr;", nullptr, $PRIVATE, $field(DOMReference, here)},
	{"uri", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMReference, uri)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMReference, type)},
	{"digestValue", "[B", nullptr, $PRIVATE, $field(DOMReference, digestValue)},
	{"calcDigestValue", "[B", nullptr, $PRIVATE, $field(DOMReference, calcDigestValue)},
	{"refElem", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(DOMReference, refElem)},
	{"digested", "Z", nullptr, $PRIVATE, $field(DOMReference, digested)},
	{"validated", "Z", nullptr, $PRIVATE, $field(DOMReference, validated)},
	{"validationStatus", "Z", nullptr, $PRIVATE, $field(DOMReference, validationStatus)},
	{"derefData", "Ljavax/xml/crypto/Data;", nullptr, $PRIVATE, $field(DOMReference, derefData)},
	{"dis", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(DOMReference, dis)},
	{"md", "Ljava/security/MessageDigest;", nullptr, $PRIVATE, $field(DOMReference, md)},
	{"provider", "Ljava/security/Provider;", nullptr, $PRIVATE, $field(DOMReference, provider)},
	{}
};

$MethodInfo _DOMReference_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List;Ljava/lang/String;Ljava/security/Provider;)V", "(Ljava/lang/String;Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List<+Ljavax/xml/crypto/dsig/Transform;>;Ljava/lang/String;Ljava/security/Provider;)V", $PUBLIC, $method(static_cast<void(DOMReference::*)($String*,$String*,$DigestMethod*,$List*,$String*,$Provider*)>(&DOMReference::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List;Ljavax/xml/crypto/Data;Ljava/util/List;Ljava/lang/String;Ljava/security/Provider;)V", "(Ljava/lang/String;Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List<+Ljavax/xml/crypto/dsig/Transform;>;Ljavax/xml/crypto/Data;Ljava/util/List<+Ljavax/xml/crypto/dsig/Transform;>;Ljava/lang/String;Ljava/security/Provider;)V", $PUBLIC, $method(static_cast<void(DOMReference::*)($String*,$String*,$DigestMethod*,$List*,$Data*,$List*,$String*,$Provider*)>(&DOMReference::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List;Ljavax/xml/crypto/Data;Ljava/util/List;Ljava/lang/String;[BLjava/security/Provider;)V", "(Ljava/lang/String;Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List<+Ljavax/xml/crypto/dsig/Transform;>;Ljavax/xml/crypto/Data;Ljava/util/List<+Ljavax/xml/crypto/dsig/Transform;>;Ljava/lang/String;[BLjava/security/Provider;)V", $PUBLIC, $method(static_cast<void(DOMReference::*)($String*,$String*,$DigestMethod*,$List*,$Data*,$List*,$String*,$bytes*,$Provider*)>(&DOMReference::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljavax/xml/crypto/XMLCryptoContext;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMReference::*)($Element*,$XMLCryptoContext*,$Provider*)>(&DOMReference::init$)), "javax.xml.crypto.MarshalException"},
	{"copyDerefData", "(Ljavax/xml/crypto/Data;)Ljavax/xml/crypto/Data;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Data*(*)($Data*)>(&DOMReference::copyDerefData))},
	{"dereference", "(Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PRIVATE, $method(static_cast<$Data*(DOMReference::*)($XMLCryptoContext*)>(&DOMReference::dereference)), "javax.xml.crypto.dsig.XMLSignatureException"},
	{"digest", "(Ljavax/xml/crypto/dsig/XMLSignContext;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMReference::*)($XMLSignContext*)>(&DOMReference::digest)), "javax.xml.crypto.dsig.XMLSignatureException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCalculatedDigestValue", "()[B", nullptr, $PUBLIC},
	{"getDereferencedData", "()Ljavax/xml/crypto/Data;", nullptr, $PUBLIC},
	{"getDigestInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"getDigestMethod", "()Ljavax/xml/crypto/dsig/DigestMethod;", nullptr, $PUBLIC},
	{"getDigestValue", "()[B", nullptr, $PUBLIC},
	{"getHere", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTransforms", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/Transform;>;", $PUBLIC},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isDigested", "()Z", nullptr, 0, $method(static_cast<bool(DOMReference::*)()>(&DOMReference::isDigested))},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"lambda$static$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)()>(&DOMReference::lambda$static$0))},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(DOMReference::*)($Data*,$XMLCryptoContext*)>(&DOMReference::transform)), "javax.xml.crypto.dsig.XMLSignatureException"},
	{"validate", "(Ljavax/xml/crypto/dsig/XMLValidateContext;)Z", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.dsig.XMLSignatureException"},
	{}
};

$InnerClassInfo _DOMReference_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMReference$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DOMReference_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMReference",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.Reference,javax.xml.crypto.dom.DOMURIReference",
	_DOMReference_FieldInfo_,
	_DOMReference_MethodInfo_,
	nullptr,
	nullptr,
	_DOMReference_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMReference$1"
};

$Object* allocate$DOMReference($Class* clazz) {
	return $of($alloc(DOMReference));
}

bool DOMReference::isFeatureSupported($String* feature) {
	 return this->$DOMStructure::isFeatureSupported(feature);
}

$Object* DOMReference::clone() {
	 return this->$DOMStructure::clone();
}

$String* DOMReference::toString() {
	 return this->$DOMStructure::toString();
}

void DOMReference::finalize() {
	this->$DOMStructure::finalize();
}


bool DOMReference::useC14N11 = false;
$Logger* DOMReference::LOG = nullptr;

void DOMReference::init$($String* uri, $String* type, $DigestMethod* dm, $List* transforms, $String* id, $Provider* provider) {
	DOMReference::init$(uri, type, dm, nullptr, nullptr, transforms, id, nullptr, provider);
}

void DOMReference::init$($String* uri, $String* type, $DigestMethod* dm, $List* appliedTransforms, $Data* result, $List* transforms, $String* id, $Provider* provider) {
	DOMReference::init$(uri, type, dm, appliedTransforms, result, transforms, id, nullptr, provider);
}

void DOMReference::init$($String* uri, $String* type, $DigestMethod* dm, $List* appliedTransforms, $Data* result, $List* transforms, $String* id, $bytes* digestValue, $Provider* provider) {
	$DOMStructure::init$();
	this->digested = false;
	this->validated = false;
	if (dm == nullptr) {
		$throwNew($NullPointerException, "DigestMethod must be non-null"_s);
	}
	if (appliedTransforms == nullptr) {
		$set(this, allTransforms, $new($ArrayList));
	} else {
		$set(this, allTransforms, $new($ArrayList, static_cast<$Collection*>(appliedTransforms)));
		{
			int32_t i = 0;
			int32_t size = $nc(this->allTransforms)->size();
			for (; i < size; ++i) {
				if (!($instanceOf($Transform, $($nc(this->allTransforms)->get(i))))) {
					$throwNew($ClassCastException, $$str({"appliedTransforms["_s, $$str(i), "] is not a valid type"_s}));
				}
			}
		}
	}
	if (transforms == nullptr) {
		$set(this, transforms, $Collections::emptyList());
	} else {
		$set(this, transforms, $new($ArrayList, static_cast<$Collection*>(transforms)));
		{
			int32_t i = 0;
			int32_t size = $nc(this->transforms)->size();
			for (; i < size; ++i) {
				if (!($instanceOf($Transform, $($nc(this->transforms)->get(i))))) {
					$throwNew($ClassCastException, $$str({"transforms["_s, $$str(i), "] is not a valid type"_s}));
				}
			}
		}
		$nc(this->allTransforms)->addAll(this->transforms);
	}
	$set(this, digestMethod, dm);
	$set(this, uri, uri);
	if (uri != nullptr && !uri->isEmpty()) {
		try {
			$new($URI, uri);
		} catch ($URISyntaxException&) {
			$var($URISyntaxException, e, $catch());
			$throwNew($IllegalArgumentException, $(e->getMessage()));
		}
	}
	$set(this, type, type);
	$set(this, id, id);
	if (digestValue != nullptr) {
		$set(this, digestValue, $cast($bytes, digestValue->clone()));
		this->digested = true;
	}
	$set(this, appliedTransformData, result);
	$set(this, provider, provider);
}

void DOMReference::init$($Element* refElem, $XMLCryptoContext* context, $Provider* provider) {
	$DOMStructure::init$();
	this->digested = false;
	this->validated = false;
	bool secVal = $Utils::secureValidation(context);
	$var($Element, nextSibling, $DOMUtils::getFirstChildElement(refElem));
	$var($List, newTransforms, $new($ArrayList, DOMReference::MAXIMUM_TRANSFORM_COUNT));
	bool var$0 = "Transforms"_s->equals($($nc(nextSibling)->getLocalName()));
	$init($XMLSignature);
	if (var$0 && $nc($XMLSignature::XMLNS)->equals($($nc(nextSibling)->getNamespaceURI()))) {
		$var($Element, transformElem, $DOMUtils::getFirstChildElement(nextSibling, "Transform"_s, $XMLSignature::XMLNS));
		newTransforms->add($$new($DOMTransform, transformElem, context, provider));
		$assign(transformElem, $DOMUtils::getNextSiblingElement(transformElem));
		while (transformElem != nullptr) {
			$var($String, localName, transformElem->getLocalName());
			$var($String, namespace$, transformElem->getNamespaceURI());
			bool var$1 = !"Transform"_s->equals(localName);
			if (var$1 || !$nc($XMLSignature::XMLNS)->equals(namespace$)) {
				$throwNew($MarshalException, $$str({"Invalid element name: "_s, localName, ", expected Transform"_s}));
			}
			newTransforms->add($$new($DOMTransform, transformElem, context, provider));
			if (secVal && $Policy::restrictNumTransforms(newTransforms->size())) {
				$var($String, error, $str({"A maximum of "_s, $$str($Policy::maxTransforms()), " transforms per Reference are allowed when secure validation is enabled"_s}));
				$throwNew($MarshalException, error);
			}
			$assign(transformElem, $DOMUtils::getNextSiblingElement(transformElem));
		}
		$assign(nextSibling, $DOMUtils::getNextSiblingElement(nextSibling));
	}
	bool var$2 = !"DigestMethod"_s->equals($($nc(nextSibling)->getLocalName()));
	if (var$2 && $nc($XMLSignature::XMLNS)->equals($($nc(nextSibling)->getNamespaceURI()))) {
		$throwNew($MarshalException, $$str({"Invalid element name: "_s, $($nc(nextSibling)->getLocalName()), ", expected DigestMethod"_s}));
	}
	$var($Element, dmElem, nextSibling);
	$set(this, digestMethod, $DOMDigestMethod::unmarshal(dmElem));
	$var($String, digestMethodAlgorithm, $nc(this->digestMethod)->getAlgorithm());
	if (secVal && $Policy::restrictAlg(digestMethodAlgorithm)) {
		$throwNew($MarshalException, $$str({"It is forbidden to use algorithm "_s, digestMethodAlgorithm, " when secure validation is enabled"_s}));
	}
	$var($Element, dvElem, $DOMUtils::getNextSiblingElement(dmElem, "DigestValue"_s, $XMLSignature::XMLNS));
	$var($String, content, $XMLUtils::getFullTextChildrenFromNode(dvElem));
	$set(this, digestValue, $XMLUtils::decode(content));
	if ($DOMUtils::getNextSiblingElement(dvElem) != nullptr) {
		$throwNew($MarshalException, "Unexpected element after DigestValue element"_s);
	}
	$set(this, uri, $DOMUtils::getAttributeValue(refElem, "URI"_s));
	$var($Attr, attr, $nc(refElem)->getAttributeNodeNS(nullptr, "Id"_s));
	if (attr != nullptr) {
		$set(this, id, attr->getValue());
		refElem->setIdAttributeNode(attr, true);
	} else {
		$set(this, id, nullptr);
	}
	$set(this, type, $DOMUtils::getAttributeValue(refElem, "Type"_s));
	$set(this, here, refElem->getAttributeNodeNS(nullptr, "URI"_s));
	$set(this, refElem, refElem);
	$set(this, transforms, newTransforms);
	$set(this, allTransforms, this->transforms);
	$set(this, appliedTransformData, nullptr);
	$set(this, provider, provider);
}

$DigestMethod* DOMReference::getDigestMethod() {
	return this->digestMethod;
}

$String* DOMReference::getId() {
	return this->id;
}

$String* DOMReference::getURI() {
	return this->uri;
}

$String* DOMReference::getType() {
	return this->type;
}

$List* DOMReference::getTransforms() {
	return $Collections::unmodifiableList(this->allTransforms);
}

$bytes* DOMReference::getDigestValue() {
	return this->digestValue == nullptr ? ($bytes*)nullptr : $cast($bytes, $nc(this->digestValue)->clone());
}

$bytes* DOMReference::getCalculatedDigestValue() {
	return this->calcDigestValue == nullptr ? ($bytes*)nullptr : $cast($bytes, $nc(this->calcDigestValue)->clone());
}

void DOMReference::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$nc(DOMReference::LOG)->debug("Marshalling Reference"_s);
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$set(this, refElem, $DOMUtils::createElement(ownerDoc, "Reference"_s, $XMLSignature::XMLNS, dsPrefix));
	$DOMUtils::setAttributeID(this->refElem, "Id"_s, this->id);
	$DOMUtils::setAttribute(this->refElem, "URI"_s, this->uri);
	$DOMUtils::setAttribute(this->refElem, "Type"_s, this->type);
	if (!$nc(this->allTransforms)->isEmpty()) {
		$var($Element, transformsElem, $DOMUtils::createElement(ownerDoc, "Transforms"_s, $XMLSignature::XMLNS, dsPrefix));
		$nc(this->refElem)->appendChild(transformsElem);
		{
			$var($Iterator, i$, $nc(this->allTransforms)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Transform, transform, $cast($Transform, i$->next()));
				{
					$nc(($cast($DOMStructure, transform)))->marshal(transformsElem, dsPrefix, context);
				}
			}
		}
	}
	$nc(($cast($DOMDigestMethod, this->digestMethod)))->marshal(this->refElem, dsPrefix, context);
	$nc(DOMReference::LOG)->debug("Adding digestValueElem"_s);
	$var($Element, digestValueElem, $DOMUtils::createElement(ownerDoc, "DigestValue"_s, $XMLSignature::XMLNS, dsPrefix));
	if (this->digestValue != nullptr) {
		$nc(digestValueElem)->appendChild($($nc(ownerDoc)->createTextNode($($XMLUtils::encodeToString(this->digestValue)))));
	}
	$nc(this->refElem)->appendChild(digestValueElem);
	$nc(parent)->appendChild(this->refElem);
	$set(this, here, $nc(this->refElem)->getAttributeNodeNS(nullptr, "URI"_s));
}

void DOMReference::digest($XMLSignContext* signContext) {
	$var($Data, data, nullptr);
	if (this->appliedTransformData == nullptr) {
		$assign(data, dereference(signContext));
	} else {
		$assign(data, this->appliedTransformData);
	}
	$set(this, digestValue, transform(data, signContext));
	$var($String, encodedDV, $XMLUtils::encodeToString(this->digestValue));
	$nc(DOMReference::LOG)->debug("Reference object uri = {}"_s, $$new($ObjectArray, {$of(this->uri)}));
	$var($Element, digestElem, $DOMUtils::getLastChildElement(this->refElem));
	if (digestElem == nullptr) {
		$throwNew($XMLSignatureException, "DigestValue element expected"_s);
	}
	$DOMUtils::removeAllChildren(digestElem);
	$nc(digestElem)->appendChild($($nc($($nc(this->refElem)->getOwnerDocument()))->createTextNode(encodedDV)));
	this->digested = true;
	$nc(DOMReference::LOG)->debug("Reference digesting completed"_s);
}

bool DOMReference::validate($XMLValidateContext* validateContext) {
	if (validateContext == nullptr) {
		$throwNew($NullPointerException, "validateContext cannot be null"_s);
	}
	if (this->validated) {
		return this->validationStatus;
	}
	$var($Data, data, dereference(validateContext));
	$set(this, calcDigestValue, transform(data, validateContext));
	if ($nc(DOMReference::LOG)->isDebugEnabled()) {
		$nc(DOMReference::LOG)->debug($$str({"Expected digest: "_s, $($XMLUtils::encodeToString(this->digestValue))}));
		$nc(DOMReference::LOG)->debug($$str({"Actual digest: "_s, $($XMLUtils::encodeToString(this->calcDigestValue))}));
	}
	this->validationStatus = $Arrays::equals(this->digestValue, this->calcDigestValue);
	this->validated = true;
	return this->validationStatus;
}

$Data* DOMReference::getDereferencedData() {
	return this->derefData;
}

$InputStream* DOMReference::getDigestInputStream() {
	return this->dis;
}

$Data* DOMReference::dereference($XMLCryptoContext* context) {
	$var($Data, data, nullptr);
	$var($URIDereferencer, deref, $nc(context)->getURIDereferencer());
	if (deref == nullptr) {
		$init($DOMURIDereferencer);
		$assign(deref, $DOMURIDereferencer::INSTANCE);
	}
	try {
		$assign(data, $nc(deref)->dereference(static_cast<$URIReference*>(static_cast<$Reference*>(this)), context));
		$nc(DOMReference::LOG)->debug("URIDereferencer class name: {}"_s, $$new($ObjectArray, {$($of($of(deref)->getClass()->getName()))}));
		$nc(DOMReference::LOG)->debug("Data class name: {}"_s, $$new($ObjectArray, {$($of($nc($of(data))->getClass()->getName()))}));
	} catch ($URIReferenceException&) {
		$var($URIReferenceException, ure, $catch());
		$throwNew($XMLSignatureException, static_cast<$Throwable*>(ure));
	}
	return data;
}

$bytes* DOMReference::transform($Data* dereferencedData, $XMLCryptoContext* context) {
	if (this->md == nullptr) {
		try {
			$set(this, md, $MessageDigest::getInstance($($nc(($cast($DOMDigestMethod, this->digestMethod)))->getMessageDigestAlgorithm())));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$throwNew($XMLSignatureException, static_cast<$Throwable*>(nsae));
		}
	}
	$nc(this->md)->reset();
	$var($DigesterOutputStream, dos, nullptr);
	$var($Boolean, cache, $cast($Boolean, $nc(context)->getProperty("javax.xml.crypto.dsig.cacheReference"_s)));
	if (cache != nullptr && cache->booleanValue()) {
		$set(this, derefData, copyDerefData(dereferencedData));
		$assign(dos, $new($DigesterOutputStream, this->md, true));
	} else {
		$assign(dos, $new($DigesterOutputStream, this->md));
	}
	$var($Data, data, dereferencedData);
	$var($XMLSignatureInput, xi, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		$var($bytes, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$var($OutputStream, os, $new($UnsyncBufferedOutputStream, dos));
				{
					$var($Throwable, var$3, nullptr);
					$var($bytes, var$5, nullptr);
					bool return$4 = false;
					try {
						try {
							{
								int32_t i = 0;
								int32_t size = $nc(this->transforms)->size();
								for (; i < size; ++i) {
									$var($DOMTransform, transform, $cast($DOMTransform, $nc(this->transforms)->get(i)));
									if (i < size - 1) {
										$assign(data, $nc(transform)->transform(data, context));
									} else {
										$assign(data, $nc(transform)->transform(data, context, os));
									}
								}
							}
							if (data != nullptr) {
								bool c14n11 = DOMReference::useC14N11;
								$init($CanonicalizationMethod);
								$var($String, c14nalg, $CanonicalizationMethod::INCLUSIVE);
								if ($instanceOf($XMLSignContext, context)) {
									if (!c14n11) {
										$var($Boolean, prop, $cast($Boolean, context->getProperty("com.sun.org.apache.xml.internal.security.useC14N11"_s)));
										c14n11 = prop != nullptr && prop->booleanValue();
										if (c14n11) {
											$assign(c14nalg, "http://www.w3.org/2006/12/xml-c14n11"_s);
										}
									} else {
										$assign(c14nalg, "http://www.w3.org/2006/12/xml-c14n11"_s);
									}
								}
								if ($instanceOf($ApacheData, data)) {
									$assign(xi, $nc(($cast($ApacheData, data)))->getXMLSignatureInput());
								} else if ($instanceOf($OctetStreamData, data)) {
									$assign(xi, $new($XMLSignatureInput, $($nc(($cast($OctetStreamData, data)))->getOctetStream())));
								} else if ($instanceOf($NodeSetData, data)) {
									$var($TransformService, spi, nullptr);
									if (this->provider == nullptr) {
										$assign(spi, $TransformService::getInstance(c14nalg, "DOM"_s));
									} else {
										try {
											$assign(spi, $TransformService::getInstance(c14nalg, "DOM"_s, this->provider));
										} catch ($NoSuchAlgorithmException&) {
											$var($NoSuchAlgorithmException, nsae, $catch());
											$assign(spi, $TransformService::getInstance(c14nalg, "DOM"_s));
										}
									}
									$assign(data, $nc(spi)->transform(data, context));
									$assign(xi, $new($XMLSignatureInput, $($nc(($cast($OctetStreamData, data)))->getOctetStream())));
								} else {
									$throwNew($XMLSignatureException, "unrecognized Data type"_s);
								}
								bool secVal = $Utils::secureValidation(context);
								{
									$var($Throwable, var$6, nullptr);
									try {
										$nc(xi)->setSecureValidation(secVal);
										bool var$7 = $instanceOf($XMLSignContext, context) && c14n11 && !xi->isOctetStream();
										if (var$7 && !xi->isOutputStreamSet()) {
											$var($TransformService, spi, nullptr);
											if (this->provider == nullptr) {
												$assign(spi, $TransformService::getInstance(c14nalg, "DOM"_s));
											} else {
												try {
													$assign(spi, $TransformService::getInstance(c14nalg, "DOM"_s, this->provider));
												} catch ($NoSuchAlgorithmException&) {
													$var($NoSuchAlgorithmException, nsae, $catch());
													$assign(spi, $TransformService::getInstance(c14nalg, "DOM"_s));
												}
											}
											$var($DOMTransform, t, $new($DOMTransform, spi));
											$var($Element, transformsElem, nullptr);
											$var($String, dsPrefix, $DOMUtils::getSignaturePrefix(context));
											if ($nc(this->allTransforms)->isEmpty()) {
												$init($XMLSignature);
												$assign(transformsElem, $DOMUtils::createElement($($nc(this->refElem)->getOwnerDocument()), "Transforms"_s, $XMLSignature::XMLNS, dsPrefix));
												$nc(this->refElem)->insertBefore(transformsElem, $($DOMUtils::getFirstChildElement(this->refElem)));
											} else {
												$assign(transformsElem, $DOMUtils::getFirstChildElement(this->refElem));
											}
											t->marshal(transformsElem, dsPrefix, $cast($DOMCryptoContext, context));
											$nc(this->allTransforms)->add(t);
											xi->updateOutputStream(os, true);
										} else {
											xi->updateOutputStream(os);
										}
									} catch ($Throwable&) {
										$assign(var$6, $catch());
									} /*finally*/ {
										if ($nc(xi)->getOctetStreamReal() != nullptr) {
											$nc($(xi->getOctetStreamReal()))->close();
										}
									}
									if (var$6 != nullptr) {
										$throw(var$6);
									}
								}
							} else {
								$nc(DOMReference::LOG)->warn("The input bytes to the digest operation are null. This may be due to a problem with the Reference URI or its Transforms."_s);
							}
							os->flush();
							if (cache != nullptr && cache->booleanValue()) {
								$set(this, dis, $nc(dos)->getInputStream());
							}
							$assign(var$5, $nc(dos)->getDigestValue());
							return$4 = true;
							goto $finally1;
						} catch ($Throwable&) {
							$var($Throwable, t$, $catch());
							try {
								os->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable&) {
						$assign(var$3, $catch());
					} $finally1: {
						os->close();
					}
					if (var$3 != nullptr) {
						$throw(var$3);
					}
					if (return$4) {
						$assign(var$2, var$5);
						return$1 = true;
						goto $finally;
					}
				}
			} catch ($NoSuchAlgorithmException&) {
				$var($Exception, e, $catch());
				$throwNew($XMLSignatureException, static_cast<$Throwable*>(e));
			} catch ($TransformException&) {
				$var($Exception, e, $catch());
				$throwNew($XMLSignatureException, static_cast<$Throwable*>(e));
			} catch ($MarshalException&) {
				$var($Exception, e, $catch());
				$throwNew($XMLSignatureException, static_cast<$Throwable*>(e));
			} catch ($IOException&) {
				$var($Exception, e, $catch());
				$throwNew($XMLSignatureException, static_cast<$Throwable*>(e));
			} catch ($CanonicalizationException&) {
				$var($Exception, e, $catch());
				$throwNew($XMLSignatureException, static_cast<$Throwable*>(e));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			if (xi != nullptr && xi->getOctetStreamReal() != nullptr) {
				try {
					$nc($(xi->getOctetStreamReal()))->close();
				} catch ($IOException&) {
					$var($IOException, e, $catch());
					$throwNew($XMLSignatureException, static_cast<$Throwable*>(e));
				}
			}
			if (dos != nullptr) {
				try {
					dos->close();
				} catch ($IOException&) {
					$var($IOException, e, $catch());
					$throwNew($XMLSignatureException, static_cast<$Throwable*>(e));
				}
			}
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

$Node* DOMReference::getHere() {
	return this->here;
}

bool DOMReference::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($Reference, o))) {
		return false;
	}
	$var($Reference, oref, $cast($Reference, o));
	bool idsEqual = this->id == nullptr ? $nc(oref)->getId() == nullptr : $nc(this->id)->equals($(oref->getId()));
	bool urisEqual = this->uri == nullptr ? oref->getURI() == nullptr : $nc(this->uri)->equals($(oref->getURI()));
	bool typesEqual = this->type == nullptr ? oref->getType() == nullptr : $nc(this->type)->equals($(oref->getType()));
	bool digestValuesEqual = $Arrays::equals(this->digestValue, $(oref->getDigestValue()));
	bool var$0 = $nc($of(this->digestMethod))->equals($(oref->getDigestMethod())) && idsEqual && urisEqual && typesEqual;
	return var$0 && $nc(this->allTransforms)->equals($(oref->getTransforms())) && digestValuesEqual;
}

int32_t DOMReference::hashCode() {
	int32_t result = 17;
	if (this->id != nullptr) {
		result = 31 * result + $nc(this->id)->hashCode();
	}
	if (this->uri != nullptr) {
		result = 31 * result + $nc(this->uri)->hashCode();
	}
	if (this->type != nullptr) {
		result = 31 * result + $nc(this->type)->hashCode();
	}
	if (this->digestValue != nullptr) {
		result = 31 * result + $Arrays::hashCode(this->digestValue);
	}
	result = 31 * result + $nc($of(this->digestMethod))->hashCode();
	result = 31 * result + $nc(this->allTransforms)->hashCode();
	return result;
}

bool DOMReference::isDigested() {
	return this->digested;
}

$Data* DOMReference::copyDerefData($Data* dereferencedData) {
	$init(DOMReference);
	if ($instanceOf($ApacheData, dereferencedData)) {
		$var($ApacheData, ad, $cast($ApacheData, dereferencedData));
		$var($XMLSignatureInput, xsi, $nc(ad)->getXMLSignatureInput());
		if ($nc(xsi)->isNodeSet()) {
			try {
				$var($Set, s, xsi->getNodeSet());
				return $new($DOMReference$1, s);
			} catch ($Exception&) {
				$var($Exception, e, $catch());
				$nc(DOMReference::LOG)->warn($$str({"cannot cache dereferenced data: "_s, e}));
				return nullptr;
			}
		} else if (xsi->isElement()) {
			$var($Node, var$0, xsi->getSubNode());
			return $new($DOMSubTreeData, var$0, xsi->isExcludeComments());
		} else {
			bool var$2 = xsi->isOctetStream();
			if (var$2 || xsi->isByteArray()) {
				try {
					$var($InputStream, var$3, xsi->getOctetStream());
					$var($String, var$4, xsi->getSourceURI());
					return $new($OctetStreamData, var$3, var$4, $(xsi->getMIMEType()));
				} catch ($IOException&) {
					$var($IOException, ioe, $catch());
					$nc(DOMReference::LOG)->warn($$str({"cannot cache dereferenced data: "_s, ioe}));
					return nullptr;
				}
			}
		}
	}
	return dereferencedData;
}

$Boolean* DOMReference::lambda$static$0() {
	$init(DOMReference);
	return $Boolean::valueOf($Boolean::getBoolean("com.sun.org.apache.xml.internal.security.useC14N11"_s));
}

void clinit$DOMReference($Class* class$) {
	$beforeCallerSensitive();
	DOMReference::useC14N11 = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(DOMReference$$Lambda$lambda$static$0)))))))->booleanValue();
	$assignStatic(DOMReference::LOG, $LoggerFactory::getLogger(DOMReference::class$));
}

DOMReference::DOMReference() {
}

$Class* DOMReference::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(DOMReference$$Lambda$lambda$static$0::classInfo$.name)) {
			return DOMReference$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(DOMReference, name, initialize, &_DOMReference_ClassInfo_, clinit$DOMReference, allocate$DOMReference);
	return class$;
}

$Class* DOMReference::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org