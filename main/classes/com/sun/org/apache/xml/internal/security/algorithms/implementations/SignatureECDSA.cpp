#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/ECDSAUtils.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
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
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/Key.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/Provider.h>
#include <java/security/SecureRandom.h>
#include <java/security/Signature.h>
#include <java/security/SignatureException.h>
#include <java/security/interfaces/ECPrivateKey.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/ECField.h>
#include <java/security/spec/ECParameterSpec.h>
#include <java/security/spec/EllipticCurve.h>
#include <jcpp.h>

#undef LOG

using $JCEMapper = ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper;
using $SignatureAlgorithmSpi = ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithmSpi;
using $ECDSAUtils = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::ECDSAUtils;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $IOException = ::java::io::IOException;
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
using $ECKey = ::java::security::interfaces::ECKey;
using $ECPrivateKey = ::java::security::interfaces::ECPrivateKey;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $ECField = ::java::security::spec::ECField;
using $ECParameterSpec = ::java::security::spec::ECParameterSpec;
using $EllipticCurve = ::java::security::spec::EllipticCurve;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {

$FieldInfo _SignatureECDSA_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SignatureECDSA, LOG)},
	{"signatureAlgorithm", "Ljava/security/Signature;", nullptr, $PRIVATE | $FINAL, $field(SignatureECDSA, signatureAlgorithm)},
	{"signIntLen", "I", nullptr, $PRIVATE, $field(SignatureECDSA, signIntLen)},
	{}
};

$MethodInfo _SignatureECDSA_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(SignatureECDSA::*)()>(&SignatureECDSA::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"<init>", "(Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureECDSA::*)($Provider*)>(&SignatureECDSA::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"convertASN1toXMLDSIG", "([BI)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*,int32_t)>(&SignatureECDSA::convertASN1toXMLDSIG)), "java.io.IOException"},
	{"convertXMLDSIGtoASN1", "([B)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&SignatureECDSA::convertXMLDSIGtoASN1)), "java.io.IOException"},
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

$InnerClassInfo _SignatureECDSA_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSARIPEMD160", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA", "SignatureECDSARIPEMD160", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA512", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA", "SignatureECDSASHA512", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA384", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA", "SignatureECDSASHA384", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA256", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA", "SignatureECDSASHA256", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA224", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA", "SignatureECDSASHA224", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA1", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA", "SignatureECDSASHA1", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _SignatureECDSA_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA",
	"com.sun.org.apache.xml.internal.security.algorithms.SignatureAlgorithmSpi",
	nullptr,
	_SignatureECDSA_FieldInfo_,
	_SignatureECDSA_MethodInfo_,
	nullptr,
	nullptr,
	_SignatureECDSA_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSARIPEMD160,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA512,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA384,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA256,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA224,com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA1"
};

$Object* allocate$SignatureECDSA($Class* clazz) {
	return $of($alloc(SignatureECDSA));
}

$Logger* SignatureECDSA::LOG = nullptr;

$bytes* SignatureECDSA::convertASN1toXMLDSIG($bytes* asn1Bytes, int32_t rawLen) {
	$init(SignatureECDSA);
	return $ECDSAUtils::convertASN1toXMLDSIG(asn1Bytes, rawLen);
}

$bytes* SignatureECDSA::convertXMLDSIGtoASN1($bytes* xmldsigBytes) {
	$init(SignatureECDSA);
	return $ECDSAUtils::convertXMLDSIGtoASN1(xmldsigBytes);
}

void SignatureECDSA::init$() {
	SignatureECDSA::init$(nullptr);
}

