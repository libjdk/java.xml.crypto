#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>

#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/InvalidKeyException.h>
#include <java/security/Key.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/PrivateKey.h>
#include <java/security/Provider.h>
#include <java/security/PublicKey.h>
#include <java/security/Signature.h>
#include <java/security/SignatureException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <javax/xml/crypto/dsig/SignedInfo.h>
#include <javax/xml/crypto/dsig/XMLSignContext.h>
#include <javax/xml/crypto/dsig/XMLSignatureException.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <javax/xml/crypto/dsig/spec/SignatureMethodParameterSpec.h>
#include <org/jcp/xml/dsig/internal/SignerOutputStream.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$RIPEMD160.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA1.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA224.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA256.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA384.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA512.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMRSAPSSSignatureMethod$RSAPSS.h>
#include <org/jcp/xml/dsig/internal/dom/DOMRSAPSSSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractDSASignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractECDSASignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractP1363FormatSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractRSAPSSSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$AbstractRSASignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$RIPEMD160withECDSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$RIPEMD160withRSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$RIPEMD160withRSAandMGF1.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA1withDSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA1withECDSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA1withRSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA1withRSAandMGF1.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA224withECDSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA224withRSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA224withRSAandMGF1.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA256withDSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA256withECDSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA256withRSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA256withRSAandMGF1.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA384withECDSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA384withRSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA384withRSAandMGF1.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA512withECDSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA512withRSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod$SHA512withRSAandMGF1.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignedInfo.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/jcp/xml/dsig/internal/dom/Policy.h>
#include <org/jcp/xml/dsig/internal/dom/Utils.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <sun/security/util/KeyUtil.h>
#include <jcpp.h>

#undef DOM_SIGNATURE_PROVIDER
#undef DSA_SHA1
#undef DSA_SHA256
#undef ECDSA_RIPEMD160
#undef ECDSA_SHA1
#undef ECDSA_SHA224
#undef ECDSA_SHA256
#undef ECDSA_SHA384
#undef ECDSA_SHA512
#undef HMAC_RIPEMD160
#undef HMAC_SHA1
#undef HMAC_SHA224
#undef HMAC_SHA256
#undef HMAC_SHA384
#undef HMAC_SHA512
#undef LOG
#undef RSA_PSS
#undef RSA_RIPEMD160
#undef RSA_SHA1
#undef RSA_SHA1_MGF1
#undef RSA_SHA224
#undef RSA_SHA256
#undef RSA_SHA384
#undef RSA_SHA512

