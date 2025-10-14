#include <org/jcp/xml/dsig/internal/dom/DOMXSLTTransform.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/XSLTTransformParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheTransform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;
using $XSLTTransformParameterSpec = ::javax::xml::crypto::dsig::spec::XSLTTransformParameterSpec;
using $ApacheTransform = ::org::jcp::xml::dsig::internal::dom::ApacheTransform;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMXSLTTransform_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DOMXSLTTransform::*)()>(&DOMXSLTTransform::init$))},
	{"init", "(Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"init", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"marshalParams", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"unmarshalParams", "(Lorg/w3c/dom/Element;)V", nullptr, $PRIVATE, $method(static_cast<void(DOMXSLTTransform::*)($Element*)>(&DOMXSLTTransform::unmarshalParams))},
	{}
};

$ClassInfo _DOMXSLTTransform_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMXSLTTransform",
	"org.jcp.xml.dsig.internal.dom.ApacheTransform",
	nullptr,
	nullptr,
	_DOMXSLTTransform_MethodInfo_
};

$Object* allocate$DOMXSLTTransform($Class* clazz) {
	return $of($alloc(DOMXSLTTransform));
}

void DOMXSLTTransform::init$() {
	$ApacheTransform::init$();
}

void DOMXSLTTransform::init($TransformParameterSpec* params) {
	if (params == nullptr) {
		$throwNew($InvalidAlgorithmParameterException, "params are required"_s);
	}
	if (!($instanceOf($XSLTTransformParameterSpec, params))) {
		$throwNew($InvalidAlgorithmParameterException, "unrecognized params"_s);
	}
	$set(this, params, params);
}

void DOMXSLTTransform::init($XMLStructure* parent, $XMLCryptoContext* context) {
	$ApacheTransform::init(parent, context);
	unmarshalParams($($DOMUtils::getFirstChildElement(this->transformElem)));
}

void DOMXSLTTransform::unmarshalParams($Element* sheet) {
	$set(this, params, $new($XSLTTransformParameterSpec, $$new($DOMStructure, sheet)));
}

void DOMXSLTTransform::marshalParams($XMLStructure* parent, $XMLCryptoContext* context) {
	$ApacheTransform::marshalParams(parent, context);
	$var($XSLTTransformParameterSpec, xp, $cast($XSLTTransformParameterSpec, getParameterSpec()));
	$var($Node, xsltElem, $nc(($cast($DOMStructure, $($nc(xp)->getStylesheet()))))->getNode());
	$DOMUtils::appendChild(this->transformElem, xsltElem);
}

DOMXSLTTransform::DOMXSLTTransform() {
}

$Class* DOMXSLTTransform::load$($String* name, bool initialize) {
	$loadClass(DOMXSLTTransform, name, initialize, &_DOMXSLTTransform_ClassInfo_, allocate$DOMXSLTTransform);
	return class$;
}

$Class* DOMXSLTTransform::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org