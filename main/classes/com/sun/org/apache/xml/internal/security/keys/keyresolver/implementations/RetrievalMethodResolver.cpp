#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/RetrievalMethodResolver.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/RetrievalMethod.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Certificate.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolver.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/CertificateFactory.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Set.h>
#include <javax/crypto/SecretKey.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef JCA_CERT_ID
#undef LOG
#undef TYPE_RAWX509
#undef _TAG_RETRIEVALMETHOD

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $RetrievalMethod = ::com::sun::org::apache::xml::internal::security::keys::content::RetrievalMethod;
using $XMLX509Certificate = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Certificate;
using $KeyResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolver;
using $KeyResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi;
using $StorageResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ResourceResolver = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolver;
using $ResourceResolverContext = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateException = ::java::security::cert::CertificateException;
using $CertificateFactory = ::java::security::cert::CertificateFactory;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Set = ::java::util::Set;
using $SecretKey = ::javax::crypto::SecretKey;
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

$FieldInfo _RetrievalMethodResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(RetrievalMethodResolver, LOG)},
	{}
};

$MethodInfo _RetrievalMethodResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(RetrievalMethodResolver::*)()>(&RetrievalMethodResolver::init$))},
	{"engineCanResolve", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)Z", nullptr, $PROTECTED},
	{"engineResolvePrivateKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PrivateKey;", nullptr, $PROTECTED},
	{"engineResolvePublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PROTECTED},
	{"engineResolveSecretKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljavax/crypto/SecretKey;", nullptr, $PUBLIC},
	{"engineResolveX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PROTECTED},
	{"getDocumentElement", "(Ljava/util/Set;)Lorg/w3c/dom/Element;", "(Ljava/util/Set<Lorg/w3c/dom/Node;>;)Lorg/w3c/dom/Element;", $PRIVATE | $STATIC, $method(static_cast<$Element*(*)($Set*)>(&RetrievalMethodResolver::getDocumentElement))},
	{"getRawCertificate", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;)Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$X509Certificate*(*)($XMLSignatureInput*)>(&RetrievalMethodResolver::getRawCertificate)), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,java.io.IOException,java.security.cert.CertificateException"},
	{"obtainReferenceElement", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Z)Lorg/w3c/dom/Element;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Element*(*)($XMLSignatureInput*,bool)>(&RetrievalMethodResolver::obtainReferenceElement)), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,com.sun.org.apache.xml.internal.security.parser.XMLParserException,java.io.IOException,com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"resolveCertificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$X509Certificate*(*)($Element*,$String*,$StorageResolver*,bool)>(&RetrievalMethodResolver::resolveCertificate)), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"resolveInput", "(Lcom/sun/org/apache/xml/internal/security/keys/content/RetrievalMethod;Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$XMLSignatureInput*(*)($RetrievalMethod*,$String*,bool)>(&RetrievalMethodResolver::resolveInput)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"resolveKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$PublicKey*(*)($Element*,$String*,$StorageResolver*,bool)>(&RetrievalMethodResolver::resolveKey)), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{}
};

$ClassInfo _RetrievalMethodResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.RetrievalMethodResolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi",
	nullptr,
	_RetrievalMethodResolver_FieldInfo_,
	_RetrievalMethodResolver_MethodInfo_
};

$Object* allocate$RetrievalMethodResolver($Class* clazz) {
	return $of($alloc(RetrievalMethodResolver));
}

$Logger* RetrievalMethodResolver::LOG = nullptr;

void RetrievalMethodResolver::init$() {
	$KeyResolverSpi::init$();
}

bool RetrievalMethodResolver::engineCanResolve($Element* element, $String* baseURI, $StorageResolver* storage) {
	$init($Constants);
	return $XMLUtils::elementIsInSignatureSpace(element, $Constants::_TAG_RETRIEVALMETHOD);
}

