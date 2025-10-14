#include <com/sun/org/apache/xml/internal/security/signature/XMLSignature.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/KeyInfo.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/X509Data.h>
#include <com/sun/org/apache/xml/internal/security/signature/Manifest.h>
#include <com/sun/org/apache/xml/internal/security/signature/ObjectContainer.h>
#include <com/sun/org/apache/xml/internal/security/signature/SignatureProperties.h>
#include <com/sun/org/apache/xml/internal/security/signature/SignedInfo.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignerOutputStream.h>
#include <com/sun/org/apache/xml/internal/security/utils/UnsyncBufferedOutputStream.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <java/security/Provider.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/crypto/SecretKey.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef ALGO_ID_C14N_OMIT_COMMENTS
#undef ALGO_ID_DIGEST_SHA1
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
#undef ALGO_ID_SIGNATURE_RSA
#undef ALGO_ID_SIGNATURE_RSA_PSS
#undef ALGO_ID_SIGNATURE_RSA_RIPEMD160
#undef ALGO_ID_SIGNATURE_RSA_SHA1
#undef ALGO_ID_SIGNATURE_RSA_SHA1_MGF1
#undef ALGO_ID_SIGNATURE_RSA_SHA224
#undef ALGO_ID_SIGNATURE_RSA_SHA256
#undef ALGO_ID_SIGNATURE_RSA_SHA384
#undef ALGO_ID_SIGNATURE_RSA_SHA512
#undef ELEMENT_NODE
#undef LOG
#undef MODE_SIGN
#undef MODE_VERIFY
#undef _ATT_ID
#undef _TAG_KEYINFO
#undef _TAG_OBJECT
#undef _TAG_SIGNATURE
#undef _TAG_SIGNATUREVALUE
#undef _TAG_SIGNEDINFO

