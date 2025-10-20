#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/Algorithm.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacMD5.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacRIPEMD160.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacSHA1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacSHA224.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacSHA256.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacSHA384.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacSHA512.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSAMD5.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSARIPEMD160.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA1MGF1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA224.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA224MGF1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA256.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA256MGF1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA384.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA384MGF1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA3_224MGF1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA3_256MGF1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA3_384MGF1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA3_512MGF1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA512.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASHA512MGF1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureDSA$SHA256.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureDSA.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSARIPEMD160.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSASHA1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSASHA224.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSASHA256.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSASHA384.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSASHA512.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/AlgorithmAlreadyRegisteredException.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignature.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoSuchMethodException.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <java/security/Provider.h>
#include <java/security/SecureRandom.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

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
#undef _ATT_ALGORITHM
#undef _TAG_SIGNATUREMETHOD

using $Algorithm = ::com::sun::org::apache::xml::internal::security::algorithms::Algorithm;
using $ClassLoaderUtils = ::com::sun::org::apache::xml::internal::security::algorithms::ClassLoaderUtils;
using $SignatureAlgorithmSpi = ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithmSpi;
using $IntegrityHmac = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac;
using $IntegrityHmac$IntegrityHmacMD5 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacMD5;
using $IntegrityHmac$IntegrityHmacRIPEMD160 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacRIPEMD160;
using $IntegrityHmac$IntegrityHmacSHA1 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacSHA1;
using $IntegrityHmac$IntegrityHmacSHA224 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacSHA224;
using $IntegrityHmac$IntegrityHmacSHA256 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacSHA256;
using $IntegrityHmac$IntegrityHmacSHA384 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacSHA384;
using $IntegrityHmac$IntegrityHmacSHA512 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacSHA512;
using $SignatureBaseRSA = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA;
using $SignatureBaseRSA$SignatureRSAMD5 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSAMD5;
using $SignatureBaseRSA$SignatureRSARIPEMD160 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSARIPEMD160;
using $SignatureBaseRSA$SignatureRSASHA1 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA1;
using $SignatureBaseRSA$SignatureRSASHA1MGF1 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA1MGF1;
using $SignatureBaseRSA$SignatureRSASHA224 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA224;
using $SignatureBaseRSA$SignatureRSASHA224MGF1 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA224MGF1;
using $SignatureBaseRSA$SignatureRSASHA256 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA256;
using $SignatureBaseRSA$SignatureRSASHA256MGF1 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA256MGF1;
using $SignatureBaseRSA$SignatureRSASHA384 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA384;
using $SignatureBaseRSA$SignatureRSASHA384MGF1 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA384MGF1;
using $SignatureBaseRSA$SignatureRSASHA3_224MGF1 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA3_224MGF1;
using $SignatureBaseRSA$SignatureRSASHA3_256MGF1 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA3_256MGF1;
using $SignatureBaseRSA$SignatureRSASHA3_384MGF1 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA3_384MGF1;
using $SignatureBaseRSA$SignatureRSASHA3_512MGF1 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA3_512MGF1;
using $SignatureBaseRSA$SignatureRSASHA512 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA512;
using $SignatureBaseRSA$SignatureRSASHA512MGF1 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA512MGF1;
using $SignatureBaseRSA$SignatureRSASSAPSS = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS;
using $SignatureDSA = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureDSA;
using $SignatureDSA$SHA256 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureDSA$SHA256;
using $SignatureECDSA = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA;
using $SignatureECDSA$SignatureECDSARIPEMD160 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA$SignatureECDSARIPEMD160;
using $SignatureECDSA$SignatureECDSASHA1 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA$SignatureECDSASHA1;
using $SignatureECDSA$SignatureECDSASHA224 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA$SignatureECDSASHA224;
using $SignatureECDSA$SignatureECDSASHA256 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA$SignatureECDSASHA256;
using $SignatureECDSA$SignatureECDSASHA384 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA$SignatureECDSASHA384;
using $SignatureECDSA$SignatureECDSASHA512 = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA$SignatureECDSASHA512;
using $AlgorithmAlreadyRegisteredException = ::com::sun::org::apache::xml::internal::security::exceptions::AlgorithmAlreadyRegisteredException;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $XMLSignature = ::com::sun::org::apache::xml::internal::security::signature::XMLSignature;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $JavaUtils = ::com::sun::org::apache::xml::internal::security::utils::JavaUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoSuchMethodException = ::java::lang::NoSuchMethodException;
using $NullPointerException = ::java::lang::NullPointerException;
using $RuntimeException = ::java::lang::RuntimeException;
using $Constructor = ::java::lang::reflect::Constructor;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $Key = ::java::security::Key;
using $Provider = ::java::security::Provider;
using $SecureRandom = ::java::security::SecureRandom;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {

$FieldInfo _SignatureAlgorithm_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(SignatureAlgorithm, LOG)},
	{"algorithmHash", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<+Lcom/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi;>;>;", $PRIVATE | $STATIC, $staticField(SignatureAlgorithm, algorithmHash)},
	{"signatureAlgorithmSpi", "Lcom/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi;", nullptr, $PRIVATE | $FINAL, $field(SignatureAlgorithm, signatureAlgorithmSpi)},
	{"algorithmURI", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SignatureAlgorithm, algorithmURI)},
	{}
};

