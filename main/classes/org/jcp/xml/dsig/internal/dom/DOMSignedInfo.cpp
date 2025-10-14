#include <org/jcp/xml/dsig/internal/dom/DOMSignedInfo.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/utils/UnsyncBufferedOutputStream.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/FilterOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/security/spec/MGF1ParameterSpec.h>
#include <java/security/spec/PSSParameterSpec.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/NodeSetData.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <javax/xml/crypto/dsig/Reference.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <javax/xml/crypto/dsig/SignedInfo.h>
#include <javax/xml/crypto/dsig/TransformException.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/XMLSignatureException.h>
#include <javax/xml/crypto/dsig/spec/RSAPSSParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/DOMCanonicalizationMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMRSAPSSSignatureMethod$RSAPSS.h>
#include <org/jcp/xml/dsig/internal/dom/DOMReference.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/jcp/xml/dsig/internal/dom/Policy.h>
#include <org/jcp/xml/dsig/internal/dom/Utils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef LOG
#undef XMLNS

using $SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $UnsyncBufferedOutputStream = ::com::sun::org::apache::xml::internal::security::utils::UnsyncBufferedOutputStream;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $FilterOutputStream = ::java::io::FilterOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Provider = ::java::security::Provider;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $MGF1ParameterSpec = ::java::security::spec::MGF1ParameterSpec;
using $PSSParameterSpec = ::java::security::spec::PSSParameterSpec;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $Data = ::javax::xml::crypto::Data;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $NodeSetData = ::javax::xml::crypto::NodeSetData;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $CanonicalizationMethod = ::javax::xml::crypto::dsig::CanonicalizationMethod;
using $Reference = ::javax::xml::crypto::dsig::Reference;
using $SignatureMethod = ::javax::xml::crypto::dsig::SignatureMethod;
using $SignedInfo = ::javax::xml::crypto::dsig::SignedInfo;
using $TransformException = ::javax::xml::crypto::dsig::TransformException;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $1XMLSignatureException = ::javax::xml::crypto::dsig::XMLSignatureException;
using $RSAPSSParameterSpec = ::javax::xml::crypto::dsig::spec::RSAPSSParameterSpec;
using $DOMCanonicalizationMethod = ::org::jcp::xml::dsig::internal::dom::DOMCanonicalizationMethod;
using $DOMRSAPSSSignatureMethod$RSAPSS = ::org::jcp::xml::dsig::internal::dom::DOMRSAPSSSignatureMethod$RSAPSS;
using $DOMReference = ::org::jcp::xml::dsig::internal::dom::DOMReference;
using $DOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::DOMSignatureMethod;
using $DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMSubTreeData = ::org::jcp::xml::dsig::internal::dom::DOMSubTreeData;
using $DOMTransform = ::org::jcp::xml::dsig::internal::dom::DOMTransform;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Policy = ::org::jcp::xml::dsig::internal::dom::Policy;
using $Utils = ::org::jcp::xml::dsig::internal::dom::Utils;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMSignedInfo_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(DOMSignedInfo, LOG)},
	{"references", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/crypto/dsig/Reference;>;", $PRIVATE, $field(DOMSignedInfo, references)},
	{"canonicalizationMethod", "Ljavax/xml/crypto/dsig/CanonicalizationMethod;", nullptr, $PRIVATE, $field(DOMSignedInfo, canonicalizationMethod)},
	{"signatureMethod", "Ljavax/xml/crypto/dsig/SignatureMethod;", nullptr, $PRIVATE, $field(DOMSignedInfo, signatureMethod)},
	{"id", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMSignedInfo, id)},
	{"ownerDoc", "Lorg/w3c/dom/Document;", nullptr, $PRIVATE, $field(DOMSignedInfo, ownerDoc)},
	{"localSiElem", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(DOMSignedInfo, localSiElem)},
	{"canonData", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(DOMSignedInfo, canonData)},
	{}
};

