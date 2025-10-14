#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignatureFactory.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/List.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/URIDereferencer.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <javax/xml/crypto/dsig/DigestMethod.h>
#include <javax/xml/crypto/dsig/Manifest.h>
#include <javax/xml/crypto/dsig/Reference.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <javax/xml/crypto/dsig/SignatureProperties.h>
#include <javax/xml/crypto/dsig/SignatureProperty.h>
#include <javax/xml/crypto/dsig/SignedInfo.h>
#include <javax/xml/crypto/dsig/Transform.h>
#include <javax/xml/crypto/dsig/TransformService.h>
#include <javax/xml/crypto/dsig/XMLObject.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/XMLSignatureFactory.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <javax/xml/crypto/dsig/dom/DOMValidateContext.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <javax/xml/crypto/dsig/spec/C14NMethodParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/DigestMethodParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/SignatureMethodParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMCanonicalizationMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$RIPEMD160.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA1.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA224.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA256.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA384.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA3_224.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA3_256.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA3_384.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA3_512.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA512.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$WHIRLPOOL.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$RIPEMD160.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA1.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA224.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA256.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA384.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA512.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMManifest.h>
#include <org/jcp/xml/dsig/internal/dom/DOMRSAPSSSignatureMethod$RSAPSS.h>
#include <org/jcp/xml/dsig/internal/dom/DOMRSAPSSSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMReference.h>
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
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureProperties.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureProperty.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignedInfo.h>
#include <org/jcp/xml/dsig/internal/dom/DOMTransform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMURIDereferencer.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLObject.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignature.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignatureFactory$UnmarshalContext.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef DOCUMENT_NODE
#undef DSA_SHA1
#undef DSA_SHA256
#undef ECDSA_RIPEMD160
#undef ECDSA_SHA1
#undef ECDSA_SHA224
#undef ECDSA_SHA256
#undef ECDSA_SHA384
#undef ECDSA_SHA512
#undef ELEMENT_NODE
#undef HMAC_RIPEMD160
#undef HMAC_SHA1
#undef HMAC_SHA224
#undef HMAC_SHA256
#undef HMAC_SHA384
#undef HMAC_SHA512
#undef INSTANCE
#undef RIPEMD160
#undef RSA_PSS
#undef RSA_RIPEMD160
#undef RSA_SHA1
#undef RSA_SHA1_MGF1
#undef RSA_SHA224
#undef RSA_SHA256
#undef RSA_SHA384
#undef RSA_SHA512
#undef SHA1
#undef WHIRLPOOL
#undef XMLNS

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $List = ::java::util::List;
using $Data = ::javax::xml::crypto::Data;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $URIDereferencer = ::javax::xml::crypto::URIDereferencer;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $CanonicalizationMethod = ::javax::xml::crypto::dsig::CanonicalizationMethod;
using $DigestMethod = ::javax::xml::crypto::dsig::DigestMethod;
using $Manifest = ::javax::xml::crypto::dsig::Manifest;
using $Reference = ::javax::xml::crypto::dsig::Reference;
using $SignatureMethod = ::javax::xml::crypto::dsig::SignatureMethod;
using $SignatureProperties = ::javax::xml::crypto::dsig::SignatureProperties;
using $SignatureProperty = ::javax::xml::crypto::dsig::SignatureProperty;
using $SignedInfo = ::javax::xml::crypto::dsig::SignedInfo;
using $Transform = ::javax::xml::crypto::dsig::Transform;
using $TransformService = ::javax::xml::crypto::dsig::TransformService;
using $XMLObject = ::javax::xml::crypto::dsig::XMLObject;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $XMLSignatureFactory = ::javax::xml::crypto::dsig::XMLSignatureFactory;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;
using $DOMValidateContext = ::javax::xml::crypto::dsig::dom::DOMValidateContext;
using $KeyInfo = ::javax::xml::crypto::dsig::keyinfo::KeyInfo;
using $C14NMethodParameterSpec = ::javax::xml::crypto::dsig::spec::C14NMethodParameterSpec;
using $DigestMethodParameterSpec = ::javax::xml::crypto::dsig::spec::DigestMethodParameterSpec;
using $SignatureMethodParameterSpec = ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;
using $AbstractDOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod;
using $DOMCanonicalizationMethod = ::org::jcp::xml::dsig::internal::dom::DOMCanonicalizationMethod;
using $DOMDigestMethod = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod;
using $DOMDigestMethod$RIPEMD160 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$RIPEMD160;
using $DOMDigestMethod$SHA1 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA1;
using $DOMDigestMethod$SHA224 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA224;
using $DOMDigestMethod$SHA256 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA256;
using $DOMDigestMethod$SHA384 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA384;
using $DOMDigestMethod$SHA3_224 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA3_224;
using $DOMDigestMethod$SHA3_256 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA3_256;
using $DOMDigestMethod$SHA3_384 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA3_384;
using $DOMDigestMethod$SHA3_512 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA3_512;
using $DOMDigestMethod$SHA512 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA512;
using $DOMDigestMethod$WHIRLPOOL = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$WHIRLPOOL;
using $DOMHMACSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod;
using $DOMHMACSignatureMethod$RIPEMD160 = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$RIPEMD160;
using $DOMHMACSignatureMethod$SHA1 = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA1;
using $DOMHMACSignatureMethod$SHA224 = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA224;
using $DOMHMACSignatureMethod$SHA256 = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA256;
using $DOMHMACSignatureMethod$SHA384 = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA384;
using $DOMHMACSignatureMethod$SHA512 = ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA512;
using $DOMManifest = ::org::jcp::xml::dsig::internal::dom::DOMManifest;
using $DOMRSAPSSSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMRSAPSSSignatureMethod;
using $DOMRSAPSSSignatureMethod$RSAPSS = ::org::jcp::xml::dsig::internal::dom::DOMRSAPSSSignatureMethod$RSAPSS;
using $DOMReference = ::org::jcp::xml::dsig::internal::dom::DOMReference;
using $DOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod;
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
using $DOMSignatureProperties = ::org::jcp::xml::dsig::internal::dom::DOMSignatureProperties;
using $DOMSignatureProperty = ::org::jcp::xml::dsig::internal::dom::DOMSignatureProperty;
using $DOMSignedInfo = ::org::jcp::xml::dsig::internal::dom::DOMSignedInfo;
using $DOMTransform = ::org::jcp::xml::dsig::internal::dom::DOMTransform;
using $DOMURIDereferencer = ::org::jcp::xml::dsig::internal::dom::DOMURIDereferencer;
using $DOMXMLObject = ::org::jcp::xml::dsig::internal::dom::DOMXMLObject;
using $DOMXMLSignature = ::org::jcp::xml::dsig::internal::dom::DOMXMLSignature;
using $DOMXMLSignatureFactory$UnmarshalContext = ::org::jcp::xml::dsig::internal::dom::DOMXMLSignatureFactory$UnmarshalContext;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMXMLSignatureFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DOMXMLSignatureFactory::*)()>(&DOMXMLSignatureFactory::init$))},
	{"getURIDereferencer", "()Ljavax/xml/crypto/URIDereferencer;", nullptr, $PUBLIC},
	{"isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{"newCanonicalizationMethod", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/spec/C14NMethodParameterSpec;)Ljavax/xml/crypto/dsig/CanonicalizationMethod;", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{"newCanonicalizationMethod", "(Ljava/lang/String;Ljavax/xml/crypto/XMLStructure;)Ljavax/xml/crypto/dsig/CanonicalizationMethod;", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{"newDigestMethod", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/spec/DigestMethodParameterSpec;)Ljavax/xml/crypto/dsig/DigestMethod;", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{"newManifest", "(Ljava/util/List;)Ljavax/xml/crypto/dsig/Manifest;", nullptr, $PUBLIC},
	{"newManifest", "(Ljava/util/List;Ljava/lang/String;)Ljavax/xml/crypto/dsig/Manifest;", nullptr, $PUBLIC},
	{"newReference", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;)Ljavax/xml/crypto/dsig/Reference;", nullptr, $PUBLIC},
	{"newReference", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/Reference;", nullptr, $PUBLIC},
	{"newReference", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List;Ljavax/xml/crypto/Data;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/Reference;", nullptr, $PUBLIC},
	{"newReference", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/DigestMethod;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;[B)Ljavax/xml/crypto/dsig/Reference;", nullptr, $PUBLIC},
	{"newSignatureMethod", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/spec/SignatureMethodParameterSpec;)Ljavax/xml/crypto/dsig/SignatureMethod;", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{"newSignatureProperties", "(Ljava/util/List;Ljava/lang/String;)Ljavax/xml/crypto/dsig/SignatureProperties;", nullptr, $PUBLIC},
	{"newSignatureProperty", "(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/SignatureProperty;", nullptr, $PUBLIC},
	{"newSignedInfo", "(Ljavax/xml/crypto/dsig/CanonicalizationMethod;Ljavax/xml/crypto/dsig/SignatureMethod;Ljava/util/List;)Ljavax/xml/crypto/dsig/SignedInfo;", nullptr, $PUBLIC},
	{"newSignedInfo", "(Ljavax/xml/crypto/dsig/CanonicalizationMethod;Ljavax/xml/crypto/dsig/SignatureMethod;Ljava/util/List;Ljava/lang/String;)Ljavax/xml/crypto/dsig/SignedInfo;", nullptr, $PUBLIC},
	{"newTransform", "(Ljava/lang/String;Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;)Ljavax/xml/crypto/dsig/Transform;", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{"newTransform", "(Ljava/lang/String;Ljavax/xml/crypto/XMLStructure;)Ljavax/xml/crypto/dsig/Transform;", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException,java.security.InvalidAlgorithmParameterException"},
	{"newXMLObject", "(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/XMLObject;", nullptr, $PUBLIC},
	{"newXMLSignature", "(Ljavax/xml/crypto/dsig/SignedInfo;Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;)Ljavax/xml/crypto/dsig/XMLSignature;", nullptr, $PUBLIC},
	{"newXMLSignature", "(Ljavax/xml/crypto/dsig/SignedInfo;Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)Ljavax/xml/crypto/dsig/XMLSignature;", nullptr, $PUBLIC},
	{"unmarshal", "(Lorg/w3c/dom/Node;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/dsig/XMLSignature;", nullptr, $PRIVATE, $method(static_cast<$XMLSignature*(DOMXMLSignatureFactory::*)($Node*,$XMLCryptoContext*)>(&DOMXMLSignatureFactory::unmarshal)), "javax.xml.crypto.MarshalException"},
	{"unmarshalXMLSignature", "(Ljavax/xml/crypto/dsig/XMLValidateContext;)Ljavax/xml/crypto/dsig/XMLSignature;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"unmarshalXMLSignature", "(Ljavax/xml/crypto/XMLStructure;)Ljavax/xml/crypto/dsig/XMLSignature;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{}
};

$InnerClassInfo _DOMXMLSignatureFactory_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory$UnmarshalContext", "org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory", "UnmarshalContext", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DOMXMLSignatureFactory_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory",
	"javax.xml.crypto.dsig.XMLSignatureFactory",
	nullptr,
	nullptr,
	_DOMXMLSignatureFactory_MethodInfo_,
	nullptr,
	nullptr,
	_DOMXMLSignatureFactory_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory$UnmarshalContext"
};

$Object* allocate$DOMXMLSignatureFactory($Class* clazz) {
	return $of($alloc(DOMXMLSignatureFactory));
}

void DOMXMLSignatureFactory::init$() {
	$XMLSignatureFactory::init$();
}

$XMLSignature* DOMXMLSignatureFactory::newXMLSignature($SignedInfo* si, $KeyInfo* ki) {
	return $new($DOMXMLSignature, si, ki, nullptr, nullptr, nullptr);
}

$XMLSignature* DOMXMLSignatureFactory::newXMLSignature($SignedInfo* si, $KeyInfo* ki, $List* objects, $String* id, $String* signatureValueId) {
	return $new($DOMXMLSignature, si, ki, objects, id, signatureValueId);
}

$Reference* DOMXMLSignatureFactory::newReference($String* uri, $DigestMethod* dm) {
	return newReference(uri, dm, nullptr, nullptr, nullptr);
}

$Reference* DOMXMLSignatureFactory::newReference($String* uri, $DigestMethod* dm, $List* transforms, $String* type, $String* id) {
	return $new($DOMReference, uri, type, dm, transforms, id, $(getProvider()));
}

$Reference* DOMXMLSignatureFactory::newReference($String* uri, $DigestMethod* dm, $List* appliedTransforms, $Data* result, $List* transforms, $String* type, $String* id) {
	if (appliedTransforms == nullptr) {
		$throwNew($NullPointerException, "appliedTransforms cannot be null"_s);
	}
	if ($nc(appliedTransforms)->isEmpty()) {
		$throwNew($NullPointerException, "appliedTransforms cannot be empty"_s);
	}
	if (result == nullptr) {
		$throwNew($NullPointerException, "result cannot be null"_s);
	}
	return $new($DOMReference, uri, type, dm, appliedTransforms, result, transforms, id, $(getProvider()));
}

$Reference* DOMXMLSignatureFactory::newReference($String* uri, $DigestMethod* dm, $List* transforms, $String* type, $String* id, $bytes* digestValue) {
	if (digestValue == nullptr) {
		$throwNew($NullPointerException, "digestValue cannot be null"_s);
	}
	return $new($DOMReference, uri, type, dm, nullptr, nullptr, transforms, id, digestValue, $(getProvider()));
}

$SignedInfo* DOMXMLSignatureFactory::newSignedInfo($CanonicalizationMethod* cm, $SignatureMethod* sm, $List* references) {
	return newSignedInfo(cm, sm, references, nullptr);
}

$SignedInfo* DOMXMLSignatureFactory::newSignedInfo($CanonicalizationMethod* cm, $SignatureMethod* sm, $List* references, $String* id) {
	return $new($DOMSignedInfo, cm, sm, references, id);
}

$XMLObject* DOMXMLSignatureFactory::newXMLObject($List* content, $String* id, $String* mimeType, $String* encoding) {
	return $new($DOMXMLObject, content, id, mimeType, encoding);
}

$Manifest* DOMXMLSignatureFactory::newManifest($List* references) {
	return newManifest(references, nullptr);
}

$Manifest* DOMXMLSignatureFactory::newManifest($List* references, $String* id) {
	return $new($DOMManifest, references, id);
}

$SignatureProperties* DOMXMLSignatureFactory::newSignatureProperties($List* props, $String* id) {
	return $new($DOMSignatureProperties, props, id);
}

$SignatureProperty* DOMXMLSignatureFactory::newSignatureProperty($List* info, $String* target, $String* id) {
	return $new($DOMSignatureProperty, info, target, id);
}

$XMLSignature* DOMXMLSignatureFactory::unmarshalXMLSignature($XMLValidateContext* context) {
	if (context == nullptr) {
		$throwNew($NullPointerException, "context cannot be null"_s);
	}
	return unmarshal($($nc(($cast($DOMValidateContext, context)))->getNode()), context);
}

$XMLSignature* DOMXMLSignatureFactory::unmarshalXMLSignature($XMLStructure* xmlStructure) {
	if (xmlStructure == nullptr) {
		$throwNew($NullPointerException, "xmlStructure cannot be null"_s);
	}
	if (!($instanceOf($DOMStructure, xmlStructure))) {
		$throwNew($ClassCastException, "xmlStructure must be of type DOMStructure"_s);
	}
	$var($Node, var$0, $nc(($cast($DOMStructure, xmlStructure)))->getNode());
	return unmarshal(var$0, $$new($DOMXMLSignatureFactory$UnmarshalContext));
}

$XMLSignature* DOMXMLSignatureFactory::unmarshal($Node* node, $XMLCryptoContext* context) {
	$nc(node)->normalize();
	$var($Element, element, nullptr);
	if (node->getNodeType() == $Node::DOCUMENT_NODE) {
		$assign(element, $nc(($cast($Document, node)))->getDocumentElement());
	} else if (node->getNodeType() == $Node::ELEMENT_NODE) {
		$assign(element, $cast($Element, node));
	} else {
		$throwNew($MarshalException, "Signature element is not a proper Node"_s);
	}
	$var($String, tag, $nc(element)->getLocalName());
	$var($String, namespace$, element->getNamespaceURI());
	if (tag == nullptr || namespace$ == nullptr) {
		$throwNew($MarshalException, "Document implementation must support DOM Level 2 and be namespace aware"_s);
	}
	bool var$0 = "Signature"_s->equals(tag);
	$init($XMLSignature);
	if (var$0 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
		try {
			return $new($DOMXMLSignature, element, context, $(getProvider()));
		} catch ($MarshalException&) {
			$var($MarshalException, me, $catch());
			$throw(me);
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($MarshalException, static_cast<$Throwable*>(e));
		}
	} else {
		$throwNew($MarshalException, $$str({"Invalid Signature tag: "_s, namespace$, ":"_s, tag}));
	}
	$shouldNotReachHere();
}

bool DOMXMLSignatureFactory::isFeatureSupported($String* feature) {
	if (feature == nullptr) {
		$throwNew($NullPointerException);
	} else {
		return false;
	}
}

$DigestMethod* DOMXMLSignatureFactory::newDigestMethod($String* algorithm, $DigestMethodParameterSpec* params) {
	if (algorithm == nullptr) {
		$throwNew($NullPointerException);
	}
	$init($DigestMethod);
	if ($nc(algorithm)->equals($DigestMethod::SHA1)) {
		return $new($DOMDigestMethod$SHA1, static_cast<$AlgorithmParameterSpec*>(params));
	} else {
		$init($DOMDigestMethod);
		if (algorithm->equals($DOMDigestMethod::SHA224)) {
			return $new($DOMDigestMethod$SHA224, static_cast<$AlgorithmParameterSpec*>(params));
		} else {
			if (algorithm->equals($DigestMethod::SHA256)) {
				return $new($DOMDigestMethod$SHA256, static_cast<$AlgorithmParameterSpec*>(params));
			} else {
				if (algorithm->equals($DOMDigestMethod::SHA384)) {
					return $new($DOMDigestMethod$SHA384, static_cast<$AlgorithmParameterSpec*>(params));
				} else {
					if (algorithm->equals($DigestMethod::SHA512)) {
						return $new($DOMDigestMethod$SHA512, static_cast<$AlgorithmParameterSpec*>(params));
					} else {
						if (algorithm->equals($DigestMethod::RIPEMD160)) {
							return $new($DOMDigestMethod$RIPEMD160, static_cast<$AlgorithmParameterSpec*>(params));
						} else {
							if (algorithm->equals($DOMDigestMethod::WHIRLPOOL)) {
								return $new($DOMDigestMethod$WHIRLPOOL, static_cast<$AlgorithmParameterSpec*>(params));
							} else {
								if (algorithm->equals($DOMDigestMethod::SHA3_224)) {
									return $new($DOMDigestMethod$SHA3_224, static_cast<$AlgorithmParameterSpec*>(params));
								} else {
									if (algorithm->equals($DOMDigestMethod::SHA3_256)) {
										return $new($DOMDigestMethod$SHA3_256, static_cast<$AlgorithmParameterSpec*>(params));
									} else {
										if (algorithm->equals($DOMDigestMethod::SHA3_384)) {
											return $new($DOMDigestMethod$SHA3_384, static_cast<$AlgorithmParameterSpec*>(params));
										} else {
											if (algorithm->equals($DOMDigestMethod::SHA3_512)) {
												return $new($DOMDigestMethod$SHA3_512, static_cast<$AlgorithmParameterSpec*>(params));
											} else {
												$throwNew($NoSuchAlgorithmException, "unsupported algorithm"_s);
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

$SignatureMethod* DOMXMLSignatureFactory::newSignatureMethod($String* algorithm, $SignatureMethodParameterSpec* params) {
	if (algorithm == nullptr) {
		$throwNew($NullPointerException);
	}
	$init($SignatureMethod);
	if (algorithm->equals($SignatureMethod::RSA_SHA1)) {
		return $new($DOMSignatureMethod$SHA1withRSA, static_cast<$AlgorithmParameterSpec*>(params));
	} else {
		$init($DOMSignatureMethod);
		if (algorithm->equals($DOMSignatureMethod::RSA_SHA224)) {
			return $new($DOMSignatureMethod$SHA224withRSA, static_cast<$AlgorithmParameterSpec*>(params));
		} else {
			if (algorithm->equals($DOMSignatureMethod::RSA_SHA256)) {
				return $new($DOMSignatureMethod$SHA256withRSA, static_cast<$AlgorithmParameterSpec*>(params));
			} else {
				if (algorithm->equals($DOMSignatureMethod::RSA_SHA384)) {
					return $new($DOMSignatureMethod$SHA384withRSA, static_cast<$AlgorithmParameterSpec*>(params));
				} else {
					if (algorithm->equals($DOMSignatureMethod::RSA_SHA512)) {
						return $new($DOMSignatureMethod$SHA512withRSA, static_cast<$AlgorithmParameterSpec*>(params));
					} else {
						if (algorithm->equals($DOMSignatureMethod::RSA_RIPEMD160)) {
							return $new($DOMSignatureMethod$RIPEMD160withRSA, static_cast<$AlgorithmParameterSpec*>(params));
						} else {
							if (algorithm->equals($DOMSignatureMethod::RSA_SHA1_MGF1)) {
								return $new($DOMSignatureMethod$SHA1withRSAandMGF1, static_cast<$AlgorithmParameterSpec*>(params));
							} else {
								if (algorithm->equals($DOMSignatureMethod::RSA_SHA224_MGF1)) {
									return $new($DOMSignatureMethod$SHA224withRSAandMGF1, static_cast<$AlgorithmParameterSpec*>(params));
								} else {
									if (algorithm->equals($DOMSignatureMethod::RSA_SHA256_MGF1)) {
										return $new($DOMSignatureMethod$SHA256withRSAandMGF1, static_cast<$AlgorithmParameterSpec*>(params));
									} else {
										if (algorithm->equals($DOMSignatureMethod::RSA_SHA384_MGF1)) {
											return $new($DOMSignatureMethod$SHA384withRSAandMGF1, static_cast<$AlgorithmParameterSpec*>(params));
										} else {
											if (algorithm->equals($DOMSignatureMethod::RSA_SHA512_MGF1)) {
												return $new($DOMSignatureMethod$SHA512withRSAandMGF1, static_cast<$AlgorithmParameterSpec*>(params));
											} else {
												$init($DOMRSAPSSSignatureMethod);
												if (algorithm->equals($DOMRSAPSSSignatureMethod::RSA_PSS)) {
													return $new($DOMRSAPSSSignatureMethod$RSAPSS, static_cast<$AlgorithmParameterSpec*>(params));
												} else {
													if (algorithm->equals($DOMSignatureMethod::RSA_RIPEMD160_MGF1)) {
														return $new($DOMSignatureMethod$RIPEMD160withRSAandMGF1, static_cast<$AlgorithmParameterSpec*>(params));
													} else {
														if (algorithm->equals($SignatureMethod::DSA_SHA1)) {
															return $new($DOMSignatureMethod$SHA1withDSA, static_cast<$AlgorithmParameterSpec*>(params));
														} else {
															if (algorithm->equals($DOMSignatureMethod::DSA_SHA256)) {
																return $new($DOMSignatureMethod$SHA256withDSA, static_cast<$AlgorithmParameterSpec*>(params));
															} else {
																if (algorithm->equals($SignatureMethod::HMAC_SHA1)) {
																	return $new($DOMHMACSignatureMethod$SHA1, static_cast<$AlgorithmParameterSpec*>(params));
																} else {
																	$init($DOMHMACSignatureMethod);
																	if (algorithm->equals($DOMHMACSignatureMethod::HMAC_SHA224)) {
																		return $new($DOMHMACSignatureMethod$SHA224, static_cast<$AlgorithmParameterSpec*>(params));
																	} else {
																		if (algorithm->equals($DOMHMACSignatureMethod::HMAC_SHA256)) {
																			return $new($DOMHMACSignatureMethod$SHA256, static_cast<$AlgorithmParameterSpec*>(params));
																		} else {
																			if (algorithm->equals($DOMHMACSignatureMethod::HMAC_SHA384)) {
																				return $new($DOMHMACSignatureMethod$SHA384, static_cast<$AlgorithmParameterSpec*>(params));
																			} else {
																				if (algorithm->equals($DOMHMACSignatureMethod::HMAC_SHA512)) {
																					return $new($DOMHMACSignatureMethod$SHA512, static_cast<$AlgorithmParameterSpec*>(params));
																				} else {
																					if (algorithm->equals($DOMHMACSignatureMethod::HMAC_RIPEMD160)) {
																						return $new($DOMHMACSignatureMethod$RIPEMD160, static_cast<$AlgorithmParameterSpec*>(params));
																					} else {
																						if (algorithm->equals($DOMSignatureMethod::ECDSA_SHA1)) {
																							return $new($DOMSignatureMethod$SHA1withECDSA, static_cast<$AlgorithmParameterSpec*>(params));
																						} else {
																							if (algorithm->equals($DOMSignatureMethod::ECDSA_SHA224)) {
																								return $new($DOMSignatureMethod$SHA224withECDSA, static_cast<$AlgorithmParameterSpec*>(params));
																							} else {
																								if (algorithm->equals($DOMSignatureMethod::ECDSA_SHA256)) {
																									return $new($DOMSignatureMethod$SHA256withECDSA, static_cast<$AlgorithmParameterSpec*>(params));
																								} else {
																									if (algorithm->equals($DOMSignatureMethod::ECDSA_SHA384)) {
																										return $new($DOMSignatureMethod$SHA384withECDSA, static_cast<$AlgorithmParameterSpec*>(params));
																									} else {
																										if (algorithm->equals($DOMSignatureMethod::ECDSA_SHA512)) {
																											return $new($DOMSignatureMethod$SHA512withECDSA, static_cast<$AlgorithmParameterSpec*>(params));
																										} else {
																											if (algorithm->equals($DOMSignatureMethod::ECDSA_RIPEMD160)) {
																												return $new($DOMSignatureMethod$RIPEMD160withECDSA, static_cast<$AlgorithmParameterSpec*>(params));
																											} else {
																												$throwNew($NoSuchAlgorithmException, "unsupported algorithm"_s);
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

$Transform* DOMXMLSignatureFactory::newTransform($String* algorithm, $TransformParameterSpec* params) {
	$var($TransformService, spi, nullptr);
	if (getProvider() == nullptr) {
		$assign(spi, $TransformService::getInstance(algorithm, "DOM"_s));
	} else {
		try {
			$assign(spi, $TransformService::getInstance(algorithm, "DOM"_s, $(getProvider())));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$assign(spi, $TransformService::getInstance(algorithm, "DOM"_s));
		}
	}
	$nc(spi)->init(params);
	return $new($DOMTransform, spi);
}

$Transform* DOMXMLSignatureFactory::newTransform($String* algorithm, $XMLStructure* params) {
	$var($TransformService, spi, nullptr);
	if (getProvider() == nullptr) {
		$assign(spi, $TransformService::getInstance(algorithm, "DOM"_s));
	} else {
		try {
			$assign(spi, $TransformService::getInstance(algorithm, "DOM"_s, $(getProvider())));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$assign(spi, $TransformService::getInstance(algorithm, "DOM"_s));
		}
	}
	if (params == nullptr) {
		$nc(spi)->init(nullptr);
	} else {
		$nc(spi)->init(params, nullptr);
	}
	return $new($DOMTransform, spi);
}

$CanonicalizationMethod* DOMXMLSignatureFactory::newCanonicalizationMethod($String* algorithm, $C14NMethodParameterSpec* params) {
	$var($TransformService, spi, nullptr);
	if (getProvider() == nullptr) {
		$assign(spi, $TransformService::getInstance(algorithm, "DOM"_s));
	} else {
		try {
			$assign(spi, $TransformService::getInstance(algorithm, "DOM"_s, $(getProvider())));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$assign(spi, $TransformService::getInstance(algorithm, "DOM"_s));
		}
	}
	$nc(spi)->init(params);
	return $new($DOMCanonicalizationMethod, spi);
}

$CanonicalizationMethod* DOMXMLSignatureFactory::newCanonicalizationMethod($String* algorithm, $XMLStructure* params) {
	$var($TransformService, spi, nullptr);
	if (getProvider() == nullptr) {
		$assign(spi, $TransformService::getInstance(algorithm, "DOM"_s));
	} else {
		try {
			$assign(spi, $TransformService::getInstance(algorithm, "DOM"_s, $(getProvider())));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			$assign(spi, $TransformService::getInstance(algorithm, "DOM"_s));
		}
	}
	if (params == nullptr) {
		$nc(spi)->init(nullptr);
	} else {
		$nc(spi)->init(params, nullptr);
	}
	return $new($DOMCanonicalizationMethod, spi);
}

$URIDereferencer* DOMXMLSignatureFactory::getURIDereferencer() {
	$init($DOMURIDereferencer);
	return $DOMURIDereferencer::INSTANCE;
}

DOMXMLSignatureFactory::DOMXMLSignatureFactory() {
}

$Class* DOMXMLSignatureFactory::load$($String* name, bool initialize) {
	$loadClass(DOMXMLSignatureFactory, name, initialize, &_DOMXMLSignatureFactory_ClassInfo_, allocate$DOMXMLSignatureFactory);
	return class$;
}

$Class* DOMXMLSignatureFactory::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org