$MethodInfo _SignatureAlgorithm_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureAlgorithm::*)($Document*,$String*)>(&SignatureAlgorithm::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureAlgorithm::*)($Document*,$String*,$Provider*)>(&SignatureAlgorithm::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/security/Provider;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureAlgorithm::*)($Document*,$String*,$Provider*,$AlgorithmParameterSpec*)>(&SignatureAlgorithm::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureAlgorithm::*)($Document*,$String*,int32_t)>(&SignatureAlgorithm::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;ILjava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureAlgorithm::*)($Document*,$String*,int32_t,$Provider*)>(&SignatureAlgorithm::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureAlgorithm::*)($Element*,$String*)>(&SignatureAlgorithm::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureAlgorithm::*)($Element*,$String*,$Provider*)>(&SignatureAlgorithm::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureAlgorithm::*)($Element*,$String*,bool)>(&SignatureAlgorithm::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;ZLjava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureAlgorithm::*)($Element*,$String*,bool,$Provider*)>(&SignatureAlgorithm::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBaseNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getJCEAlgorithmString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getJCEProviderName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getSignatureAlgorithmSpi", "(Ljava/lang/String;Ljava/security/Provider;)Lcom/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$SignatureAlgorithmSpi*(*)($String*,$Provider*)>(&SignatureAlgorithm::getSignatureAlgorithmSpi)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $method(static_cast<$String*(SignatureAlgorithm::*)()>(&SignatureAlgorithm::getURI))},
	{"initSign", "(Ljava/security/Key;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"initSign", "(Ljava/security/Key;Ljava/security/SecureRandom;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"initSign", "(Ljava/security/Key;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"initVerify", "(Ljava/security/Key;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"register", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&SignatureAlgorithm::register$)), "com.sun.org.apache.xml.internal.security.exceptions.AlgorithmAlreadyRegisteredException,java.lang.ClassNotFoundException,com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"register", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<+Lcom/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$Class*)>(&SignatureAlgorithm::register$)), "com.sun.org.apache.xml.internal.security.exceptions.AlgorithmAlreadyRegisteredException,java.lang.ClassNotFoundException,com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"registerDefaultAlgorithms", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&SignatureAlgorithm::registerDefaultAlgorithms))},
	{"setParameter", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"sign", "()[B", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"update", "([B)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"update", "(B)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"update", "([BII)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"verify", "([B)Z", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{}
};

$ClassInfo _SignatureAlgorithm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.algorithms.SignatureAlgorithm",
	"com.sun.org.apache.xml.internal.security.algorithms.Algorithm",
	nullptr,
	_SignatureAlgorithm_FieldInfo_,
	_SignatureAlgorithm_MethodInfo_
};

$Object* allocate$SignatureAlgorithm($Class* clazz) {
	return $of($alloc(SignatureAlgorithm));
}

$Logger* SignatureAlgorithm::LOG = nullptr;