$MethodInfo _DOMSignedInfo_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljavax/xml/crypto/dsig/CanonicalizationMethod;Ljavax/xml/crypto/dsig/SignatureMethod;Ljava/util/List;)V", "(Ljavax/xml/crypto/dsig/CanonicalizationMethod;Ljavax/xml/crypto/dsig/SignatureMethod;Ljava/util/List<+Ljavax/xml/crypto/dsig/Reference;>;)V", $PUBLIC, $method(static_cast<void(DOMSignedInfo::*)($CanonicalizationMethod*,$SignatureMethod*,$List*)>(&DOMSignedInfo::init$))},
	{"<init>", "(Ljavax/xml/crypto/dsig/CanonicalizationMethod;Ljavax/xml/crypto/dsig/SignatureMethod;Ljava/util/List;Ljava/lang/String;)V", "(Ljavax/xml/crypto/dsig/CanonicalizationMethod;Ljavax/xml/crypto/dsig/SignatureMethod;Ljava/util/List<+Ljavax/xml/crypto/dsig/Reference;>;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(DOMSignedInfo::*)($CanonicalizationMethod*,$SignatureMethod*,$List*,$String*)>(&DOMSignedInfo::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljavax/xml/crypto/XMLCryptoContext;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMSignedInfo::*)($Element*,$XMLCryptoContext*,$Provider*)>(&DOMSignedInfo::init$)), "javax.xml.crypto.MarshalException"},
	{"canonicalize", "(Ljavax/xml/crypto/XMLCryptoContext;Ljava/io/ByteArrayOutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMSignedInfo::*)($XMLCryptoContext*,$ByteArrayOutputStream*)>(&DOMSignedInfo::canonicalize)), "javax.xml.crypto.dsig.XMLSignatureException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getCanonicalizationMethod", "()Ljavax/xml/crypto/dsig/CanonicalizationMethod;", nullptr, $PUBLIC},
	{"getCanonicalizedData", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getReferences", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/Reference;>;", $PUBLIC},
	{"getSignatureMethod", "()Ljavax/xml/crypto/dsig/SignatureMethod;", nullptr, $PUBLIC},
	{"getSignedInfoReferences", "(Ljavax/xml/crypto/dsig/SignedInfo;)Ljava/util/List;", "(Ljavax/xml/crypto/dsig/SignedInfo;)Ljava/util/List<Ljavax/xml/crypto/dsig/Reference;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($SignedInfo*)>(&DOMSignedInfo::getSignedInfoReferences))},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMSignedInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMSignedInfo",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.SignedInfo",
	_DOMSignedInfo_FieldInfo_,
	_DOMSignedInfo_MethodInfo_
};

$Object* allocate$DOMSignedInfo($Class* clazz) {
	return $of($alloc(DOMSignedInfo));
}

bool DOMSignedInfo::isFeatureSupported($String* feature) {
	 return this->$DOMStructure::isFeatureSupported(feature);
}

$Object* DOMSignedInfo::clone() {
	 return this->$DOMStructure::clone();
}

$String* DOMSignedInfo::toString() {
	 return this->$DOMStructure::toString();
}

void DOMSignedInfo::finalize() {
	this->$DOMStructure::finalize();
}

$Logger* DOMSignedInfo::LOG = nullptr;

void DOMSignedInfo::init$($CanonicalizationMethod* cm, $SignatureMethod* sm, $List* references) {
	$DOMStructure::init$();
	if (cm == nullptr || sm == nullptr || references == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, canonicalizationMethod, cm);
	$set(this, signatureMethod, sm);
	$set(this, references, $Collections::unmodifiableList($$new($ArrayList, static_cast<$Collection*>(references))));
	if ($nc(this->references)->isEmpty()) {
		$throwNew($IllegalArgumentException, "list of references must contain at least one entry"_s);
	}
	{
		int32_t i = 0;
		int32_t size = $nc(this->references)->size();
		for (; i < size; ++i) {
			$var($Object, obj, $nc(this->references)->get(i));
			if (!($instanceOf($Reference, obj))) {
				$throwNew($ClassCastException, "list of references contains an illegal type"_s);
			}
		}
	}
}

void DOMSignedInfo::init$($CanonicalizationMethod* cm, $SignatureMethod* sm, $List* references, $String* id) {
	DOMSignedInfo::init$(cm, sm, references);
	$set(this, id, id);
}

void DOMSignedInfo::init$($Element* siElem, $XMLCryptoContext* context, $Provider* provider) {
	$DOMStructure::init$();
	$set(this, localSiElem, siElem);
	$set(this, ownerDoc, $nc(siElem)->getOwnerDocument());
	$set(this, id, $DOMUtils::getAttributeValue(siElem, "Id"_s));
	$init($XMLSignature);
	$var($Element, cmElem, $DOMUtils::getFirstChildElement(siElem, "CanonicalizationMethod"_s, $XMLSignature::XMLNS));
	$set(this, canonicalizationMethod, $new($DOMCanonicalizationMethod, cmElem, context, provider));
	$var($Element, smElem, $DOMUtils::getNextSiblingElement(cmElem, "SignatureMethod"_s, $XMLSignature::XMLNS));
	$set(this, signatureMethod, $DOMSignatureMethod::unmarshal(smElem));
	bool secVal = $Utils::secureValidation(context);
	$var($String, signatureMethodAlgorithm, $nc(this->signatureMethod)->getAlgorithm());
	if (secVal && $Policy::restrictAlg(signatureMethodAlgorithm)) {
		$throwNew($MarshalException, $$str({"It is forbidden to use algorithm "_s, signatureMethodAlgorithm, " when secure validation is enabled"_s}));
	}
	if (secVal && $instanceOf($DOMRSAPSSSignatureMethod$RSAPSS, this->signatureMethod)) {
		$var($AlgorithmParameterSpec, spec, $nc(this->signatureMethod)->getParameterSpec());
		if ($instanceOf($RSAPSSParameterSpec, spec)) {
			try {
				$var($PSSParameterSpec, pspec, $nc(($cast($RSAPSSParameterSpec, spec)))->getPSSParameterSpec());
				$var($String, da, $nc($($SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::fromDigestAlgorithm($($nc(pspec)->getDigestAlgorithm()))))->getXmlDigestAlgorithm());
				if ($Policy::restrictAlg(da)) {
					$throwNew($MarshalException, $$str({"It is forbidden to use algorithm "_s, da, " in PSS when secure validation is enabled"_s}));
				}
				$var($AlgorithmParameterSpec, mspec, $nc(pspec)->getMGFParameters());
				if ($instanceOf($MGF1ParameterSpec, mspec)) {
					$var($String, da2, $nc($($SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::fromDigestAlgorithm($($nc(($cast($MGF1ParameterSpec, mspec)))->getDigestAlgorithm()))))->getXmlDigestAlgorithm());
					if ($Policy::restrictAlg(da2)) {
						$throwNew($MarshalException, $$str({"It is forbidden to use algorithm "_s, da2, " in MGF1 when secure validation is enabled"_s}));
					}
				}
			} catch ($XMLSignatureException&) {
				$catch();
			}
		}
	}
	$var($ArrayList, refList, $new($ArrayList, 5));
	$var($Element, refElem, $DOMUtils::getNextSiblingElement(smElem, "Reference"_s, $XMLSignature::XMLNS));
	refList->add($$new($DOMReference, refElem, context, provider));
	$assign(refElem, $DOMUtils::getNextSiblingElement(refElem));
	while (refElem != nullptr) {
		$var($String, name, refElem->getLocalName());
		$var($String, namespace$, refElem->getNamespaceURI());
		bool var$0 = !"Reference"_s->equals(name);
		if (var$0 || !$nc($XMLSignature::XMLNS)->equals(namespace$)) {
			$throwNew($MarshalException, $$str({"Invalid element name: "_s, namespace$, ":"_s, name, ", expected Reference"_s}));
		}
		refList->add($$new($DOMReference, refElem, context, provider));
		if (secVal && $Policy::restrictNumReferences(refList->size())) {
			$var($String, error, $str({"A maxiumum of "_s, $$str($Policy::maxReferences()), " references per Manifest are allowed when secure validation is enabled"_s}));
			$throwNew($MarshalException, error);
		}
		$assign(refElem, $DOMUtils::getNextSiblingElement(refElem));
	}
	$set(this, references, $Collections::unmodifiableList(refList));
}

$CanonicalizationMethod* DOMSignedInfo::getCanonicalizationMethod() {
	return this->canonicalizationMethod;
}

$SignatureMethod* DOMSignedInfo::getSignatureMethod() {
	return this->signatureMethod;
}

$String* DOMSignedInfo::getId() {
	return this->id;
}

$List* DOMSignedInfo::getReferences() {
	return this->references;
}

$InputStream* DOMSignedInfo::getCanonicalizedData() {
	return this->canonData;
}

void DOMSignedInfo::canonicalize($XMLCryptoContext* context, $ByteArrayOutputStream* bos) {
	if (context == nullptr) {
		$throwNew($NullPointerException, "context cannot be null"_s);
	}
	$var($DOMSubTreeData, subTree, $new($DOMSubTreeData, this->localSiElem, true));
	try {
		$var($OutputStream, os, $new($UnsyncBufferedOutputStream, bos));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$nc(($cast($DOMCanonicalizationMethod, this->canonicalizationMethod)))->canonicalize(subTree, context, os);
					os->flush();
					$var($bytes, signedInfoBytes, $nc(bos)->toByteArray());
					if ($nc(DOMSignedInfo::LOG)->isDebugEnabled()) {
						$nc(DOMSignedInfo::LOG)->debug("Canonicalized SignedInfo:"_s);
						$var($StringBuilder, sb, $new($StringBuilder, $nc(signedInfoBytes)->length));
						for (int32_t i = 0; i < $nc(signedInfoBytes)->length; ++i) {
							sb->append((char16_t)signedInfoBytes->get(i));
						}
						$nc(DOMSignedInfo::LOG)->debug($(sb->toString()));
						$nc(DOMSignedInfo::LOG)->debug($$str({"Data to be signed/verified:"_s, $($XMLUtils::encodeToString(signedInfoBytes))}));
					}
					$set(this, canonData, $new($ByteArrayInputStream, signedInfoBytes));
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						os->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				os->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	} catch ($TransformException&) {
		$var($TransformException, te, $catch());
		$throwNew($1XMLSignatureException, static_cast<$Throwable*>(te));
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$nc(DOMSignedInfo::LOG)->debug($(e->getMessage()), static_cast<$Throwable*>(e));
	}
}

void DOMSignedInfo::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$set(this, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, siElem, $DOMUtils::createElement(this->ownerDoc, "SignedInfo"_s, $XMLSignature::XMLNS, dsPrefix));
	$var($DOMCanonicalizationMethod, dcm, $cast($DOMCanonicalizationMethod, this->canonicalizationMethod));
	$nc(dcm)->marshal(siElem, dsPrefix, context);
	$nc(($cast($DOMStructure, this->signatureMethod)))->marshal(siElem, dsPrefix, context);
	{
		$var($Iterator, i$, $nc(this->references)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Reference, reference, $cast($Reference, i$->next()));
			{
				$nc(($cast($DOMReference, reference)))->marshal(siElem, dsPrefix, context);
			}
		}
	}
	$DOMUtils::setAttributeID(siElem, "Id"_s, this->id);
	$nc(parent)->appendChild(siElem);
	$set(this, localSiElem, siElem);
}

