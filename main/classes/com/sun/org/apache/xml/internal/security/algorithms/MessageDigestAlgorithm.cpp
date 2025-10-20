#include <com/sun/org/apache/xml/internal/security/algorithms/MessageDigestAlgorithm.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/Algorithm.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/EncryptionConstants.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/MessageDigest.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/NoSuchProviderException.h>
#include <java/security/Provider.h>
#include <org/w3c/dom/Document.h>
#include <jcpp.h>

#undef ALGO_ID_DIGEST_NOT_RECOMMENDED_MD5
#undef ALGO_ID_DIGEST_RIPEMD160
#undef ALGO_ID_DIGEST_SHA1
#undef ALGO_ID_DIGEST_SHA224
#undef ALGO_ID_DIGEST_SHA256
#undef ALGO_ID_DIGEST_SHA384
#undef ALGO_ID_DIGEST_SHA512
#undef ALGO_ID_DIGEST_WHIRLPOOL
#undef _TAG_DIGESTMETHOD

using $Algorithm = ::com::sun::org::apache::xml::internal::security::algorithms::Algorithm;
using $JCEMapper = ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $EncryptionConstants = ::com::sun::org::apache::xml::internal::security::utils::EncryptionConstants;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $MessageDigest = ::java::security::MessageDigest;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $NoSuchProviderException = ::java::security::NoSuchProviderException;
using $Provider = ::java::security::Provider;
using $Document = ::org::w3c::dom::Document;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {

$FieldInfo _MessageDigestAlgorithm_FieldInfo_[] = {
	{"ALGO_ID_DIGEST_NOT_RECOMMENDED_MD5", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageDigestAlgorithm, ALGO_ID_DIGEST_NOT_RECOMMENDED_MD5)},
	{"ALGO_ID_DIGEST_SHA1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageDigestAlgorithm, ALGO_ID_DIGEST_SHA1)},
	{"ALGO_ID_DIGEST_SHA224", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageDigestAlgorithm, ALGO_ID_DIGEST_SHA224)},
	{"ALGO_ID_DIGEST_SHA256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageDigestAlgorithm, ALGO_ID_DIGEST_SHA256)},
	{"ALGO_ID_DIGEST_SHA384", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageDigestAlgorithm, ALGO_ID_DIGEST_SHA384)},
	{"ALGO_ID_DIGEST_SHA512", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageDigestAlgorithm, ALGO_ID_DIGEST_SHA512)},
	{"ALGO_ID_DIGEST_RIPEMD160", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageDigestAlgorithm, ALGO_ID_DIGEST_RIPEMD160)},
	{"ALGO_ID_DIGEST_WHIRLPOOL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageDigestAlgorithm, ALGO_ID_DIGEST_WHIRLPOOL)},
	{"ALGO_ID_DIGEST_SHA3_224", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageDigestAlgorithm, ALGO_ID_DIGEST_SHA3_224)},
	{"ALGO_ID_DIGEST_SHA3_256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageDigestAlgorithm, ALGO_ID_DIGEST_SHA3_256)},
	{"ALGO_ID_DIGEST_SHA3_384", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageDigestAlgorithm, ALGO_ID_DIGEST_SHA3_384)},
	{"ALGO_ID_DIGEST_SHA3_512", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(MessageDigestAlgorithm, ALGO_ID_DIGEST_SHA3_512)},
	{"algorithm", "Ljava/security/MessageDigest;", nullptr, $PRIVATE | $FINAL, $field(MessageDigestAlgorithm, algorithm)},
	{}
};

