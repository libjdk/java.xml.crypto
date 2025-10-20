#include <org/jcp/xml/dsig/internal/dom/ApacheCanonicalizer.h>

#include <com/sun/org/apache/xml/internal/security/Init.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/InvalidCanonicalizerException.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transform.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/NodeSetData.h>
#include <javax/xml/crypto/OctetStreamData.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <javax/xml/crypto/dsig/TransformException.h>
#include <javax/xml/crypto/dsig/TransformService.h>
#include <javax/xml/crypto/dsig/spec/C14NMethodParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheData.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheNodeSetData.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheOctetStreamData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/jcp/xml/dsig/internal/dom/Utils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef LOG

using $Init = ::com::sun::org::apache::xml::internal::security::Init;
using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $InvalidCanonicalizerException = ::com::sun::org::apache::xml::internal::security::c14n::InvalidCanonicalizerException;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $Transform = ::com::sun::org::apache::xml::internal::security::transforms::Transform;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Data = ::javax::xml::crypto::Data;
using $NodeSetData = ::javax::xml::crypto::NodeSetData;
using $OctetStreamData = ::javax::xml::crypto::OctetStreamData;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $TransformException = ::javax::xml::crypto::dsig::TransformException;
using $TransformService = ::javax::xml::crypto::dsig::TransformService;
using $C14NMethodParameterSpec = ::javax::xml::crypto::dsig::spec::C14NMethodParameterSpec;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;
using $ApacheData = ::org::jcp::xml::dsig::internal::dom::ApacheData;
using $ApacheNodeSetData = ::org::jcp::xml::dsig::internal::dom::ApacheNodeSetData;
using $ApacheOctetStreamData = ::org::jcp::xml::dsig::internal::dom::ApacheOctetStreamData;
using $DOMSubTreeData = ::org::jcp::xml::dsig::internal::dom::DOMSubTreeData;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Utils = ::org::jcp::xml::dsig::internal::dom::Utils;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _ApacheCanonicalizer_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ApacheCanonicalizer, LOG)},
	{"canonicalizer", "Lcom/sun/org/apache/xml/internal/security/c14n/Canonicalizer;", nullptr, $PROTECTED, $field(ApacheCanonicalizer, canonicalizer)},
	{"apacheTransform", "Lcom/sun/org/apache/xml/internal/security/transforms/Transform;", nullptr, $PRIVATE, $field(ApacheCanonicalizer, apacheTransform)},
	{"inclusiveNamespaces", "Ljava/lang/String;", nullptr, $PROTECTED, $field(ApacheCanonicalizer, inclusiveNamespaces)},
	{"params", "Ljavax/xml/crypto/dsig/spec/C14NMethodParameterSpec;", nullptr, $PROTECTED, $field(ApacheCanonicalizer, params)},
	{"ownerDoc", "Lorg/w3c/dom/Document;", nullptr, $PROTECTED, $field(ApacheCanonicalizer, ownerDoc)},
	{"transformElem", "Lorg/w3c/dom/Element;", nullptr, $PROTECTED, $field(ApacheCanonicalizer, transformElem)},
	{}
};

$MethodInfo _ApacheCanonicalizer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ApacheCanonicalizer::*)()>(&ApacheCanonicalizer::init$))},
	{"canonicalize", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.dsig.TransformException"},
	{"canonicalize", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;Ljava/io/OutputStream;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.dsig.TransformException"},
	{"getC14nBytes", "(Ljava/io/OutputStream;Z)[B", nullptr, $PRIVATE, $method(static_cast<$bytes*(ApacheCanonicalizer::*)($OutputStream*,bool)>(&ApacheCanonicalizer::getC14nBytes))},
	{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $FINAL},
	{"init", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshalParams", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;Ljava/io/OutputStream;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.dsig.TransformException"},
	{}
};

$ClassInfo _ApacheCanonicalizer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.ApacheCanonicalizer",
	"javax.xml.crypto.dsig.TransformService",
	nullptr,
	_ApacheCanonicalizer_FieldInfo_,
	_ApacheCanonicalizer_MethodInfo_
};

$Object* allocate$ApacheCanonicalizer($Class* clazz) {
	return $of($alloc(ApacheCanonicalizer));
}

$Logger* ApacheCanonicalizer::LOG = nullptr;

void ApacheCanonicalizer::init$() {
	$TransformService::init$();
}

$AlgorithmParameterSpec* ApacheCanonicalizer::getParameterSpec() {
	return this->params;
}

void ApacheCanonicalizer::init($XMLStructure* parent, $XMLCryptoContext* context) {
	if (context != nullptr && !($instanceOf($DOMCryptoContext, context))) {
		$throwNew($ClassCastException, "context must be of type DOMCryptoContext"_s);
	}
	if (parent == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($DOMStructure, parent))) {
		$throwNew($ClassCastException, "parent must be of type DOMStructure"_s);
	}
	$set(this, transformElem, $cast($Element, $nc(($cast($DOMStructure, parent)))->getNode()));
	$set(this, ownerDoc, $DOMUtils::getOwnerDocument(this->transformElem));
}

