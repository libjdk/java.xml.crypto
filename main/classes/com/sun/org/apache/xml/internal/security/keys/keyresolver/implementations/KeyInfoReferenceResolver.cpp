#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/KeyInfoReferenceResolver.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/KeyInfo.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/KeyInfoReference.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolver.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <javax/crypto/SecretKey.h>
#include <javax/xml/namespace/QName.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef LOG
#undef _TAG_KEYINFO
#undef _TAG_KEYINFOREFERENCE

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $KeyInfo = ::com::sun::org::apache::xml::internal::security::keys::KeyInfo;
using $KeyInfoReference = ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoReference;
using $KeyResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi;
using $StorageResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ResourceResolver = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolver;
using $ResourceResolverContext = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $SecretKey = ::javax::crypto::SecretKey;
using $QName = ::javax::xml::namespace$::QName;
using $Attr = ::org::w3c::dom::Attr;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace keyresolver {
									namespace implementations {

$FieldInfo _KeyInfoReferenceResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyInfoReferenceResolver, LOG)},
	{}
};

$MethodInfo _KeyInfoReferenceResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyInfoReferenceResolver::*)()>(&KeyInfoReferenceResolver::init$))},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"obtainReferenceElement", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Z)Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $method(static_cast<$Element*(KeyInfoReferenceResolver::*)($XMLSignatureInput*,bool)>(&KeyInfoReferenceResolver::obtainReferenceElement)), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,javax.xml.parsers.ParserConfigurationException,java.io.IOException,org.xml.sax.SAXException,com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"resolveInput", "(Lorg/w3c/dom/Attr;Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PRIVATE, $method(static_cast<$XMLSignatureInput*(KeyInfoReferenceResolver::*)($Attr*,$String*,bool)>(&KeyInfoReferenceResolver::resolveInput)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"resolveReferentKeyInfo", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Lcom/sun/org/apache/xml/internal/security/keys/KeyInfo;", nullptr, $PRIVATE, $method(static_cast<$KeyInfo*(KeyInfoReferenceResolver::*)($Element*,$String*,$StorageResolver*,bool)>(&KeyInfoReferenceResolver::resolveReferentKeyInfo)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"validateReference", "(Lorg/w3c/dom/Element;Z)V", nullptr, $PRIVATE, $method(static_cast<void(KeyInfoReferenceResolver::*)($Element*,bool)>(&KeyInfoReferenceResolver::validateReference)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{}
};

$ClassInfo _KeyInfoReferenceResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.KeyInfoReferenceResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_KeyInfoReferenceResolver_FieldInfo_,
	_KeyInfoReferenceResolver_MethodInfo_
};

$Object* allocate$KeyInfoReferenceResolver($Class* clazz) {
	return $of($alloc(KeyInfoReferenceResolver));
}

$Logger* KeyInfoReferenceResolver::LOG = nullptr;

void KeyInfoReferenceResolver::init$() {
	$KeyResolverSpi::init$();
}

bool KeyInfoReferenceResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$init($Constants);
	return $XMLUtils::elementIsInSignature11Space(element, $Constants::_TAG_KEYINFOREFERENCE);
}

$PublicKey* KeyInfoReferenceResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	try {
		$var($KeyInfo, referent, resolveReferentKeyInfo(element, baseURI, storage, secureValidation));
		if (referent != nullptr) {
			return referent->getPublicKey();
		}
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, e, $catch());
		$nc(KeyInfoReferenceResolver::LOG)->debug("XMLSecurityException"_s, static_cast<$Throwable*>(e));
	}
	return nullptr;
}

$X509Certificate* KeyInfoReferenceResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	try {
		$var($KeyInfo, referent, resolveReferentKeyInfo(element, baseURI, storage, secureValidation));
		if (referent != nullptr) {
			return referent->getX509Certificate();
		}
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, e, $catch());
		$nc(KeyInfoReferenceResolver::LOG)->debug("XMLSecurityException"_s, static_cast<$Throwable*>(e));
	}
	return nullptr;
}

$SecretKey* KeyInfoReferenceResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	try {
		$var($KeyInfo, referent, resolveReferentKeyInfo(element, baseURI, storage, secureValidation));
		if (referent != nullptr) {
			return referent->getSecretKey();
		}
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, e, $catch());
		$nc(KeyInfoReferenceResolver::LOG)->debug("XMLSecurityException"_s, static_cast<$Throwable*>(e));
	}
	return nullptr;
}

