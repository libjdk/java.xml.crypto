#include <com/sun/org/apache/xml/internal/security/signature/Reference.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/Algorithm.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/MessageDigestAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/signature/Manifest.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference$1.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference$2.h>
#include <com/sun/org/apache/xml/internal/security/signature/ReferenceNotInitializedException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceData.h>
#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceNodeSetData.h>
#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceOctetStreamData.h>
#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceSubTreeData.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transform.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/transforms/params/InclusiveNamespaces.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/DigesterOutputStream.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/UnsyncBufferedOutputStream.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolver.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverException.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
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
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/SortedSet.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef ALGO_ID_DIGEST_NOT_RECOMMENDED_MD5
#undef LOG
#undef MANIFEST_URI
#undef MAXIMUM_TRANSFORM_COUNT
#undef OBJECT_URI
#undef TRANSFORM_ALGORITHMS
#undef TRANSFORM_C14N_EXCL_OMIT_COMMENTS
#undef TRANSFORM_C14N_EXCL_WITH_COMMENTS
#undef TRANSFORM_C14N_OMIT_COMMENTS
#undef TRANSFORM_C14N_WITH_COMMENTS
#undef _ATT_ALGORITHM
#undef _ATT_ID
#undef _ATT_TYPE
#undef _ATT_URI
#undef _TAG_DIGESTMETHOD
#undef _TAG_DIGESTVALUE
#undef _TAG_EC_INCLUSIVENAMESPACES
#undef _TAG_MANIFEST
#undef _TAG_OBJECT
#undef _TAG_REFERENCE
#undef _TAG_TRANSFORMS