void ApacheCanonicalizer::marshalParams($XMLStructure* parent, $XMLCryptoContext* context) {
	if (context != nullptr && !($instanceOf($DOMCryptoContext, context))) {
		$throwNew($ClassCastException, "context must be of type DOMCryptoContext"_s);
	}
	if (parent == nullptr) {
		$throwNew($NullPointerException);
	}
	if (!($instanceOf($DOMStructure, parent))) {
		$throwNew($ClassCastException, "parent must be of type DOMStructure"_s);
	}
	$set(this, transformElem, $cast($Element, $nc(($cast($DOMStructure, parent)))->getNode()));
	$set(this, ownerDoc, $DOMUtils::getOwnerDocument(this->transformElem));
}

$Data* ApacheCanonicalizer::canonicalize($Data* data, $XMLCryptoContext* xc) {
	return canonicalize(data, xc, nullptr);
}

$Data* ApacheCanonicalizer::canonicalize($Data* data, $XMLCryptoContext* xc, $OutputStream* os) {
	$useLocalCurrentObjectStackCache();
	if (this->canonicalizer == nullptr) {
		try {
			$set(this, canonicalizer, $Canonicalizer::getInstance($(getAlgorithm())));
			$nc(ApacheCanonicalizer::LOG)->debug("Created canonicalizer for algorithm: {}"_s, $$new($ObjectArray, {$($of(getAlgorithm()))}));
		} catch ($InvalidCanonicalizerException&) {
			$var($InvalidCanonicalizerException, ice, $catch());
			$var($String, var$0, $$str({"Couldn\'t find Canonicalizer for: "_s, $(getAlgorithm()), ": "_s}));
			$throwNew($TransformException, $$concat(var$0, $(ice->getMessage())), ice);
		}
	}
	bool isByteArrayOutputStream = os == nullptr;
	$var($OutputStream, writer, isByteArrayOutputStream ? static_cast<$OutputStream*>($new($ByteArrayOutputStream)) : os);
	try {
		bool secVal = $Utils::secureValidation(xc);
		$var($Set, nodeSet, nullptr);
		if ($instanceOf($ApacheData, data)) {
			$var($XMLSignatureInput, in, $nc(($cast($ApacheData, data)))->getXMLSignatureInput());
			if ($nc(in)->isElement()) {
				if (this->inclusiveNamespaces != nullptr) {
					$nc(this->canonicalizer)->canonicalizeSubtree($(in->getSubNode()), this->inclusiveNamespaces, writer);
					return $new($OctetStreamData, $$new($ByteArrayInputStream, $(getC14nBytes(writer, isByteArrayOutputStream))));
				} else {
					$nc(this->canonicalizer)->canonicalizeSubtree($(in->getSubNode()), writer);
					return $new($OctetStreamData, $$new($ByteArrayInputStream, $(getC14nBytes(writer, isByteArrayOutputStream))));
				}
			} else if (in->isNodeSet()) {
				$assign(nodeSet, in->getNodeSet());
			} else {
				$nc(this->canonicalizer)->canonicalize($($Utils::readBytesFromStream($(in->getOctetStream()))), writer, secVal);
				return $new($OctetStreamData, $$new($ByteArrayInputStream, $(getC14nBytes(writer, isByteArrayOutputStream))));
			}
		} else if ($instanceOf($DOMSubTreeData, data)) {
			$var($DOMSubTreeData, subTree, $cast($DOMSubTreeData, data));
			if (this->inclusiveNamespaces != nullptr) {
				$nc(this->canonicalizer)->canonicalizeSubtree($($nc(subTree)->getRoot()), this->inclusiveNamespaces, writer);
				return $new($OctetStreamData, $$new($ByteArrayInputStream, $(getC14nBytes(writer, isByteArrayOutputStream))));
			} else {
				$nc(this->canonicalizer)->canonicalizeSubtree($($nc(subTree)->getRoot()), writer);
				return $new($OctetStreamData, $$new($ByteArrayInputStream, $(getC14nBytes(writer, isByteArrayOutputStream))));
			}
		} else if ($instanceOf($NodeSetData, data)) {
			$var($NodeSetData, nsd, $cast($NodeSetData, data));
			$assign(nodeSet, $Utils::toNodeSet($($nc(nsd)->iterator())));
			$nc(ApacheCanonicalizer::LOG)->debug("Canonicalizing {} nodes"_s, $$new($ObjectArray, {$($of($Integer::valueOf($nc(nodeSet)->size())))}));
		} else {
			$nc(this->canonicalizer)->canonicalize($($Utils::readBytesFromStream($($nc(($cast($OctetStreamData, data)))->getOctetStream()))), writer, secVal);
			return $new($OctetStreamData, $$new($ByteArrayInputStream, $(getC14nBytes(writer, isByteArrayOutputStream))));
		}
		if (this->inclusiveNamespaces != nullptr) {
			$nc(this->canonicalizer)->canonicalizeXPathNodeSet(nodeSet, this->inclusiveNamespaces, writer);
			return $new($OctetStreamData, $$new($ByteArrayInputStream, $(getC14nBytes(writer, isByteArrayOutputStream))));
		} else {
			$nc(this->canonicalizer)->canonicalizeXPathNodeSet(nodeSet, writer);
			return $new($OctetStreamData, $$new($ByteArrayInputStream, $(getC14nBytes(writer, isByteArrayOutputStream))));
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($TransformException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

$bytes* ApacheCanonicalizer::getC14nBytes($OutputStream* outputStream, bool isByteArrayOutputStream) {
	if (isByteArrayOutputStream) {
		return $nc(($cast($ByteArrayOutputStream, outputStream)))->toByteArray();
	}
	return nullptr;
}

$Data* ApacheCanonicalizer::transform($Data* data, $XMLCryptoContext* xc, $OutputStream* os) {
	$useLocalCurrentObjectStackCache();
	if (data == nullptr) {
		$throwNew($NullPointerException, "data must not be null"_s);
	}
	if (os == nullptr) {
		$throwNew($NullPointerException, "output stream must not be null"_s);
	}
	if (this->ownerDoc == nullptr) {
		$throwNew($TransformException, "transform must be marshalled"_s);
	}
	if (this->apacheTransform == nullptr) {
		try {
			$var($Document, var$0, this->ownerDoc);
			$var($String, var$1, getAlgorithm());
			$set(this, apacheTransform, $new($Transform, var$0, var$1, $($nc(this->transformElem)->getChildNodes())));
			$nc(this->apacheTransform)->setElement(this->transformElem, $($nc(xc)->getBaseURI()));
			$nc(ApacheCanonicalizer::LOG)->debug("Created transform for algorithm: {}"_s, $$new($ObjectArray, {$($of(getAlgorithm()))}));
		} catch ($Exception&) {
			$var($Exception, ex, $catch());
			$throwNew($TransformException, $$str({"Couldn\'t find Transform for: "_s, $(getAlgorithm())}), ex);
		}
	}
	$var($XMLSignatureInput, in, nullptr);
	if ($instanceOf($ApacheData, data)) {
		$nc(ApacheCanonicalizer::LOG)->debug("ApacheData = true"_s);
		$assign(in, $nc(($cast($ApacheData, data)))->getXMLSignatureInput());
	} else if ($instanceOf($NodeSetData, data)) {
		$nc(ApacheCanonicalizer::LOG)->debug("isNodeSet() = true"_s);
		if ($instanceOf($DOMSubTreeData, data)) {
			$var($DOMSubTreeData, subTree, $cast($DOMSubTreeData, data));
			$assign(in, $new($XMLSignatureInput, $($nc(subTree)->getRoot())));
			in->setExcludeComments($nc(subTree)->excludeComments());
		} else {
			$var($Set, nodeSet, $Utils::toNodeSet($($nc(($cast($NodeSetData, data)))->iterator())));
			$assign(in, $new($XMLSignatureInput, nodeSet));
		}
	} else {
		$nc(ApacheCanonicalizer::LOG)->debug("isNodeSet() = false"_s);
		try {
			$assign(in, $new($XMLSignatureInput, $($nc(($cast($OctetStreamData, data)))->getOctetStream())));
		} catch ($Exception&) {
			$var($Exception, ex, $catch());
			$throwNew($TransformException, static_cast<$Throwable*>(ex));
		}
	}
	bool secVal = $Utils::secureValidation(xc);
	$nc(in)->setSecureValidation(secVal);
	try {
		$assign(in, $nc(this->apacheTransform)->performTransform(in, os, secVal));
		bool var$2 = !$nc(in)->isNodeSet();
		if (var$2 && !in->isElement()) {
			return nullptr;
		}
		if ($nc(in)->isOctetStream()) {
			return static_cast<$Data*>(static_cast<$OctetStreamData*>($new($ApacheOctetStreamData, in)));
		} else {
			return static_cast<$Data*>(static_cast<$ApacheData*>($new($ApacheNodeSetData, in)));
		}
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($TransformException, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

bool ApacheCanonicalizer::isFeatureSupported($String* feature) {
	if (feature == nullptr) {
		$throwNew($NullPointerException);
	} else {
		return false;
	}
}

void clinit$ApacheCanonicalizer($Class* class$) {
	{
		$Init::init();
	}
	$assignStatic(ApacheCanonicalizer::LOG, $LoggerFactory::getLogger(ApacheCanonicalizer::class$));
}

ApacheCanonicalizer::ApacheCanonicalizer() {
}

$Class* ApacheCanonicalizer::load$($String* name, bool initialize) {
	$loadClass(ApacheCanonicalizer, name, initialize, &_ApacheCanonicalizer_ClassInfo_, clinit$ApacheCanonicalizer, allocate$ApacheCanonicalizer);
	return class$;
}

$Class* ApacheCanonicalizer::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org