$Map* SignatureAlgorithm::algorithmHash = nullptr;

void SignatureAlgorithm::init$($Document* doc, $String* algorithmURI) {
	SignatureAlgorithm::init$(doc, algorithmURI, ($Provider*)nullptr);
}

void SignatureAlgorithm::init$($Document* doc, $String* algorithmURI, $Provider* provider) {
	SignatureAlgorithm::init$(doc, algorithmURI, provider, ($AlgorithmParameterSpec*)nullptr);
}

void SignatureAlgorithm::init$($Document* doc, $String* algorithmURI, $Provider* provider, $AlgorithmParameterSpec* parameterSpec) {
	$Algorithm::init$(doc, algorithmURI);
	$set(this, algorithmURI, algorithmURI);
	$set(this, signatureAlgorithmSpi, getSignatureAlgorithmSpi(algorithmURI, provider));
	if (parameterSpec != nullptr) {
		$nc(this->signatureAlgorithmSpi)->engineSetParameter(parameterSpec);
		$nc(this->signatureAlgorithmSpi)->engineAddContextToElement($(getElement()));
	}
}

void SignatureAlgorithm::init$($Document* doc, $String* algorithmURI, int32_t hmacOutputLength) {
	SignatureAlgorithm::init$(doc, algorithmURI, hmacOutputLength, ($Provider*)nullptr);
}

void SignatureAlgorithm::init$($Document* doc, $String* algorithmURI, int32_t hmacOutputLength, $Provider* provider) {
	$Algorithm::init$(doc, algorithmURI);
	$set(this, algorithmURI, algorithmURI);
	$set(this, signatureAlgorithmSpi, getSignatureAlgorithmSpi(algorithmURI, provider));
	$nc(this->signatureAlgorithmSpi)->engineSetHMACOutputLength(hmacOutputLength);
	$nc(this->signatureAlgorithmSpi)->engineAddContextToElement($(getElement()));
}

void SignatureAlgorithm::init$($Element* element, $String* baseURI) {
	SignatureAlgorithm::init$(element, baseURI, true, ($Provider*)nullptr);
}

void SignatureAlgorithm::init$($Element* element, $String* baseURI, $Provider* provider) {
	SignatureAlgorithm::init$(element, baseURI, true, provider);
}

void SignatureAlgorithm::init$($Element* element, $String* baseURI, bool secureValidation) {
	SignatureAlgorithm::init$(element, baseURI, secureValidation, ($Provider*)nullptr);
}

void SignatureAlgorithm::init$($Element* element, $String* baseURI, bool secureValidation, $Provider* provider) {
	$useLocalCurrentObjectStackCache();
	$Algorithm::init$(element, baseURI);
	$set(this, algorithmURI, this->getURI());
	$var($Attr, attr, $nc(element)->getAttributeNodeNS(nullptr, "Id"_s));
	if (attr != nullptr) {
		element->setIdAttributeNode(attr, true);
	}
	bool var$0 = secureValidation;
	if (var$0) {
		$init($XMLSignature);
		bool var$1 = $nc($XMLSignature::ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5)->equals(this->algorithmURI);
		var$0 = (var$1 || $nc($XMLSignature::ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5)->equals(this->algorithmURI));
	}
	if (var$0) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(this->algorithmURI)}));
		$throwNew($XMLSecurityException, "signature.signatureAlgorithm"_s, exArgs);
	}
	$set(this, signatureAlgorithmSpi, getSignatureAlgorithmSpi(this->algorithmURI, provider));
	$nc(this->signatureAlgorithmSpi)->engineGetContextFromElement($(getElement()));
}