$PublicKey* RetrievalMethodResolver::engineResolvePublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	try {
		$var($RetrievalMethod, rm, $new($RetrievalMethod, element, baseURI));
		$var($String, type, rm->getType());
		$var($XMLSignatureInput, resource, resolveInput(rm, baseURI, secureValidation));
		if ($nc($RetrievalMethod::TYPE_RAWX509)->equals(type)) {
			$var($X509Certificate, cert, getRawCertificate(resource));
			if (cert != nullptr) {
				return cert->getPublicKey();
			}
			return nullptr;
		}
		$var($Element, e, obtainReferenceElement(resource, secureValidation));
		$init($Constants);
		if ($XMLUtils::elementIsInSignatureSpace(e, $Constants::_TAG_RETRIEVALMETHOD)) {
			if (secureValidation) {
				if ($nc(RetrievalMethodResolver::LOG)->isDebugEnabled()) {
					$var($String, error, "Error: It is forbidden to have one RetrievalMethod point to another with secure validation"_s);
					$nc(RetrievalMethodResolver::LOG)->debug(error);
				}
				return nullptr;
			}
			$var($RetrievalMethod, rm2, $new($RetrievalMethod, e, baseURI));
			$var($XMLSignatureInput, resource2, resolveInput(rm2, baseURI, secureValidation));
			$var($Element, e2, obtainReferenceElement(resource2, secureValidation));
			if (e2 == element) {
				$nc(RetrievalMethodResolver::LOG)->debug("Error: Can\'t have RetrievalMethods pointing to each other"_s);
				return nullptr;
			}
		}
		return resolveKey(e, baseURI, storage, secureValidation);
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$nc(RetrievalMethodResolver::LOG)->debug("XMLSecurityException"_s, static_cast<$Throwable*>(ex));
	} catch ($CertificateException&) {
		$var($CertificateException, ex, $catch());
		$nc(RetrievalMethodResolver::LOG)->debug("CertificateException"_s, static_cast<$Throwable*>(ex));
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		$nc(RetrievalMethodResolver::LOG)->debug("IOException"_s, static_cast<$Throwable*>(ex));
	}
	return nullptr;
}

$X509Certificate* RetrievalMethodResolver::engineResolveX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	try {
		$var($RetrievalMethod, rm, $new($RetrievalMethod, element, baseURI));
		$var($String, type, rm->getType());
		$var($XMLSignatureInput, resource, resolveInput(rm, baseURI, secureValidation));
		if ($nc($RetrievalMethod::TYPE_RAWX509)->equals(type)) {
			return getRawCertificate(resource);
		}
		$var($Element, e, obtainReferenceElement(resource, secureValidation));
		$init($Constants);
		if ($XMLUtils::elementIsInSignatureSpace(e, $Constants::_TAG_RETRIEVALMETHOD)) {
			if (secureValidation) {
				if ($nc(RetrievalMethodResolver::LOG)->isDebugEnabled()) {
					$var($String, error, "Error: It is forbidden to have one RetrievalMethod point to another with secure validation"_s);
					$nc(RetrievalMethodResolver::LOG)->debug(error);
				}
				return nullptr;
			}
			$var($RetrievalMethod, rm2, $new($RetrievalMethod, e, baseURI));
			$var($XMLSignatureInput, resource2, resolveInput(rm2, baseURI, secureValidation));
			$var($Element, e2, obtainReferenceElement(resource2, secureValidation));
			if (e2 == element) {
				$nc(RetrievalMethodResolver::LOG)->debug("Error: Can\'t have RetrievalMethods pointing to each other"_s);
				return nullptr;
			}
		}
		return resolveCertificate(e, baseURI, storage, secureValidation);
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$nc(RetrievalMethodResolver::LOG)->debug("XMLSecurityException"_s, static_cast<$Throwable*>(ex));
	} catch ($CertificateException&) {
		$var($CertificateException, ex, $catch());
		$nc(RetrievalMethodResolver::LOG)->debug("CertificateException"_s, static_cast<$Throwable*>(ex));
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		$nc(RetrievalMethodResolver::LOG)->debug("IOException"_s, static_cast<$Throwable*>(ex));
	}
	return nullptr;
}

$X509Certificate* RetrievalMethodResolver::resolveCertificate($Element* e, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$init(RetrievalMethodResolver);
	if (e != nullptr) {
		if ($nc(RetrievalMethodResolver::LOG)->isDebugEnabled()) {
			$var($String, var$1, $$str({"Now we have a {"_s, $(e->getNamespaceURI()), "}"_s}));
			$var($String, var$0, $$concat(var$1, $(e->getLocalName())));
			$nc(RetrievalMethodResolver::LOG)->debug($$concat(var$0, " Element"));
		}
		return $KeyResolver::getX509Certificate(e, baseURI, storage, secureValidation);
	}
	return nullptr;
}