void SignatureECDSA::init$($Provider* provider) {
	$useLocalCurrentObjectStackCache();
	$SignatureAlgorithmSpi::init$();
	this->signIntLen = -1;
	$var($String, algorithmID, $JCEMapper::translateURItoJCEID($(this->engineGetURI())));
	$nc(SignatureECDSA::LOG)->debug("Created SignatureECDSA using {}"_s, $$new($ObjectArray, {$of(algorithmID)}));
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

void SignatureECDSA::engineSetParameter($AlgorithmParameterSpec* params) {
	try {
		$nc(this->signatureAlgorithm)->setParameter(params);
	} catch ($InvalidAlgorithmParameterException&) {
		$var($InvalidAlgorithmParameterException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

bool SignatureECDSA::engineVerify($bytes* signature) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, jcebytes, SignatureECDSA::convertXMLDSIGtoASN1(signature));
		if ($nc(SignatureECDSA::LOG)->isDebugEnabled()) {
			$nc(SignatureECDSA::LOG)->debug($$str({"Called ECDSA.verify() on "_s, $($XMLUtils::encodeToString(signature))}));
		}
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

void SignatureECDSA::engineInitVerify($Key* publicKey) {
	$SignatureAlgorithmSpi::engineInitVerify(publicKey, this->signatureAlgorithm);
}

$bytes* SignatureECDSA::engineSign() {
	$useLocalCurrentObjectStackCache();
	try {
		$var($bytes, jcebytes, $nc(this->signatureAlgorithm)->sign());
		return SignatureECDSA::convertASN1toXMLDSIG(jcebytes, this->signIntLen);
	} catch ($SignatureException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSignatureException, ex);
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSignatureException, ex);
	}
	$shouldNotReachHere();
}

void SignatureECDSA::engineInitSign($Key* privateKey, $SecureRandom* secureRandom) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($ECPrivateKey, privateKey)) {
		$var($ECPrivateKey, ecKey, $cast($ECPrivateKey, privateKey));
		this->signIntLen = ($nc($($nc($($nc($($nc(ecKey)->getParams()))->getCurve()))->getField()))->getFieldSize() + 7) / 8;
	}
	$SignatureAlgorithmSpi::engineInitSign(privateKey, secureRandom, this->signatureAlgorithm);
}

void SignatureECDSA::engineInitSign($Key* privateKey) {
	engineInitSign(privateKey, ($SecureRandom*)nullptr);
}

void SignatureECDSA::engineUpdate($bytes* input) {
	try {
		$nc(this->signatureAlgorithm)->update(input);
	} catch ($SignatureException&) {
		$var($SignatureException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

void SignatureECDSA::engineUpdate(int8_t input) {
	try {
		$nc(this->signatureAlgorithm)->update(input);
	} catch ($SignatureException&) {
		$var($SignatureException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

void SignatureECDSA::engineUpdate($bytes* buf, int32_t offset, int32_t len) {
	try {
		$nc(this->signatureAlgorithm)->update(buf, offset, len);
	} catch ($SignatureException&) {
		$var($SignatureException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
}

$String* SignatureECDSA::engineGetJCEAlgorithmString() {
	return $nc(this->signatureAlgorithm)->getAlgorithm();
}

$String* SignatureECDSA::engineGetJCEProviderName() {
	return $nc($($nc(this->signatureAlgorithm)->getProvider()))->getName();
}

void SignatureECDSA::engineSetHMACOutputLength(int32_t HMACOutputLength) {
	$throwNew($XMLSignatureException, "algorithms.HMACOutputLengthOnlyForHMAC"_s);
}

void SignatureECDSA::engineInitSign($Key* signingKey, $AlgorithmParameterSpec* algorithmParameterSpec) {
	$throwNew($XMLSignatureException, "algorithms.CannotUseAlgorithmParameterSpecOnRSA"_s);
}

void clinit$SignatureECDSA($Class* class$) {
	$assignStatic(SignatureECDSA::LOG, $LoggerFactory::getLogger(SignatureECDSA::class$));
}

SignatureECDSA::SignatureECDSA() {
}

$Class* SignatureECDSA::load$($String* name, bool initialize) {
	$loadClass(SignatureECDSA, name, initialize, &_SignatureECDSA_ClassInfo_, clinit$SignatureECDSA, allocate$SignatureECDSA);
	return class$;
}

$Class* SignatureECDSA::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com