using $Algorithm = ::com::sun::org::apache::xml::internal::security::algorithms::Algorithm;
using $SignatureAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithm;
using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $KeyInfo = ::com::sun::org::apache::xml::internal::security::keys::KeyInfo;
using $X509Data = ::com::sun::org::apache::xml::internal::security::keys::content::X509Data;
using $Manifest = ::com::sun::org::apache::xml::internal::security::signature::Manifest;
using $ObjectContainer = ::com::sun::org::apache::xml::internal::security::signature::ObjectContainer;
using $SignatureProperties = ::com::sun::org::apache::xml::internal::security::signature::SignatureProperties;
using $SignedInfo = ::com::sun::org::apache::xml::internal::security::signature::SignedInfo;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $I18n = ::com::sun::org::apache::xml::internal::security::utils::I18n;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $SignerOutputStream = ::com::sun::org::apache::xml::internal::security::utils::SignerOutputStream;
using $UnsyncBufferedOutputStream = ::com::sun::org::apache::xml::internal::security::utils::UnsyncBufferedOutputStream;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ResourceResolverSpi = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Key = ::java::security::Key;
using $Provider = ::java::security::Provider;
using $PublicKey = ::java::security::PublicKey;
using $Certificate = ::java::security::cert::Certificate;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $SecretKey = ::javax::crypto::SecretKey;
using $Attr = ::org::w3c::dom::Attr;
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
							namespace signature {

$FieldInfo _XMLSignature_FieldInfo_[] = {
	{"ALGO_ID_MAC_HMAC_SHA1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_MAC_HMAC_SHA1)},
	{"ALGO_ID_SIGNATURE_DSA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_DSA)},
	{"ALGO_ID_SIGNATURE_DSA_SHA256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_DSA_SHA256)},
	{"ALGO_ID_SIGNATURE_RSA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA)},
	{"ALGO_ID_SIGNATURE_RSA_SHA1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA1)},
	{"ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5)},
	{"ALGO_ID_SIGNATURE_RSA_RIPEMD160", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_RIPEMD160)},
	{"ALGO_ID_SIGNATURE_RSA_SHA224", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA224)},
	{"ALGO_ID_SIGNATURE_RSA_SHA256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA256)},
	{"ALGO_ID_SIGNATURE_RSA_SHA384", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA384)},
	{"ALGO_ID_SIGNATURE_RSA_SHA512", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA512)},
	{"ALGO_ID_SIGNATURE_RSA_SHA1_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA1_MGF1)},
	{"ALGO_ID_SIGNATURE_RSA_SHA224_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA224_MGF1)},
	{"ALGO_ID_SIGNATURE_RSA_SHA256_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA256_MGF1)},
	{"ALGO_ID_SIGNATURE_RSA_SHA384_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA384_MGF1)},
	{"ALGO_ID_SIGNATURE_RSA_SHA512_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA512_MGF1)},
	{"ALGO_ID_SIGNATURE_RSA_SHA3_224_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA3_224_MGF1)},
	{"ALGO_ID_SIGNATURE_RSA_SHA3_256_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA3_256_MGF1)},
	{"ALGO_ID_SIGNATURE_RSA_SHA3_384_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA3_384_MGF1)},
	{"ALGO_ID_SIGNATURE_RSA_SHA3_512_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_SHA3_512_MGF1)},
	{"ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5)},
	{"ALGO_ID_MAC_HMAC_RIPEMD160", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_MAC_HMAC_RIPEMD160)},
	{"ALGO_ID_MAC_HMAC_SHA224", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_MAC_HMAC_SHA224)},
	{"ALGO_ID_MAC_HMAC_SHA256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_MAC_HMAC_SHA256)},
	{"ALGO_ID_MAC_HMAC_SHA384", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_MAC_HMAC_SHA384)},
	{"ALGO_ID_MAC_HMAC_SHA512", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_MAC_HMAC_SHA512)},
	{"ALGO_ID_SIGNATURE_ECDSA_SHA1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_ECDSA_SHA1)},
	{"ALGO_ID_SIGNATURE_ECDSA_SHA224", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_ECDSA_SHA224)},
	{"ALGO_ID_SIGNATURE_ECDSA_SHA256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_ECDSA_SHA256)},
	{"ALGO_ID_SIGNATURE_ECDSA_SHA384", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_ECDSA_SHA384)},
	{"ALGO_ID_SIGNATURE_ECDSA_SHA512", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_ECDSA_SHA512)},
	{"ALGO_ID_SIGNATURE_ECDSA_RIPEMD160", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_ECDSA_RIPEMD160)},
	{"ALGO_ID_SIGNATURE_RSA_PSS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, ALGO_ID_SIGNATURE_RSA_PSS)},
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLSignature, LOG)},
	{"signedInfo", "Lcom/sun/org/apache/xml/internal/security/signature/SignedInfo;", nullptr, $PRIVATE | $FINAL, $field(XMLSignature, signedInfo)},
	{"keyInfo", "Lcom/sun/org/apache/xml/internal/security/keys/KeyInfo;", nullptr, $PRIVATE, $field(XMLSignature, keyInfo)},
	{"followManifestsDuringValidation", "Z", nullptr, $PRIVATE, $field(XMLSignature, followManifestsDuringValidation)},
	{"signatureValueElement", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(XMLSignature, signatureValueElement)},
	{"MODE_SIGN", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSignature, MODE_SIGN)},
	{"MODE_VERIFY", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSignature, MODE_VERIFY)},
	{"state", "I", nullptr, $PRIVATE, $field(XMLSignature, state)},
	{}
};

$MethodInfo _XMLSignature_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Document*,$String*,$String*)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Document*,$String*,$String*,$Provider*)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;I)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Document*,$String*,$String*,int32_t)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;ILjava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Document*,$String*,$String*,int32_t,$Provider*)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Document*,$String*,$String*,$String*)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Document*,$String*,$String*,$String*,$Provider*)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Document*,$String*,$String*,int32_t,$String*)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/security/Provider;Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Document*,$String*,$String*,int32_t,$String*,$Provider*,$AlgorithmParameterSpec*)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Lorg/w3c/dom/Element;Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Document*,$String*,$Element*,$Element*)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Lorg/w3c/dom/Element;Lorg/w3c/dom/Element;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Document*,$String*,$Element*,$Element*,$Provider*)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Element*,$String*)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Element*,$String*,$Provider*)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Element*,$String*,bool)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;ZLjava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Element*,$String*,bool,$Provider*)>(&XMLSignature::init$)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException,com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"addDocument", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/transforms/Transforms;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($String*,$Transforms*,$String*,$String*,$String*)>(&XMLSignature::addDocument)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"addDocument", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/transforms/Transforms;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($String*,$Transforms*,$String*)>(&XMLSignature::addDocument)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"addDocument", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/transforms/Transforms;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($String*,$Transforms*)>(&XMLSignature::addDocument)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"addDocument", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($String*)>(&XMLSignature::addDocument)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"addKeyInfo", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($X509Certificate*)>(&XMLSignature::addKeyInfo)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"addKeyInfo", "(Ljava/security/PublicKey;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($PublicKey*)>(&XMLSignature::addKeyInfo))},
	{"addResourceResolver", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($ResourceResolverSpi*)>(&XMLSignature::addResourceResolver))},
	{"appendObject", "(Lcom/sun/org/apache/xml/internal/security/signature/ObjectContainer;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($ObjectContainer*)>(&XMLSignature::appendObject)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"checkSignatureValue", "(Ljava/security/cert/X509Certificate;)Z", nullptr, $PUBLIC, $method(static_cast<bool(XMLSignature::*)($X509Certificate*)>(&XMLSignature::checkSignatureValue)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"checkSignatureValue", "(Ljava/security/Key;)Z", nullptr, $PUBLIC, $method(static_cast<bool(XMLSignature::*)($Key*)>(&XMLSignature::checkSignatureValue)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"createSecretKey", "([B)Ljavax/crypto/SecretKey;", nullptr, $PUBLIC, $method(static_cast<$SecretKey*(XMLSignature::*)($bytes*)>(&XMLSignature::createSecretKey))},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(XMLSignature::*)()>(&XMLSignature::getId))},
	{"getKeyInfo", "()Lcom/sun/org/apache/xml/internal/security/keys/KeyInfo;", nullptr, $PUBLIC, $method(static_cast<$KeyInfo*(XMLSignature::*)()>(&XMLSignature::getKeyInfo))},
	{"getObjectItem", "(I)Lcom/sun/org/apache/xml/internal/security/signature/ObjectContainer;", nullptr, $PUBLIC, $method(static_cast<$ObjectContainer*(XMLSignature::*)(int32_t)>(&XMLSignature::getObjectItem))},
	{"getObjectLength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(XMLSignature::*)()>(&XMLSignature::getObjectLength))},
	{"getSignatureValue", "()[B", nullptr, $PUBLIC, $method(static_cast<$bytes*(XMLSignature::*)()>(&XMLSignature::getSignatureValue)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getSignedInfo", "()Lcom/sun/org/apache/xml/internal/security/signature/SignedInfo;", nullptr, $PUBLIC, $method(static_cast<$SignedInfo*(XMLSignature::*)()>(&XMLSignature::getSignedInfo))},
	{"setFollowNestedManifests", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)(bool)>(&XMLSignature::setFollowNestedManifests))},
	{"setId", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($String*)>(&XMLSignature::setId))},
	{"setSignatureValueElement", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(XMLSignature::*)($bytes*)>(&XMLSignature::setSignatureValueElement))},
	{"sign", "(Ljava/security/Key;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignature::*)($Key*)>(&XMLSignature::sign)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{}
};

$ClassInfo _XMLSignature_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.XMLSignature",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	nullptr,
	_XMLSignature_FieldInfo_,
	_XMLSignature_MethodInfo_
};