using $Algorithm = ::com::sun::org::apache::xml::internal::security::algorithms::Algorithm;
using $MessageDigestAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::MessageDigestAlgorithm;
using $CanonicalizationException = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizationException;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $Manifest = ::com::sun::org::apache::xml::internal::security::signature::Manifest;
using $Reference$1 = ::com::sun::org::apache::xml::internal::security::signature::Reference$1;
using $Reference$2 = ::com::sun::org::apache::xml::internal::security::signature::Reference$2;
using $ReferenceNotInitializedException = ::com::sun::org::apache::xml::internal::security::signature::ReferenceNotInitializedException;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $ReferenceData = ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceData;
using $ReferenceNodeSetData = ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceNodeSetData;
using $ReferenceOctetStreamData = ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceOctetStreamData;
using $ReferenceSubTreeData = ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceSubTreeData;
using $Transform = ::com::sun::org::apache::xml::internal::security::transforms::Transform;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $InclusiveNamespaces = ::com::sun::org::apache::xml::internal::security::transforms::params::InclusiveNamespaces;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $DigesterOutputStream = ::com::sun::org::apache::xml::internal::security::utils::DigesterOutputStream;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $UnsyncBufferedOutputStream = ::com::sun::org::apache::xml::internal::security::utils::UnsyncBufferedOutputStream;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ResourceResolver = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolver;
using $ResourceResolverContext = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext;
using $ResourceResolverException = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverException;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $SortedSet = ::java::util::SortedSet;
using $Attr = ::org::w3c::dom::Attr;
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
							namespace signature {

class Reference$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(Reference$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Reference::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Reference$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Reference$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Reference$$Lambda$lambda$static$0::*)()>(&Reference$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Reference$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xml.internal.security.signature.Reference$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* Reference$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(Reference$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Reference$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _Reference_FieldInfo_[] = {
	{"OBJECT_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Reference, OBJECT_URI)},
	{"MANIFEST_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Reference, MANIFEST_URI)},
	{"MAXIMUM_TRANSFORM_COUNT", "I", nullptr, $PUBLIC | $STATIC | $FINAL, $constField(Reference, MAXIMUM_TRANSFORM_COUNT)},
	{"secureValidation", "Z", nullptr, $PRIVATE, $field(Reference, secureValidation)},
	{"useC14N11", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Reference, useC14N11)},
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Reference, LOG)},
	{"manifest", "Lcom/sun/org/apache/xml/internal/security/signature/Manifest;", nullptr, $PRIVATE, $field(Reference, manifest)},
	{"transformsOutput", "Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PRIVATE, $field(Reference, transformsOutput)},
	{"transforms", "Lcom/sun/org/apache/xml/internal/security/transforms/Transforms;", nullptr, $PRIVATE, $field(Reference, transforms)},
	{"digestMethodElem", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(Reference, digestMethodElem)},
	{"digestValueElement", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(Reference, digestValueElement)},
	{"referenceData", "Lcom/sun/org/apache/xml/internal/security/signature/reference/ReferenceData;", nullptr, $PRIVATE, $field(Reference, referenceData)},
	{"TRANSFORM_ALGORITHMS", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(Reference, TRANSFORM_ALGORITHMS)},
	{}
};

$MethodInfo _Reference_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/signature/Manifest;Lcom/sun/org/apache/xml/internal/security/transforms/Transforms;Ljava/lang/String;)V", nullptr, $PROTECTED, $method(static_cast<void(Reference::*)($Document*,$String*,$String*,$Manifest*,$Transforms*,$String*)>(&Reference::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/signature/Manifest;)V", nullptr, $PROTECTED, $method(static_cast<void(Reference::*)($Element*,$String*,$Manifest*)>(&Reference::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/signature/Manifest;Z)V", nullptr, $PROTECTED, $method(static_cast<void(Reference::*)($Element*,$String*,$Manifest*,bool)>(&Reference::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"cacheDereferencedElement", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;)V", nullptr, $PRIVATE, $method(static_cast<void(Reference::*)($XMLSignatureInput*)>(&Reference::cacheDereferencedElement))},
	{"calculateDigest", "(Z)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(Reference::*)(bool)>(&Reference::calculateDigest)), "com.sun.org.apache.xml.internal.security.signature.ReferenceNotInitializedException,com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"dereferenceURIandPerformTransforms", "(Ljava/io/OutputStream;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"generateDigestValue", "()V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException,com.sun.org.apache.xml.internal.security.signature.ReferenceNotInitializedException"},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getContentsAfterTransformation", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/io/OutputStream;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PRIVATE, $method(static_cast<$XMLSignatureInput*(Reference::*)($XMLSignatureInput*,$OutputStream*)>(&Reference::getContentsAfterTransformation)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getContentsAfterTransformation", "()Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getContentsBeforeTransformation", "()Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.ReferenceNotInitializedException"},
	{"getDigestValue", "()[B", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getHTMLRepresentation", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMessageDigestAlgorithm", "()Lcom/sun/org/apache/xml/internal/security/algorithms/MessageDigestAlgorithm;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getNodesetBeforeFirstCanonicalization", "()Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getPreCalculatedDigest", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(Reference::*)($XMLSignatureInput*)>(&Reference::getPreCalculatedDigest)), "com.sun.org.apache.xml.internal.security.signature.ReferenceNotInitializedException"},
	{"getReferenceData", "()Lcom/sun/org/apache/xml/internal/security/signature/reference/ReferenceData;", nullptr, $PUBLIC},
	{"getReferencedBytes", "()[B", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.ReferenceNotInitializedException,com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getTransforms", "()Lcom/sun/org/apache/xml/internal/security/transforms/Transforms;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException,com.sun.org.apache.xml.internal.security.transforms.InvalidTransformException,com.sun.org.apache.xml.internal.security.transforms.TransformationException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getTransformsOutput", "()Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"lambda$static$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)()>(&Reference::lambda$static$0))},
	{"setDigestValueElement", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(Reference::*)($bytes*)>(&Reference::setDigestValueElement))},
	{"setId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setType", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"typeIsReferenceToManifest", "()Z", nullptr, $PUBLIC},
	{"typeIsReferenceToObject", "()Z", nullptr, $PUBLIC},
	{"verify", "()Z", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.ReferenceNotInitializedException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{}
};

$InnerClassInfo _Reference_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.signature.Reference$2", nullptr, nullptr, 0},
	{"com.sun.org.apache.xml.internal.security.signature.Reference$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Reference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.Reference",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	nullptr,
	_Reference_FieldInfo_,
	_Reference_MethodInfo_,
	nullptr,
	nullptr,
	_Reference_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.signature.Reference$2,com.sun.org.apache.xml.internal.security.signature.Reference$2$1,com.sun.org.apache.xml.internal.security.signature.Reference$1"
};

$Object* allocate$Reference($Class* clazz) {
	return $of($alloc(Reference));
}


$String* Reference::OBJECT_URI = nullptr;

$String* Reference::MANIFEST_URI = nullptr;

bool Reference::useC14N11 = false;
$Logger* Reference::LOG = nullptr;
$Set* Reference::TRANSFORM_ALGORITHMS = nullptr;

void Reference::init$($Document* doc, $String* baseURI, $String* referenceURI, $Manifest* manifest, $Transforms* transforms, $String* messageDigestAlgorithm) {
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
	$set(this, baseURI, baseURI);
	$set(this, manifest, manifest);
	this->setURI(referenceURI);
	if (transforms != nullptr) {
		$set(this, transforms, transforms);
		appendSelf(static_cast<$ElementProxy*>(transforms));
		addReturnToSelf();
	}
	$var($Algorithm, digestAlgorithm, $new($Reference$1, this, $(getDocument()), messageDigestAlgorithm));
	$set(this, digestMethodElem, digestAlgorithm->getElement());
	appendSelf(static_cast<$Node*>(this->digestMethodElem));
	addReturnToSelf();
	$init($Constants);
	$set(this, digestValueElement, $XMLUtils::createElementInSignatureSpace($(getDocument()), $Constants::_TAG_DIGESTVALUE));
	appendSelf(static_cast<$Node*>(this->digestValueElement));
	addReturnToSelf();
}

void Reference::init$($Element* element, $String* baseURI, $Manifest* manifest) {
	Reference::init$(element, baseURI, manifest, true);
}

void Reference::init$($Element* element, $String* baseURI, $Manifest* manifest, bool secureValidation) {
	$SignatureElementProxy::init$(element, baseURI);
	this->secureValidation = secureValidation;
	$set(this, baseURI, baseURI);
	$var($Element, el, $XMLUtils::getNextElement($($nc(element)->getFirstChild())));
	$init($Constants);
	bool var$0 = el != nullptr && $nc($Constants::_TAG_TRANSFORMS)->equals($(el->getLocalName()));
	if (var$0 && $nc($Constants::SignatureSpecNS)->equals($(el->getNamespaceURI()))) {
		$set(this, transforms, $new($Transforms, el, this->baseURI));
		$nc(this->transforms)->setSecureValidation(secureValidation);
		if (secureValidation && $nc(this->transforms)->getLength() > Reference::MAXIMUM_TRANSFORM_COUNT) {
			$var($ObjectArray, exArgs, $new($ObjectArray, {
				$($of($Integer::valueOf($nc(this->transforms)->getLength()))),
				$($of($Integer::valueOf(Reference::MAXIMUM_TRANSFORM_COUNT)))
			}));
			$throwNew($XMLSecurityException, "signature.tooManyTransforms"_s, exArgs);
		}
		$assign(el, $XMLUtils::getNextElement($(el->getNextSibling())));
	}
	$set(this, digestMethodElem, el);
	bool var$1 = this->digestMethodElem == nullptr;
	if (!var$1) {
		bool var$2 = $nc($Constants::SignatureSpecNS)->equals($($nc(this->digestMethodElem)->getNamespaceURI()));
		var$1 = !(var$2 && $nc($Constants::_TAG_DIGESTMETHOD)->equals($($nc(this->digestMethodElem)->getLocalName())));
	}
	if (var$1) {
		$throwNew($XMLSecurityException, "signature.Reference.NoDigestMethod"_s);
	}
	$set(this, digestValueElement, $XMLUtils::getNextElement($($nc(this->digestMethodElem)->getNextSibling())));
	bool var$3 = this->digestValueElement == nullptr;
	if (!var$3) {
		bool var$4 = $nc($Constants::SignatureSpecNS)->equals($($nc(this->digestValueElement)->getNamespaceURI()));
		var$3 = !(var$4 && $nc($Constants::_TAG_DIGESTVALUE)->equals($($nc(this->digestValueElement)->getLocalName())));
	}
	if (var$3) {
		$throwNew($XMLSecurityException, "signature.Reference.NoDigestValue"_s);
	}
	$set(this, manifest, manifest);
}

$MessageDigestAlgorithm* Reference::getMessageDigestAlgorithm() {
	if (this->digestMethodElem == nullptr) {
		return nullptr;
	}
	$init($Constants);
	$var($String, uri, $nc(this->digestMethodElem)->getAttributeNS(nullptr, $Constants::_ATT_ALGORITHM));
	if ($nc(uri)->isEmpty()) {
		return nullptr;
	}
	$init($MessageDigestAlgorithm);
	if (this->secureValidation && $nc($MessageDigestAlgorithm::ALGO_ID_DIGEST_NOT_RECOMMENDED_MD5)->equals(uri)) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(uri)}));
		$throwNew($XMLSignatureException, "signature.signatureAlgorithm"_s, exArgs);
	}
	return $MessageDigestAlgorithm::getInstance($(getDocument()), uri);
}