$MethodInfo _MessageDigestAlgorithm_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(MessageDigestAlgorithm::*)($Document*,$String*)>(&MessageDigestAlgorithm::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"digest", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(MessageDigestAlgorithm::*)()>(&MessageDigestAlgorithm::digest))},
	{"digest", "([B)[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(MessageDigestAlgorithm::*)($bytes*)>(&MessageDigestAlgorithm::digest))},
	{"digest", "([BII)I", nullptr, $PUBLIC, $method(static_cast<int32_t(MessageDigestAlgorithm::*)($bytes*,int32_t,int32_t)>(&MessageDigestAlgorithm::digest)), "java.security.DigestException"},
	{"getAlgorithm", "()Ljava/security/MessageDigest;", nullptr, $PUBLIC, $method(static_cast<$MessageDigest*(MessageDigestAlgorithm::*)()>(&MessageDigestAlgorithm::getAlgorithm))},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBaseNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDigestInstance", "(Ljava/lang/String;)Ljava/security/MessageDigest;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$MessageDigest*(*)($String*)>(&MessageDigestAlgorithm::getDigestInstance)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getDigestLength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(MessageDigestAlgorithm::*)()>(&MessageDigestAlgorithm::getDigestLength))},
	{"getInstance", "(Lorg/w3c/dom/Document;Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/algorithms/MessageDigestAlgorithm;", nullptr, $PUBLIC | $STATIC, $method(static_cast<MessageDigestAlgorithm*(*)($Document*,$String*)>(&MessageDigestAlgorithm::getInstance)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getJCEAlgorithmString", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(MessageDigestAlgorithm::*)()>(&MessageDigestAlgorithm::getJCEAlgorithmString))},
	{"getJCEProvider", "()Ljava/security/Provider;", nullptr, $PUBLIC, $method(static_cast<$Provider*(MessageDigestAlgorithm::*)()>(&MessageDigestAlgorithm::getJCEProvider))},
	{"isEqual", "([B[B)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($bytes*,$bytes*)>(&MessageDigestAlgorithm::isEqual))},
	{"reset", "()V", nullptr, $PUBLIC, $method(static_cast<void(MessageDigestAlgorithm::*)()>(&MessageDigestAlgorithm::reset))},
	{"update", "([B)V", nullptr, $PUBLIC, $method(static_cast<void(MessageDigestAlgorithm::*)($bytes*)>(&MessageDigestAlgorithm::update))},
	{"update", "(B)V", nullptr, $PUBLIC, $method(static_cast<void(MessageDigestAlgorithm::*)(int8_t)>(&MessageDigestAlgorithm::update))},
	{"update", "([BII)V", nullptr, $PUBLIC, $method(static_cast<void(MessageDigestAlgorithm::*)($bytes*,int32_t,int32_t)>(&MessageDigestAlgorithm::update))},
	{}
};

$ClassInfo _MessageDigestAlgorithm_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.MessageDigestAlgorithm",
	"com.sun.org.apache.xml.internal.security.algorithms.Algorithm",
	nullptr,
	_MessageDigestAlgorithm_FieldInfo_,
	_MessageDigestAlgorithm_MethodInfo_
};

$Object* allocate$MessageDigestAlgorithm($Class* clazz) {
	return $of($alloc(MessageDigestAlgorithm));
}


$String* MessageDigestAlgorithm::ALGO_ID_DIGEST_NOT_RECOMMENDED_MD5 = nullptr;

$String* MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA1 = nullptr;

$String* MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA224 = nullptr;

$String* MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA256 = nullptr;

$String* MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA384 = nullptr;

$String* MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA512 = nullptr;

$String* MessageDigestAlgorithm::ALGO_ID_DIGEST_RIPEMD160 = nullptr;
$String* MessageDigestAlgorithm::ALGO_ID_DIGEST_WHIRLPOOL = nullptr;
$String* MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA3_224 = nullptr;
$String* MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA3_256 = nullptr;
$String* MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA3_384 = nullptr;
$String* MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA3_512 = nullptr;

void MessageDigestAlgorithm::init$($Document* doc, $String* algorithmURI) {
	$Algorithm::init$(doc, algorithmURI);
	$set(this, algorithm, getDigestInstance(algorithmURI));
}

MessageDigestAlgorithm* MessageDigestAlgorithm::getInstance($Document* doc, $String* algorithmURI) {
	$init(MessageDigestAlgorithm);
	return $new(MessageDigestAlgorithm, doc, algorithmURI);
}

$MessageDigest* MessageDigestAlgorithm::getDigestInstance($String* algorithmURI) {
	$init(MessageDigestAlgorithm);
	$useLocalCurrentObjectStackCache();
	$var($String, algorithmID, $JCEMapper::translateURItoJCEID(algorithmURI));
	if (algorithmID == nullptr) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(algorithmURI)}));
		$throwNew($XMLSignatureException, "algorithms.NoSuchMap"_s, exArgs);
	}
	$var($MessageDigest, md, nullptr);
	$var($String, provider, $JCEMapper::getProviderId());
	try {
		if (provider == nullptr) {
			$assign(md, $MessageDigest::getInstance(algorithmID));
		} else {
			$assign(md, $MessageDigest::getInstance(algorithmID, provider));
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
	return md;
}

$MessageDigest* MessageDigestAlgorithm::getAlgorithm() {
	return this->algorithm;
}

bool MessageDigestAlgorithm::isEqual($bytes* digesta, $bytes* digestb) {
	$init(MessageDigestAlgorithm);
	return $MessageDigest::isEqual(digesta, digestb);
}

$bytes* MessageDigestAlgorithm::digest() {
	return $nc(this->algorithm)->digest();
}

$bytes* MessageDigestAlgorithm::digest($bytes* input) {
	return $nc(this->algorithm)->digest(input);
}

int32_t MessageDigestAlgorithm::digest($bytes* buf, int32_t offset, int32_t len) {
	return $nc(this->algorithm)->digest(buf, offset, len);
}

$String* MessageDigestAlgorithm::getJCEAlgorithmString() {
	return $nc(this->algorithm)->getAlgorithm();
}

$Provider* MessageDigestAlgorithm::getJCEProvider() {
	return $nc(this->algorithm)->getProvider();
}

int32_t MessageDigestAlgorithm::getDigestLength() {
	return $nc(this->algorithm)->getDigestLength();
}

void MessageDigestAlgorithm::reset() {
	$nc(this->algorithm)->reset();
}

void MessageDigestAlgorithm::update($bytes* input) {
	$nc(this->algorithm)->update(input);
}

void MessageDigestAlgorithm::update(int8_t input) {
	$nc(this->algorithm)->update(input);
}

void MessageDigestAlgorithm::update($bytes* buf, int32_t offset, int32_t len) {
	$nc(this->algorithm)->update(buf, offset, len);
}

$String* MessageDigestAlgorithm::getBaseNamespace() {
	$init($Constants);
	return $Constants::SignatureSpecNS;
}

$String* MessageDigestAlgorithm::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_DIGESTMETHOD;
}