bool DOMSignedInfo::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($SignedInfo, o))) {
		return false;
	}
	$var($SignedInfo, osi, $cast($SignedInfo, o));
	bool idEqual = this->id == nullptr ? $nc(osi)->getId() == nullptr : $nc(this->id)->equals($(osi->getId()));
	bool var$1 = $nc($of(this->canonicalizationMethod))->equals($(osi->getCanonicalizationMethod()));
	bool var$0 = var$1 && $nc($of(this->signatureMethod))->equals($(osi->getSignatureMethod()));
	return var$0 && $nc(this->references)->equals($(osi->getReferences())) && idEqual;
}

$List* DOMSignedInfo::getSignedInfoReferences($SignedInfo* si) {
	$init(DOMSignedInfo);
	return $nc(si)->getReferences();
}

int32_t DOMSignedInfo::hashCode() {
	int32_t result = 17;
	if (this->id != nullptr) {
		result = 31 * result + $nc(this->id)->hashCode();
	}
	result = 31 * result + $nc($of(this->canonicalizationMethod))->hashCode();
	result = 31 * result + $nc($of(this->signatureMethod))->hashCode();
	result = 31 * result + $nc(this->references)->hashCode();
	return result;
}

void clinit$DOMSignedInfo($Class* class$) {
	$assignStatic(DOMSignedInfo::LOG, $LoggerFactory::getLogger(DOMSignedInfo::class$));
}

DOMSignedInfo::DOMSignedInfo() {
}

$Class* DOMSignedInfo::load$($String* name, bool initialize) {
	$loadClass(DOMSignedInfo, name, initialize, &_DOMSignedInfo_ClassInfo_, clinit$DOMSignedInfo, allocate$DOMSignedInfo);
	return class$;
}

$Class* DOMSignedInfo::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org