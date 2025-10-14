#include <com/sun/org/apache/xml/internal/security/signature/SignedInfo.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/signature/Manifest.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignature.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/params/InclusiveNamespaces.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/SecretKey.h>
#include <javax/crypto/spec/SecretKeySpec.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ALGO_ID_C14N_OMIT_COMMENTS
#undef ALGO_ID_SIGNATURE_DSA
#undef _ATT_ALGORITHM
#undef _TAG_CANONICALIZATIONMETHOD
#undef _TAG_SIGNATUREMETHOD
#undef _TAG_SIGNEDINFO

using $SignatureAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithm;
using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $Manifest = ::com::sun::org::apache::xml::internal::security::signature::Manifest;
using $XMLSignature = ::com::sun::org::apache::xml::internal::security::signature::XMLSignature;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $InclusiveNamespaces = ::com::sun::org::apache::xml::internal::security::transforms::params::InclusiveNamespaces;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Provider = ::java::security::Provider;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SecretKey = ::javax::crypto::SecretKey;
using $SecretKeySpec = ::javax::crypto::spec::SecretKeySpec;
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

$FieldInfo _SignedInfo_FieldInfo_[] = {
	{"signatureAlgorithm", "Lcom/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm;", nullptr, $PRIVATE | $FINAL, $field(SignedInfo, signatureAlgorithm)},
	{"c14nizedBytes", "[B", nullptr, $PRIVATE, $field(SignedInfo, c14nizedBytes)},
	{"c14nMethod", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(SignedInfo, c14nMethod)},
	{"signatureMethod", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(SignedInfo, signatureMethod)},
	{}
};