MessageDigestAlgorithm::MessageDigestAlgorithm() {
}

void clinit$MessageDigestAlgorithm($Class* class$) {
	$init($Constants);
	$assignStatic(MessageDigestAlgorithm::ALGO_ID_DIGEST_NOT_RECOMMENDED_MD5, $str({$Constants::MoreAlgorithmsSpecNS, "md5"_s}));
	$assignStatic(MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA1, $str({$Constants::SignatureSpecNS, "sha1"_s}));
	$assignStatic(MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA224, $str({$Constants::MoreAlgorithmsSpecNS, "sha224"_s}));
	$init($EncryptionConstants);
	$assignStatic(MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA256, $str({$EncryptionConstants::EncryptionSpecNS, "sha256"_s}));
	$assignStatic(MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA384, $str({$Constants::MoreAlgorithmsSpecNS, "sha384"_s}));
	$assignStatic(MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA512, $str({$EncryptionConstants::EncryptionSpecNS, "sha512"_s}));
	$assignStatic(MessageDigestAlgorithm::ALGO_ID_DIGEST_RIPEMD160, $str({$EncryptionConstants::EncryptionSpecNS, "ripemd160"_s}));
	$assignStatic(MessageDigestAlgorithm::ALGO_ID_DIGEST_WHIRLPOOL, $str({$Constants::XML_DSIG_NS_MORE_07_05, "whirlpool"_s}));
	$assignStatic(MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA3_224, $str({$Constants::XML_DSIG_NS_MORE_07_05, "sha3-224"_s}));
	$assignStatic(MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA3_256, $str({$Constants::XML_DSIG_NS_MORE_07_05, "sha3-256"_s}));
	$assignStatic(MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA3_384, $str({$Constants::XML_DSIG_NS_MORE_07_05, "sha3-384"_s}));
	$assignStatic(MessageDigestAlgorithm::ALGO_ID_DIGEST_SHA3_512, $str({$Constants::XML_DSIG_NS_MORE_07_05, "sha3-512"_s}));
}

$Class* MessageDigestAlgorithm::load$($String* name, bool initialize) {
	$loadClass(MessageDigestAlgorithm, name, initialize, &_MessageDigestAlgorithm_ClassInfo_, clinit$MessageDigestAlgorithm, allocate$MessageDigestAlgorithm);
	return class$;
}

$Class* MessageDigestAlgorithm::class$ = nullptr;

							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com