$Object* allocate$XMLSignature($Class* clazz) {
	return $of($alloc(XMLSignature));
}


$String* XMLSignature::ALGO_ID_MAC_HMAC_SHA1 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_DSA = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_DSA_SHA256 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA1 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_RIPEMD160 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA224 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA256 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA384 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA512 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA1_MGF1 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA224_MGF1 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA256_MGF1 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA384_MGF1 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA512_MGF1 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_224_MGF1 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_256_MGF1 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_384_MGF1 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_512_MGF1 = nullptr;

$String* XMLSignature::ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5 = nullptr;

$String* XMLSignature::ALGO_ID_MAC_HMAC_RIPEMD160 = nullptr;

$String* XMLSignature::ALGO_ID_MAC_HMAC_SHA224 = nullptr;

$String* XMLSignature::ALGO_ID_MAC_HMAC_SHA256 = nullptr;

$String* XMLSignature::ALGO_ID_MAC_HMAC_SHA384 = nullptr;

$String* XMLSignature::ALGO_ID_MAC_HMAC_SHA512 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA1 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA224 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA256 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA384 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA512 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_ECDSA_RIPEMD160 = nullptr;

$String* XMLSignature::ALGO_ID_SIGNATURE_RSA_PSS = nullptr;
$Logger* XMLSignature::LOG = nullptr;

void XMLSignature::init$($Document* doc, $String* baseURI, $String* signatureMethodURI) {
	$init($Canonicalizer);
	XMLSignature::init$(doc, baseURI, signatureMethodURI, 0, $Canonicalizer::ALGO_ID_C14N_OMIT_COMMENTS, nullptr, nullptr);
}

void XMLSignature::init$($Document* doc, $String* baseURI, $String* signatureMethodURI, $Provider* provider) {
	$init($Canonicalizer);
	XMLSignature::init$(doc, baseURI, signatureMethodURI, 0, $Canonicalizer::ALGO_ID_C14N_OMIT_COMMENTS, provider, nullptr);
}

void XMLSignature::init$($Document* doc, $String* baseURI, $String* signatureMethodURI, int32_t hmacOutputLength) {
	$init($Canonicalizer);
	XMLSignature::init$(doc, baseURI, signatureMethodURI, hmacOutputLength, $Canonicalizer::ALGO_ID_C14N_OMIT_COMMENTS, nullptr, nullptr);
}