$SignatureAlgorithmSpi* SignatureAlgorithm::getSignatureAlgorithmSpi($String* algorithmURI, $Provider* provider) {
	$init(SignatureAlgorithm);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	try {
		$Class* implementingClass = $cast($Class, $nc(SignatureAlgorithm::algorithmHash)->get(algorithmURI));
		$nc(SignatureAlgorithm::LOG)->debug("Create URI \"{}\" class \"{}\""_s, $$new($ObjectArray, {
			$of(algorithmURI),
			$of(implementingClass)
		}));
		if (implementingClass == nullptr) {
			$var($ObjectArray, exArgs, $new($ObjectArray, {$of(algorithmURI)}));
			$throwNew($XMLSignatureException, "algorithms.NoSuchAlgorithmNoEx"_s, exArgs);
		}
		if (provider != nullptr) {
			try {
				$load($Provider);
				$var($Constructor, constructor, $nc(implementingClass)->getConstructor($$new($ClassArray, {$Provider::class$})));
				return $cast($SignatureAlgorithmSpi, $nc(constructor)->newInstance($$new($ObjectArray, {$of(provider)})));
			} catch ($NoSuchMethodException&) {
				$var($NoSuchMethodException, e, $catch());
				$nc(SignatureAlgorithm::LOG)->warn("Class \"{}\" does not have a constructor with Provider"_s, $$new($ObjectArray, {$of(implementingClass)}));
			}
		}
		return $cast($SignatureAlgorithmSpi, $JavaUtils::newInstanceWithEmptyConstructor(implementingClass));
	} catch ($IllegalAccessException&) {
		$var($Exception, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmURI),
			$($of(ex->getMessage()))
		}));
		$throwNew($XMLSignatureException, ex, "algorithms.NoSuchAlgorithm"_s, exArgs);
	} catch ($InstantiationException&) {
		$var($Exception, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmURI),
			$($of(ex->getMessage()))
		}));
		$throwNew($XMLSignatureException, ex, "algorithms.NoSuchAlgorithm"_s, exArgs);
	} catch ($InvocationTargetException&) {
		$var($Exception, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmURI),
			$($of(ex->getMessage()))
		}));
		$throwNew($XMLSignatureException, ex, "algorithms.NoSuchAlgorithm"_s, exArgs);
	} catch ($NullPointerException&) {
		$var($Exception, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmURI),
			$($of(ex->getMessage()))
		}));
		$throwNew($XMLSignatureException, ex, "algorithms.NoSuchAlgorithm"_s, exArgs);
	}
	$shouldNotReachHere();
}

$bytes* SignatureAlgorithm::sign() {
	return $nc(this->signatureAlgorithmSpi)->engineSign();
}

$String* SignatureAlgorithm::getJCEAlgorithmString() {
	return $nc(this->signatureAlgorithmSpi)->engineGetJCEAlgorithmString();
}

$String* SignatureAlgorithm::getJCEProviderName() {
	return $nc(this->signatureAlgorithmSpi)->engineGetJCEProviderName();
}

void SignatureAlgorithm::update($bytes* input) {
	$nc(this->signatureAlgorithmSpi)->engineUpdate(input);
}

void SignatureAlgorithm::update(int8_t input) {
	$nc(this->signatureAlgorithmSpi)->engineUpdate(input);
}

void SignatureAlgorithm::update($bytes* buf, int32_t offset, int32_t len) {
	$nc(this->signatureAlgorithmSpi)->engineUpdate(buf, offset, len);
}

void SignatureAlgorithm::initSign($Key* signingKey) {
	$nc(this->signatureAlgorithmSpi)->engineInitSign(signingKey);
}

void SignatureAlgorithm::initSign($Key* signingKey, $SecureRandom* secureRandom) {
	$nc(this->signatureAlgorithmSpi)->engineInitSign(signingKey, secureRandom);
}

void SignatureAlgorithm::initSign($Key* signingKey, $AlgorithmParameterSpec* algorithmParameterSpec) {
	$nc(this->signatureAlgorithmSpi)->engineInitSign(signingKey, algorithmParameterSpec);
}

void SignatureAlgorithm::setParameter($AlgorithmParameterSpec* params) {
	$nc(this->signatureAlgorithmSpi)->engineSetParameter(params);
}

void SignatureAlgorithm::initVerify($Key* verificationKey) {
	$nc(this->signatureAlgorithmSpi)->engineInitVerify(verificationKey);
}

bool SignatureAlgorithm::verify($bytes* signature) {
	return $nc(this->signatureAlgorithmSpi)->engineVerify(signature);
}

$String* SignatureAlgorithm::getURI() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ALGORITHM);
}

