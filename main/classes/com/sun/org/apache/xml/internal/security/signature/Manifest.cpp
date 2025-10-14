#include <com/sun/org/apache/xml/internal/security/signature/Manifest.h>

#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/c14n/InvalidCanonicalizerException.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParserException.h>
#include <com/sun/org/apache/xml/internal/security/signature/MissingResourceFailureException.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference.h>
#include <com/sun/org/apache/xml/internal/security/signature/ReferenceNotInitializedException.h>
#include <com/sun/org/apache/xml/internal/security/signature/VerifiedReference.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IndexOutOfBoundsException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef LOG
#undef MAXIMUM_REFERENCE_COUNT
#undef WRONG_DOCUMENT_ERR
#undef _ATT_ID
#undef _TAG_MANIFEST
#undef _TAG_REFERENCE

using $ElementArray = $Array<::org::w3c::dom::Element>;
using $CanonicalizationException = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizationException;
using $InvalidCanonicalizerException = ::com::sun::org::apache::xml::internal::security::c14n::InvalidCanonicalizerException;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $XMLParserException = ::com::sun::org::apache::xml::internal::security::parser::XMLParserException;
using $MissingResourceFailureException = ::com::sun::org::apache::xml::internal::security::signature::MissingResourceFailureException;
using $Reference = ::com::sun::org::apache::xml::internal::security::signature::Reference;
using $ReferenceNotInitializedException = ::com::sun::org::apache::xml::internal::security::signature::ReferenceNotInitializedException;
using $VerifiedReference = ::com::sun::org::apache::xml::internal::security::signature::VerifiedReference;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $I18n = ::com::sun::org::apache::xml::internal::security::utils::I18n;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ResourceResolverSpi = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IndexOutOfBoundsException = ::java::lang::IndexOutOfBoundsException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Attr = ::org::w3c::dom::Attr;
using $DOMException = ::org::w3c::dom::DOMException;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

