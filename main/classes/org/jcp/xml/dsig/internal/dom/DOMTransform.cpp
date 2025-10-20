#include <org/jcp/xml/dsig/internal/dom/DOMTransform.h>

#include <java/io/OutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/xml/crypto/AlgorithmMethod.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <javax/xml/crypto/dsig/Transform.h>
#include <javax/xml/crypto/dsig/TransformService.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/dom/DOMSignContext.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef XMLNS

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $Data = ::javax::xml::crypto::Data;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $Transform = ::javax::xml::crypto::dsig::Transform;
using $TransformService = ::javax::xml::crypto::dsig::TransformService;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $DOMSignContext = ::javax::xml::crypto::dsig::dom::DOMSignContext;
using $1DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMTransform_FieldInfo_[] = {
	{"spi", "Ljavax/xml/crypto/dsig/TransformService;", nullptr, $PROTECTED, $field(DOMTransform, spi)},
	{}
};

$MethodInfo _DOMTransform_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljavax/xml/crypto/dsig/TransformService;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMTransform::*)($TransformService*)>(&DOMTransform::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljavax/xml/crypto/XMLCryptoContext;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMTransform::*)($Element*,$XMLCryptoContext*,$Provider*)>(&DOMTransform::init$)), "javax.xml.crypto.MarshalException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.dsig.TransformException"},
	{"transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;Ljava/io/OutputStream;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.dsig.TransformException"},
	{"transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;Ljavax/xml/crypto/dsig/dom/DOMSignContext;)Ljavax/xml/crypto/Data;", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException,javax.xml.crypto.dsig.TransformException"},
	{}
};

$ClassInfo _DOMTransform_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMTransform",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.Transform",
	_DOMTransform_FieldInfo_,
	_DOMTransform_MethodInfo_
};

$Object* allocate$DOMTransform($Class* clazz) {
	return $of($alloc(DOMTransform));
}

bool DOMTransform::isFeatureSupported($String* feature) {
	 return this->$1DOMStructure::isFeatureSupported(feature);
}

$Object* DOMTransform::clone() {
	 return this->$1DOMStructure::clone();
}

$String* DOMTransform::toString() {
	 return this->$1DOMStructure::toString();
}

void DOMTransform::finalize() {
	this->$1DOMStructure::finalize();
}

void DOMTransform::init$($TransformService* spi) {
	$1DOMStructure::init$();
	$set(this, spi, spi);
}

void DOMTransform::init$($Element* transElem, $XMLCryptoContext* context, $Provider* provider) {
	$useLocalCurrentObjectStackCache();
	$1DOMStructure::init$();
	$var($String, algorithm, $DOMUtils::getAttributeValue(transElem, "Algorithm"_s));
	if (provider == nullptr) {
		try {
			$set(this, spi, $TransformService::getInstance(algorithm, "DOM"_s));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, e1, $catch());
			$throwNew($MarshalException, static_cast<$Throwable*>(e1));
		}
	} else {
		try {
			$set(this, spi, $TransformService::getInstance(algorithm, "DOM"_s, provider));
		} catch ($NoSuchAlgorithmException&) {
			$var($NoSuchAlgorithmException, nsae, $catch());
			try {
				$set(this, spi, $TransformService::getInstance(algorithm, "DOM"_s));
			} catch ($NoSuchAlgorithmException&) {
				$var($NoSuchAlgorithmException, e2, $catch());
				$throwNew($MarshalException, static_cast<$Throwable*>(e2));
			}
		}
	}
	try {
		$nc(this->spi)->init($$new($DOMStructure, transElem), context);
	} catch ($InvalidAlgorithmParameterException&) {
		$var($InvalidAlgorithmParameterException, iape, $catch());
		$throwNew($MarshalException, static_cast<$Throwable*>(iape));
	}
}

$AlgorithmParameterSpec* DOMTransform::getParameterSpec() {
	return $nc(this->spi)->getParameterSpec();
}

$String* DOMTransform::getAlgorithm() {
	return $nc(this->spi)->getAlgorithm();
}

void DOMTransform::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$var($Element, transformElem, nullptr);
	if ($nc($($nc(parent)->getLocalName()))->equals("Transforms"_s)) {
		$init($XMLSignature);
		$assign(transformElem, $DOMUtils::createElement(ownerDoc, "Transform"_s, $XMLSignature::XMLNS, dsPrefix));
	} else {
		$init($XMLSignature);
		$assign(transformElem, $DOMUtils::createElement(ownerDoc, "CanonicalizationMethod"_s, $XMLSignature::XMLNS, dsPrefix));
	}
	$DOMUtils::setAttribute(transformElem, "Algorithm"_s, $(getAlgorithm()));
	$nc(this->spi)->marshalParams($$new($DOMStructure, transformElem), context);
	$nc(parent)->appendChild(transformElem);
}

$Data* DOMTransform::transform($Data* data, $XMLCryptoContext* xc) {
	return $nc(this->spi)->transform(data, xc);
}

$Data* DOMTransform::transform($Data* data, $XMLCryptoContext* xc, $OutputStream* os) {
	return $nc(this->spi)->transform(data, xc, os);
}

bool DOMTransform::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($Transform, o))) {
		return false;
	}
	$var($Transform, otransform, $cast($Transform, o));
	bool var$0 = $nc($(getAlgorithm()))->equals($($nc(otransform)->getAlgorithm()));
	if (var$0) {
		$var($AlgorithmParameterSpec, var$1, getParameterSpec());
		var$0 = $DOMUtils::paramsEqual(var$1, $($nc(otransform)->getParameterSpec()));
	}
	return var$0;
}

int32_t DOMTransform::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t result = 17;
	result = 31 * result + $nc($(getAlgorithm()))->hashCode();
	$var($AlgorithmParameterSpec, spec, getParameterSpec());
	if (spec != nullptr) {
		result = 31 * result + $of(spec)->hashCode();
	}
	return result;
}

$Data* DOMTransform::transform($Data* data, $XMLCryptoContext* xc, $DOMSignContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($Node, var$0, $nc(context)->getParent());
	marshal(var$0, $($DOMUtils::getSignaturePrefix(static_cast<$XMLCryptoContext*>(static_cast<$DOMCryptoContext*>(context)))), context);
	return transform(data, xc);
}

DOMTransform::DOMTransform() {
}

$Class* DOMTransform::load$($String* name, bool initialize) {
	$loadClass(DOMTransform, name, initialize, &_DOMTransform_ClassInfo_, allocate$DOMTransform);
	return class$;
}

$Class* DOMTransform::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org