void SignatureAlgorithm::register$($String* algorithmURI, $String* implementingClass) {
	$init(SignatureAlgorithm);
	$useLocalCurrentObjectStackCache();
	$JavaUtils::checkRegisterPermission();
	$nc(SignatureAlgorithm::LOG)->debug("Try to register {} {}"_s, $$new($ObjectArray, {
		$of(algorithmURI),
		$of(implementingClass)
	}));
	$Class* registeredClass = $cast($Class, $nc(SignatureAlgorithm::algorithmHash)->get(algorithmURI));
	if (registeredClass != nullptr) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmURI),
			$of(registeredClass)
		}));
		$throwNew($AlgorithmAlreadyRegisteredException, "algorithm.alreadyRegistered"_s, exArgs);
	}
	try {
		$Class* clazz = $ClassLoaderUtils::loadClass(implementingClass, SignatureAlgorithm::class$);
		$nc(SignatureAlgorithm::algorithmHash)->put(algorithmURI, clazz);
	} catch ($NullPointerException&) {
		$var($NullPointerException, ex, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmURI),
			$($of(ex->getMessage()))
		}));
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex), "algorithms.NoSuchAlgorithm"_s, exArgs);
	}
}

void SignatureAlgorithm::register$($String* algorithmURI, $Class* implementingClass) {
	$init(SignatureAlgorithm);
	$useLocalCurrentObjectStackCache();
	$JavaUtils::checkRegisterPermission();
	$nc(SignatureAlgorithm::LOG)->debug("Try to register {} {}"_s, $$new($ObjectArray, {
		$of(algorithmURI),
		$of(implementingClass)
	}));
	$Class* registeredClass = $cast($Class, $nc(SignatureAlgorithm::algorithmHash)->get(algorithmURI));
	if (registeredClass != nullptr) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmURI),
			$of(registeredClass)
		}));
		$throwNew($AlgorithmAlreadyRegisteredException, "algorithm.alreadyRegistered"_s, exArgs);
	}
	$nc(SignatureAlgorithm::algorithmHash)->put(algorithmURI, implementingClass);
}