class Manifest$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(Manifest$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Manifest::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Manifest$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Manifest$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Manifest$$Lambda$lambda$static$0::*)()>(&Manifest$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Manifest$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xml.internal.security.signature.Manifest$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* Manifest$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(Manifest$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Manifest$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _Manifest_FieldInfo_[] = {
	{"MAXIMUM_REFERENCE_COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Manifest, MAXIMUM_REFERENCE_COUNT)},
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Manifest, LOG)},
	{"referenceCount", "Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC, $staticField(Manifest, referenceCount)},
	{"references", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/signature/Reference;>;", $PRIVATE, $field(Manifest, references)},
	{"referencesEl", "[Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(Manifest, referencesEl)},
	{"verificationResults", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/signature/VerifiedReference;>;", $PRIVATE, $field(Manifest, verificationResults)},
	{"resolverProperties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE, $field(Manifest, resolverProperties)},
	{"perManifestResolvers", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi;>;", $PRIVATE, $field(Manifest, perManifestResolvers)},
	{"secureValidation", "Z", nullptr, $PRIVATE, $field(Manifest, secureValidation)},
	{}
};

$MethodInfo _Manifest_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(Manifest::*)($Document*)>(&Manifest::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Manifest::*)($Element*,$String*)>(&Manifest::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Manifest::*)($Element*,$String*,bool)>(&Manifest::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"addDocument", "(Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/transforms/Transforms;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"addResourceResolver", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi;)V", nullptr, $PUBLIC},
	{"generateDigestValues", "()V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException,com.sun.org.apache.xml.internal.security.signature.ReferenceNotInitializedException"},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getPerManifestResolvers", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi;>;", $PUBLIC},
	{"getReferencedContentAfterTransformsItem", "(I)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getReferencedContentBeforeTransformsItem", "(I)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getResolverProperties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC},
	{"getResolverProperty", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSignedContentItem", "(I)[B", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getSignedContentLength", "()I", nullptr, $PUBLIC},
	{"getVerificationResult", "(I)Z", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getVerificationResults", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/signature/VerifiedReference;>;", $PUBLIC},
	{"isSecureValidation", "()Z", nullptr, $PUBLIC},
	{"item", "(I)Lcom/sun/org/apache/xml/internal/security/signature/Reference;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"lambda$static$0", "()Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Integer*(*)()>(&Manifest::lambda$static$0))},
	{"setId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setResolverProperty", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"verifyReferences", "()Z", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.MissingResourceFailureException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"verifyReferences", "(Z)Z", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.MissingResourceFailureException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{}
};

$ClassInfo _Manifest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.Manifest",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	nullptr,
	_Manifest_FieldInfo_,
	_Manifest_MethodInfo_
};

$Object* allocate$Manifest($Class* clazz) {
	return $of($alloc(Manifest));
}

$Logger* Manifest::LOG = nullptr;
$Integer* Manifest::referenceCount = nullptr;

void Manifest::init$($Document* doc) {
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
	$set(this, references, $new($ArrayList));
}

void Manifest::init$($Element* element, $String* baseURI) {
	Manifest::init$(element, baseURI, true);
}

void Manifest::init$($Element* element, $String* baseURI, bool secureValidation) {
	$SignatureElementProxy::init$(element, baseURI);
	$var($Attr, attr, $nc(element)->getAttributeNodeNS(nullptr, "Id"_s));
	if (attr != nullptr) {
		element->setIdAttributeNode(attr, true);
	}
	this->secureValidation = secureValidation;
	$init($Constants);
	$set(this, referencesEl, $XMLUtils::selectDsNodes($(getFirstChild()), $Constants::_TAG_REFERENCE));
	int32_t le = $nc(this->referencesEl)->length;
	if (le == 0) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of($Constants::_TAG_REFERENCE),
			$of($Constants::_TAG_MANIFEST)
		}));
		$throwNew($DOMException, $DOMException::WRONG_DOCUMENT_ERR, $($I18n::translate("xml.WrongContent"_s, exArgs)));
	}
	if (secureValidation && le > $nc(Manifest::referenceCount)->intValue()) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$($of($Integer::valueOf(le))),
			$of(Manifest::referenceCount)
		}));
		$throwNew($XMLSecurityException, "signature.tooManyReferences"_s, exArgs);
	}
	$set(this, references, $new($ArrayList, le));
	for (int32_t i = 0; i < le; ++i) {
		$var($Element, refElem, $nc(this->referencesEl)->get(i));
		$var($Attr, refAttr, $nc(refElem)->getAttributeNodeNS(nullptr, "Id"_s));
		if (refAttr != nullptr) {
			refElem->setIdAttributeNode(refAttr, true);
		}
		$nc(this->references)->add(nullptr);
	}
}

void Manifest::addDocument($String* baseURI, $String* referenceURI, $Transforms* transforms, $String* digestURI, $String* referenceId, $String* referenceType) {
	$var($Reference, ref, $new($Reference, $(getDocument()), baseURI, referenceURI, this, transforms, digestURI));
	if (referenceId != nullptr) {
		ref->setId(referenceId);
	}
	if (referenceType != nullptr) {
		ref->setType(referenceType);
	}
	$nc(this->references)->add(ref);
	appendSelf(static_cast<$ElementProxy*>(ref));
	addReturnToSelf();
}

void Manifest::generateDigestValues() {
	for (int32_t i = 0; i < this->getLength(); ++i) {
		$var($Reference, currentRef, $cast($Reference, $nc(this->references)->get(i)));
		$nc(currentRef)->generateDigestValue();
	}
}

int32_t Manifest::getLength() {
	return $nc(this->references)->size();
}

$Reference* Manifest::item(int32_t i) {
	if ($nc(this->references)->get(i) == nullptr) {
		$var($Reference, ref, $new($Reference, $nc(this->referencesEl)->get(i), this->baseURI, this, this->secureValidation));
		$nc(this->references)->set(i, ref);
	}
	return $cast($Reference, $nc(this->references)->get(i));
}

void Manifest::setId($String* Id) {
	if (Id != nullptr) {
		$init($Constants);
		setLocalIdAttribute($Constants::_ATT_ID, Id);
	}
}

$String* Manifest::getId() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ID);
}

bool Manifest::verifyReferences() {
	return this->verifyReferences(false);
}

