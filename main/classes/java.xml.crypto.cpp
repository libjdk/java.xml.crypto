#include <java.xml.crypto.h>

#include <java.logging.h>
#include <java.xml.h>
#include <java.base.h>
#include <java/lang/ClassEntry.h>
#include <java/lang/Library.h>
#include <java/lang/ModuleInfo.h>
#include <java/lang/ResourceEntry.h>
#include <jcpp.h>
#include <module-info>

#include <com/sun/org/apache/xml/internal/security/Init.h>
#include <com/sun/org/apache/xml/internal/security/Init$1.h>
#include <com/sun/org/apache/xml/internal/security/Init$2.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/Algorithm.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper$Algorithm.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/MessageDigestAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithmSpi.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/ECDSAUtils.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/ECDSAUtils$ECCurveDefinition.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$HMACOutputLength.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacMD5.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacRIPEMD160.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacSHA1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacSHA224.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacSHA256.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacSHA384.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/IntegrityHmac$IntegrityHmacSHA512.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA.h>
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
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureDSA.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureDSA$SHA256.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSARIPEMD160.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSASHA1.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSASHA224.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSASHA256.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSASHA384.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureECDSA$SignatureECDSASHA512.h>
#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizerSpi.h>
#include <com/sun/org/apache/xml/internal/security/c14n/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/c14n/InvalidCanonicalizerException.h>
#include <com/sun/org/apache/xml/internal/security/c14n/helper/AttrCompare.h>
#include <com/sun/org/apache/xml/internal/security/c14n/helper/C14nHelper.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer11_OmitComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer11_WithComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315Excl.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315ExclOmitComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315ExclWithComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315OmitComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315WithComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/CanonicalizerBase.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/CanonicalizerPhysical.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbEntry.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/SymbMap.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/UtfHelpper.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/XmlAttrStack.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/XmlAttrStack$XmlsStackElement.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/AlgorithmAlreadyRegisteredException.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/Base64DecodingException.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityRuntimeException.h>
#include <com/sun/org/apache/xml/internal/security/keys/KeyInfo.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/DEREncodedKeyValue.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/KeyInfoContent.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/KeyInfoReference.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/KeyName.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/KeyValue.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/MgmtData.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/PGPData.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/RetrievalMethod.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/SPKIData.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/X509Data.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/DSAKeyValue.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/ECKeyValue$Curve.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/KeyValueContent.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/RSAKeyValue.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509CRL.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Certificate.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509DataContent.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Digest.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509IssuerSerial.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SKI.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SubjectName.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolver$ResolverIterator.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverException.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/DEREncodedKeyValueResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/DSAKeyValueResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/ECKeyValueResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/KeyInfoReferenceResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/PrivateKeyResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/RSAKeyValueResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/RetrievalMethodResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/SecretKeyResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/SingleKeyResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509CertificateResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509DigestResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509IssuerSerialResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509SKIResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509SubjectNameResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver$StorageResolverIterator.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverException.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/KeyStoreResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/KeyStoreResolver$KeyStoreIterator.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/SingleCertificateResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/SingleCertificateResolver$InternalIterator.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParser.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParserException.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParserImpl.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParserImpl$1.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParserImpl$2.h>
#include <com/sun/org/apache/xml/internal/security/signature/InvalidDigestValueException.h>
#include <com/sun/org/apache/xml/internal/security/signature/InvalidSignatureValueException.h>
#include <com/sun/org/apache/xml/internal/security/signature/Manifest.h>
#include <com/sun/org/apache/xml/internal/security/signature/MissingResourceFailureException.h>
#include <com/sun/org/apache/xml/internal/security/signature/NodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/signature/ObjectContainer.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference$1.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference$2.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference$2$1.h>
#include <com/sun/org/apache/xml/internal/security/signature/ReferenceNotInitializedException.h>
#include <com/sun/org/apache/xml/internal/security/signature/SignatureProperties.h>
#include <com/sun/org/apache/xml/internal/security/signature/SignatureProperty.h>
#include <com/sun/org/apache/xml/internal/security/signature/SignedInfo.h>
#include <com/sun/org/apache/xml/internal/security/signature/VerifiedReference.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignature.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInputDebugger.h>
#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceData.h>
#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceNodeSetData.h>
#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceOctetStreamData.h>
#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceSubTreeData.h>
#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceSubTreeData$DelayedNodeIterator.h>
#include <com/sun/org/apache/xml/internal/security/transforms/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/transforms/InvalidTransformException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transform.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformParam.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformationException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/FuncHere.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformBase64Decode.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14N.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14N11.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14N11_WithComments.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14NExclusive.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14NExclusiveWithComments.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14NWithComments.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformEnvelopedSignature.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformEnvelopedSignature$EnvelopedNodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath$XPathNodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath2Filter.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXSLT.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/XPath2NodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/transforms/params/InclusiveNamespaces.h>
#include <com/sun/org/apache/xml/internal/security/transforms/params/XPath2FilterContainer.h>
#include <com/sun/org/apache/xml/internal/security/transforms/params/XPathContainer.h>
#include <com/sun/org/apache/xml/internal/security/utils/Base64.h>
#include <com/sun/org/apache/xml/internal/security/utils/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/DOMNamespaceContext.h>
#include <com/sun/org/apache/xml/internal/security/utils/DigesterOutputStream.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/EncryptionConstants.h>
#include <com/sun/org/apache/xml/internal/security/utils/HelperNodeList.h>
#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>
#include <com/sun/org/apache/xml/internal/security/utils/IdResolver.h>
#include <com/sun/org/apache/xml/internal/security/utils/IgnoreAllErrorHandler.h>
#include <com/sun/org/apache/xml/internal/security/utils/JDKXPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/JDKXPathFactory.h>
#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/RFC2253Parser.h>
#include <com/sun/org/apache/xml/internal/security/utils/Signature11ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignerOutputStream.h>
#include <com/sun/org/apache/xml/internal/security/utils/UnsyncBufferedOutputStream.h>
#include <com/sun/org/apache/xml/internal/security/utils/UnsyncByteArrayOutputStream.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathFactory.h>
#include <com/sun/org/apache/xml/internal/security/utils/XalanXPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/XalanXPathFactory.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolver.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverException.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverAnonymous.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverDirectHTTP.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverFragment.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverLocalFilesystem.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverXPointer.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <javax/xml/crypto/AlgorithmMethod.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/KeySelector.h>
#include <javax/xml/crypto/KeySelector$Purpose.h>
#include <javax/xml/crypto/KeySelector$SingletonKeySelector.h>
#include <javax/xml/crypto/KeySelector$SingletonKeySelector$1.h>
#include <javax/xml/crypto/KeySelectorException.h>
#include <javax/xml/crypto/KeySelectorResult.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/NoSuchMechanismException.h>
#include <javax/xml/crypto/NodeSetData.h>
#include <javax/xml/crypto/OctetStreamData.h>
#include <javax/xml/crypto/URIDereferencer.h>
#include <javax/xml/crypto/URIReference.h>
#include <javax/xml/crypto/URIReferenceException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <javax/xml/crypto/dom/DOMURIReference.h>
#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <javax/xml/crypto/dsig/DigestMethod.h>
#include <javax/xml/crypto/dsig/Manifest.h>
#include <javax/xml/crypto/dsig/Reference.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <javax/xml/crypto/dsig/SignatureProperties.h>
#include <javax/xml/crypto/dsig/SignatureProperty.h>
#include <javax/xml/crypto/dsig/SignedInfo.h>
#include <javax/xml/crypto/dsig/Transform.h>
#include <javax/xml/crypto/dsig/TransformException.h>
#include <javax/xml/crypto/dsig/TransformService.h>
#include <javax/xml/crypto/dsig/TransformService$MechanismMapEntry.h>
#include <javax/xml/crypto/dsig/XMLObject.h>
#include <javax/xml/crypto/dsig/XMLSignContext.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/XMLSignature$SignatureValue.h>
#include <javax/xml/crypto/dsig/XMLSignatureException.h>
#include <javax/xml/crypto/dsig/XMLSignatureFactory.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <javax/xml/crypto/dsig/dom/DOMSignContext.h>
#include <javax/xml/crypto/dsig/dom/DOMValidateContext.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfoFactory.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyName.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyValue.h>
#include <javax/xml/crypto/dsig/keyinfo/PGPData.h>
#include <javax/xml/crypto/dsig/keyinfo/RetrievalMethod.h>
#include <javax/xml/crypto/dsig/keyinfo/X509Data.h>
#include <javax/xml/crypto/dsig/keyinfo/X509IssuerSerial.h>
#include <javax/xml/crypto/dsig/spec/C14NMethodParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/DigestMethodParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/ExcC14NParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/HMACParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/RSAPSSParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/SignatureMethodParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/XPathFilter2ParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/XPathFilterParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/XPathType.h>
#include <javax/xml/crypto/dsig/spec/XPathType$Filter.h>
#include <javax/xml/crypto/dsig/spec/XSLTTransformParameterSpec.h>
#include <org/jcp/xml/dsig/internal/DigesterOutputStream.h>
#include <org/jcp/xml/dsig/internal/MacOutputStream.h>
#include <org/jcp/xml/dsig/internal/SignerOutputStream.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheCanonicalizer.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheData.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheNodeSetData.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheOctetStreamData.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheTransform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMBase64Transform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMCanonicalXMLC14N11Method.h>
#include <org/jcp/xml/dsig/internal/dom/DOMCanonicalXMLC14NMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMCanonicalizationMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMCryptoBinary.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod.h>
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
#include <org/jcp/xml/dsig/internal/dom/DOMEnvelopedTransform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMExcC14NMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$RIPEMD160.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA1.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA224.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA256.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA384.h>
#include <org/jcp/xml/dsig/internal/dom/DOMHMACSignatureMethod$SHA512.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyInfo.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyInfoFactory.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyInfoFactory$UnmarshalContext.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyName.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$DSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$EC.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$EC$Curve.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$RSA.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$Unknown.h>
#include <org/jcp/xml/dsig/internal/dom/DOMManifest.h>
#include <org/jcp/xml/dsig/internal/dom/DOMPGPData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMRSAPSSSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMRSAPSSSignatureMethod$RSAPSS.h>
#include <org/jcp/xml/dsig/internal/dom/DOMReference.h>
#include <org/jcp/xml/dsig/internal/dom/DOMReference$1.h>
#include <org/jcp/xml/dsig/internal/dom/DOMRetrievalMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
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
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureProperties.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureProperty.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignedInfo.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData$DelayedNodeIterator.h>
#include <org/jcp/xml/dsig/internal/dom/DOMTransform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMURIDereferencer.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/jcp/xml/dsig/internal/dom/DOMX509Data.h>
#include <org/jcp/xml/dsig/internal/dom/DOMX509IssuerSerial.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLObject.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignature.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignature$DOMSignatureValue.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignatureFactory.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignatureFactory$UnmarshalContext.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXPathFilter2Transform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXPathTransform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXSLTTransform.h>
#include <org/jcp/xml/dsig/internal/dom/Policy.h>
#include <org/jcp/xml/dsig/internal/dom/Utils.h>
#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI.h>
#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI$1.h>
#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI$2.h>
#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI$ProviderService.h>