void SignatureAlgorithm::registerDefaultAlgorithms() {
	$init(SignatureAlgorithm);
	$init($XMLSignature);
	$load($SignatureDSA);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_DSA, $SignatureDSA::class$);
	$load($SignatureDSA$SHA256);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_DSA_SHA256, $SignatureDSA$SHA256::class$);
	$load($SignatureBaseRSA$SignatureRSASHA1);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA1, $SignatureBaseRSA$SignatureRSASHA1::class$);
	$load($IntegrityHmac$IntegrityHmacSHA1);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_MAC_HMAC_SHA1, $IntegrityHmac$IntegrityHmacSHA1::class$);
	$load($SignatureBaseRSA$SignatureRSAMD5);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5, $SignatureBaseRSA$SignatureRSAMD5::class$);
	$load($SignatureBaseRSA$SignatureRSARIPEMD160);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_RIPEMD160, $SignatureBaseRSA$SignatureRSARIPEMD160::class$);
	$load($SignatureBaseRSA$SignatureRSASHA224);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA224, $SignatureBaseRSA$SignatureRSASHA224::class$);
	$load($SignatureBaseRSA$SignatureRSASHA256);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA256, $SignatureBaseRSA$SignatureRSASHA256::class$);
	$load($SignatureBaseRSA$SignatureRSASHA384);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA384, $SignatureBaseRSA$SignatureRSASHA384::class$);
	$load($SignatureBaseRSA$SignatureRSASHA512);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA512, $SignatureBaseRSA$SignatureRSASHA512::class$);
	$load($SignatureBaseRSA$SignatureRSASHA1MGF1);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA1_MGF1, $SignatureBaseRSA$SignatureRSASHA1MGF1::class$);
	$load($SignatureBaseRSA$SignatureRSASHA224MGF1);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA224_MGF1, $SignatureBaseRSA$SignatureRSASHA224MGF1::class$);
	$load($SignatureBaseRSA$SignatureRSASHA256MGF1);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA256_MGF1, $SignatureBaseRSA$SignatureRSASHA256MGF1::class$);
	$load($SignatureBaseRSA$SignatureRSASHA384MGF1);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA384_MGF1, $SignatureBaseRSA$SignatureRSASHA384MGF1::class$);
	$load($SignatureBaseRSA$SignatureRSASHA512MGF1);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA512_MGF1, $SignatureBaseRSA$SignatureRSASHA512MGF1::class$);
	$load($SignatureBaseRSA$SignatureRSASSAPSS);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_PSS, $SignatureBaseRSA$SignatureRSASSAPSS::class$);
	$load($SignatureBaseRSA$SignatureRSASHA3_224MGF1);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_224_MGF1, $SignatureBaseRSA$SignatureRSASHA3_224MGF1::class$);
	$load($SignatureBaseRSA$SignatureRSASHA3_256MGF1);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_256_MGF1, $SignatureBaseRSA$SignatureRSASHA3_256MGF1::class$);
	$load($SignatureBaseRSA$SignatureRSASHA3_384MGF1);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_384_MGF1, $SignatureBaseRSA$SignatureRSASHA3_384MGF1::class$);
	$load($SignatureBaseRSA$SignatureRSASHA3_512MGF1);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_512_MGF1, $SignatureBaseRSA$SignatureRSASHA3_512MGF1::class$);
	$load($SignatureECDSA$SignatureECDSASHA1);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA1, $SignatureECDSA$SignatureECDSASHA1::class$);
	$load($SignatureECDSA$SignatureECDSASHA224);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA224, $SignatureECDSA$SignatureECDSASHA224::class$);
	$load($SignatureECDSA$SignatureECDSASHA256);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA256, $SignatureECDSA$SignatureECDSASHA256::class$);
	$load($SignatureECDSA$SignatureECDSASHA384);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA384, $SignatureECDSA$SignatureECDSASHA384::class$);
	$load($SignatureECDSA$SignatureECDSASHA512);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA512, $SignatureECDSA$SignatureECDSASHA512::class$);
	$load($SignatureECDSA$SignatureECDSARIPEMD160);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_SIGNATURE_ECDSA_RIPEMD160, $SignatureECDSA$SignatureECDSARIPEMD160::class$);
	$load($IntegrityHmac$IntegrityHmacMD5);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5, $IntegrityHmac$IntegrityHmacMD5::class$);
	$load($IntegrityHmac$IntegrityHmacRIPEMD160);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_MAC_HMAC_RIPEMD160, $IntegrityHmac$IntegrityHmacRIPEMD160::class$);
	$load($IntegrityHmac$IntegrityHmacSHA224);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_MAC_HMAC_SHA224, $IntegrityHmac$IntegrityHmacSHA224::class$);
	$load($IntegrityHmac$IntegrityHmacSHA256);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_MAC_HMAC_SHA256, $IntegrityHmac$IntegrityHmacSHA256::class$);
	$load($IntegrityHmac$IntegrityHmacSHA384);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_MAC_HMAC_SHA384, $IntegrityHmac$IntegrityHmacSHA384::class$);
	$load($IntegrityHmac$IntegrityHmacSHA512);
	$nc(SignatureAlgorithm::algorithmHash)->put($XMLSignature::ALGO_ID_MAC_HMAC_SHA512, $IntegrityHmac$IntegrityHmacSHA512::class$);
}

$String* SignatureAlgorithm::getBaseNamespace() {
	$init($Constants);
	return $Constants::SignatureSpecNS;
}

$String* SignatureAlgorithm::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_SIGNATUREMETHOD;
}

void clinit$SignatureAlgorithm($Class* class$) {
	$assignStatic(SignatureAlgorithm::LOG, $LoggerFactory::getLogger(SignatureAlgorithm::class$));
	$assignStatic(SignatureAlgorithm::algorithmHash, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

SignatureAlgorithm::SignatureAlgorithm() {
}

$Class* SignatureAlgorithm::load$($String* name, bool initialize) {
	$loadClass(SignatureAlgorithm, name, initialize, &_SignatureAlgorithm_ClassInfo_, clinit$SignatureAlgorithm, allocate$SignatureAlgorithm);
	return class$;
}

$Class* SignatureAlgorithm::class$ = nullptr;

							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com