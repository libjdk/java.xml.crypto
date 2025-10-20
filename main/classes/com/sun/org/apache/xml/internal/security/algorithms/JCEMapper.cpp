#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper$Algorithm.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/MessageDigestAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignature.h>
#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <jcpp.h>

#undef ALGO_ID_DIGEST_NOT_RECOMMENDED_MD5
#undef ALGO_ID_DIGEST_RIPEMD160
#undef ALGO_ID_DIGEST_SHA1
#undef ALGO_ID_DIGEST_SHA224
#undef ALGO_ID_DIGEST_SHA256
#undef ALGO_ID_DIGEST_SHA384
#undef ALGO_ID_DIGEST_SHA512
#undef ALGO_ID_DIGEST_WHIRLPOOL
#undef ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5
#undef ALGO_ID_MAC_HMAC_RIPEMD160
#undef ALGO_ID_MAC_HMAC_SHA1
#undef ALGO_ID_MAC_HMAC_SHA224
#undef ALGO_ID_MAC_HMAC_SHA256
#undef ALGO_ID_MAC_HMAC_SHA384
#undef ALGO_ID_MAC_HMAC_SHA512
#undef ALGO_ID_SIGNATURE_DSA
#undef ALGO_ID_SIGNATURE_DSA_SHA256
#undef ALGO_ID_SIGNATURE_ECDSA_RIPEMD160
#undef ALGO_ID_SIGNATURE_ECDSA_SHA1
#undef ALGO_ID_SIGNATURE_ECDSA_SHA224
#undef ALGO_ID_SIGNATURE_ECDSA_SHA256
#undef ALGO_ID_SIGNATURE_ECDSA_SHA384
#undef ALGO_ID_SIGNATURE_ECDSA_SHA512
#undef ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5
#undef ALGO_ID_SIGNATURE_RSA_PSS
#undef ALGO_ID_SIGNATURE_RSA_RIPEMD160
#undef ALGO_ID_SIGNATURE_RSA_SHA1
#undef ALGO_ID_SIGNATURE_RSA_SHA1_MGF1
#undef ALGO_ID_SIGNATURE_RSA_SHA224
#undef ALGO_ID_SIGNATURE_RSA_SHA256
#undef ALGO_ID_SIGNATURE_RSA_SHA384
#undef ALGO_ID_SIGNATURE_RSA_SHA512
#undef LOG

using $JCEMapper$Algorithm = ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper$Algorithm;
using $MessageDigestAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::MessageDigestAlgorithm;
using $XMLSignature = ::com::sun::org::apache::xml::internal::security::signature::XMLSignature;
using $JavaUtils = ::com::sun::org::apache::xml::internal::security::utils::JavaUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {

$FieldInfo _JCEMapper_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(JCEMapper, LOG)},
	{"algorithmsMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/algorithms/JCEMapper$Algorithm;>;", $PRIVATE | $STATIC, $staticField(JCEMapper, algorithmsMap)},
	{"providerName", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $staticField(JCEMapper, providerName)},
	{}
};

$MethodInfo _JCEMapper_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JCEMapper::*)()>(&JCEMapper::init$))},
	{"getAlgorithm", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/algorithms/JCEMapper$Algorithm;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$JCEMapper$Algorithm*(*)($String*)>(&JCEMapper::getAlgorithm))},
	{"getAlgorithmClassFromURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&JCEMapper::getAlgorithmClassFromURI))},
	{"getIVLengthFromURI", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*)>(&JCEMapper::getIVLengthFromURI))},
	{"getJCEKeyAlgorithmFromURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&JCEMapper::getJCEKeyAlgorithmFromURI))},
	{"getJCEProviderFromURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&JCEMapper::getJCEProviderFromURI))},
	{"getKeyLengthFromURI", "(Ljava/lang/String;)I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)($String*)>(&JCEMapper::getKeyLengthFromURI))},
	{"getProviderId", "()Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)()>(&JCEMapper::getProviderId))},
	{"register", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/algorithms/JCEMapper$Algorithm;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$JCEMapper$Algorithm*)>(&JCEMapper::register$))},
	{"registerDefaultAlgorithms", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&JCEMapper::registerDefaultAlgorithms))},
	{"setProviderId", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&JCEMapper::setProviderId))},
	{"translateURItoJCEID", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&JCEMapper::translateURItoJCEID))},
	{}
};

$InnerClassInfo _JCEMapper_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.JCEMapper$Algorithm", "com.sun.org.apache.xml.internal.security.algorithms.JCEMapper", "Algorithm", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _JCEMapper_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.JCEMapper",
	"java.lang.Object",
	nullptr,
	_JCEMapper_FieldInfo_,
	_JCEMapper_MethodInfo_,
	nullptr,
	nullptr,
	_JCEMapper_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.JCEMapper$Algorithm"
};