#undef XMLX509CRL
#undef XMLX509SKI

#define $classEntry(name, clazz) {name, clazz::load$, $getMark(clazz)}
::java::lang::ClassEntry _java$xml$crypto_classes_[] = {
	$classEntry("com.sun.org.apache.xml.internal.security.Init", ::com::sun::org::apache::xml::internal::security::Init),
	$classEntry("com.sun.org.apache.xml.internal.security.Init$1", ::com::sun::org::apache::xml::internal::security::Init$1),
	$classEntry("com.sun.org.apache.xml.internal.security.Init$2", ::com::sun::org::apache::xml::internal::security::Init$2),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.Algorithm", ::com::sun::org::apache::xml::internal::security::algorithms::Algorithm),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.ClassLoaderUtils", ::com::sun::org::apache::xml::internal::security::algorithms::ClassLoaderUtils),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.JCEMapper", ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.JCEMapper$Algorithm", ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper$Algorithm),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.MessageDigestAlgorithm", ::com::sun::org::apache::xml::internal::security::algorithms::MessageDigestAlgorithm),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.SignatureAlgorithm", ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithm),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.SignatureAlgorithmSpi", ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithmSpi),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.ECDSAUtils", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::ECDSAUtils),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.ECDSAUtils$ECCurveDefinition", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::ECDSAUtils$ECCurveDefinition),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$HMACOutputLength", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$HMACOutputLength),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacMD5", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacMD5),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacRIPEMD160", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacRIPEMD160),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA1", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacSHA1),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA224", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacSHA224),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA256", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacSHA256),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA384", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacSHA384),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.IntegrityHmac$IntegrityHmacSHA512", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::IntegrityHmac$IntegrityHmacSHA512),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSAMD5", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSAMD5),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSARIPEMD160", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSARIPEMD160),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA1", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA1),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA1MGF1", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA1MGF1),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA224", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA224),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA224MGF1", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA224MGF1),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA256", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA256),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA256MGF1", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA256MGF1),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA384", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA384),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA384MGF1", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA384MGF1),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_224MGF1", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA3_224MGF1),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_256MGF1", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA3_256MGF1),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_384MGF1", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA3_384MGF1),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA3_512MGF1", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA3_512MGF1),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA512", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA512),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASHA512MGF1", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASHA512MGF1),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureDSA),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureDSA$SHA256", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureDSA$SHA256),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSARIPEMD160", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA$SignatureECDSARIPEMD160),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA1", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA$SignatureECDSASHA1),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA224", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA$SignatureECDSASHA224),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA256", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA$SignatureECDSASHA256),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA384", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA$SignatureECDSASHA384),
	$classEntry("com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureECDSA$SignatureECDSASHA512", ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureECDSA$SignatureECDSASHA512),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException", ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizationException),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.Canonicalizer", ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.CanonicalizerSpi", ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizerSpi),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.ClassLoaderUtils", ::com::sun::org::apache::xml::internal::security::c14n::ClassLoaderUtils),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.InvalidCanonicalizerException", ::com::sun::org::apache::xml::internal::security::c14n::InvalidCanonicalizerException),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.helper.AttrCompare", ::com::sun::org::apache::xml::internal::security::c14n::helper::AttrCompare),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.helper.C14nHelper", ::com::sun::org::apache::xml::internal::security::c14n::helper::C14nHelper),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer11_OmitComments", ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer11_OmitComments),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer11_WithComments", ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer11_WithComments),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315", ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315Excl", ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315Excl),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315ExclOmitComments", ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315ExclOmitComments),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315ExclWithComments", ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315ExclWithComments),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315OmitComments", ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315OmitComments),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315WithComments", ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315WithComments),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.CanonicalizerBase", ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.CanonicalizerPhysical", ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerPhysical),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.NameSpaceSymbEntry", ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbEntry),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.NameSpaceSymbTable", ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.SymbMap", ::com::sun::org::apache::xml::internal::security::c14n::implementations::SymbMap),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.UtfHelpper", ::com::sun::org::apache::xml::internal::security::c14n::implementations::UtfHelpper),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack", ::com::sun::org::apache::xml::internal::security::c14n::implementations::XmlAttrStack),
	$classEntry("com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack$XmlsStackElement", ::com::sun::org::apache::xml::internal::security::c14n::implementations::XmlAttrStack$XmlsStackElement),
	$classEntry("com.sun.org.apache.xml.internal.security.exceptions.AlgorithmAlreadyRegisteredException", ::com::sun::org::apache::xml::internal::security::exceptions::AlgorithmAlreadyRegisteredException),
	$classEntry("com.sun.org.apache.xml.internal.security.exceptions.Base64DecodingException", ::com::sun::org::apache::xml::internal::security::exceptions::Base64DecodingException),
	$classEntry("com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException", ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException),
	$classEntry("com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityRuntimeException", ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityRuntimeException),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.KeyInfo", ::com::sun::org::apache::xml::internal::security::keys::KeyInfo),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.DEREncodedKeyValue", ::com::sun::org::apache::xml::internal::security::keys::content::DEREncodedKeyValue),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent", ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.KeyInfoReference", ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoReference),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.KeyName", ::com::sun::org::apache::xml::internal::security::keys::content::KeyName),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.KeyValue", ::com::sun::org::apache::xml::internal::security::keys::content::KeyValue),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.MgmtData", ::com::sun::org::apache::xml::internal::security::keys::content::MgmtData),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.PGPData", ::com::sun::org::apache::xml::internal::security::keys::content::PGPData),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.RetrievalMethod", ::com::sun::org::apache::xml::internal::security::keys::content::RetrievalMethod),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.SPKIData", ::com::sun::org::apache::xml::internal::security::keys::content::SPKIData),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.X509Data", ::com::sun::org::apache::xml::internal::security::keys::content::X509Data),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.keyvalues.DSAKeyValue", ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::DSAKeyValue),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue", ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::ECKeyValue),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.keyvalues.ECKeyValue$Curve", ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::ECKeyValue$Curve),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.keyvalues.KeyValueContent", ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::KeyValueContent),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.keyvalues.RSAKeyValue", ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::RSAKeyValue),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509CRL", ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509CRL),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509Certificate", ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Certificate),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509DataContent", ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509Digest", ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Digest),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509IssuerSerial", ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509IssuerSerial),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509SKI", ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SKI),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509SubjectName", ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SubjectName),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.ClassLoaderUtils", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::ClassLoaderUtils),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolver$ResolverIterator", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolver$ResolverIterator),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverException),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.DEREncodedKeyValueResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::DEREncodedKeyValueResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.DSAKeyValueResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::DSAKeyValueResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.ECKeyValueResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::ECKeyValueResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.KeyInfoReferenceResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::KeyInfoReferenceResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.PrivateKeyResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::PrivateKeyResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.RSAKeyValueResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::RSAKeyValueResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.RetrievalMethodResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::RetrievalMethodResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.SecretKeyResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::SecretKeyResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.SingleKeyResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::SingleKeyResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.X509CertificateResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::X509CertificateResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.X509DigestResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::X509DigestResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.X509IssuerSerialResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::X509IssuerSerialResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.X509SKIResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::X509SKIResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.X509SubjectNameResolver", ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::X509SubjectNameResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.storage.StorageResolver", ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.storage.StorageResolver$StorageResolverIterator", ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver$StorageResolverIterator),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverException", ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverException),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverSpi", ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverSpi),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver", ::com::sun::org::apache::xml::internal::security::keys::storage::implementations::KeyStoreResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver$KeyStoreIterator", ::com::sun::org::apache::xml::internal::security::keys::storage::implementations::KeyStoreResolver$KeyStoreIterator),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver", ::com::sun::org::apache::xml::internal::security::keys::storage::implementations::SingleCertificateResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver$InternalIterator", ::com::sun::org::apache::xml::internal::security::keys::storage::implementations::SingleCertificateResolver$InternalIterator),
	$classEntry("com.sun.org.apache.xml.internal.security.parser.XMLParser", ::com::sun::org::apache::xml::internal::security::parser::XMLParser),
	$classEntry("com.sun.org.apache.xml.internal.security.parser.XMLParserException", ::com::sun::org::apache::xml::internal::security::parser::XMLParserException),
	$classEntry("com.sun.org.apache.xml.internal.security.parser.XMLParserImpl", ::com::sun::org::apache::xml::internal::security::parser::XMLParserImpl),
	$classEntry("com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$1", ::com::sun::org::apache::xml::internal::security::parser::XMLParserImpl$1),
	$classEntry("com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$2", ::com::sun::org::apache::xml::internal::security::parser::XMLParserImpl$2),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.InvalidDigestValueException", ::com::sun::org::apache::xml::internal::security::signature::InvalidDigestValueException),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.InvalidSignatureValueException", ::com::sun::org::apache::xml::internal::security::signature::InvalidSignatureValueException),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.Manifest", ::com::sun::org::apache::xml::internal::security::signature::Manifest),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.MissingResourceFailureException", ::com::sun::org::apache::xml::internal::security::signature::MissingResourceFailureException),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.NodeFilter", ::com::sun::org::apache::xml::internal::security::signature::NodeFilter),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.ObjectContainer", ::com::sun::org::apache::xml::internal::security::signature::ObjectContainer),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.Reference", ::com::sun::org::apache::xml::internal::security::signature::Reference),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.Reference$1", ::com::sun::org::apache::xml::internal::security::signature::Reference$1),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.Reference$2", ::com::sun::org::apache::xml::internal::security::signature::Reference$2),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.Reference$2$1", ::com::sun::org::apache::xml::internal::security::signature::Reference$2$1),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.ReferenceNotInitializedException", ::com::sun::org::apache::xml::internal::security::signature::ReferenceNotInitializedException),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.SignatureProperties", ::com::sun::org::apache::xml::internal::security::signature::SignatureProperties),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.SignatureProperty", ::com::sun::org::apache::xml::internal::security::signature::SignatureProperty),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.SignedInfo", ::com::sun::org::apache::xml::internal::security::signature::SignedInfo),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.VerifiedReference", ::com::sun::org::apache::xml::internal::security::signature::VerifiedReference),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.XMLSignature", ::com::sun::org::apache::xml::internal::security::signature::XMLSignature),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.XMLSignatureException", ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.XMLSignatureInput", ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.XMLSignatureInputDebugger", ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInputDebugger),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.reference.ReferenceData", ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceData),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.reference.ReferenceNodeSetData", ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceNodeSetData),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.reference.ReferenceOctetStreamData", ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceOctetStreamData),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.reference.ReferenceSubTreeData", ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceSubTreeData),
	$classEntry("com.sun.org.apache.xml.internal.security.signature.reference.ReferenceSubTreeData$DelayedNodeIterator", ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceSubTreeData$DelayedNodeIterator),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.ClassLoaderUtils", ::com::sun::org::apache::xml::internal::security::transforms::ClassLoaderUtils),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.InvalidTransformException", ::com::sun::org::apache::xml::internal::security::transforms::InvalidTransformException),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.Transform", ::com::sun::org::apache::xml::internal::security::transforms::Transform),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.TransformParam", ::com::sun::org::apache::xml::internal::security::transforms::TransformParam),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.TransformSpi", ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.TransformationException", ::com::sun::org::apache::xml::internal::security::transforms::TransformationException),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.Transforms", ::com::sun::org::apache::xml::internal::security::transforms::Transforms),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.FuncHere", ::com::sun::org::apache::xml::internal::security::transforms::implementations::FuncHere),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.TransformBase64Decode", ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformBase64Decode),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14N", ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14N),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14N11", ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14N11),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14N11_WithComments", ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14N11_WithComments),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14NExclusive", ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14NExclusive),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14NExclusiveWithComments", ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14NExclusiveWithComments),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14NWithComments", ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14NWithComments),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.TransformEnvelopedSignature", ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformEnvelopedSignature),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.TransformEnvelopedSignature$EnvelopedNodeFilter", ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformEnvelopedSignature$EnvelopedNodeFilter),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath", ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformXPath),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath$XPathNodeFilter", ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformXPath$XPathNodeFilter),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath2Filter", ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformXPath2Filter),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXSLT", ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformXSLT),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.implementations.XPath2NodeFilter", ::com::sun::org::apache::xml::internal::security::transforms::implementations::XPath2NodeFilter),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.params.InclusiveNamespaces", ::com::sun::org::apache::xml::internal::security::transforms::params::InclusiveNamespaces),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.params.XPath2FilterContainer", ::com::sun::org::apache::xml::internal::security::transforms::params::XPath2FilterContainer),
	$classEntry("com.sun.org.apache.xml.internal.security.transforms.params.XPathContainer", ::com::sun::org::apache::xml::internal::security::transforms::params::XPathContainer),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.Base64", ::com::sun::org::apache::xml::internal::security::utils::Base64),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.ClassLoaderUtils", ::com::sun::org::apache::xml::internal::security::utils::ClassLoaderUtils),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.Constants", ::com::sun::org::apache::xml::internal::security::utils::Constants),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.DOMNamespaceContext", ::com::sun::org::apache::xml::internal::security::utils::DOMNamespaceContext),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.DigesterOutputStream", ::com::sun::org::apache::xml::internal::security::utils::DigesterOutputStream),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.ElementProxy", ::com::sun::org::apache::xml::internal::security::utils::ElementProxy),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.EncryptionConstants", ::com::sun::org::apache::xml::internal::security::utils::EncryptionConstants),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.HelperNodeList", ::com::sun::org::apache::xml::internal::security::utils::HelperNodeList),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.I18n", ::com::sun::org::apache::xml::internal::security::utils::I18n),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.IdResolver", ::com::sun::org::apache::xml::internal::security::utils::IdResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.IgnoreAllErrorHandler", ::com::sun::org::apache::xml::internal::security::utils::IgnoreAllErrorHandler),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.JDKXPathAPI", ::com::sun::org::apache::xml::internal::security::utils::JDKXPathAPI),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.JDKXPathFactory", ::com::sun::org::apache::xml::internal::security::utils::JDKXPathFactory),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.JavaUtils", ::com::sun::org::apache::xml::internal::security::utils::JavaUtils),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.RFC2253Parser", ::com::sun::org::apache::xml::internal::security::utils::RFC2253Parser),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.Signature11ElementProxy", ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy", ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.SignerOutputStream", ::com::sun::org::apache::xml::internal::security::utils::SignerOutputStream),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.UnsyncBufferedOutputStream", ::com::sun::org::apache::xml::internal::security::utils::UnsyncBufferedOutputStream),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.UnsyncByteArrayOutputStream", ::com::sun::org::apache::xml::internal::security::utils::UnsyncByteArrayOutputStream),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.XMLUtils", ::com::sun::org::apache::xml::internal::security::utils::XMLUtils),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.XPathAPI", ::com::sun::org::apache::xml::internal::security::utils::XPathAPI),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.XPathFactory", ::com::sun::org::apache::xml::internal::security::utils::XPathFactory),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.XalanXPathAPI", ::com::sun::org::apache::xml::internal::security::utils::XalanXPathAPI),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.XalanXPathFactory", ::com::sun::org::apache::xml::internal::security::utils::XalanXPathFactory),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.resolver.ClassLoaderUtils", ::com::sun::org::apache::xml::internal::security::utils::resolver::ClassLoaderUtils),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolver", ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolver),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverContext", ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException", ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverException),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi", ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverAnonymous", ::com::sun::org::apache::xml::internal::security::utils::resolver::implementations::ResolverAnonymous),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverDirectHTTP", ::com::sun::org::apache::xml::internal::security::utils::resolver::implementations::ResolverDirectHTTP),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverFragment", ::com::sun::org::apache::xml::internal::security::utils::resolver::implementations::ResolverFragment),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverLocalFilesystem", ::com::sun::org::apache::xml::internal::security::utils::resolver::implementations::ResolverLocalFilesystem),
	$classEntry("com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverXPointer", ::com::sun::org::apache::xml::internal::security::utils::resolver::implementations::ResolverXPointer),
	$classEntry("com.sun.org.slf4j.internal.Logger", ::com::sun::org::slf4j::internal::Logger),
	$classEntry("com.sun.org.slf4j.internal.LoggerFactory", ::com::sun::org::slf4j::internal::LoggerFactory),
	$classEntry("javax.xml.crypto.AlgorithmMethod", ::javax::xml::crypto::AlgorithmMethod),
	$classEntry("javax.xml.crypto.Data", ::javax::xml::crypto::Data),
	$classEntry("javax.xml.crypto.KeySelector", ::javax::xml::crypto::KeySelector),
	$classEntry("javax.xml.crypto.KeySelector$Purpose", ::javax::xml::crypto::KeySelector$Purpose),
	$classEntry("javax.xml.crypto.KeySelector$SingletonKeySelector", ::javax::xml::crypto::KeySelector$SingletonKeySelector),
	$classEntry("javax.xml.crypto.KeySelector$SingletonKeySelector$1", ::javax::xml::crypto::KeySelector$SingletonKeySelector$1),
	$classEntry("javax.xml.crypto.KeySelectorException", ::javax::xml::crypto::KeySelectorException),
	$classEntry("javax.xml.crypto.KeySelectorResult", ::javax::xml::crypto::KeySelectorResult),
	$classEntry("javax.xml.crypto.MarshalException", ::javax::xml::crypto::MarshalException),
	$classEntry("javax.xml.crypto.NoSuchMechanismException", ::javax::xml::crypto::NoSuchMechanismException),
	$classEntry("javax.xml.crypto.NodeSetData", ::javax::xml::crypto::NodeSetData),
	$classEntry("javax.xml.crypto.OctetStreamData", ::javax::xml::crypto::OctetStreamData),
	$classEntry("javax.xml.crypto.URIDereferencer", ::javax::xml::crypto::URIDereferencer),
	$classEntry("javax.xml.crypto.URIReference", ::javax::xml::crypto::URIReference),
	$classEntry("javax.xml.crypto.URIReferenceException", ::javax::xml::crypto::URIReferenceException),
	$classEntry("javax.xml.crypto.XMLCryptoContext", ::javax::xml::crypto::XMLCryptoContext),
	$classEntry("javax.xml.crypto.XMLStructure", ::javax::xml::crypto::XMLStructure),
	$classEntry("javax.xml.crypto.dom.DOMCryptoContext", ::javax::xml::crypto::dom::DOMCryptoContext),
	$classEntry("javax.xml.crypto.dom.DOMStructure", ::javax::xml::crypto::dom::DOMStructure),
	$classEntry("javax.xml.crypto.dom.DOMURIReference", ::javax::xml::crypto::dom::DOMURIReference),
	$classEntry("javax.xml.crypto.dsig.CanonicalizationMethod", ::javax::xml::crypto::dsig::CanonicalizationMethod),
	$classEntry("javax.xml.crypto.dsig.DigestMethod", ::javax::xml::crypto::dsig::DigestMethod),
	$classEntry("javax.xml.crypto.dsig.Manifest", ::javax::xml::crypto::dsig::Manifest),
	$classEntry("javax.xml.crypto.dsig.Reference", ::javax::xml::crypto::dsig::Reference),
	$classEntry("javax.xml.crypto.dsig.SignatureMethod", ::javax::xml::crypto::dsig::SignatureMethod),
	$classEntry("javax.xml.crypto.dsig.SignatureProperties", ::javax::xml::crypto::dsig::SignatureProperties),
	$classEntry("javax.xml.crypto.dsig.SignatureProperty", ::javax::xml::crypto::dsig::SignatureProperty),
	$classEntry("javax.xml.crypto.dsig.SignedInfo", ::javax::xml::crypto::dsig::SignedInfo),
	$classEntry("javax.xml.crypto.dsig.Transform", ::javax::xml::crypto::dsig::Transform),
	$classEntry("javax.xml.crypto.dsig.TransformException", ::javax::xml::crypto::dsig::TransformException),
	$classEntry("javax.xml.crypto.dsig.TransformService", ::javax::xml::crypto::dsig::TransformService),
	$classEntry("javax.xml.crypto.dsig.TransformService$MechanismMapEntry", ::javax::xml::crypto::dsig::TransformService$MechanismMapEntry),
	$classEntry("javax.xml.crypto.dsig.XMLObject", ::javax::xml::crypto::dsig::XMLObject),
	$classEntry("javax.xml.crypto.dsig.XMLSignContext", ::javax::xml::crypto::dsig::XMLSignContext),
	$classEntry("javax.xml.crypto.dsig.XMLSignature", ::javax::xml::crypto::dsig::XMLSignature),
	$classEntry("javax.xml.crypto.dsig.XMLSignature$SignatureValue", ::javax::xml::crypto::dsig::XMLSignature$SignatureValue),
	$classEntry("javax.xml.crypto.dsig.XMLSignatureException", ::javax::xml::crypto::dsig::XMLSignatureException),
	$classEntry("javax.xml.crypto.dsig.XMLSignatureFactory", ::javax::xml::crypto::dsig::XMLSignatureFactory),
	$classEntry("javax.xml.crypto.dsig.XMLValidateContext", ::javax::xml::crypto::dsig::XMLValidateContext),
	$classEntry("javax.xml.crypto.dsig.dom.DOMSignContext", ::javax::xml::crypto::dsig::dom::DOMSignContext),
	$classEntry("javax.xml.crypto.dsig.dom.DOMValidateContext", ::javax::xml::crypto::dsig::dom::DOMValidateContext),
	$classEntry("javax.xml.crypto.dsig.keyinfo.KeyInfo", ::javax::xml::crypto::dsig::keyinfo::KeyInfo),
	$classEntry("javax.xml.crypto.dsig.keyinfo.KeyInfoFactory", ::javax::xml::crypto::dsig::keyinfo::KeyInfoFactory),
	$classEntry("javax.xml.crypto.dsig.keyinfo.KeyName", ::javax::xml::crypto::dsig::keyinfo::KeyName),
	$classEntry("javax.xml.crypto.dsig.keyinfo.KeyValue", ::javax::xml::crypto::dsig::keyinfo::KeyValue),
	$classEntry("javax.xml.crypto.dsig.keyinfo.PGPData", ::javax::xml::crypto::dsig::keyinfo::PGPData),
	$classEntry("javax.xml.crypto.dsig.keyinfo.RetrievalMethod", ::javax::xml::crypto::dsig::keyinfo::RetrievalMethod),
	$classEntry("javax.xml.crypto.dsig.keyinfo.X509Data", ::javax::xml::crypto::dsig::keyinfo::X509Data),
	$classEntry("javax.xml.crypto.dsig.keyinfo.X509IssuerSerial", ::javax::xml::crypto::dsig::keyinfo::X509IssuerSerial),
	$classEntry("javax.xml.crypto.dsig.spec.C14NMethodParameterSpec", ::javax::xml::crypto::dsig::spec::C14NMethodParameterSpec),
	$classEntry("javax.xml.crypto.dsig.spec.DigestMethodParameterSpec", ::javax::xml::crypto::dsig::spec::DigestMethodParameterSpec),
	$classEntry("javax.xml.crypto.dsig.spec.ExcC14NParameterSpec", ::javax::xml::crypto::dsig::spec::ExcC14NParameterSpec),
	$classEntry("javax.xml.crypto.dsig.spec.HMACParameterSpec", ::javax::xml::crypto::dsig::spec::HMACParameterSpec),
	$classEntry("javax.xml.crypto.dsig.spec.RSAPSSParameterSpec", ::javax::xml::crypto::dsig::spec::RSAPSSParameterSpec),
	$classEntry("javax.xml.crypto.dsig.spec.SignatureMethodParameterSpec", ::javax::xml::crypto::dsig::spec::SignatureMethodParameterSpec),
	$classEntry("javax.xml.crypto.dsig.spec.TransformParameterSpec", ::javax::xml::crypto::dsig::spec::TransformParameterSpec),
	$classEntry("javax.xml.crypto.dsig.spec.XPathFilter2ParameterSpec", ::javax::xml::crypto::dsig::spec::XPathFilter2ParameterSpec),
	$classEntry("javax.xml.crypto.dsig.spec.XPathFilterParameterSpec", ::javax::xml::crypto::dsig::spec::XPathFilterParameterSpec),
	$classEntry("javax.xml.crypto.dsig.spec.XPathType", ::javax::xml::crypto::dsig::spec::XPathType),
	$classEntry("javax.xml.crypto.dsig.spec.XPathType$Filter", ::javax::xml::crypto::dsig::spec::XPathType$Filter),
	$classEntry("javax.xml.crypto.dsig.spec.XSLTTransformParameterSpec", ::javax::xml::crypto::dsig::spec::XSLTTransformParameterSpec),
	$classEntry("org.jcp.xml.dsig.internal.DigesterOutputStream", ::org::jcp::xml::dsig::internal::DigesterOutputStream),
	$classEntry("org.jcp.xml.dsig.internal.MacOutputStream", ::org::jcp::xml::dsig::internal::MacOutputStream),
	$classEntry("org.jcp.xml.dsig.internal.SignerOutputStream", ::org::jcp::xml::dsig::internal::SignerOutputStream),
	$classEntry("org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod", ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod$Type", ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type),
	$classEntry("org.jcp.xml.dsig.internal.dom.ApacheCanonicalizer", ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer),
	$classEntry("org.jcp.xml.dsig.internal.dom.ApacheData", ::org::jcp::xml::dsig::internal::dom::ApacheData),
	$classEntry("org.jcp.xml.dsig.internal.dom.ApacheNodeSetData", ::org::jcp::xml::dsig::internal::dom::ApacheNodeSetData),
	$classEntry("org.jcp.xml.dsig.internal.dom.ApacheOctetStreamData", ::org::jcp::xml::dsig::internal::dom::ApacheOctetStreamData),
	$classEntry("org.jcp.xml.dsig.internal.dom.ApacheTransform", ::org::jcp::xml::dsig::internal::dom::ApacheTransform),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMBase64Transform", ::org::jcp::xml::dsig::internal::dom::DOMBase64Transform),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMCanonicalXMLC14N11Method", ::org::jcp::xml::dsig::internal::dom::DOMCanonicalXMLC14N11Method),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMCanonicalXMLC14NMethod", ::org::jcp::xml::dsig::internal::dom::DOMCanonicalXMLC14NMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMCanonicalizationMethod", ::org::jcp::xml::dsig::internal::dom::DOMCanonicalizationMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMCryptoBinary", ::org::jcp::xml::dsig::internal::dom::DOMCryptoBinary),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMDigestMethod", ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMDigestMethod$RIPEMD160", ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$RIPEMD160),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA1", ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA1),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA224", ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA224),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA256", ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA256),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA384", ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA384),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_224", ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA3_224),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_256", ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA3_256),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_384", ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA3_384),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_512", ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA3_512),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA512", ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA512),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMDigestMethod$WHIRLPOOL", ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$WHIRLPOOL),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMEnvelopedTransform", ::org::jcp::xml::dsig::internal::dom::DOMEnvelopedTransform),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMExcC14NMethod", ::org::jcp::xml::dsig::internal::dom::DOMExcC14NMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod", ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$RIPEMD160", ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$RIPEMD160),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA1", ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA1),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA224", ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA224),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA256", ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA256),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA384", ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA384),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMHMACSignatureMethod$SHA512", ::org::jcp::xml::dsig::internal::dom::DOMHMACSignatureMethod$SHA512),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMKeyInfo", ::org::jcp::xml::dsig::internal::dom::DOMKeyInfo),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory", ::org::jcp::xml::dsig::internal::dom::DOMKeyInfoFactory),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory$UnmarshalContext", ::org::jcp::xml::dsig::internal::dom::DOMKeyInfoFactory$UnmarshalContext),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMKeyName", ::org::jcp::xml::dsig::internal::dom::DOMKeyName),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMKeyValue", ::org::jcp::xml::dsig::internal::dom::DOMKeyValue),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMKeyValue$DSA", ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$DSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC", ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$EC),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMKeyValue$EC$Curve", ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$EC$Curve),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMKeyValue$RSA", ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$RSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMKeyValue$Unknown", ::org::jcp::xml::dsig::internal::dom::DOMKeyValue$Unknown),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMManifest", ::org::jcp::xml::dsig::internal::dom::DOMManifest),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMPGPData", ::org::jcp::xml::dsig::internal::dom::DOMPGPData),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod", ::org::jcp::xml::dsig::internal::dom::DOMRSAPSSSignatureMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMRSAPSSSignatureMethod$RSAPSS", ::org::jcp::xml::dsig::internal::dom::DOMRSAPSSSignatureMethod$RSAPSS),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMReference", ::org::jcp::xml::dsig::internal::dom::DOMReference),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMReference$1", ::org::jcp::xml::dsig::internal::dom::DOMReference$1),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMRetrievalMethod", ::org::jcp::xml::dsig::internal::dom::DOMRetrievalMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractDSASignatureMethod", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractDSASignatureMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractECDSASignatureMethod", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractECDSASignatureMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractP1363FormatSignatureMethod", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractP1363FormatSignatureMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSAPSSSignatureMethod", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSAPSSSignatureMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$AbstractRSASignatureMethod", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$AbstractRSASignatureMethod),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$RIPEMD160withECDSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$RIPEMD160withECDSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$RIPEMD160withRSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$RIPEMD160withRSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$RIPEMD160withRSAandMGF1", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$RIPEMD160withRSAandMGF1),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withDSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA1withDSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withECDSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA1withECDSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withRSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA1withRSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA1withRSAandMGF1", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA1withRSAandMGF1),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA224withECDSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA224withECDSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA224withRSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA224withRSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA224withRSAandMGF1", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA224withRSAandMGF1),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withDSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA256withDSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withECDSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA256withECDSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withRSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA256withRSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA256withRSAandMGF1", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA256withRSAandMGF1),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA384withECDSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA384withECDSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA384withRSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA384withRSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA384withRSAandMGF1", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA384withRSAandMGF1),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA512withECDSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA512withECDSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA512withRSA", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA512withRSA),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureMethod$SHA512withRSAandMGF1", ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod$SHA512withRSAandMGF1),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureProperties", ::org::jcp::xml::dsig::internal::dom::DOMSignatureProperties),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignatureProperty", ::org::jcp::xml::dsig::internal::dom::DOMSignatureProperty),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSignedInfo", ::org::jcp::xml::dsig::internal::dom::DOMSignedInfo),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMStructure", ::org::jcp::xml::dsig::internal::dom::DOMStructure),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSubTreeData", ::org::jcp::xml::dsig::internal::dom::DOMSubTreeData),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMSubTreeData$DelayedNodeIterator", ::org::jcp::xml::dsig::internal::dom::DOMSubTreeData$DelayedNodeIterator),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMTransform", ::org::jcp::xml::dsig::internal::dom::DOMTransform),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMURIDereferencer", ::org::jcp::xml::dsig::internal::dom::DOMURIDereferencer),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMUtils", ::org::jcp::xml::dsig::internal::dom::DOMUtils),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMX509Data", ::org::jcp::xml::dsig::internal::dom::DOMX509Data),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMX509IssuerSerial", ::org::jcp::xml::dsig::internal::dom::DOMX509IssuerSerial),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMXMLObject", ::org::jcp::xml::dsig::internal::dom::DOMXMLObject),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMXMLSignature", ::org::jcp::xml::dsig::internal::dom::DOMXMLSignature),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMXMLSignature$DOMSignatureValue", ::org::jcp::xml::dsig::internal::dom::DOMXMLSignature$DOMSignatureValue),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory", ::org::jcp::xml::dsig::internal::dom::DOMXMLSignatureFactory),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory$UnmarshalContext", ::org::jcp::xml::dsig::internal::dom::DOMXMLSignatureFactory$UnmarshalContext),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMXPathFilter2Transform", ::org::jcp::xml::dsig::internal::dom::DOMXPathFilter2Transform),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMXPathTransform", ::org::jcp::xml::dsig::internal::dom::DOMXPathTransform),
	$classEntry("org.jcp.xml.dsig.internal.dom.DOMXSLTTransform", ::org::jcp::xml::dsig::internal::dom::DOMXSLTTransform),
	$classEntry("org.jcp.xml.dsig.internal.dom.Policy", ::org::jcp::xml::dsig::internal::dom::Policy),
	$classEntry("org.jcp.xml.dsig.internal.dom.Utils", ::org::jcp::xml::dsig::internal::dom::Utils),
	$classEntry("org.jcp.xml.dsig.internal.dom.XMLDSigRI", ::org::jcp::xml::dsig::internal::dom::XMLDSigRI),
	$classEntry("org.jcp.xml.dsig.internal.dom.XMLDSigRI$1", ::org::jcp::xml::dsig::internal::dom::XMLDSigRI$1),
	$classEntry("org.jcp.xml.dsig.internal.dom.XMLDSigRI$2", ::org::jcp::xml::dsig::internal::dom::XMLDSigRI$2),
	$classEntry("org.jcp.xml.dsig.internal.dom.XMLDSigRI$ProviderService", ::org::jcp::xml::dsig::internal::dom::XMLDSigRI$ProviderService)
};