void XMLSignature::init$($Document* doc, $String* baseURI, $String* signatureMethodURI, int32_t hmacOutputLength, $Provider* provider) {
	$init($Canonicalizer);
	XMLSignature::init$(doc, baseURI, signatureMethodURI, hmacOutputLength, $Canonicalizer::ALGO_ID_C14N_OMIT_COMMENTS, provider, nullptr);
}

void XMLSignature::init$($Document* doc, $String* baseURI, $String* signatureMethodURI, $String* canonicalizationMethodURI) {
	XMLSignature::init$(doc, baseURI, signatureMethodURI, 0, canonicalizationMethodURI, nullptr, nullptr);
}

void XMLSignature::init$($Document* doc, $String* baseURI, $String* signatureMethodURI, $String* canonicalizationMethodURI, $Provider* provider) {
	XMLSignature::init$(doc, baseURI, signatureMethodURI, 0, canonicalizationMethodURI, provider, nullptr);
}

void XMLSignature::init$($Document* doc, $String* baseURI, $String* signatureMethodURI, int32_t hmacOutputLength, $String* canonicalizationMethodURI) {
	XMLSignature::init$(doc, baseURI, signatureMethodURI, hmacOutputLength, canonicalizationMethodURI, nullptr, nullptr);
}

void XMLSignature::init$($Document* doc, $String* baseURI, $String* signatureMethodURI, int32_t hmacOutputLength, $String* canonicalizationMethodURI, $Provider* provider, $AlgorithmParameterSpec* spec) {
	$SignatureElementProxy::init$(doc);
	this->followManifestsDuringValidation = false;
	this->state = XMLSignature::MODE_SIGN;
	$init($Constants);
	$var($String, xmlnsDsPrefix, getDefaultPrefix($Constants::SignatureSpecNS));
	if (xmlnsDsPrefix == nullptr || $nc(xmlnsDsPrefix)->length() == 0) {
		$nc($(getElement()))->setAttributeNS($Constants::NamespaceSpecNS, "xmlns"_s, $Constants::SignatureSpecNS);
	} else {
		$nc($(getElement()))->setAttributeNS($Constants::NamespaceSpecNS, $$str({"xmlns:"_s, xmlnsDsPrefix}), $Constants::SignatureSpecNS);
	}
	addReturnToSelf();
	$set(this, baseURI, baseURI);
	$set(this, signedInfo, $new($SignedInfo, $(getDocument()), signatureMethodURI, hmacOutputLength, canonicalizationMethodURI, provider, spec));
	appendSelf(static_cast<$ElementProxy*>(this->signedInfo));
	addReturnToSelf();
	$set(this, signatureValueElement, $XMLUtils::createElementInSignatureSpace($(getDocument()), $Constants::_TAG_SIGNATUREVALUE));
	appendSelf(static_cast<$Node*>(this->signatureValueElement));
	addReturnToSelf();
}

void XMLSignature::init$($Document* doc, $String* baseURI, $Element* signatureMethodElem, $Element* canonicalizationMethodElem) {
	XMLSignature::init$(doc, baseURI, signatureMethodElem, canonicalizationMethodElem, ($Provider*)nullptr);
}

void XMLSignature::init$($Document* doc, $String* baseURI, $Element* signatureMethodElem, $Element* canonicalizationMethodElem, $Provider* provider) {
	$SignatureElementProxy::init$(doc);
	this->followManifestsDuringValidation = false;
	this->state = XMLSignature::MODE_SIGN;
	$init($Constants);
	$var($String, xmlnsDsPrefix, getDefaultPrefix($Constants::SignatureSpecNS));
	if (xmlnsDsPrefix == nullptr || $nc(xmlnsDsPrefix)->length() == 0) {
		$nc($(getElement()))->setAttributeNS($Constants::NamespaceSpecNS, "xmlns"_s, $Constants::SignatureSpecNS);
	} else {
		$nc($(getElement()))->setAttributeNS($Constants::NamespaceSpecNS, $$str({"xmlns:"_s, xmlnsDsPrefix}), $Constants::SignatureSpecNS);
	}
	addReturnToSelf();
	$set(this, baseURI, baseURI);
	$set(this, signedInfo, $new($SignedInfo, $(getDocument()), signatureMethodElem, canonicalizationMethodElem, provider));
	appendSelf(static_cast<$ElementProxy*>(this->signedInfo));
	addReturnToSelf();
	$set(this, signatureValueElement, $XMLUtils::createElementInSignatureSpace($(getDocument()), $Constants::_TAG_SIGNATUREVALUE));
	appendSelf(static_cast<$Node*>(this->signatureValueElement));
	addReturnToSelf();
}

void XMLSignature::init$($Element* element, $String* baseURI) {
	XMLSignature::init$(element, baseURI, true, ($Provider*)nullptr);
}