$PublicKey* RetrievalMethodResolver::resolveKey($Element* e, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$init(RetrievalMethodResolver);
	if (e != nullptr) {
		if ($nc(RetrievalMethodResolver::LOG)->isDebugEnabled()) {
			$var($String, var$1, $$str({"Now we have a {"_s, $(e->getNamespaceURI()), "}"_s}));
			$var($String, var$0, $$concat(var$1, $(e->getLocalName())));
			$nc(RetrievalMethodResolver::LOG)->debug($$concat(var$0, " Element"));
		}
		return $KeyResolver::getPublicKey(e, baseURI, storage, secureValidation);
	}
	return nullptr;
}

$Element* RetrievalMethodResolver::obtainReferenceElement($XMLSignatureInput* resource, bool secureValidation) {
	$init(RetrievalMethodResolver);
	$var($Element, e, nullptr);
	if ($nc(resource)->isElement()) {
		$assign(e, $cast($Element, resource->getSubNode()));
	} else if (resource->isNodeSet()) {
		$assign(e, getDocumentElement($(resource->getNodeSet())));
	} else {
		$var($bytes, inputBytes, resource->getBytes());
		$assign(e, getDocFromBytes(inputBytes, secureValidation));
		$nc(RetrievalMethodResolver::LOG)->debug("we have to parse {} bytes"_s, $$new($ObjectArray, {$($of($Integer::valueOf($nc(inputBytes)->length)))}));
	}
	return e;
}

$X509Certificate* RetrievalMethodResolver::getRawCertificate($XMLSignatureInput* resource) {
	$init(RetrievalMethodResolver);
	$var($bytes, inputBytes, $nc(resource)->getBytes());
	$init($XMLX509Certificate);
	$var($CertificateFactory, certFact, $CertificateFactory::getInstance($XMLX509Certificate::JCA_CERT_ID));
	{
		$var($InputStream, is, $new($ByteArrayInputStream, inputBytes));
		{
			$var($Throwable, var$0, nullptr);
			$var($X509Certificate, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$assign(var$2, $cast($X509Certificate, $nc(certFact)->generateCertificate(is)));
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						is->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				is->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$XMLSignatureInput* RetrievalMethodResolver::resolveInput($RetrievalMethod* rm, $String* baseURI, bool secureValidation) {
	$init(RetrievalMethodResolver);
	$var($Attr, uri, $nc(rm)->getURIAttr());
	$var($Transforms, transforms, rm->getTransforms());
	$var($ResourceResolverContext, resContext, $new($ResourceResolverContext, uri, baseURI, secureValidation));
	$var($XMLSignatureInput, resource, $ResourceResolver::resolve(resContext));
	if (transforms != nullptr) {
		$nc(RetrievalMethodResolver::LOG)->debug("We have Transforms"_s);
		$assign(resource, transforms->performTransforms(resource));
	}
	return resource;
}

$SecretKey* RetrievalMethodResolver::engineResolveSecretKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$PrivateKey* RetrievalMethodResolver::engineResolvePrivateKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	return nullptr;
}

$Element* RetrievalMethodResolver::getDocumentElement($Set* set) {
	$init(RetrievalMethodResolver);
	$var($Iterator, it, $nc(set)->iterator());
	$var($Element, e, nullptr);
	while ($nc(it)->hasNext()) {
		$var($Node, currentNode, $cast($Node, it->next()));
		if (currentNode != nullptr && $Node::ELEMENT_NODE == currentNode->getNodeType()) {
			$assign(e, $cast($Element, currentNode));
			break;
		}
	}
	$var($List, parents, $new($ArrayList));
	while (e != nullptr) {
		parents->add(e);
		$var($Node, n, e->getParentNode());
		if (n == nullptr || $Node::ELEMENT_NODE != $nc(n)->getNodeType()) {
			break;
		}
		$assign(e, $cast($Element, n));
	}
	$var($ListIterator, it2, parents->listIterator(parents->size() - 1));
	$var($Element, ele, nullptr);
	while ($nc(it2)->hasPrevious()) {
		$assign(ele, $cast($Element, it2->previous()));
		if (set->contains(ele)) {
			return ele;
		}
	}
	return nullptr;
}

void clinit$RetrievalMethodResolver($Class* class$) {
	$assignStatic(RetrievalMethodResolver::LOG, $LoggerFactory::getLogger(RetrievalMethodResolver::class$));
}

RetrievalMethodResolver::RetrievalMethodResolver() {
}

$Class* RetrievalMethodResolver::load$($String* name, bool initialize) {
	$loadClass(RetrievalMethodResolver, name, initialize, &_RetrievalMethodResolver_ClassInfo_, clinit$RetrievalMethodResolver, allocate$RetrievalMethodResolver);
	return class$;
}

$Class* RetrievalMethodResolver::class$ = nullptr;

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