$MethodInfo _SignedInfo_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(SignedInfo::*)($Document*)>(&SignedInfo::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SignedInfo::*)($Document*,$String*,$String*)>(&SignedInfo::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignedInfo::*)($Document*,$String*,$String*,$Provider*)>(&SignedInfo::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SignedInfo::*)($Document*,$String*,int32_t,$String*)>(&SignedInfo::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;ILjava/lang/String;Ljava/security/Provider;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, $method(static_cast<void(SignedInfo::*)($Document*,$String*,int32_t,$String*,$Provider*,$AlgorithmParameterSpec*)>(&SignedInfo::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Lorg/w3c/dom/Element;Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(SignedInfo::*)($Document*,$Element*,$Element*)>(&SignedInfo::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Lorg/w3c/dom/Element;Lorg/w3c/dom/Element;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignedInfo::*)($Document*,$Element*,$Element*,$Provider*)>(&SignedInfo::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SignedInfo::*)($Element*,$String*)>(&SignedInfo::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(SignedInfo::*)($Element*,$String*,bool)>(&SignedInfo::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;ZLjava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignedInfo::*)($Element*,$String*,bool,$Provider*)>(&SignedInfo::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"createSecretKey", "([B)Ljavax/crypto/SecretKey;", nullptr, $PUBLIC},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCanonicalizationMethodURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getCanonicalizedOctetStream", "()[B", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,com.sun.org.apache.xml.internal.security.c14n.InvalidCanonicalizerException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException,java.io.IOException"},
	{"getInclusiveNamespaces", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSignatureAlgorithm", "()Lcom/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm;", nullptr, $PUBLIC},
	{"getSignatureMethodElement", "()Lorg/w3c/dom/Element;", nullptr, $PUBLIC},
	{"getSignatureMethodURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"signInOctetStream", "(Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,com.sun.org.apache.xml.internal.security.c14n.InvalidCanonicalizerException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"verify", "()Z", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.MissingResourceFailureException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"verify", "(Z)Z", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.MissingResourceFailureException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{}
};

$ClassInfo _SignedInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.SignedInfo",
	"com.sun.org.apache.xml.internal.security.signature.Manifest",
	nullptr,
	_SignedInfo_FieldInfo_,
	_SignedInfo_MethodInfo_
};

$Object* allocate$SignedInfo($Class* clazz) {
	return $of($alloc(SignedInfo));
}

void SignedInfo::init$($Document* doc) {
	$init($XMLSignature);
	$init($Canonicalizer);
	SignedInfo::init$(doc, $XMLSignature::ALGO_ID_SIGNATURE_DSA, $Canonicalizer::ALGO_ID_C14N_OMIT_COMMENTS);
}

void SignedInfo::init$($Document* doc, $String* signatureMethodURI, $String* canonicalizationMethodURI) {
	SignedInfo::init$(doc, signatureMethodURI, 0, canonicalizationMethodURI, nullptr, nullptr);
}

void SignedInfo::init$($Document* doc, $String* signatureMethodURI, $String* canonicalizationMethodURI, $Provider* provider) {
	SignedInfo::init$(doc, signatureMethodURI, 0, canonicalizationMethodURI, provider, nullptr);
}

void SignedInfo::init$($Document* doc, $String* signatureMethodURI, int32_t hMACOutputLength, $String* canonicalizationMethodURI) {
	SignedInfo::init$(doc, signatureMethodURI, hMACOutputLength, canonicalizationMethodURI, nullptr, nullptr);
}

void SignedInfo::init$($Document* doc, $String* signatureMethodURI, int32_t hMACOutputLength, $String* canonicalizationMethodURI, $Provider* provider, $AlgorithmParameterSpec* spec) {
	$Manifest::init$(doc);
	$init($Constants);
	$set(this, c14nMethod, $XMLUtils::createElementInSignatureSpace($(getDocument()), $Constants::_TAG_CANONICALIZATIONMETHOD));
	$nc(this->c14nMethod)->setAttributeNS(nullptr, $Constants::_ATT_ALGORITHM, canonicalizationMethodURI);
	appendSelf(static_cast<$Node*>(this->c14nMethod));
	addReturnToSelf();
	if (hMACOutputLength > 0) {
		$set(this, signatureAlgorithm, $new($SignatureAlgorithm, $(getDocument()), signatureMethodURI, hMACOutputLength, provider));
	} else {
		$set(this, signatureAlgorithm, $new($SignatureAlgorithm, $(getDocument()), signatureMethodURI, provider, spec));
	}
	$set(this, signatureMethod, $nc(this->signatureAlgorithm)->getElement());
	appendSelf(static_cast<$Node*>(this->signatureMethod));
	addReturnToSelf();
}

void SignedInfo::init$($Document* doc, $Element* signatureMethodElem, $Element* canonicalizationMethodElem) {
	SignedInfo::init$(doc, signatureMethodElem, canonicalizationMethodElem, ($Provider*)nullptr);
}

void SignedInfo::init$($Document* doc, $Element* signatureMethodElem, $Element* canonicalizationMethodElem, $Provider* provider) {
	$Manifest::init$(doc);
	$set(this, c14nMethod, canonicalizationMethodElem);
	appendSelf(static_cast<$Node*>(this->c14nMethod));
	addReturnToSelf();
	$set(this, signatureAlgorithm, $new($SignatureAlgorithm, signatureMethodElem, ($String*)nullptr, provider));
	$set(this, signatureMethod, $nc(this->signatureAlgorithm)->getElement());
	appendSelf(static_cast<$Node*>(this->signatureMethod));
	addReturnToSelf();
}

void SignedInfo::init$($Element* element, $String* baseURI) {
	SignedInfo::init$(element, baseURI, true, ($Provider*)nullptr);
}

void SignedInfo::init$($Element* element, $String* baseURI, bool secureValidation) {
	SignedInfo::init$(element, baseURI, secureValidation, ($Provider*)nullptr);
}

void SignedInfo::init$($Element* element, $String* baseURI, bool secureValidation, $Provider* provider) {
	$Manifest::init$(element, baseURI, secureValidation);
	$set(this, c14nMethod, $XMLUtils::getNextElement($($nc(element)->getFirstChild())));
	bool var$0 = this->c14nMethod == nullptr;
	if (!var$0) {
		$init($Constants);
		bool var$1 = $nc($Constants::SignatureSpecNS)->equals($($nc(this->c14nMethod)->getNamespaceURI()));
		var$0 = !(var$1 && $nc($Constants::_TAG_CANONICALIZATIONMETHOD)->equals($($nc(this->c14nMethod)->getLocalName())));
	}
	if (var$0) {
			$init($Constants);
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of($Constants::_TAG_CANONICALIZATIONMETHOD),
			$of($Constants::_TAG_SIGNEDINFO)
		}));
		$throwNew($XMLSignatureException, "xml.WrongContent"_s, exArgs);
	}
	$set(this, signatureMethod, $XMLUtils::getNextElement($($nc(this->c14nMethod)->getNextSibling())));
	bool var$2 = this->signatureMethod == nullptr;
	if (!var$2) {
		$init($Constants);
		bool var$3 = $nc($Constants::SignatureSpecNS)->equals($($nc(this->signatureMethod)->getNamespaceURI()));
		var$2 = !(var$3 && $nc($Constants::_TAG_SIGNATUREMETHOD)->equals($($nc(this->signatureMethod)->getLocalName())));
	}
	if (var$2) {
			$init($Constants);
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of($Constants::_TAG_SIGNATUREMETHOD),
			$of($Constants::_TAG_SIGNEDINFO)
		}));
		$throwNew($XMLSignatureException, "xml.WrongContent"_s, exArgs);
	}
	$set(this, signatureAlgorithm, $new($SignatureAlgorithm, this->signatureMethod, $(this->getBaseURI()), secureValidation, provider));
}

