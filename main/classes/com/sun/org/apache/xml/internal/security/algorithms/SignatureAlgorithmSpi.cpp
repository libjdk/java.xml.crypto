#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi.h>

#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/KeyException.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/SecureRandom.h>
#include <java/security/Signature.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $KeyException = ::java::security::KeyException;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $SecureRandom = ::java::security::SecureRandom;
using $Signature = ::java::security::Signature;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {

$MethodInfo _SignatureAlgorithmSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureAlgorithmSpi::*)()>(&SignatureAlgorithmSpi::init$))},
	{"engineAddContextToElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetContextFromElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetJCEAlgorithmString", "()Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"engineGetJCEProviderName", "()Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED | $ABSTRACT},
	{"engineInitSign", "(Ljava/security/Key;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineInitSign", "(Ljava/security/Key;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineInitSign", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineInitSign", "(Ljava/security/Key;Ljava/security/SecureRandom;Ljava/security/Signature;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($Key*,$SecureRandom*,$Signature*)>(&SignatureAlgorithmSpi::engineInitSign)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineInitVerify", "(Ljava/security/Key;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineInitVerify", "(Ljava/security/Key;Ljava/security/Signature;)V", nullptr, $PROTECTED | $STATIC, $method(static_cast<void(*)($Key*,$Signature*)>(&SignatureAlgorithmSpi::engineInitVerify)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineSetHMACOutputLength", "(I)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineSetParameter", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineSign", "()[B", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineUpdate", "([B)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineUpdate", "(B)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineUpdate", "([BII)V", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineVerify", "([B)Z", nullptr, $PROTECTED | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{}
};

$ClassInfo _SignatureAlgorithmSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.algorithms.SignatureAlgorithmSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_SignatureAlgorithmSpi_MethodInfo_
};

$Object* allocate$SignatureAlgorithmSpi($Class* clazz) {
	return $of($alloc(SignatureAlgorithmSpi));
}

void SignatureAlgorithmSpi::init$() {
}

void SignatureAlgorithmSpi::engineGetContextFromElement($Element* element) {
}

void SignatureAlgorithmSpi::engineAddContextToElement($Element* element) {
}

void SignatureAlgorithmSpi::engineInitVerify($Key* publicKey, $Signature* signatureAlgorithm) {
	if (!($instanceOf($PublicKey, publicKey))) {
		$var($String, supplied, nullptr);
		if (publicKey != nullptr) {
			$assign(supplied, $of(publicKey)->getClass()->getName());
		}
		$load($PublicKey);
		$var($String, needed, $PublicKey::class$->getName());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(supplied),
			$of(needed)
		}));
		$throwNew($XMLSignatureException, "algorithms.WrongKeyForThisOperation"_s, exArgs);
	}
	try {
		$nc(signatureAlgorithm)->initVerify($cast($PublicKey, publicKey));
	} catch ($InvalidKeyException&) {
		$var($InvalidKeyException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

void SignatureAlgorithmSpi::engineInitSign($Key* privateKey, $SecureRandom* secureRandom, $Signature* signatureAlgorithm) {
	if (!($instanceOf($PrivateKey, privateKey))) {
		$var($String, supplied, nullptr);
		if (privateKey != nullptr) {
			$assign(supplied, $of(privateKey)->getClass()->getName());
		}
		$load($PrivateKey);
		$var($String, needed, $PrivateKey::class$->getName());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(supplied),
			$of(needed)
		}));
		$throwNew($XMLSignatureException, "algorithms.WrongKeyForThisOperation"_s, exArgs);
	}
	try {
		if (secureRandom == nullptr) {
			$nc(signatureAlgorithm)->initSign($cast($PrivateKey, privateKey));
		} else {
			$nc(signatureAlgorithm)->initSign($cast($PrivateKey, privateKey), secureRandom);
		}
	} catch ($InvalidKeyException&) {
		$var($InvalidKeyException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

SignatureAlgorithmSpi::SignatureAlgorithmSpi() {
}

$Class* SignatureAlgorithmSpi::load$($String* name, bool initialize) {
	$loadClass(SignatureAlgorithmSpi, name, initialize, &_SignatureAlgorithmSpi_ClassInfo_, allocate$SignatureAlgorithmSpi);
	return class$;
}

$Class* SignatureAlgorithmSpi::class$ = nullptr;

							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com