const char* _java$xml$crypto_packages_[] = {
	"com.sun.org.apache.xml.internal.security",
	"com.sun.org.apache.xml.internal.security.algorithms",
	"com.sun.org.apache.xml.internal.security.algorithms.implementations",
	"com.sun.org.apache.xml.internal.security.c14n",
	"com.sun.org.apache.xml.internal.security.c14n.helper",
	"com.sun.org.apache.xml.internal.security.c14n.implementations",
	"com.sun.org.apache.xml.internal.security.exceptions",
	"com.sun.org.apache.xml.internal.security.keys",
	"com.sun.org.apache.xml.internal.security.keys.content",
	"com.sun.org.apache.xml.internal.security.keys.content.keyvalues",
	"com.sun.org.apache.xml.internal.security.keys.content.x509",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver",
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations",
	"com.sun.org.apache.xml.internal.security.keys.storage",
	"com.sun.org.apache.xml.internal.security.keys.storage.implementations",
	"com.sun.org.apache.xml.internal.security.parser",
	"com.sun.org.apache.xml.internal.security.signature",
	"com.sun.org.apache.xml.internal.security.signature.reference",
	"com.sun.org.apache.xml.internal.security.transforms",
	"com.sun.org.apache.xml.internal.security.transforms.implementations",
	"com.sun.org.apache.xml.internal.security.transforms.params",
	"com.sun.org.apache.xml.internal.security.utils",
	"com.sun.org.apache.xml.internal.security.utils.resolver",
	"com.sun.org.apache.xml.internal.security.utils.resolver.implementations",
	"com.sun.org.slf4j.internal",
	"javax.xml.crypto",
	"javax.xml.crypto.dom",
	"javax.xml.crypto.dsig",
	"javax.xml.crypto.dsig.dom",
	"javax.xml.crypto.dsig.keyinfo",
	"javax.xml.crypto.dsig.spec",
	"org.jcp.xml.dsig.internal",
	"org.jcp.xml.dsig.internal.dom"
};