bool SignedInfo::verify() {
	return $Manifest::verifyReferences(false);
}

bool SignedInfo::verify(bool followManifests) {
	return $Manifest::verifyReferences(followManifests);
}

$bytes* SignedInfo::getCanonicalizedOctetStream() {
	if (this->c14nizedBytes == nullptr) {
		$var($Canonicalizer, c14nizer, $Canonicalizer::getInstance($(this->getCanonicalizationMethodURI())));
		$var($String, inclusiveNamespaces, this->getInclusiveNamespaces());
		{
			$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						if (inclusiveNamespaces == nullptr) {
							$nc(c14nizer)->canonicalizeSubtree($(getElement()), baos);
						} else {
							$nc(c14nizer)->canonicalizeSubtree($(getElement()), inclusiveNamespaces, baos);
						}
						$set(this, c14nizedBytes, baos->toByteArray());
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							baos->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					baos->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		}
	}
	return $cast($bytes, $nc(this->c14nizedBytes)->clone());
}

void SignedInfo::signInOctetStream($OutputStream* os) {
	if (this->c14nizedBytes == nullptr) {
		$var($Canonicalizer, c14nizer, $Canonicalizer::getInstance($(this->getCanonicalizationMethodURI())));
		$var($String, inclusiveNamespaces, this->getInclusiveNamespaces());
		if (inclusiveNamespaces == nullptr) {
			$nc(c14nizer)->canonicalizeSubtree($(getElement()), os);
		} else {
			$nc(c14nizer)->canonicalizeSubtree($(getElement()), inclusiveNamespaces, os);
		}
	} else {
		try {
			$nc(os)->write(this->c14nizedBytes);
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$throwNew($RuntimeException, static_cast<$Throwable*>(e));
		}
	}
}

$String* SignedInfo::getCanonicalizationMethodURI() {
	$init($Constants);
	return $nc(this->c14nMethod)->getAttributeNS(nullptr, $Constants::_ATT_ALGORITHM);
}

$String* SignedInfo::getSignatureMethodURI() {
	$var($Element, signatureElement, this->getSignatureMethodElement());
	if (signatureElement != nullptr) {
		$init($Constants);
		return signatureElement->getAttributeNS(nullptr, $Constants::_ATT_ALGORITHM);
	}
	return nullptr;
}

$Element* SignedInfo::getSignatureMethodElement() {
	return this->signatureMethod;
}

$SecretKey* SignedInfo::createSecretKey($bytes* secretKeyBytes) {
	return $new($SecretKeySpec, secretKeyBytes, $($nc(this->signatureAlgorithm)->getJCEAlgorithmString()));
}

$SignatureAlgorithm* SignedInfo::getSignatureAlgorithm() {
	return this->signatureAlgorithm;
}

$String* SignedInfo::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_SIGNEDINFO;
}

$String* SignedInfo::getInclusiveNamespaces() {
	$var($String, c14nMethodURI, getCanonicalizationMethodURI());
	bool var$0 = "http://www.w3.org/2001/10/xml-exc-c14n#"_s->equals(c14nMethodURI);
	if (!(var$0 || "http://www.w3.org/2001/10/xml-exc-c14n#WithComments"_s->equals(c14nMethodURI))) {
		return nullptr;
	}
	$var($Element, inclusiveElement, $XMLUtils::getNextElement($($nc(this->c14nMethod)->getFirstChild())));
	if (inclusiveElement != nullptr) {
		try {
			$init($InclusiveNamespaces);
			$var($String, inclusiveNamespaces, $$new($InclusiveNamespaces, inclusiveElement, $InclusiveNamespaces::ExclusiveCanonicalizationNamespace)->getInclusiveNamespaces());
			return inclusiveNamespaces;
		} catch ($XMLSecurityException&) {
			$var($XMLSecurityException, e, $catch());
			return nullptr;
		}
	}
	return nullptr;
}

SignedInfo::SignedInfo() {
}

$Class* SignedInfo::load$($String* name, bool initialize) {
	$loadClass(SignedInfo, name, initialize, &_SignedInfo_ClassInfo_, allocate$SignedInfo);
	return class$;
}

$Class* SignedInfo::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com