void XMLSignature::init$($Element* element, $String* baseURI, $Provider* provider) {
	XMLSignature::init$(element, baseURI, true, provider);
}

void XMLSignature::init$($Element* element, $String* baseURI, bool secureValidation) {
	XMLSignature::init$(element, baseURI, secureValidation, ($Provider*)nullptr);
}

void XMLSignature::init$($Element* element, $String* baseURI, bool secureValidation, $Provider* provider) {
	$SignatureElementProxy::init$(element, baseURI);
	this->followManifestsDuringValidation = false;
	this->state = XMLSignature::MODE_SIGN;
	$init($Constants);
	bool var$0 = $nc($Constants::SignatureSpecNS)->equals($($nc(element)->getNamespaceURI()));
	if (!(var$0 && $nc($Constants::_TAG_SIGNATURE)->equals($($nc(element)->getLocalName())))) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {$($of($nc(element)->getLocalName()))}));
		$throwNew($XMLSignatureException, "signature.Verification.InvalidElement"_s, exArgs);
	}
	$var($Element, signedInfoElem, $XMLUtils::getNextElement($($nc(element)->getFirstChild())));
	bool var$1 = signedInfoElem == nullptr;
	if (!var$1) {
		bool var$2 = $nc($Constants::SignatureSpecNS)->equals($($nc(signedInfoElem)->getNamespaceURI()));
		var$1 = !(var$2 && $nc($Constants::_TAG_SIGNEDINFO)->equals($($nc(signedInfoElem)->getLocalName())));
	}
	if (var$1) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of($Constants::_TAG_SIGNEDINFO),
			$of($Constants::_TAG_SIGNATURE)
		}));
		$throwNew($XMLSignatureException, "xml.WrongContent"_s, exArgs);
	}
	$set(this, signedInfo, $new($SignedInfo, signedInfoElem, baseURI, secureValidation, provider));
	$assign(signedInfoElem, $XMLUtils::getNextElement($($nc(element)->getFirstChild())));
	$set(this, signatureValueElement, $XMLUtils::getNextElement($($nc(signedInfoElem)->getNextSibling())));
	bool var$3 = this->signatureValueElement == nullptr;
	if (!var$3) {
		bool var$4 = $nc($Constants::SignatureSpecNS)->equals($($nc(this->signatureValueElement)->getNamespaceURI()));
		var$3 = !(var$4 && $nc($Constants::_TAG_SIGNATUREVALUE)->equals($($nc(this->signatureValueElement)->getLocalName())));
	}
	if (var$3) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of($Constants::_TAG_SIGNATUREVALUE),
			$of($Constants::_TAG_SIGNATURE)
		}));
		$throwNew($XMLSignatureException, "xml.WrongContent"_s, exArgs);
	}
	$var($Attr, signatureValueAttr, $nc(this->signatureValueElement)->getAttributeNodeNS(nullptr, "Id"_s));
	if (signatureValueAttr != nullptr) {
		$nc(this->signatureValueElement)->setIdAttributeNode(signatureValueAttr, true);
	}
	$var($Element, keyInfoElem, $XMLUtils::getNextElement($($nc(this->signatureValueElement)->getNextSibling())));
	$var($Element, objectElem, nullptr);
	bool var$5 = keyInfoElem != nullptr && $nc($Constants::SignatureSpecNS)->equals($(keyInfoElem->getNamespaceURI()));
	if (var$5 && $nc($Constants::_TAG_KEYINFO)->equals($(keyInfoElem->getLocalName()))) {
		$set(this, keyInfo, $new($KeyInfo, keyInfoElem, baseURI));
		$nc(this->keyInfo)->setSecureValidation(secureValidation);
		$assign(objectElem, $XMLUtils::getNextElement($(keyInfoElem->getNextSibling())));
	} else {
		$assign(objectElem, keyInfoElem);
	}
	while (objectElem != nullptr) {
		bool var$6 = $nc($Constants::SignatureSpecNS)->equals($(objectElem->getNamespaceURI()));
		if (!(var$6 && $nc($Constants::_TAG_OBJECT)->equals($(objectElem->getLocalName())))) {
			$var($ObjectArray, exArgs, $new($ObjectArray, {$($of(objectElem->getLocalName()))}));
			$throwNew($XMLSignatureException, "signature.Verification.InvalidElement"_s, exArgs);
		}
		$var($Attr, objectAttr, objectElem->getAttributeNodeNS(nullptr, "Id"_s));
		if (objectAttr != nullptr) {
			objectElem->setIdAttributeNode(objectAttr, true);
		}
		$var($Node, firstChild, objectElem->getFirstChild());
		while (firstChild != nullptr) {
			if (firstChild->getNodeType() == $Node::ELEMENT_NODE) {
				$var($Element, childElem, $cast($Element, firstChild));
				$var($String, tag, childElem->getLocalName());
				if ("Manifest"_s->equals(tag)) {
					$new($Manifest, childElem, baseURI);
				} else if ("SignatureProperties"_s->equals(tag)) {
					$new($SignatureProperties, childElem, baseURI);
				}
			}
			$assign(firstChild, firstChild->getNextSibling());
		}
		$assign(objectElem, $XMLUtils::getNextElement($(objectElem->getNextSibling())));
	}
	this->state = XMLSignature::MODE_VERIFY;
}