$PrivateKey* KeyInfoReferenceResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	try {
		$var($KeyInfo, referent, resolveReferentKeyInfo(element, baseURI, storage, secureValidation));
		if (referent != nullptr) {
			return referent->getPrivateKey();
		}
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, e, $catch());
		$nc(KeyInfoReferenceResolver::LOG)->debug("XMLSecurityException"_s, static_cast<$Throwable*>(e));
	}
	return nullptr;
}

$KeyInfo* KeyInfoReferenceResolver::resolveReferentKeyInfo($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$var($KeyInfoReference, reference, $new($KeyInfoReference, element, baseURI));
	$var($Attr, uriAttr, reference->getURIAttr());
	$var($XMLSignatureInput, resource, resolveInput(uriAttr, baseURI, secureValidation));
	$var($Element, referentElement, nullptr);
	try {
		$assign(referentElement, obtainReferenceElement(resource, secureValidation));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$nc(KeyInfoReferenceResolver::LOG)->debug("XMLSecurityException"_s, static_cast<$Throwable*>(e));
		return nullptr;
	}
	if (referentElement == nullptr) {
		$nc(KeyInfoReferenceResolver::LOG)->debug("De-reference of KeyInfoReference URI returned null: {}"_s, $$new($ObjectArray, {$($of($nc(uriAttr)->getValue()))}));
		return nullptr;
	}
	validateReference(referentElement, secureValidation);
	$var($KeyInfo, referent, $new($KeyInfo, referentElement, baseURI));
	referent->addStorageResolver(storage);
	return referent;
}

void KeyInfoReferenceResolver::validateReference($Element* referentElement, bool secureValidation) {
	$init($Constants);
	if (!$XMLUtils::elementIsInSignatureSpace(referentElement, $Constants::_TAG_KEYINFO)) {
		$var($String, var$0, $nc(referentElement)->getNamespaceURI());
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of($$new($QName, var$0, $(referentElement->getLocalName())))}));
		$throwNew($XMLSecurityException, "KeyInfoReferenceResolver.InvalidReferentElement.WrongType"_s, exArgs);
	}
	$var($KeyInfo, referent, $new($KeyInfo, referentElement, ""_s));
	if (referent->containsKeyInfoReference()) {
		if (secureValidation) {
			$throwNew($XMLSecurityException, "KeyInfoReferenceResolver.InvalidReferentElement.ReferenceWithSecure"_s);
		} else {
			$throwNew($XMLSecurityException, "KeyInfoReferenceResolver.InvalidReferentElement.ReferenceWithoutSecure"_s);
		}
	}
}

$XMLSignatureInput* KeyInfoReferenceResolver::resolveInput($Attr* uri, $String* baseURI, bool secureValidation) {
	$var($ResourceResolverContext, resContext, $new($ResourceResolverContext, uri, baseURI, secureValidation));
	return $ResourceResolver::resolve(resContext);
}

$Element* KeyInfoReferenceResolver::obtainReferenceElement($XMLSignatureInput* resource, bool secureValidation) {
	$var($Element, e, nullptr);
	if ($nc(resource)->isElement()) {
		$assign(e, $cast($Element, resource->getSubNode()));
	} else if (resource->isNodeSet()) {
		$nc(KeyInfoReferenceResolver::LOG)->debug("De-reference of KeyInfoReference returned an unsupported NodeSet"_s);
		return nullptr;
	} else {
		$var($bytes, inputBytes, resource->getBytes());
		$assign(e, getDocFromBytes(inputBytes, secureValidation));
	}
	return e;
}

void clinit$KeyInfoReferenceResolver($Class* class$) {
	$assignStatic(KeyInfoReferenceResolver::LOG, $LoggerFactory::getLogger(KeyInfoReferenceResolver::class$));
}

KeyInfoReferenceResolver::KeyInfoReferenceResolver() {
}

$Class* KeyInfoReferenceResolver::load$($String* name, bool initialize) {
	$loadClass(KeyInfoReferenceResolver, name, initialize, &_KeyInfoReferenceResolver_ClassInfo_, clinit$KeyInfoReferenceResolver, allocate$KeyInfoReferenceResolver);
	return class$;
}

$Class* KeyInfoReferenceResolver::class$ = nullptr;

									} // implementations
								} // keyresolver
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com