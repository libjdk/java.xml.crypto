#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/Key.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/Provider.h>
#include <java/security/SecureRandom.h>
#include <java/security/Signature.h>
#include <java/security/SignatureException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

#undef LOG

using $JCEMapper = ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper;
using $SignatureAlgorithmSpi = ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithmSpi;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $Key = ::java::security::Key;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $Provider = ::java::security::Provider;
using $SecureRandom = ::java::security::SecureRandom;
using $Signature = ::java::security::Signature;
using $SignatureException = ::java::security::SignatureException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {

$FieldInfo _SignatureBaseRSA_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SignatureBaseRSA, LOG)},
	{"signatureAlgorithm", "Ljava/security/Signature;", nullptr, $PRIVATE | $FINAL, $field(SignatureBaseRSA, signatureAlgorithm)},
	{}
};

$MethodInfo _SignatureBaseRSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureBaseRSA::*)()>(&SignatureBaseRSA::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureBaseRSA::*)($Provider*)>(&SignatureBaseRSA::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetJCEAlgorithmString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"engineGetJCEProviderName", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"engineInitSign", "(Ljava/security/Key;Ljava/security/SecureRandom;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineInitSign", "(Ljava/security/Key;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineInitSign", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineInitVerify", "(Ljava/security/Key;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineSetHMACOutputLength", "(I)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineSetParameter", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineSign", "()[B", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineUpdate", "([B)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineUpdate", "(B)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineUpdate", "([BII)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineVerify", "([B)Z", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{}
};

$InnerClassInfo _SignatureBaseRSA_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASSAPSS", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_512MGF1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA3_512MGF1", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_384MGF1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA3_384MGF1", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_256MGF1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA3_256MGF1", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_224MGF1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA3_224MGF1", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA512MGF1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA512MGF1", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA384MGF1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA384MGF1", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA256MGF1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA256MGF1", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA224MGF1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA224MGF1", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA1MGF1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA1MGF1", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSAMD5", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSAMD5", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSARIPEMD160", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSARIPEMD160", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA512", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA512", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA384", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA384", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA256", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA256", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA224", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA224", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASHA1", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SignatureBaseRSA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA",
	"com.sun.org.apache.xml.internal.security.algorithms.SignatureAlgorithmSpi",
	nullptr,
	_SignatureBaseRSA_FieldInfo_,
	_SignatureBaseRSA_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureBaseRSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_512MGF1,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_384MGF1,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_256MGF1,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_224MGF1,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA512MGF1,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA384MGF1,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA256MGF1,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA224MGF1,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA1MGF1,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSAMD5,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSARIPEMD160,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA512,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA384,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA256,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA224,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA1"
};

$Object* allocate$SignatureBaseRSA($Class* clazz) {
	return $of($alloc(SignatureBaseRSA));
}

$Logger* SignatureBaseRSA::LOG = nullptr;

void SignatureBaseRSA::init$() {
	SignatureBaseRSA::init$(nullptr);
}

void SignatureBaseRSA::init$($Provider* provider) {
	$SignatureAlgorithmSpi::init$();
	$var($String, algorithmID, $JCEMapper::translateURItoJCEID($(this->engineGetURI())));
	$nc(SignatureBaseRSA::LOG)->debug("Created SignatureRSA using {}"_s, $$new($ObjectArray, {$of(algorithmID)}));
	try {
		if (provider == nullptr) {
			$var($String, providerId, $JCEMapper::getProviderId());
			if (providerId == nullptr) {
				$set(this, signatureAlgorithm, $Signature::getInstance(algorithmID));
			} else {
				$set(this, signatureAlgorithm, $Signature::getInstance(algorithmID, providerId));
			}
		} else {
			$set(this, signatureAlgorithm, $Signature::getInstance(algorithmID, provider));
		}
	} catch ($NoSuchAlgorithmException&) {
		$var($GeneralSecurityException, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmID),
			$($of(ex->getLocalizedMessage()))
		}));
		$throwNew($XMLSignatureException, "algorithms.NoSuchAlgorithm"_s, exArgs);
	} catch ($NoSuchProviderException&) {
		$var($GeneralSecurityException, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmID),
			$($of(ex->getLocalizedMessage()))
		}));
		$throwNew($XMLSignatureException, "algorithms.NoSuchAlgorithm"_s, exArgs);
	}
}

void SignatureBaseRSA::engineSetParameter($AlgorithmParameterSpec* params) {
	try {
		$nc(this->signatureAlgorithm)->setParameter(params);
	} catch ($InvalidAlgorithmParameterException&) {
		$var($InvalidAlgorithmParameterException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

bool SignatureBaseRSA::engineVerify($bytes* signature) {
	try {
		return $nc(this->signatureAlgorithm)->verify(signature);
	} catch ($SignatureException&) {
		$var($SignatureException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

void SignatureBaseRSA::engineInitVerify($Key* publicKey) {
	$SignatureAlgorithmSpi::engineInitVerify(publicKey, this->signatureAlgorithm);
}

$bytes* SignatureBaseRSA::engineSign() {
	try {
		return $nc(this->signatureAlgorithm)->sign();
	} catch ($SignatureException&) {
		$var($SignatureException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

void SignatureBaseRSA::engineInitSign($Key* privateKey, $SecureRandom* secureRandom) {
	$SignatureAlgorithmSpi::engineInitSign(privateKey, secureRandom, this->signatureAlgorithm);
}

void SignatureBaseRSA::engineInitSign($Key* privateKey) {
	engineInitSign(privateKey, ($SecureRandom*)nullptr);
}

void SignatureBaseRSA::engineUpdate($bytes* input) {
	try {
		$nc(this->signatureAlgorithm)->update(input);
	} catch ($SignatureException&) {
		$var($SignatureException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

void SignatureBaseRSA::engineUpdate(int8_t input) {
	try {
		$nc(this->signatureAlgorithm)->update(input);
	} catch ($SignatureException&) {
		$var($SignatureException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

void SignatureBaseRSA::engineUpdate($bytes* buf, int32_t offset, int32_t len) {
	try {
		$nc(this->signatureAlgorithm)->update(buf, offset, len);
	} catch ($SignatureException&) {
		$var($SignatureException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

$String* SignatureBaseRSA::engineGetJCEAlgorithmString() {
	return $nc(this->signatureAlgorithm)->getAlgorithm();
}

$String* SignatureBaseRSA::engineGetJCEProviderName() {
	return $nc($($nc(this->signatureAlgorithm)->getProvider()))->getName();
}

void SignatureBaseRSA::engineSetHMACOutputLength(int32_t HMACOutputLength) {
	$throwNew($XMLSignatureException, "algorithms.HMACOutputLengthOnlyForHMAC"_s);
}

void SignatureBaseRSA::engineInitSign($Key* signingKey, $AlgorithmParameterSpec* algorithmParameterSpec) {
	$throwNew($XMLSignatureException, "algorithms.CannotUseAlgorithmParameterSpecOnRSA"_s);
}

void clinit$SignatureBaseRSA($Class* class$) {
	$assignStatic(SignatureBaseRSA::LOG, $LoggerFactory::getLogger(SignatureBaseRSA::class$));
}

SignatureBaseRSA::SignatureBaseRSA() {
}

$Class* SignatureBaseRSA::load$($String* name, bool initialize) {
	$loadClass(SignatureBaseRSA, name, initialize, &_SignatureBaseRSA_ClassInfo_, clinit$SignatureBaseRSA, allocate$SignatureBaseRSA);
	return class$;
}

$Class* SignatureBaseRSA::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com