void XMLSignature::setId($String* id) {
	if (id != nullptr) {
		$init($Constants);
		setLocalIdAttribute($Constants::_ATT_ID, id);
	}
}

$String* XMLSignature::getId() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ID);
}

$SignedInfo* XMLSignature::getSignedInfo() {
	return this->signedInfo;
}

$bytes* XMLSignature::getSignatureValue() {
	$var($String, content, $XMLUtils::getFullTextChildrenFromNode(this->signatureValueElement));
	return $XMLUtils::decode(content);
}

void XMLSignature::setSignatureValueElement($bytes* bytes) {
	while ($nc(this->signatureValueElement)->hasChildNodes()) {
		$nc(this->signatureValueElement)->removeChild($($nc(this->signatureValueElement)->getFirstChild()));
	}
	$var($String, base64codedValue, $XMLUtils::encodeToString(bytes));
	bool var$0 = $nc(base64codedValue)->length() > 76;
	if (var$0 && !$XMLUtils::ignoreLineBreaks()) {
		$assign(base64codedValue, $str({"\n"_s, base64codedValue, "\n"_s}));
	}
	$var($Text, t, createText(base64codedValue));
	$nc(this->signatureValueElement)->appendChild(t);
}

$KeyInfo* XMLSignature::getKeyInfo() {
	if (this->state == XMLSignature::MODE_SIGN && this->keyInfo == nullptr) {
		$set(this, keyInfo, $new($KeyInfo, $(getDocument())));
		$var($Element, keyInfoElement, $nc(this->keyInfo)->getElement());
		$init($Constants);
		$var($Element, firstObject, $XMLUtils::selectDsNode($($nc($(getElement()))->getFirstChild()), $Constants::_TAG_OBJECT, 0));
		if (firstObject != nullptr) {
			$nc($(getElement()))->insertBefore(keyInfoElement, firstObject);
			$XMLUtils::addReturnBeforeChild($(getElement()), firstObject);
		} else {
			appendSelf(static_cast<$Node*>(keyInfoElement));
			addReturnToSelf();
		}
	}
	return this->keyInfo;
}

void XMLSignature::appendObject($ObjectContainer* object) {
	appendSelf(static_cast<$ElementProxy*>(object));
	addReturnToSelf();
}

