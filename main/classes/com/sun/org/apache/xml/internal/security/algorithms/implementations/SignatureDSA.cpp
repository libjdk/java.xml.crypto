#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureDSA.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignature.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/IOException.h>
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
#include <java/math/BigInteger.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/Key.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/Provider.h>
#include <java/security/SecureRandom.h>
#include <java/security/Signature.h>
#include <java/security/SignatureException.h>
#include <java/security/interfaces/DSAKey.h>
#include <java/security/interfaces/DSAParams.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <jcpp.h>

#undef ALGO_ID_SIGNATURE_DSA
#undef LOG
#undef URI

using $JCEMapper = ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper;
using $SignatureAlgorithmSpi = ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithmSpi;
using $XMLSignature = ::com::sun::org::apache::xml::internal::security::signature::XMLSignature;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $JavaUtils = ::com::sun::org::apache::xml::internal::security::utils::JavaUtils;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $Key = ::java::security::Key;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $Provider = ::java::security::Provider;
using $SecureRandom = ::java::security::SecureRandom;
using $Signature = ::java::security::Signature;
using $SignatureException = ::java::security::SignatureException;
using $DSAKey = ::java::security::interfaces::DSAKey;
using $DSAParams = ::java::security::interfaces::DSAParams;
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

$FieldInfo _SignatureDSA_FieldInfo_[] = {
	{"URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureDSA, URI)},
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SignatureDSA, LOG)},
	{"signatureAlgorithm", "Ljava/security/Signature;", nullptr, $PRIVATE | $FINAL, $field(SignatureDSA, signatureAlgorithm)},
	{"size", "I", nullptr, $PRIVATE, $field(SignatureDSA, size)},
	{}
};

$MethodInfo _SignatureDSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureDSA::*)()>(&SignatureDSA::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureDSA::*)($Provider*)>(&SignatureDSA::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"engineGetJCEAlgorithmString", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"engineGetJCEProviderName", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED},
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

$InnerClassInfo _SignatureDSA_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA$SHA256", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA", "SHA256", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SignatureDSA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA",
	"com.sun.org.apache.xml.internal.security.algorithms.SignatureAlgorithmSpi",
	nullptr,
	_SignatureDSA_FieldInfo_,
	_SignatureDSA_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA$SHA256"
};

$Object* allocate$SignatureDSA($Class* clazz) {
	return $of($alloc(SignatureDSA));
}

$String* SignatureDSA::URI = nullptr;
$Logger* SignatureDSA::LOG = nullptr;

$String* SignatureDSA::engineGetURI() {
	$init($XMLSignature);
	return $XMLSignature::ALGO_ID_SIGNATURE_DSA;
}

void SignatureDSA::init$() {
	SignatureDSA::init$(nullptr);
}

void SignatureDSA::init$($Provider* provider) {
	$useLocalCurrentObjectStackCache();
	$SignatureAlgorithmSpi::init$();
	$var($String, algorithmID, $JCEMapper::translateURItoJCEID($(engineGetURI())));
	$nc(SignatureDSA::LOG)->debug("Created SignatureDSA using {}"_s, $$new($ObjectArray, {$of(algorithmID)}));
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

void SignatureDSA::engineSetParameter($AlgorithmParameterSpec* params) {
	try {
		$nc(this->signatureAlgorithm)->setParameter(params);
	} catch ($InvalidAlgorithmParameterException&) {
		$var($InvalidAlgorithmParameterException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

bool SignatureDSA::engineVerify($bytes* signature) {
	$useLocalCurrentObjectStackCache();
	try {
		if ($nc(SignatureDSA::LOG)->isDebugEnabled()) {
			$nc(SignatureDSA::LOG)->debug($$str({"Called DSA.verify() on "_s, $($XMLUtils::encodeToString(signature))}));
		}
		$var($bytes, jcebytes, $JavaUtils::convertDsaXMLDSIGtoASN1(signature, this->size / 8));
		return $nc(this->signatureAlgorithm)->verify(jcebytes);
	} catch ($SignatureException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSignatureException, ex);
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSignatureException, ex);
	}
	$shouldNotReachHere();
}

void SignatureDSA::engineInitVerify($Key* publicKey) {
	$useLocalCurrentObjectStackCache();
	$SignatureAlgorithmSpi::engineInitVerify(publicKey, this->signatureAlgorithm);
	this->size = $nc($($nc($($nc(($cast($DSAKey, publicKey)))->getParams()))->getQ()))->bitLength();
}

$bytes* SignatureDSA::engineSign() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, jcebytes, $nc(this->signatureAlgorithm)->sign());
		return $JavaUtils::convertDsaASN1toXMLDSIG(jcebytes, this->size / 8);
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSignatureException, ex);
	} catch ($SignatureException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSignatureException, ex);
	}
	$shouldNotReachHere();
}

void SignatureDSA::engineInitSign($Key* privateKey, $SecureRandom* secureRandom) {
	$useLocalCurrentObjectStackCache();
	$SignatureAlgorithmSpi::engineInitSign(privateKey, secureRandom, this->signatureAlgorithm);
	this->size = $nc($($nc($($nc(($cast($DSAKey, privateKey)))->getParams()))->getQ()))->bitLength();
}

void SignatureDSA::engineInitSign($Key* privateKey) {
	engineInitSign(privateKey, ($SecureRandom*)nullptr);
}

void SignatureDSA::engineUpdate($bytes* input) {
	try {
		$nc(this->signatureAlgorithm)->update(input);
	} catch ($SignatureException&) {
		$var($SignatureException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

void SignatureDSA::engineUpdate(int8_t input) {
	try {
		$nc(this->signatureAlgorithm)->update(input);
	} catch ($SignatureException&) {
		$var($SignatureException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

void SignatureDSA::engineUpdate($bytes* buf, int32_t offset, int32_t len) {
	try {
		$nc(this->signatureAlgorithm)->update(buf, offset, len);
	} catch ($SignatureException&) {
		$var($SignatureException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

$String* SignatureDSA::engineGetJCEAlgorithmString() {
	return $nc(this->signatureAlgorithm)->getAlgorithm();
}

$String* SignatureDSA::engineGetJCEProviderName() {
	return $nc($($nc(this->signatureAlgorithm)->getProvider()))->getName();
}

void SignatureDSA::engineSetHMACOutputLength(int32_t HMACOutputLength) {
	$throwNew($XMLSignatureException, "algorithms.HMACOutputLengthOnlyForHMAC"_s);
}

void SignatureDSA::engineInitSign($Key* signingKey, $AlgorithmParameterSpec* algorithmParameterSpec) {
	$throwNew($XMLSignatureException, "algorithms.CannotUseAlgorithmParameterSpecOnDSA"_s);
}

void clinit$SignatureDSA($Class* class$) {
	$init($Constants);
	$assignStatic(SignatureDSA::URI, $str({$Constants::SignatureSpecNS, "dsa-sha1"_s}));
	$assignStatic(SignatureDSA::LOG, $LoggerFactory::getLogger(SignatureDSA::class$));
}

SignatureDSA::SignatureDSA() {
}

$Class* SignatureDSA::load$($String* name, bool initialize) {
	$loadClass(SignatureDSA, name, initialize, &_SignatureDSA_ClassInfo_, clinit$SignatureDSA, allocate$SignatureDSA);
	return class$;
}

$Class* SignatureDSA::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com