bool Manifest::verifyReferences(bool followManifests) {
	if (this->referencesEl == nullptr) {
		$init($Constants);
		$set(this, referencesEl, $XMLUtils::selectDsNodes($(getFirstChild()), $Constants::_TAG_REFERENCE));
	}
	$nc(Manifest::LOG)->debug("verify {} References"_s, $$new($ObjectArray, {$($of($Integer::valueOf($nc(this->referencesEl)->length)))}));
	$nc(Manifest::LOG)->debug("I am {} requested to follow nested Manifests"_s, $$new($ObjectArray, {followManifests ? $of(""_s) : $of("not"_s)}));
	if ($nc(this->referencesEl)->length == 0) {
		$throwNew($XMLSecurityException, "empty"_s, $$new($ObjectArray, {$of("References are empty"_s)}));
	}
	if (this->secureValidation && $nc(this->referencesEl)->length > $nc(Manifest::referenceCount)->intValue()) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$($of($Integer::valueOf($nc(this->referencesEl)->length))),
			$of(Manifest::referenceCount)
		}));
		$throwNew($XMLSecurityException, "signature.tooManyReferences"_s, exArgs);
	}
	$set(this, verificationResults, $new($ArrayList, $nc(this->referencesEl)->length));
	bool verify = true;
	for (int32_t i = 0; i < $nc(this->referencesEl)->length; ++i) {
		$var($Reference, currentRef, $new($Reference, $nc(this->referencesEl)->get(i), this->baseURI, this, this->secureValidation));
		$nc(this->references)->set(i, currentRef);
		try {
			bool currentRefVerified = currentRef->verify();
			if (!currentRefVerified) {
				verify = false;
			}
			$nc(Manifest::LOG)->debug("The Reference has Type {}"_s, $$new($ObjectArray, {$($of(currentRef->getType()))}));
			$var($List, manifestReferences, $Collections::emptyList());
			if (verify && followManifests && currentRef->typeIsReferenceToManifest()) {
				$nc(Manifest::LOG)->debug("We have to follow a nested Manifest"_s);
				try {
					$var($XMLSignatureInput, signedManifestNodes, currentRef->dereferenceURIandPerformTransforms(nullptr));
					$var($Set, nl, $nc(signedManifestNodes)->getNodeSet());
					$var(Manifest, referencedManifest, nullptr);
					$var($Iterator, nlIterator, $nc(nl)->iterator());
					while ($nc(nlIterator)->hasNext()) {
						$var($Node, n, $cast($Node, nlIterator->next()));
						bool var$1 = $nc(n)->getNodeType() == $Node::ELEMENT_NODE;
						$init($Constants);
						bool var$0 = var$1 && $nc($($nc(($cast($Element, n)))->getNamespaceURI()))->equals($Constants::SignatureSpecNS);
						if (var$0 && $nc($($nc(($cast($Element, n)))->getLocalName()))->equals($Constants::_TAG_MANIFEST)) {
							try {
								$assign(referencedManifest, $new(Manifest, $cast($Element, n), $(signedManifestNodes->getSourceURI()), this->secureValidation));
								break;
							} catch ($XMLSecurityException&) {
								$var($XMLSecurityException, ex, $catch());
								$nc(Manifest::LOG)->debug($(ex->getMessage()), static_cast<$Throwable*>(ex));
							}
						}
					}
					if (referencedManifest == nullptr) {
						$throwNew($MissingResourceFailureException, currentRef, "empty"_s, $$new($ObjectArray, {$of("No Manifest found"_s)}));
					}
					$set($nc(referencedManifest), perManifestResolvers, this->perManifestResolvers);
					$set(referencedManifest, resolverProperties, this->resolverProperties);
					bool referencedManifestValid = referencedManifest->verifyReferences(followManifests);
					if (!referencedManifestValid) {
						verify = false;
						$nc(Manifest::LOG)->warn("The nested Manifest was invalid (bad)"_s);
					} else {
						$nc(Manifest::LOG)->debug("The nested Manifest was valid (good)"_s);
					}
					$assign(manifestReferences, referencedManifest->getVerificationResults());
				} catch ($IOException&) {
					$var($IOException, ex, $catch());
					$throwNew($ReferenceNotInitializedException, static_cast<$Exception*>(ex));
				} catch ($XMLParserException&) {
					$var($XMLParserException, ex, $catch());
					$throwNew($ReferenceNotInitializedException, static_cast<$Exception*>(ex));
				}
			}
			$nc(this->verificationResults)->add($$new($VerifiedReference, currentRefVerified, $(currentRef->getURI()), manifestReferences));
		} catch ($ReferenceNotInitializedException&) {
			$var($ReferenceNotInitializedException, ex, $catch());
			$var($ObjectArray, exArgs, $new($ObjectArray, {$($of(currentRef->getURI()))}));
			$throwNew($MissingResourceFailureException, static_cast<$Exception*>(ex), currentRef, "signature.Verification.Reference.NoInput"_s, exArgs);
		}
	}
	return verify;
}