void Reference::setURI($String* uri) {
	if (uri != nullptr) {
		$init($Constants);
		setLocalAttribute($Constants::_ATT_URI, uri);
	}
}

$String* Reference::getURI() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_URI);
}

void Reference::setId($String* id) {
	if (id != nullptr) {
		$init($Constants);
		setLocalIdAttribute($Constants::_ATT_ID, id);
	}
}

$String* Reference::getId() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ID);
}

void Reference::setType($String* type) {
	if (type != nullptr) {
		$init($Constants);
		setLocalAttribute($Constants::_ATT_TYPE, type);
	}
}

$String* Reference::getType() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_TYPE);
}

bool Reference::typeIsReferenceToObject() {
	return $nc(Reference::OBJECT_URI)->equals($(this->getType()));
}

bool Reference::typeIsReferenceToManifest() {
	return $nc(Reference::MANIFEST_URI)->equals($(this->getType()));
}

void Reference::setDigestValueElement($bytes* digestValue) {
	$var($Node, n, $nc(this->digestValueElement)->getFirstChild());
	while (n != nullptr) {
		$nc(this->digestValueElement)->removeChild(n);
		$assign(n, n->getNextSibling());
	}
	$var($String, base64codedValue, $XMLUtils::encodeToString(digestValue));
	$var($Text, t, createText(base64codedValue));
	$nc(this->digestValueElement)->appendChild(t);
}