using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $InvalidKeyException = ::java::security::InvalidKeyException;
using $Key = ::java::security::Key;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $PrivateKey = ::java::security::PrivateKey;
using $Provider = ::java::security::Provider;
using $PublicKey = ::java::security::PublicKey;
using $Signature = ::java::security::Signature;
using $SignatureException = ::java::security::SignatureException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $SignatureMethod = ::javax::xml::crypto::dsig::SignatureMethod;
using $SignedInfo = ::javax::xml::crypto::dsig::SignedInfo;
using $XMLSignContext = ::javax::xml::crypto::dsig::XMLSignContext;
using $XMLSignatureException = ::javax::xml::crypto::dsig::XMLSignatureException;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;
using $SignatureMethodParameterSpec = ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec;
using $SignerOutputStream = ::org::jcp::xml::dsig::internal::SignerOutputStream;
using $AbstractDOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod;
using $DOMHMACSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod;
using $DOMHMACSignatureMethod$RIPEMD160 = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$RIPEMD160;
using $DOMHMACSignatureMethod$SHA1 = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA1;
using $DOMHMACSignatureMethod$SHA224 = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA224;
using $DOMHMACSignatureMethod$SHA256 = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA256;
using $DOMHMACSignatureMethod$SHA384 = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA384;
using $DOMHMACSignatureMethod$SHA512 = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA512;
using $DOMRSAPSSSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMRSAPSSSignatureMethod;
using $DOMRSAPSSSignatureMethod$RSAPSS = ::org::jcp::xml::dsig::internal::dom::DOMRSAPSSSignatureMethod$RSAPSS;
using $DOMSignatureMethod$AbstractDSASignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractDSASignatureMethod;
using $DOMSignatureMethod$AbstractECDSASignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractECDSASignatureMethod;
using $DOMSignatureMethod$AbstractP1363FormatSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractP1363FormatSignatureMethod;
using $DOMSignatureMethod$AbstractRSAPSSSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSAPSSSignatureMethod;
using $DOMSignatureMethod$AbstractRSASignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSASignatureMethod;
using $DOMSignatureMethod$RIPEMD160withECDSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$RIPEMD160withECDSA;
using $DOMSignatureMethod$RIPEMD160withRSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$RIPEMD160withRSA;
using $DOMSignatureMethod$RIPEMD160withRSAandMGF1 = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$RIPEMD160withRSAandMGF1;
using $DOMSignatureMethod$SHA1withDSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA1withDSA;
using $DOMSignatureMethod$SHA1withECDSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA1withECDSA;
using $DOMSignatureMethod$SHA1withRSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA1withRSA;
using $DOMSignatureMethod$SHA1withRSAandMGF1 = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA1withRSAandMGF1;
using $DOMSignatureMethod$SHA224withECDSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA224withECDSA;
using $DOMSignatureMethod$SHA224withRSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA224withRSA;
using $DOMSignatureMethod$SHA224withRSAandMGF1 = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA224withRSAandMGF1;
using $DOMSignatureMethod$SHA256withDSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA256withDSA;
using $DOMSignatureMethod$SHA256withECDSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA256withECDSA;
using $DOMSignatureMethod$SHA256withRSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA256withRSA;
using $DOMSignatureMethod$SHA256withRSAandMGF1 = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA256withRSAandMGF1;
using $DOMSignatureMethod$SHA384withECDSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA384withECDSA;
using $DOMSignatureMethod$SHA384withRSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA384withRSA;
using $DOMSignatureMethod$SHA384withRSAandMGF1 = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA384withRSAandMGF1;
using $DOMSignatureMethod$SHA512withECDSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA512withECDSA;
using $DOMSignatureMethod$SHA512withRSA = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA512withRSA;
using $DOMSignatureMethod$SHA512withRSAandMGF1 = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA512withRSAandMGF1;
using $DOMSignedInfo = ::org::jcp::xml::dsig::internal::dom::DOMSignedInfo;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Policy = ::org::jcp::xml::dsig::internal::dom::Policy;
using $Utils = ::org::jcp::xml::dsig::internal::dom::Utils;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $KeyUtil = ::sun::security::util::KeyUtil;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMSignatureMethod_FieldInfo_[] = {
	{"DOM_SIGNATURE_PROVIDER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMSignatureMethod, DOM_SIGNATURE_PROVIDER)},
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMSignatureMethod, LOG)},
	{"params", "Ljavax/xml/crypto/dsig/spec/SignatureMethodParameterSpec;", nullptr, $PRIVATE, $field(DOMSignatureMethod, params)},
	{"signature", "Ljava/security/Signature;", nullptr, $PRIVATE, $field(DOMSignatureMethod, signature)},
	{"RSA_SHA224", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, RSA_SHA224)},
	{"RSA_SHA256", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, RSA_SHA256)},
	{"RSA_SHA384", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, RSA_SHA384)},
	{"RSA_SHA512", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, RSA_SHA512)},
	{"RSA_RIPEMD160", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, RSA_RIPEMD160)},
	{"ECDSA_SHA1", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, ECDSA_SHA1)},
	{"ECDSA_SHA224", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, ECDSA_SHA224)},
	{"ECDSA_SHA256", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, ECDSA_SHA256)},
	{"ECDSA_SHA384", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, ECDSA_SHA384)},
	{"ECDSA_SHA512", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, ECDSA_SHA512)},
	{"DSA_SHA256", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, DSA_SHA256)},
	{"ECDSA_RIPEMD160", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, ECDSA_RIPEMD160)},
	{"RSA_SHA1_MGF1", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, RSA_SHA1_MGF1)},
	{"RSA_SHA224_MGF1", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, RSA_SHA224_MGF1)},
	{"RSA_SHA256_MGF1", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, RSA_SHA256_MGF1)},
	{"RSA_SHA384_MGF1", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, RSA_SHA384_MGF1)},
	{"RSA_SHA512_MGF1", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, RSA_SHA512_MGF1)},
	{"RSA_RIPEMD160_MGF1", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMSignatureMethod, RSA_RIPEMD160_MGF1)},
	{}
};