bool Manifest::getVerificationResult(int32_t index) {
	if (index < 0 || index > this->getLength() - 1) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$($of($Integer::toString(index))),
			$($of($Integer::toString(this->getLength())))
		}));
		$var($Exception, e, $new($IndexOutOfBoundsException, $($I18n::translate("signature.Verification.IndexOutOfBounds"_s, exArgs))));
		$throwNew($XMLSecurityException, e);
	}
	if (this->verificationResults == nullptr) {
		try {
			this->verifyReferences();
		} catch ($Exception&) {
			$var($Exception, ex, $catch());
			$throwNew($XMLSecurityException, ex);
		}
	}
	return $nc(($cast($VerifiedReference, $($nc(this->verificationResults)->get(index)))))->isValid();
}

$List* Manifest::getVerificationResults() {
	if (this->verificationResults == nullptr) {
		return $Collections::emptyList();
	}
	return $Collections::unmodifiableList(this->verificationResults);
}

void Manifest::addResourceResolver($ResourceResolverSpi* resolver) {
	if (resolver == nullptr) {
		return;
	}
	if (this->perManifestResolvers == nullptr) {
		$set(this, perManifestResolvers, $new($ArrayList));
	}
	$nc(this->perManifestResolvers)->add(resolver);
}

$List* Manifest::getPerManifestResolvers() {
	return this->perManifestResolvers;
}

$Map* Manifest::getResolverProperties() {
	return this->resolverProperties;
}

void Manifest::setResolverProperty($String* key, $String* value) {
	if (this->resolverProperties == nullptr) {
		$set(this, resolverProperties, $new($HashMap, 10));
	}
	$nc(this->resolverProperties)->put(key, value);
}

$String* Manifest::getResolverProperty($String* key) {
	return $cast($String, $nc(this->resolverProperties)->get(key));
}

$bytes* Manifest::getSignedContentItem(int32_t i) {
	try {
		return $nc($(this->getReferencedContentAfterTransformsItem(i)))->getBytes();
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	} catch ($CanonicalizationException&) {
		$var($CanonicalizationException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	} catch ($InvalidCanonicalizerException&) {
		$var($InvalidCanonicalizerException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

$XMLSignatureInput* Manifest::getReferencedContentBeforeTransformsItem(int32_t i) {
	return $nc($(this->item(i)))->getContentsBeforeTransformation();
}

$XMLSignatureInput* Manifest::getReferencedContentAfterTransformsItem(int32_t i) {
	return $nc($(this->item(i)))->getContentsAfterTransformation();
}

int32_t Manifest::getSignedContentLength() {
	return this->getLength();
}

$String* Manifest::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_MANIFEST;
}

bool Manifest::isSecureValidation() {
	return this->secureValidation;
}

$Integer* Manifest::lambda$static$0() {
	$init(Manifest);
	return $Integer::valueOf($Integer::parseInt($($System::getProperty("com.sun.org.apache.xml.internal.security.maxReferences"_s, $($Integer::toString(Manifest::MAXIMUM_REFERENCE_COUNT))))));
}

void clinit$Manifest($Class* class$) {
	$beforeCallerSensitive();
	$assignStatic(Manifest::LOG, $LoggerFactory::getLogger(Manifest::class$));
	$assignStatic(Manifest::referenceCount, $cast($Integer, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Manifest$$Lambda$lambda$static$0)))));
}

Manifest::Manifest() {
}

$Class* Manifest::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Manifest$$Lambda$lambda$static$0::classInfo$.name)) {
			return Manifest$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(Manifest, name, initialize, &_Manifest_ClassInfo_, clinit$Manifest, allocate$Manifest);
	return class$;
}

$Class* Manifest::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com