void Reference::generateDigestValue() {
	this->setDigestValueElement($(this->calculateDigest(false)));
}

$XMLSignatureInput* Reference::getContentsBeforeTransformation() {
	try {
		$init($Constants);
		$var($Attr, uriAttr, $nc($(getElement()))->getAttributeNodeNS(nullptr, $Constants::_ATT_URI));
		$var($ResourceResolverContext, resolverContext, $new($ResourceResolverContext, uriAttr, this->baseURI, this->secureValidation, $($nc(this->manifest)->getResolverProperties())));
		return $ResourceResolver::resolve($($nc(this->manifest)->getPerManifestResolvers()), resolverContext);
	} catch ($ResourceResolverException&) {
		$var($ResourceResolverException, ex, $catch());
		$throwNew($ReferenceNotInitializedException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

$XMLSignatureInput* Reference::getContentsAfterTransformation($XMLSignatureInput* input, $OutputStream* os) {
	try {
		$var($Transforms, transforms, this->getTransforms());
		$var($XMLSignatureInput, output, nullptr);
		if (transforms != nullptr) {
			$assign(output, transforms->performTransforms(input, os));
			$set(this, transformsOutput, output);
		} else {
			$assign(output, input);
		}
		return output;
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

$XMLSignatureInput* Reference::getContentsAfterTransformation() {
	$var($XMLSignatureInput, input, this->getContentsBeforeTransformation());
	cacheDereferencedElement(input);
	return this->getContentsAfterTransformation(input, nullptr);
}

$XMLSignatureInput* Reference::getNodesetBeforeFirstCanonicalization() {
	try {
		$var($XMLSignatureInput, input, this->getContentsBeforeTransformation());
		cacheDereferencedElement(input);
		$var($XMLSignatureInput, output, input);
		$var($Transforms, transforms, this->getTransforms());
		if (transforms != nullptr) {
			for (int32_t i = 0; i < transforms->getLength(); ++i) {
				$var($Transform, t, transforms->item(i));
				$var($String, uri, $nc(t)->getURI());
				if ($nc(Reference::TRANSFORM_ALGORITHMS)->contains(uri)) {
					break;
				}
				$assign(output, t->performTransform(output, nullptr, this->secureValidation));
			}
			$nc(output)->setSourceURI($($nc(input)->getSourceURI()));
		}
		return output;
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSignatureException, ex);
	} catch ($XMLSecurityException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSignatureException, ex);
	}
	$shouldNotReachHere();
}

$String* Reference::getHTMLRepresentation() {
	try {
		$var($XMLSignatureInput, nodes, this->getNodesetBeforeFirstCanonicalization());
		$var($Transforms, transforms, this->getTransforms());
		$var($Transform, c14nTransform, nullptr);
		if (transforms != nullptr) {
			for (int32_t i = 0; i < transforms->getLength(); ++i) {
				$var($Transform, t, transforms->item(i));
				$var($String, uri, $nc(t)->getURI());
				bool var$0 = $nc(uri)->equals($Transforms::TRANSFORM_C14N_EXCL_OMIT_COMMENTS);
				if (var$0 || $nc(uri)->equals($Transforms::TRANSFORM_C14N_EXCL_WITH_COMMENTS)) {
					$assign(c14nTransform, t);
					break;
				}
			}
		}
		$var($Set, inclusiveNamespaces, $new($HashSet));
		$init($InclusiveNamespaces);
		if (c14nTransform != nullptr && c14nTransform->length($InclusiveNamespaces::ExclusiveCanonicalizationNamespace, $InclusiveNamespaces::_TAG_EC_INCLUSIVENAMESPACES) == 1) {
			$var($Element, var$1, $XMLUtils::selectNode($($nc($(c14nTransform->getElement()))->getFirstChild()), $InclusiveNamespaces::ExclusiveCanonicalizationNamespace, $InclusiveNamespaces::_TAG_EC_INCLUSIVENAMESPACES, 0));
			$var($InclusiveNamespaces, in, $new($InclusiveNamespaces, var$1, $(this->getBaseURI())));
			$assign(inclusiveNamespaces, $InclusiveNamespaces::prefixStr2Set($(in->getInclusiveNamespaces())));
		}
		return $nc(nodes)->getHTMLRepresentation(inclusiveNamespaces);
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

$XMLSignatureInput* Reference::getTransformsOutput() {
	return this->transformsOutput;
}

$ReferenceData* Reference::getReferenceData() {
	return this->referenceData;
}

$XMLSignatureInput* Reference::dereferenceURIandPerformTransforms($OutputStream* os) {
	try {
		$var($XMLSignatureInput, input, this->getContentsBeforeTransformation());
		cacheDereferencedElement(input);
		$var($XMLSignatureInput, output, this->getContentsAfterTransformation(input, os));
		$set(this, transformsOutput, output);
		return output;
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$throwNew($ReferenceNotInitializedException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

void Reference::cacheDereferencedElement($XMLSignatureInput* input) {
	if ($nc(input)->isNodeSet()) {
		try {
			$var($Set, s, input->getNodeSet());
			$set(this, referenceData, $new($Reference$2, this, s));
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$nc(Reference::LOG)->warn($$str({"cannot cache dereferenced data: "_s, e}));
		}
	} else if (input->isElement()) {
		$var($Node, var$0, input->getSubNode());
		$set(this, referenceData, $new($ReferenceSubTreeData, var$0, input->isExcludeComments()));
	} else {
		bool var$2 = input->isOctetStream();
		if (var$2 || input->isByteArray()) {
			try {
				$var($InputStream, var$3, input->getOctetStream());
				$var($String, var$4, input->getSourceURI());
				$set(this, referenceData, $new($ReferenceOctetStreamData, var$3, var$4, $(input->getMIMEType())));
			} catch ($IOException&) {
				$var($IOException, ioe, $catch());
				$nc(Reference::LOG)->warn($$str({"cannot cache dereferenced data: "_s, ioe}));
			}
		}
	}
}

$Transforms* Reference::getTransforms() {
	return this->transforms;
}

$bytes* Reference::getReferencedBytes() {
	try {
		$var($XMLSignatureInput, output, this->dereferenceURIandPerformTransforms(nullptr));
		return $nc(output)->getBytes();
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($ReferenceNotInitializedException, ex);
	} catch ($CanonicalizationException&) {
		$var($Exception, ex, $catch());
		$throwNew($ReferenceNotInitializedException, ex);
	}
	$shouldNotReachHere();
}

$bytes* Reference::calculateDigest(bool validating) {
	$var($XMLSignatureInput, input, this->getContentsBeforeTransformation());
	if ($nc(input)->isPreCalculatedDigest()) {
		return getPreCalculatedDigest(input);
	}
	cacheDereferencedElement(input);
	$var($MessageDigestAlgorithm, mda, this->getMessageDigestAlgorithm());
	$nc(mda)->reset();
	$var($XMLSignatureInput, output, nullptr);
	{
		$var($Throwable, var$0, nullptr);
		$var($bytes, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$var($DigesterOutputStream, diOs, $new($DigesterOutputStream, mda));
				{
					$var($Throwable, var$3, nullptr);
					$var($bytes, var$5, nullptr);
					bool return$4 = false;
					try {
						try {
							$var($OutputStream, os, $new($UnsyncBufferedOutputStream, diOs));
							{
								$var($Throwable, var$6, nullptr);
								$var($bytes, var$8, nullptr);
								bool return$7 = false;
								try {
									try {
										$assign(output, this->getContentsAfterTransformation(input, os));
										$set(this, transformsOutput, output);
										bool var$9 = Reference::useC14N11 && !validating && !$nc(output)->isOutputStreamSet();
										if (var$9 && !output->isOctetStream()) {
											if (this->transforms == nullptr) {
												$set(this, transforms, $new($Transforms, $(getDocument())));
												$nc(this->transforms)->setSecureValidation(this->secureValidation);
												$nc($(getElement()))->insertBefore($($nc(this->transforms)->getElement()), this->digestMethodElem);
											}
											$init($Transforms);
											$nc(this->transforms)->addTransform($Transforms::TRANSFORM_C14N11_OMIT_COMMENTS);
											output->updateOutputStream(os, true);
										} else {
											output->updateOutputStream(os);
										}
										os->flush();
										$assign(var$8, diOs->getDigestValue());
										return$7 = true;
										goto $finally2;
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
									$assign(var$6, $catch());
								} $finally2: {
									os->close();
								}
								if (var$6 != nullptr) {
									$throw(var$6);
								}
								if (return$7) {
									$assign(var$5, var$8);
									return$4 = true;
									goto $finally1;
								}
							}
						} catch ($Throwable&) {
							$var($Throwable, t$, $catch());
							try {
								diOs->close();
							} catch ($Throwable&) {
								$var($Throwable, x2, $catch());
								t$->addSuppressed(x2);
							}
							$throw(t$);
						}
					} catch ($Throwable&) {
						$assign(var$3, $catch());
					} $finally1: {
						diOs->close();
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
			} catch ($XMLSecurityException&) {
				$var($Exception, ex, $catch());
				$throwNew($ReferenceNotInitializedException, ex);
			} catch ($IOException&) {
				$var($Exception, ex, $catch());
				$throwNew($ReferenceNotInitializedException, ex);
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			try {
				if (output != nullptr && output->getOctetStreamReal() != nullptr) {
					$nc($(output->getOctetStreamReal()))->close();
				}
			} catch ($IOException&) {
				$var($IOException, ex, $catch());
				$throwNew($ReferenceNotInitializedException, static_cast<$Exception*>(ex));
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

$bytes* Reference::getPreCalculatedDigest($XMLSignatureInput* input) {
	$nc(Reference::LOG)->debug("Verifying element with pre-calculated digest"_s);
	$var($String, preCalculatedDigest, input->getPreCalculatedDigest());
	return $XMLUtils::decode(preCalculatedDigest);
}

$bytes* Reference::getDigestValue() {
	if (this->digestValueElement == nullptr) {
			$init($Constants);
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of($Constants::_TAG_DIGESTVALUE),
			$of($Constants::SignatureSpecNS)
		}));
		$throwNew($XMLSecurityException, "signature.Verification.NoSignatureElement"_s, exArgs);
	}
	$var($String, content, $XMLUtils::getFullTextChildrenFromNode(this->digestValueElement));
	return $XMLUtils::decode(content);
}

bool Reference::verify() {
	$var($bytes, elemDig, this->getDigestValue());
	$var($bytes, calcDig, this->calculateDigest(true));
	bool equal = $MessageDigestAlgorithm::isEqual(elemDig, calcDig);
	if (!equal) {
		$nc(Reference::LOG)->warn($$str({"Verification failed for URI \""_s, $(this->getURI()), "\""_s}));
		$nc(Reference::LOG)->warn($$str({"Expected Digest: "_s, $($XMLUtils::encodeToString(elemDig))}));
		$nc(Reference::LOG)->warn($$str({"Actual Digest: "_s, $($XMLUtils::encodeToString(calcDig))}));
	} else {
		$nc(Reference::LOG)->debug("Verification successful for URI \"{}\""_s, $$new($ObjectArray, {$($of(this->getURI()))}));
	}
	return equal;
}

$String* Reference::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_REFERENCE;
}

$Boolean* Reference::lambda$static$0() {
	$init(Reference);
	return $Boolean::valueOf($Boolean::getBoolean("com.sun.org.apache.xml.internal.security.useC14N11"_s));
}

void clinit$Reference($Class* class$) {
	$init($Constants);
	$assignStatic(Reference::OBJECT_URI, $str({$Constants::SignatureSpecNS, $Constants::_TAG_OBJECT}));
	$assignStatic(Reference::MANIFEST_URI, $str({$Constants::SignatureSpecNS, $Constants::_TAG_MANIFEST}));
	$beforeCallerSensitive();
	Reference::useC14N11 = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Reference$$Lambda$lambda$static$0)))))))->booleanValue();
	$assignStatic(Reference::LOG, $LoggerFactory::getLogger(Reference::class$));
	{
		$var($Set, algorithms, $new($HashSet));
		$init($Transforms);
		algorithms->add($Transforms::TRANSFORM_C14N_EXCL_OMIT_COMMENTS);
		algorithms->add($Transforms::TRANSFORM_C14N_EXCL_WITH_COMMENTS);
		algorithms->add($Transforms::TRANSFORM_C14N_OMIT_COMMENTS);
		algorithms->add($Transforms::TRANSFORM_C14N_WITH_COMMENTS);
		algorithms->add($Transforms::TRANSFORM_C14N11_OMIT_COMMENTS);
		algorithms->add($Transforms::TRANSFORM_C14N11_WITH_COMMENTS);
		$assignStatic(Reference::TRANSFORM_ALGORITHMS, $Collections::unmodifiableSet(algorithms));
	}
}

Reference::Reference() {
}

$Class* Reference::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Reference$$Lambda$lambda$static$0::classInfo$.name)) {
			return Reference$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(Reference, name, initialize, &_Reference_ClassInfo_, clinit$Reference, allocate$Reference);
	return class$;
}

$Class* Reference::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com