$ObjectContainer* XMLSignature::getObjectItem(int32_t i) {
	$init($Constants);
	$var($Element, objElem, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_OBJECT, i));
	try {
		return $new($ObjectContainer, objElem, this->baseURI);
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

int32_t XMLSignature::getObjectLength() {
	$init($Constants);
	return this->length($Constants::SignatureSpecNS, $Constants::_TAG_OBJECT);
}

void XMLSignature::sign($Key* signingKey) {
	if ($instanceOf($PublicKey, signingKey)) {
		$throwNew($IllegalArgumentException, $($I18n::translate("algorithms.operationOnlyVerification"_s)));
	}
	$var($SignedInfo, si, this->getSignedInfo());
	$var($SignatureAlgorithm, sa, $nc(si)->getSignatureAlgorithm());
	try {
		$var($SignerOutputStream, output, $new($SignerOutputStream, sa));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$var($OutputStream, so, $new($UnsyncBufferedOutputStream, output));
					{
						$var($Throwable, var$1, nullptr);
						try {
							try {
								si->generateDigestValues();
								$nc(sa)->initSign(signingKey);
								si->signInOctetStream(so);
								this->setSignatureValueElement($(sa->sign()));
							} catch ($Throwable&) {
								$var($Throwable, t$, $catch());
								try {
									so->close();
								} catch ($Throwable&) {
									$var($Throwable, x2, $catch());
									t$->addSuppressed(x2);
								}
								$throw(t$);
							}
						} catch ($Throwable&) {
							$assign(var$1, $catch());
						} /*finally*/ {
							so->close();
						}
						if (var$1 != nullptr) {
							$throw(var$1);
						}
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						output->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				output->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($XMLSignatureException&) {
		$var($XMLSignatureException, ex, $catch());
		$throw(ex);
	} catch ($XMLSecurityException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSignatureException, ex);
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLSignatureException, ex);
	}
}

void XMLSignature::addResourceResolver($ResourceResolverSpi* resolver) {
	$nc($(this->getSignedInfo()))->addResourceResolver(resolver);
}

bool XMLSignature::checkSignatureValue($X509Certificate* cert) {
	if (cert != nullptr) {
		return this->checkSignatureValue($(static_cast<$Key*>(cert->getPublicKey())));
	}
	$var($ObjectArray, exArgs, $new($ObjectArray, {$of("Didn\'t get a certificate"_s)}));
	$throwNew($XMLSignatureException, "empty"_s, exArgs);
}

bool XMLSignature::checkSignatureValue($Key* pk) {
	if (pk == nullptr) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of("Didn\'t get a key"_s)}));
		$throwNew($XMLSignatureException, "empty"_s, exArgs);
	}
	try {
		$var($SignedInfo, si, this->getSignedInfo());
		$var($SignatureAlgorithm, sa, $nc(si)->getSignatureAlgorithm());
		$nc(XMLSignature::LOG)->debug("signatureMethodURI = {}"_s, $$new($ObjectArray, {$($of($nc(sa)->getAlgorithmURI()))}));
		$nc(XMLSignature::LOG)->debug("jceSigAlgorithm = {}"_s, $$new($ObjectArray, {$($of($nc(sa)->getJCEAlgorithmString()))}));
		$nc(XMLSignature::LOG)->debug("PublicKey = {}"_s, $$new($ObjectArray, {$of(pk)}));
		$var($bytes, sigBytes, nullptr);
		try {
			$var($SignerOutputStream, so, $new($SignerOutputStream, sa));
			{
				$var($Throwable, var$0, nullptr);
				try {
					try {
						$var($OutputStream, bos, $new($UnsyncBufferedOutputStream, so));
						{
							$var($Throwable, var$1, nullptr);
							try {
								try {
									$nc(sa)->initVerify(pk);
									$nc(XMLSignature::LOG)->debug("jceSigProvider = {}"_s, $$new($ObjectArray, {$($of(sa->getJCEProviderName()))}));
									si->signInOctetStream(bos);
									$assign(sigBytes, this->getSignatureValue());
								} catch ($Throwable&) {
									$var($Throwable, t$, $catch());
									try {
										bos->close();
									} catch ($Throwable&) {
										$var($Throwable, x2, $catch());
										t$->addSuppressed(x2);
									}
									$throw(t$);
								}
							} catch ($Throwable&) {
								$assign(var$1, $catch());
							} /*finally*/ {
								bos->close();
							}
							if (var$1 != nullptr) {
								$throw(var$1);
							}
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							so->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} /*finally*/ {
					so->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
			}
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			$nc(XMLSignature::LOG)->debug($(ex->getMessage()), static_cast<$Throwable*>(ex));
		} catch ($XMLSecurityException&) {
			$var($XMLSecurityException, ex, $catch());
			$throw(ex);
		}
		if (!$nc(sa)->verify(sigBytes)) {
			$nc(XMLSignature::LOG)->warn("Signature verification failed."_s);
			return false;
		}
		return si->verify(this->followManifestsDuringValidation);
	} catch ($XMLSignatureException&) {
		$var($XMLSignatureException, ex, $catch());
		$throw(ex);
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

void XMLSignature::addDocument($String* referenceURI, $Transforms* trans, $String* digestURI, $String* referenceId, $String* referenceType) {
	$nc(this->signedInfo)->addDocument(this->baseURI, referenceURI, trans, digestURI, referenceId, referenceType);
}

void XMLSignature::addDocument($String* referenceURI, $Transforms* trans, $String* digestURI) {
	$nc(this->signedInfo)->addDocument(this->baseURI, referenceURI, trans, digestURI, nullptr, nullptr);
}

void XMLSignature::addDocument($String* referenceURI, $Transforms* trans) {
	$init($Constants);
	$nc(this->signedInfo)->addDocument(this->baseURI, referenceURI, trans, $Constants::ALGO_ID_DIGEST_SHA1, nullptr, nullptr);
}

void XMLSignature::addDocument($String* referenceURI) {
	$init($Constants);
	$nc(this->signedInfo)->addDocument(this->baseURI, referenceURI, nullptr, $Constants::ALGO_ID_DIGEST_SHA1, nullptr, nullptr);
}

void XMLSignature::addKeyInfo($X509Certificate* cert) {
	$var($X509Data, x509data, $new($X509Data, $(getDocument())));
	x509data->addCertificate(cert);
	$nc($(this->getKeyInfo()))->add(x509data);
}

void XMLSignature::addKeyInfo($PublicKey* pk) {
	$nc($(this->getKeyInfo()))->add(pk);
}

$SecretKey* XMLSignature::createSecretKey($bytes* secretKeyBytes) {
	return $nc($(this->getSignedInfo()))->createSecretKey(secretKeyBytes);
}

void XMLSignature::setFollowNestedManifests(bool followManifests) {
	this->followManifestsDuringValidation = followManifests;
}

$String* XMLSignature::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_SIGNATURE;
}

void clinit$XMLSignature($Class* class$) {
	$init($Constants);
	$assignStatic(XMLSignature::ALGO_ID_MAC_HMAC_SHA1, $str({$Constants::SignatureSpecNS, "hmac-sha1"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_DSA, $str({$Constants::SignatureSpecNS, "dsa-sha1"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_DSA_SHA256, $str({$Constants::SignatureSpec11NS, "dsa-sha256"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA, $str({$Constants::SignatureSpecNS, "rsa-sha1"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA1, $str({$Constants::SignatureSpecNS, "rsa-sha1"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5, $str({$Constants::MoreAlgorithmsSpecNS, "rsa-md5"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_RIPEMD160, $str({$Constants::MoreAlgorithmsSpecNS, "rsa-ripemd160"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA224, $str({$Constants::MoreAlgorithmsSpecNS, "rsa-sha224"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA256, $str({$Constants::MoreAlgorithmsSpecNS, "rsa-sha256"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA384, $str({$Constants::MoreAlgorithmsSpecNS, "rsa-sha384"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA512, $str({$Constants::MoreAlgorithmsSpecNS, "rsa-sha512"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA1_MGF1, $str({$Constants::XML_DSIG_NS_MORE_07_05, "sha1-rsa-MGF1"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA224_MGF1, $str({$Constants::XML_DSIG_NS_MORE_07_05, "sha224-rsa-MGF1"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA256_MGF1, $str({$Constants::XML_DSIG_NS_MORE_07_05, "sha256-rsa-MGF1"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA384_MGF1, $str({$Constants::XML_DSIG_NS_MORE_07_05, "sha384-rsa-MGF1"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA512_MGF1, $str({$Constants::XML_DSIG_NS_MORE_07_05, "sha512-rsa-MGF1"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_224_MGF1, $str({$Constants::XML_DSIG_NS_MORE_07_05, "sha3-224-rsa-MGF1"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_256_MGF1, $str({$Constants::XML_DSIG_NS_MORE_07_05, "sha3-256-rsa-MGF1"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_384_MGF1, $str({$Constants::XML_DSIG_NS_MORE_07_05, "sha3-384-rsa-MGF1"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_SHA3_512_MGF1, $str({$Constants::XML_DSIG_NS_MORE_07_05, "sha3-512-rsa-MGF1"_s}));
	$assignStatic(XMLSignature::ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5, $str({$Constants::MoreAlgorithmsSpecNS, "hmac-md5"_s}));
	$assignStatic(XMLSignature::ALGO_ID_MAC_HMAC_RIPEMD160, $str({$Constants::MoreAlgorithmsSpecNS, "hmac-ripemd160"_s}));
	$assignStatic(XMLSignature::ALGO_ID_MAC_HMAC_SHA224, $str({$Constants::MoreAlgorithmsSpecNS, "hmac-sha224"_s}));
	$assignStatic(XMLSignature::ALGO_ID_MAC_HMAC_SHA256, $str({$Constants::MoreAlgorithmsSpecNS, "hmac-sha256"_s}));
	$assignStatic(XMLSignature::ALGO_ID_MAC_HMAC_SHA384, $str({$Constants::MoreAlgorithmsSpecNS, "hmac-sha384"_s}));
	$assignStatic(XMLSignature::ALGO_ID_MAC_HMAC_SHA512, $str({$Constants::MoreAlgorithmsSpecNS, "hmac-sha512"_s}));
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA1, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha1"_s);
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA224, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha224"_s);
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA256, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha256"_s);
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA384, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha384"_s);
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_ECDSA_SHA512, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha512"_s);
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_ECDSA_RIPEMD160, "http://www.w3.org/2007/05/xmldsig-more#ecdsa-ripemd160"_s);
	$assignStatic(XMLSignature::ALGO_ID_SIGNATURE_RSA_PSS, $str({$Constants::XML_DSIG_NS_MORE_07_05, "rsa-pss"_s}));
	$assignStatic(XMLSignature::LOG, $LoggerFactory::getLogger(XMLSignature::class$));
}

XMLSignature::XMLSignature() {
}

$Class* XMLSignature::load$($String* name, bool initialize) {
	$loadClass(XMLSignature, name, initialize, &_XMLSignature_ClassInfo_, clinit$XMLSignature, allocate$XMLSignature);
	return class$;
}

$Class* XMLSignature::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com