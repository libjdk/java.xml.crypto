#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/MessageDigestAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$HMACOutputLength.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/IllegalStateException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/KeyException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/Mac.h>
#include <javax/crypto/SecretKey.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef LOG
#undef _TAG_HMACOUTPUTLENGTH

using $JCEMapper = ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper;
using $MessageDigestAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::MessageDigestAlgorithm;
using $SignatureAlgorithmSpi = ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithmSpi;
using $IntegrityHmac$HMACOutputLength = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$HMACOutputLength;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $IllegalStateException = ::java::lang::IllegalStateException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $KeyException = ::java::security::KeyException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Mac = ::javax::crypto::Mac;
using $SecretKey = ::javax::crypto::SecretKey;
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

$FieldInfo _IntegrityHmac_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(IntegrityHmac, LOG)},
	{"macAlgorithm", "Ljavax/crypto/Mac;", nullptr, $PRIVATE | $FINAL, $field(IntegrityHmac, macAlgorithm)},
	{"hmacOutputLength", "Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$HMACOutputLength;", nullptr, $PRIVATE, $field(IntegrityHmac, hmacOutputLength)},
	{}
};

$MethodInfo _IntegrityHmac_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(IntegrityHmac::*)()>(&IntegrityHmac::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(IntegrityHmac::*)($Provider*)>(&IntegrityHmac::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineAddContextToElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetContextFromElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetJCEAlgorithmString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"engineGetJCEProviderName", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"engineInitSign", "(Ljava/security/Key;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineInitSign", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineInitSign", "(Ljava/security/Key;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineInitVerify", "(Ljava/security/Key;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineSetHMACOutputLength", "(I)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineSetParameter", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineSign", "()[B", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineUpdate", "([B)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineUpdate", "(B)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineUpdate", "([BII)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineVerify", "([B)Z", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getDigestLength", "()I", nullptr, $ABSTRACT},
	{}
};

$InnerClassInfo _IntegrityHmac_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$HMACOutputLength", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "HMACOutputLength", $PRIVATE | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacMD5", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "IntegrityHmacMD5", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacRIPEMD160", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "IntegrityHmacRIPEMD160", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA512", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "IntegrityHmacSHA512", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA384", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "IntegrityHmacSHA384", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA256", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "IntegrityHmacSHA256", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA224", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "IntegrityHmacSHA224", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", "IntegrityHmacSHA1", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _IntegrityHmac_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac",
	"com.sun.org.apache.xml.internal.security.algorithms.SignatureAlgorithmSpi",
	nullptr,
	_IntegrityHmac_FieldInfo_,
	_IntegrityHmac_MethodInfo_,
	nullptr,
	nullptr,
	_IntegrityHmac_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$HMACOutputLength,com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacMD5,com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacRIPEMD160,com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA512,com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA384,com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA256,com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA224,com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA1"
};

$Object* allocate$IntegrityHmac($Class* clazz) {
	return $of($alloc(IntegrityHmac));
}

$Logger* IntegrityHmac::LOG = nullptr;

void IntegrityHmac::init$() {
	IntegrityHmac::init$(nullptr);
}

void IntegrityHmac::init$($Provider* provider) {
	$SignatureAlgorithmSpi::init$();
	$var($String, algorithmID, $JCEMapper::translateURItoJCEID($(this->engineGetURI())));
	$nc(IntegrityHmac::LOG)->debug("Created IntegrityHmacSHA1 using {}"_s, $$new($ObjectArray, {$of(algorithmID)}));
	try {
		$set(this, macAlgorithm, (provider == nullptr) ? $Mac::getInstance(algorithmID) : $Mac::getInstance(algorithmID, provider));
	} catch ($NoSuchAlgorithmException&) {
		$var($NoSuchAlgorithmException, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmID),
			$($of(ex->getLocalizedMessage()))
		}));
		$throwNew($XMLSignatureException, "algorithms.NoSuchAlgorithm"_s, exArgs);
	}
}

void IntegrityHmac::engineSetParameter($AlgorithmParameterSpec* params) {
	$throwNew($XMLSignatureException, "empty"_s, $$new($ObjectArray, {$of("Incorrect method call"_s)}));
}

bool IntegrityHmac::engineVerify($bytes* signature) {
	try {
		if (this->hmacOutputLength != nullptr && $nc(this->hmacOutputLength)->length < getDigestLength()) {
			$nc(IntegrityHmac::LOG)->debug("HMACOutputLength must not be less than {}"_s, $$new($ObjectArray, {$($of($Integer::valueOf(getDigestLength())))}));
			$var($ObjectArray, exArgs, $new($ObjectArray, {$($of($String::valueOf(getDigestLength())))}));
			$throwNew($XMLSignatureException, "algorithms.HMACOutputLengthMin"_s, exArgs);
		} else {
			$var($bytes, completeResult, $nc(this->macAlgorithm)->doFinal());
			return $MessageDigestAlgorithm::isEqual(completeResult, signature);
		}
	} catch ($IllegalStateException&) {
		$var($IllegalStateException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

void IntegrityHmac::engineInitVerify($Key* secretKey) {
	if (!($instanceOf($SecretKey, secretKey))) {
		$var($String, supplied, nullptr);
		if (secretKey != nullptr) {
			$assign(supplied, $of(secretKey)->getClass()->getName());
		}
		$load($SecretKey);
		$var($String, needed, $SecretKey::class$->getName());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(supplied),
			$of(needed)
		}));
		$throwNew($XMLSignatureException, "algorithms.WrongKeyForThisOperation"_s, exArgs);
	}
	try {
		$nc(this->macAlgorithm)->init(secretKey);
	} catch ($InvalidKeyException&) {
		$var($InvalidKeyException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

$bytes* IntegrityHmac::engineSign() {
	try {
		if (this->hmacOutputLength != nullptr && $nc(this->hmacOutputLength)->length < getDigestLength()) {
			$nc(IntegrityHmac::LOG)->debug("HMACOutputLength must not be less than {}"_s, $$new($ObjectArray, {$($of($Integer::valueOf(getDigestLength())))}));
			$var($ObjectArray, exArgs, $new($ObjectArray, {$($of($String::valueOf(getDigestLength())))}));
			$throwNew($XMLSignatureException, "algorithms.HMACOutputLengthMin"_s, exArgs);
		} else {
			return $nc(this->macAlgorithm)->doFinal();
		}
	} catch ($IllegalStateException&) {
		$var($IllegalStateException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

void IntegrityHmac::engineInitSign($Key* secretKey) {
	engineInitSign(secretKey, ($AlgorithmParameterSpec*)nullptr);
}

void IntegrityHmac::engineInitSign($Key* secretKey, $AlgorithmParameterSpec* algorithmParameterSpec) {
	if (!($instanceOf($SecretKey, secretKey))) {
		$var($String, supplied, nullptr);
		if (secretKey != nullptr) {
			$assign(supplied, $of(secretKey)->getClass()->getName());
		}
		$load($SecretKey);
		$var($String, needed, $SecretKey::class$->getName());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(supplied),
			$of(needed)
		}));
		$throwNew($XMLSignatureException, "algorithms.WrongKeyForThisOperation"_s, exArgs);
	}
	try {
		if (algorithmParameterSpec == nullptr) {
			$nc(this->macAlgorithm)->init(secretKey);
		} else {
			$nc(this->macAlgorithm)->init(secretKey, algorithmParameterSpec);
		}
	} catch ($InvalidKeyException&) {
		$var($GeneralSecurityException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	} catch ($InvalidAlgorithmParameterException&) {
		$var($GeneralSecurityException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

void IntegrityHmac::engineInitSign($Key* secretKey, $SecureRandom* secureRandom) {
	$throwNew($XMLSignatureException, "algorithms.CannotUseSecureRandomOnMAC"_s);
}

void IntegrityHmac::engineUpdate($bytes* input) {
	try {
		$nc(this->macAlgorithm)->update(input);
	} catch ($IllegalStateException&) {
		$var($IllegalStateException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

void IntegrityHmac::engineUpdate(int8_t input) {
	try {
		$nc(this->macAlgorithm)->update(input);
	} catch ($IllegalStateException&) {
		$var($IllegalStateException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

void IntegrityHmac::engineUpdate($bytes* buf, int32_t offset, int32_t len) {
	try {
		$nc(this->macAlgorithm)->update(buf, offset, len);
	} catch ($IllegalStateException&) {
		$var($IllegalStateException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

$String* IntegrityHmac::engineGetJCEAlgorithmString() {
	return $nc(this->macAlgorithm)->getAlgorithm();
}

$String* IntegrityHmac::engineGetJCEProviderName() {
	return $nc($($nc(this->macAlgorithm)->getProvider()))->getName();
}

void IntegrityHmac::engineSetHMACOutputLength(int32_t length) {
	$set(this, hmacOutputLength, $new($IntegrityHmac$HMACOutputLength, length));
}

void IntegrityHmac::engineGetContextFromElement($Element* element) {
	if (element == nullptr) {
		$throwNew($IllegalArgumentException, "element null"_s);
	}
	$init($Constants);
	$var($Node, n, $XMLUtils::selectDsNode($($nc(element)->getFirstChild()), $Constants::_TAG_HMACOUTPUTLENGTH, 0));
	if (n != nullptr) {
		$var($String, hmacLength, $XMLUtils::getFullTextChildrenFromNode(n));
		if (hmacLength != nullptr && !""_s->equals(hmacLength)) {
			$set(this, hmacOutputLength, $new($IntegrityHmac$HMACOutputLength, $Integer::parseInt(hmacLength)));
		}
	}
}

void IntegrityHmac::engineAddContextToElement($Element* element) {
	if (element == nullptr) {
		$throwNew($IllegalArgumentException, "null element"_s);
	}
	if (this->hmacOutputLength != nullptr) {
		$var($Document, doc, $nc(element)->getOwnerDocument());
		$init($Constants);
		$var($Element, HMElem, $XMLUtils::createElementInSignatureSpace(doc, $Constants::_TAG_HMACOUTPUTLENGTH));
		$var($Text, HMText, $nc(doc)->createTextNode($$str({""_s, $$str($nc(this->hmacOutputLength)->length)})));
		$nc(HMElem)->appendChild(HMText);
		$XMLUtils::addReturnToElement(element);
		element->appendChild(HMElem);
		$XMLUtils::addReturnToElement(element);
	}
}

void clinit$IntegrityHmac($Class* class$) {
	$assignStatic(IntegrityHmac::LOG, $LoggerFactory::getLogger(IntegrityHmac::class$));
}

IntegrityHmac::IntegrityHmac() {
}

$Class* IntegrityHmac::load$($String* name, bool initialize) {
	$loadClass(IntegrityHmac, name, initialize, &_IntegrityHmac_ClassInfo_, clinit$IntegrityHmac, allocate$IntegrityHmac);
	return class$;
}

$Class* IntegrityHmac::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com