$MethodInfo _DOMSignatureMethod_MethodInfo_[] = {
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod::*)($AlgorithmParameterSpec*)>(&DOMSignatureMethod::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMSignatureMethod::*)($Element*)>(&DOMSignatureMethod::init$)), "javax.xml.crypto.MarshalException"},
	{"checkKeySize", "(Ljavax/xml/crypto/XMLCryptoContext;Ljava/security/Key;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($XMLCryptoContext*,$Key*)>(&DOMSignatureMethod::checkKeySize)), "javax.xml.crypto.dsig.XMLSignatureException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $FINAL},
	{"getSignature", "(Ljava/security/Provider;)Ljava/security/Signature;", nullptr, 0, nullptr, "java.security.NoSuchAlgorithmException"},
	{"hashCode", "()I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"postSignFormat", "(Ljava/security/Key;[B)[B", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"preVerifyFormat", "(Ljava/security/Key;[B)[B", nullptr, $ABSTRACT, nullptr, "java.io.IOException"},
	{"sign", "(Ljava/security/Key;Ljavax/xml/crypto/dsig/SignedInfo;Ljavax/xml/crypto/dsig/XMLSignContext;)[B", nullptr, 0, nullptr, "java.security.InvalidKeyException,javax.xml.crypto.dsig.XMLSignatureException"},
	{"unmarshal", "(Lorg/w3c/dom/Element;)Ljavax/xml/crypto/dsig/SignatureMethod;", nullptr, $STATIC, $method(static_cast<$SignatureMethod*(*)($Element*)>(&DOMSignatureMethod::unmarshal)), "javax.xml.crypto.MarshalException"},
	{"verify", "(Ljava/security/Key;Ljavax/xml/crypto/dsig/SignedInfo;[BLjavax/xml/crypto/dsig/XMLValidateContext;)Z", nullptr, 0, nullptr, "java.security.InvalidKeyException,java.security.SignatureException,javax.xml.crypto.dsig.XMLSignatureException"},
	{}
};

$InnerClassInfo _DOMSignatureMethod_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$RIPEMD160withECDSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "RIPEMD160withECDSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA512withECDSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA512withECDSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA384withECDSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA384withECDSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withECDSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA256withECDSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA224withECDSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA224withECDSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withECDSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA1withECDSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withDSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA256withDSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withDSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA1withDSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$RIPEMD160withRSAandMGF1", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "RIPEMD160withRSAandMGF1", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA512withRSAandMGF1", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA512withRSAandMGF1", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA384withRSAandMGF1", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA384withRSAandMGF1", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withRSAandMGF1", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA256withRSAandMGF1", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA224withRSAandMGF1", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA224withRSAandMGF1", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withRSAandMGF1", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA1withRSAandMGF1", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$RIPEMD160withRSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "RIPEMD160withRSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA512withRSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA512withRSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA384withRSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA384withRSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withRSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA256withRSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA224withRSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA224withRSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withRSA", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "SHA1withRSA", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractECDSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractECDSASignatureMethod", $STATIC | $ABSTRACT},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractDSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractDSASignatureMethod", $STATIC | $ABSTRACT},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractP1363FormatSignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractP1363FormatSignatureMethod", $STATIC | $ABSTRACT},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSAPSSSignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractRSAPSSSignatureMethod", $STATIC | $ABSTRACT},
	{"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod", "org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", "AbstractRSASignatureMethod", $STATIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMSignatureMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod",
	"org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod",
	nullptr,
	_DOMSignatureMethod_FieldInfo_,
	_DOMSignatureMethod_MethodInfo_,
	nullptr,
	nullptr,
	_DOMSignatureMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$RIPEMD160withECDSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA512withECDSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA384withECDSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withECDSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA224withECDSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withECDSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withDSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withDSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$RIPEMD160withRSAandMGF1,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA512withRSAandMGF1,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA384withRSAandMGF1,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withRSAandMGF1,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA224withRSAandMGF1,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withRSAandMGF1,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$RIPEMD160withRSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA512withRSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA384withRSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withRSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA224withRSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withRSA,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractECDSASignatureMethod,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractDSASignatureMethod,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractP1363FormatSignatureMethod,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSAPSSSignatureMethod,org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod"
};

$Object* allocate$DOMSignatureMethod($Class* clazz) {
	return $of($alloc(DOMSignatureMethod));
}

$String* DOMSignatureMethod::DOM_SIGNATURE_PROVIDER = nullptr;
$Logger* DOMSignatureMethod::LOG = nullptr;
$String* DOMSignatureMethod::RSA_SHA224 = nullptr;
$String* DOMSignatureMethod::RSA_SHA256 = nullptr;
$String* DOMSignatureMethod::RSA_SHA384 = nullptr;
$String* DOMSignatureMethod::RSA_SHA512 = nullptr;
$String* DOMSignatureMethod::RSA_RIPEMD160 = nullptr;
$String* DOMSignatureMethod::ECDSA_SHA1 = nullptr;
$String* DOMSignatureMethod::ECDSA_SHA224 = nullptr;
$String* DOMSignatureMethod::ECDSA_SHA256 = nullptr;
$String* DOMSignatureMethod::ECDSA_SHA384 = nullptr;
$String* DOMSignatureMethod::ECDSA_SHA512 = nullptr;
$String* DOMSignatureMethod::DSA_SHA256 = nullptr;
$String* DOMSignatureMethod::ECDSA_RIPEMD160 = nullptr;
$String* DOMSignatureMethod::RSA_SHA1_MGF1 = nullptr;
$String* DOMSignatureMethod::RSA_SHA224_MGF1 = nullptr;
$String* DOMSignatureMethod::RSA_SHA256_MGF1 = nullptr;
$String* DOMSignatureMethod::RSA_SHA384_MGF1 = nullptr;
$String* DOMSignatureMethod::RSA_SHA512_MGF1 = nullptr;
$String* DOMSignatureMethod::RSA_RIPEMD160_MGF1 = nullptr;

void DOMSignatureMethod::init$($AlgorithmParameterSpec* params) {
	$AbstractDOMSignatureMethod::init$();
	if (params != nullptr && !($instanceOf($SignatureMethodParameterSpec, params))) {
		$throwNew($InvalidAlgorithmParameterException, "params must be of type SignatureMethodParameterSpec"_s);
	}
	checkParams($cast($SignatureMethodParameterSpec, params));
	$set(this, params, $cast($SignatureMethodParameterSpec, params));
}

void DOMSignatureMethod::init$($Element* smElem) {
	$AbstractDOMSignatureMethod::init$();
	$var($Element, paramsElem, $DOMUtils::getFirstChildElement(smElem));
	if (paramsElem != nullptr) {
		$set(this, params, unmarshalParams(paramsElem));
	}
	try {
		checkParams(this->params);
	} catch ($InvalidAlgorithmParameterException&) {
		$var($InvalidAlgorithmParameterException, iape, $catch());
		$throwNew($MarshalException, static_cast<$Throwable*>(iape));
	}
}

$SignatureMethod* DOMSignatureMethod::unmarshal($Element* smElem) {
	$init(DOMSignatureMethod);
	$var($String, alg, $DOMUtils::getAttributeValue(smElem, "Algorithm"_s));
	$init($SignatureMethod);
	if ($nc(alg)->equals($SignatureMethod::RSA_SHA1)) {
		return $new($DOMSignatureMethod$SHA1withRSA, smElem);
	} else {
		if (alg->equals(DOMSignatureMethod::RSA_SHA224)) {
			return $new($DOMSignatureMethod$SHA224withRSA, smElem);
		} else {
			if (alg->equals(DOMSignatureMethod::RSA_SHA256)) {
				return $new($DOMSignatureMethod$SHA256withRSA, smElem);
			} else {
				if (alg->equals(DOMSignatureMethod::RSA_SHA384)) {
					return $new($DOMSignatureMethod$SHA384withRSA, smElem);
				} else {
					if (alg->equals(DOMSignatureMethod::RSA_SHA512)) {
						return $new($DOMSignatureMethod$SHA512withRSA, smElem);
					} else {
						if (alg->equals(DOMSignatureMethod::RSA_RIPEMD160)) {
							return $new($DOMSignatureMethod$RIPEMD160withRSA, smElem);
						} else {
							if (alg->equals(DOMSignatureMethod::RSA_SHA1_MGF1)) {
								return $new($DOMSignatureMethod$SHA1withRSAandMGF1, smElem);
							} else {
								if (alg->equals(DOMSignatureMethod::RSA_SHA224_MGF1)) {
									return $new($DOMSignatureMethod$SHA224withRSAandMGF1, smElem);
								} else {
									if (alg->equals(DOMSignatureMethod::RSA_SHA256_MGF1)) {
										return $new($DOMSignatureMethod$SHA256withRSAandMGF1, smElem);
									} else {
										if (alg->equals(DOMSignatureMethod::RSA_SHA384_MGF1)) {
											return $new($DOMSignatureMethod$SHA384withRSAandMGF1, smElem);
										} else {
											if (alg->equals(DOMSignatureMethod::RSA_SHA512_MGF1)) {
												return $new($DOMSignatureMethod$SHA512withRSAandMGF1, smElem);
											} else {
												$init($DOMRSAPSSSignatureMethod);
												if (alg->equals($DOMRSAPSSSignatureMethod::RSA_PSS)) {
													return $new($DOMRSAPSSSignatureMethod$RSAPSS, smElem);
												} else {
													if (alg->equals(DOMSignatureMethod::RSA_RIPEMD160_MGF1)) {
														return $new($DOMSignatureMethod$RIPEMD160withRSAandMGF1, smElem);
													} else {
														if (alg->equals($SignatureMethod::DSA_SHA1)) {
															return $new($DOMSignatureMethod$SHA1withDSA, smElem);
														} else {
															if (alg->equals(DOMSignatureMethod::DSA_SHA256)) {
																return $new($DOMSignatureMethod$SHA256withDSA, smElem);
															} else {
																if (alg->equals(DOMSignatureMethod::ECDSA_SHA1)) {
																	return $new($DOMSignatureMethod$SHA1withECDSA, smElem);
																} else {
																	if (alg->equals(DOMSignatureMethod::ECDSA_SHA224)) {
																		return $new($DOMSignatureMethod$SHA224withECDSA, smElem);
																	} else {
																		if (alg->equals(DOMSignatureMethod::ECDSA_SHA256)) {
																			return $new($DOMSignatureMethod$SHA256withECDSA, smElem);
																		} else {
																			if (alg->equals(DOMSignatureMethod::ECDSA_SHA384)) {
																				return $new($DOMSignatureMethod$SHA384withECDSA, smElem);
																			} else {
																				if (alg->equals(DOMSignatureMethod::ECDSA_SHA512)) {
																					return $new($DOMSignatureMethod$SHA512withECDSA, smElem);
																				} else {
																					if (alg->equals(DOMSignatureMethod::ECDSA_RIPEMD160)) {
																						return $new($DOMSignatureMethod$RIPEMD160withECDSA, smElem);
																					} else {
																						if (alg->equals($SignatureMethod::HMAC_SHA1)) {
																							return $new($DOMHMACSignatureMethod$SHA1, smElem);
																						} else {
																							$init($DOMHMACSignatureMethod);
																							if (alg->equals($DOMHMACSignatureMethod::HMAC_SHA224)) {
																								return $new($DOMHMACSignatureMethod$SHA224, smElem);
																							} else {
																								if (alg->equals($DOMHMACSignatureMethod::HMAC_SHA256)) {
																									return $new($DOMHMACSignatureMethod$SHA256, smElem);
																								} else {
																									if (alg->equals($DOMHMACSignatureMethod::HMAC_SHA384)) {
																										return $new($DOMHMACSignatureMethod$SHA384, smElem);
																									} else {
																										if (alg->equals($DOMHMACSignatureMethod::HMAC_SHA512)) {
																											return $new($DOMHMACSignatureMethod$SHA512, smElem);
																										} else {
																											if (alg->equals($DOMHMACSignatureMethod::HMAC_RIPEMD160)) {
																												return $new($DOMHMACSignatureMethod$RIPEMD160, smElem);
																											} else {
																												$throwNew($MarshalException, $$str({"unsupported SignatureMethod algorithm: "_s, alg}));
																											}
																										}
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

$AlgorithmParameterSpec* DOMSignatureMethod::getParameterSpec() {
	return this->params;
}

$Signature* DOMSignatureMethod::getSignature($Provider* p) {
	return (p == nullptr) ? $Signature::getInstance($(getJCAAlgorithm())) : $Signature::getInstance($(getJCAAlgorithm()), p);
}

bool DOMSignatureMethod::verify($Key* key, $SignedInfo* si, $bytes* sig, $XMLValidateContext* context) {
	if (key == nullptr || si == nullptr || sig == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($PublicKey, key))) {
		$throwNew($InvalidKeyException, "key must be PublicKey"_s);
	}
	checkKeySize(context, key);
	if (this->signature == nullptr) {
		$var($Provider, p, $cast($Provider, $nc(context)->getProperty(DOMSignatureMethod::DOM_SIGNATURE_PROVIDER)));
		try {
			$set(this, signature, getSignature(p));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$throwNew($XMLSignatureException, static_cast<$Throwable*>(nsae));
		}
	}
	$nc(this->signature)->initVerify($cast($PublicKey, key));
	$nc(DOMSignatureMethod::LOG)->debug("Signature provider: {}"_s, $$new($ObjectArray, {$($of($nc(this->signature)->getProvider()))}));
	$nc(DOMSignatureMethod::LOG)->debug("Verifying with key: {}"_s, $$new($ObjectArray, {$of(key)}));
	$nc(DOMSignatureMethod::LOG)->debug("JCA Algorithm: {}"_s, $$new($ObjectArray, {$($of(getJCAAlgorithm()))}));
	$nc(DOMSignatureMethod::LOG)->debug("Signature Bytes length: {}"_s, $$new($ObjectArray, {$($of($Integer::valueOf($nc(sig)->length)))}));
	$var($bytes, s, nullptr);
	try {
		$var($SignerOutputStream, outputStream, $new($SignerOutputStream, this->signature));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(($cast($DOMSignedInfo, si)))->canonicalize(context, outputStream);
					$assign(s, preVerifyFormat(key, sig));
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						outputStream->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				outputStream->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($IOException&) {
		$var($IOException, ioe, $catch());
		$throwNew($XMLSignatureException, static_cast<$Throwable*>(ioe));
	}
	return $nc(this->signature)->verify(s);
}

void DOMSignatureMethod::checkKeySize($XMLCryptoContext* context, $Key* key) {
	$init(DOMSignatureMethod);
	if ($Utils::secureValidation(context)) {
		int32_t size = $KeyUtil::getKeySize(key);
		if (size == -1) {
			$nc(DOMSignatureMethod::LOG)->debug($$str({"Size for "_s, $($nc(key)->getAlgorithm()), " key cannot be determined"_s}));
			return;
		}
		if ($Policy::restrictKey($($nc(key)->getAlgorithm()), size)) {
			$var($String, var$1, $$str({$($nc(key)->getAlgorithm()), " keys less than "_s}));
			$var($String, var$0, $$concat(var$1, $$str($Policy::minKeySize($(key->getAlgorithm())))));
			$throwNew($XMLSignatureException, $$concat(var$0, " bits are forbidden when secure validation is enabled"));
		}
	}
}

$bytes* DOMSignatureMethod::sign($Key* key, $SignedInfo* si, $XMLSignContext* context) {
	if (key == nullptr || si == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($PrivateKey, key))) {
		$throwNew($InvalidKeyException, "key must be PrivateKey"_s);
	}
	checkKeySize(context, key);
	if (this->signature == nullptr) {
		$var($Provider, p, $cast($Provider, $nc(context)->getProperty(DOMSignatureMethod::DOM_SIGNATURE_PROVIDER)));
		try {
			$set(this, signature, getSignature(p));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$throwNew($XMLSignatureException, static_cast<$Throwable*>(nsae));
		}
	}
	$nc(this->signature)->initSign($cast($PrivateKey, key));
	$nc(DOMSignatureMethod::LOG)->debug("Signature provider: {}"_s, $$new($ObjectArray, {$($of($nc(this->signature)->getProvider()))}));
	$nc(DOMSignatureMethod::LOG)->debug("Signing with key: {}"_s, $$new($ObjectArray, {$of(key)}));
	$nc(DOMSignatureMethod::LOG)->debug("JCA Algorithm: {}"_s, $$new($ObjectArray, {$($of(getJCAAlgorithm()))}));
	try {
		$var($SignerOutputStream, outputStream, $new($SignerOutputStream, this->signature));
		{
			$var($Throwable, var$0, nullptr);
			$var($bytes, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$nc(($cast($DOMSignedInfo, si)))->canonicalize(context, outputStream);
					$assign(var$2, postSignFormat(key, $($nc(this->signature)->sign())));
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						outputStream->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				outputStream->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($SignatureException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Throwable*>(ex));
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

int32_t DOMSignatureMethod::hashCode() {
	return $AbstractDOMSignatureMethod::hashCode();
}

bool DOMSignatureMethod::equals(Object$* o) {
	return $AbstractDOMSignatureMethod::equals(o);
}

void DOMSignatureMethod::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$AbstractDOMSignatureMethod::marshal(parent, dsPrefix, context);
}

void clinit$DOMSignatureMethod($Class* class$) {
	$assignStatic(DOMSignatureMethod::DOM_SIGNATURE_PROVIDER, "org.jcp.xml.dsig.internal.dom.SignatureProvider"_s);
	$assignStatic(DOMSignatureMethod::RSA_SHA224, "http://www.w3.org/2001/04/xmldsig-more#rsa-sha224"_s);
	$assignStatic(DOMSignatureMethod::RSA_SHA256, "http://www.w3.org/2001/04/xmldsig-more#rsa-sha256"_s);
	$assignStatic(DOMSignatureMethod::RSA_SHA384, "http://www.w3.org/2001/04/xmldsig-more#rsa-sha384"_s);
	$assignStatic(DOMSignatureMethod::RSA_SHA512, "http://www.w3.org/2001/04/xmldsig-more#rsa-sha512"_s);
	$assignStatic(DOMSignatureMethod::RSA_RIPEMD160, "http://www.w3.org/2001/04/xmldsig-more#rsa-ripemd160"_s);
	$assignStatic(DOMSignatureMethod::ECDSA_SHA1, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha1"_s);
	$assignStatic(DOMSignatureMethod::ECDSA_SHA224, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha224"_s);
	$assignStatic(DOMSignatureMethod::ECDSA_SHA256, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha256"_s);
	$assignStatic(DOMSignatureMethod::ECDSA_SHA384, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha384"_s);
	$assignStatic(DOMSignatureMethod::ECDSA_SHA512, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha512"_s);
	$assignStatic(DOMSignatureMethod::DSA_SHA256, "http://www.w3.org/2009/xmldsig11#dsa-sha256"_s);
	$assignStatic(DOMSignatureMethod::ECDSA_RIPEMD160, "http://www.w3.org/2007/05/xmldsig-more#ecdsa-ripemd160"_s);
	$assignStatic(DOMSignatureMethod::RSA_SHA1_MGF1, "http://www.w3.org/2007/05/xmldsig-more#sha1-rsa-MGF1"_s);
	$assignStatic(DOMSignatureMethod::RSA_SHA224_MGF1, "http://www.w3.org/2007/05/xmldsig-more#sha224-rsa-MGF1"_s);
	$assignStatic(DOMSignatureMethod::RSA_SHA256_MGF1, "http://www.w3.org/2007/05/xmldsig-more#sha256-rsa-MGF1"_s);
	$assignStatic(DOMSignatureMethod::RSA_SHA384_MGF1, "http://www.w3.org/2007/05/xmldsig-more#sha384-rsa-MGF1"_s);
	$assignStatic(DOMSignatureMethod::RSA_SHA512_MGF1, "http://www.w3.org/2007/05/xmldsig-more#sha512-rsa-MGF1"_s);
	$assignStatic(DOMSignatureMethod::RSA_RIPEMD160_MGF1, "http://www.w3.org/2007/05/xmldsig-more#ripemd160-rsa-MGF1"_s);
	$assignStatic(DOMSignatureMethod::LOG, $LoggerFactory::getLogger(DOMSignatureMethod::class$));
}

DOMSignatureMethod::DOMSignatureMethod() {
}

$Class* DOMSignatureMethod::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureMethod, name, initialize, &_DOMSignatureMethod_ClassInfo_, clinit$DOMSignatureMethod, allocate$DOMSignatureMethod);
	return class$;
}

$Class* DOMSignatureMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org