$Object* allocate$JCEMapper($Class* clazz) {
	return $of($alloc(JCEMapper));
}

$Logger* JCEMapper::LOG = nullptr;
$Map* JCEMapper::algorithmsMap = nullptr;
$String* JCEMapper::providerName = nullptr;

void JCEMapper::init$() {
}

void JCEMapper::register$($String* id, $JCEMapper$Algorithm* algorithm) {
	$init(JCEMapper);
	$JavaUtils::checkRegisterPermission();
	$nc(JCEMapper::algorithmsMap)->put(id, algorithm);
}

void JCEMapper::registerDefaultAlgorithms() {
	$init(JCEMapper);
	$useLocalCurrentObjectStackCache();
	$init($MessageDigestAlgorithm);
	$nc(JCEMapper::algorithmsMap)->put($MessageDigestAlgorithm::ALGO_ID_DIGEST_NOT_RECOMMENDED_MD5, $$new($JCEMapper$Algorithm, ""_s, "MD5"_s, "MessageDigest"_s));
	$nc(JCEMapper::algorithmsMap)->put($MessageDigestAlgorithm::ALGO_ID_DIGEST_RIPEMD160, $$new($JCEMapper$Algorithm, ""_s, "RIPEMD160"_s, "MessageDigest"_s));
	$nc(JCEMapper::algorithmsMap)->put($MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA1, $$new($JCEMapper$Algorithm, ""_s, "SHA-1"_s, "MessageDigest"_s));
	$nc(JCEMapper::algorithmsMap)->put($MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA224, $$new($JCEMapper$Algorithm, ""_s, "SHA-224"_s, "MessageDigest"_s));
	$nc(JCEMapper::algorithmsMap)->put($MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA256, $$new($JCEMapper$Algorithm, ""_s, "SHA-256"_s, "MessageDigest"_s));
	$nc(JCEMapper::algorithmsMap)->put($MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA384, $$new($JCEMapper$Algorithm, ""_s, "SHA-384"_s, "MessageDigest"_s));
	$nc(JCEMapper::algorithmsMap)->put($MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA512, $$new($JCEMapper$Algorithm, ""_s, "SHA-512"_s, "MessageDigest"_s));
	$nc(JCEMapper::algorithmsMap)->put($MessageDigestAlgorithm::ALGO_ID_DIGEST_WHIRLPOOL, $$new($JCEMapper$Algorithm, ""_s, "WHIRLPOOL"_s, "MessageDigest"_s));
	$nc(JCEMapper::algorithmsMap)->put($MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA3_224, $$new($JCEMapper$Algorithm, ""_s, "SHA3-224"_s, "MessageDigest"_s));
	$nc(JCEMapper::algorithmsMap)->put($MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA3_256, $$new($JCEMapper$Algorithm, ""_s, "SHA3-256"_s, "MessageDigest"_s));
	$nc(JCEMapper::algorithmsMap)->put($MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA3_384, $$new($JCEMapper$Algorithm, ""_s, "SHA3-384"_s, "MessageDigest"_s));
	$nc(JCEMapper::algorithmsMap)->put($MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA3_512, $$new($JCEMapper$Algorithm, ""_s, "SHA3-512"_s, "MessageDigest"_s));
	$init($XMLSignature);
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_DSA, $$new($JCEMapper$Algorithm, "DSA"_s, "SHA1withDSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_DSA_SHA256, $$new($JCEMapper$Algorithm, "DSA"_s, "SHA256withDSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5, $$new($JCEMapper$Algorithm, "RSA"_s, "MD5withRSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_RIPEMD160, $$new($JCEMapper$Algorithm, "RSA"_s, "RIPEMD160withRSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA1, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA1withRSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA224, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA224withRSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA256, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA256withRSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA384, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA384withRSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA512, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA512withRSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA1_MGF1, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA1withRSAandMGF1"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA224_MGF1, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA224withRSAandMGF1"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA256_MGF1, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA256withRSAandMGF1"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA384_MGF1, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA384withRSAandMGF1"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA512_MGF1, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA512withRSAandMGF1"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_224_MGF1, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA3-224withRSAandMGF1"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_256_MGF1, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA3-256withRSAandMGF1"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_384_MGF1, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA3-384withRSAandMGF1"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_512_MGF1, $$new($JCEMapper$Algorithm, "RSA"_s, "SHA3-512withRSAandMGF1"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_PSS, $$new($JCEMapper$Algorithm, "RSA"_s, "RSASSA-PSS"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA1, $$new($JCEMapper$Algorithm, "EC"_s, "SHA1withECDSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA224, $$new($JCEMapper$Algorithm, "EC"_s, "SHA224withECDSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA256, $$new($JCEMapper$Algorithm, "EC"_s, "SHA256withECDSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA384, $$new($JCEMapper$Algorithm, "EC"_s, "SHA384withECDSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA512, $$new($JCEMapper$Algorithm, "EC"_s, "SHA512withECDSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_SIGNATURE_ECDSA_RIPEMD160, $$new($JCEMapper$Algorithm, "EC"_s, "RIPEMD160withECDSA"_s, "Signature"_s));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5, $$new($JCEMapper$Algorithm, ""_s, "HmacMD5"_s, "Mac"_s, 0, 0));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_MAC_HMAC_RIPEMD160, $$new($JCEMapper$Algorithm, ""_s, "HMACRIPEMD160"_s, "Mac"_s, 0, 0));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_MAC_HMAC_SHA1, $$new($JCEMapper$Algorithm, ""_s, "HmacSHA1"_s, "Mac"_s, 0, 0));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_MAC_HMAC_SHA224, $$new($JCEMapper$Algorithm, ""_s, "HmacSHA224"_s, "Mac"_s, 0, 0));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_MAC_HMAC_SHA256, $$new($JCEMapper$Algorithm, ""_s, "HmacSHA256"_s, "Mac"_s, 0, 0));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_MAC_HMAC_SHA384, $$new($JCEMapper$Algorithm, ""_s, "HmacSHA384"_s, "Mac"_s, 0, 0));
	$nc(JCEMapper::algorithmsMap)->put($XMLSignature::ALGO_ID_MAC_HMAC_SHA512, $$new($JCEMapper$Algorithm, ""_s, "HmacSHA512"_s, "Mac"_s, 0, 0));
}

$String* JCEMapper::translateURItoJCEID($String* algorithmURI) {
	$init(JCEMapper);
	$var($JCEMapper$Algorithm, algorithm, getAlgorithm(algorithmURI));
	if (algorithm != nullptr) {
		return algorithm->jceName;
	}
	return nullptr;
}

$String* JCEMapper::getAlgorithmClassFromURI($String* algorithmURI) {
	$init(JCEMapper);
	$var($JCEMapper$Algorithm, algorithm, getAlgorithm(algorithmURI));
	if (algorithm != nullptr) {
		return algorithm->algorithmClass;
	}
	return nullptr;
}

int32_t JCEMapper::getKeyLengthFromURI($String* algorithmURI) {
	$init(JCEMapper);
	$var($JCEMapper$Algorithm, algorithm, getAlgorithm(algorithmURI));
	if (algorithm != nullptr) {
		return algorithm->keyLength;
	}
	return 0;
}

int32_t JCEMapper::getIVLengthFromURI($String* algorithmURI) {
	$init(JCEMapper);
	$var($JCEMapper$Algorithm, algorithm, getAlgorithm(algorithmURI));
	if (algorithm != nullptr) {
		return algorithm->ivLength;
	}
	return 0;
}

$String* JCEMapper::getJCEKeyAlgorithmFromURI($String* algorithmURI) {
	$init(JCEMapper);
	$var($JCEMapper$Algorithm, algorithm, getAlgorithm(algorithmURI));
	if (algorithm != nullptr) {
		return algorithm->requiredKey;
	}
	return nullptr;
}

$String* JCEMapper::getJCEProviderFromURI($String* algorithmURI) {
	$init(JCEMapper);
	$var($JCEMapper$Algorithm, algorithm, getAlgorithm(algorithmURI));
	if (algorithm != nullptr) {
		return algorithm->jceProvider;
	}
	return nullptr;
}

$JCEMapper$Algorithm* JCEMapper::getAlgorithm($String* algorithmURI) {
	$init(JCEMapper);
	$nc(JCEMapper::LOG)->debug("Request for URI {}"_s, $$new($ObjectArray, {$of(algorithmURI)}));
	if (algorithmURI != nullptr) {
		return $cast($JCEMapper$Algorithm, $nc(JCEMapper::algorithmsMap)->get(algorithmURI));
	}
	return nullptr;
}

$String* JCEMapper::getProviderId() {
	$init(JCEMapper);
	return JCEMapper::providerName;
}

void JCEMapper::setProviderId($String* provider) {
	$init(JCEMapper);
	$JavaUtils::checkRegisterPermission();
	$assignStatic(JCEMapper::providerName, provider);
}

void clinit$JCEMapper($Class* class$) {
	$assignStatic(JCEMapper::LOG, $LoggerFactory::getLogger(JCEMapper::class$));
	$assignStatic(JCEMapper::algorithmsMap, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

JCEMapper::JCEMapper() {
}

$Class* JCEMapper::load$($String* name, bool initialize) {
	$loadClass(JCEMapper, name, initialize, &_JCEMapper_ClassInfo_, clinit$JCEMapper, allocate$JCEMapper);
	return class$;
}

$Class* JCEMapper::class$ = nullptr;

							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com