void java$xml$crypto$PreloadClass(void* eventData) {
	::java::lang::PreloadClassEvent* event = (::java::lang::PreloadClassEvent*)eventData;
	int32_t length = $lengthOf(_java$xml$crypto_classes_);
	for (int i = 0; i < length; i++) {
		::java::lang::ClassEntry* classEntry = &_java$xml$crypto_classes_[i];
		if (event->preinit) {
			if ($hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, true);
				continue;
			}
		}
		if (event->preload) {
			if ($hasFlag(classEntry->mark, $PRELOAD) || $hasFlag(classEntry->mark, $PREINIT)) {
				classEntry->loader(nullptr, false);
			}
		}
	}
}

void java$xml$crypto$LibEventAction(int32_t eventType, void* eventData) {
	if (eventType == JCPP_LIB_EVENT_TYPE_PRELOAD_CLASS) {
		java$xml$crypto$PreloadClass(eventData);
	}
	if (eventType == JCPP_LIB_EVENT_TYPE_THREAD_START) {
		$onLibThreadStart(eventData);
	}
}

$StringArray* java$xml$crypto$GetPackages() {
	int32_t length = $lengthOf(_java$xml$crypto_packages_);
	$var($StringArray, packages, $new($StringArray, length));
	for (int32_t i = 0; i < length; i++) {
		packages->set(i, $str(_java$xml$crypto_packages_[i]));
	}
	return packages;
}

::java::lang::ClassEntry* java$xml$crypto$GetClassEntry($String* name) {
	int32_t begin = 0;
	int32_t end = $lengthOf(_java$xml$crypto_classes_) - 1;
	while (begin <= end) {
		int32_t mid = begin + (end - begin) / 2;
		::java::lang::ClassEntry* classEntry = &_java$xml$crypto_classes_[mid];
		int32_t ret = name->compareTo(classEntry->name);
		if (ret < 0) {
			end = mid - 1;
		} else if (ret > 0) {
			begin = mid + 1;
		} else {
			return classEntry;
		}
	}
	return nullptr;
}

$bytes* java$xml$crypto$GetResource($String* name) {
	return nullptr;
}

void java$xml$crypto::init() {
	::java$logging::init();
	::java$xml::init();
	::java$base::init();
	::java::lang::Library lib = {
		"java.xml.crypto", "17.35", "",
		&_java$xml$crypto_ModuleInfo_,
		java$xml$crypto$LibEventAction,
		java$xml$crypto$GetPackages,
		java$xml$crypto$GetClassEntry,
		java$xml$crypto$GetResource
	};
	$System::addLibrary(&lib);
}