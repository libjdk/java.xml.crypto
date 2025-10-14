#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformEnvelopedSignature.h>

#include <com/sun/org/apache/xml/internal/security/signature/NodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformationException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformEnvelopedSignature$EnvelopedNodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <java/io/OutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef DOCUMENT_NODE
#undef TRANSFORM_ENVELOPED_SIGNATURE
#undef _TAG_SIGNATURE

using $NodeFilter = ::com::sun::org::apache::xml::internal::security::signature::NodeFilter;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $TransformSpi = ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi;
using $TransformationException = ::com::sun::org::apache::xml::internal::security::transforms::TransformationException;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $TransformEnvelopedSignature$EnvelopedNodeFilter = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformEnvelopedSignature$EnvelopedNodeFilter;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								namespace implementations {

$MethodInfo _TransformEnvelopedSignature_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransformEnvelopedSignature::*)()>(&TransformEnvelopedSignature::init$))},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"enginePerformTransform", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/io/OutputStream;Lorg/w3c/dom/Element;Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{"searchSignatureElement", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$Node*(*)($Node*)>(&TransformEnvelopedSignature::searchSignatureElement)), "com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{}
};

$InnerClassInfo _TransformEnvelopedSignature_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformEnvelopedSignature$EnvelopedNodeFilter", "com.sun.org.apache.xml.internal.security.transforms.implementations.TransformEnvelopedSignature", "EnvelopedNodeFilter", $STATIC},
	{}
};

$ClassInfo _TransformEnvelopedSignature_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformEnvelopedSignature",
	"com.sun.org.apache.xml.internal.security.transforms.TransformSpi",
	nullptr,
	nullptr,
	_TransformEnvelopedSignature_MethodInfo_,
	nullptr,
	nullptr,
	_TransformEnvelopedSignature_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformEnvelopedSignature$EnvelopedNodeFilter"
};

$Object* allocate$TransformEnvelopedSignature($Class* clazz) {
	return $of($alloc(TransformEnvelopedSignature));
}

void TransformEnvelopedSignature::init$() {
	$TransformSpi::init$();
}

$String* TransformEnvelopedSignature::engineGetURI() {
	$init($Transforms);
	return $Transforms::TRANSFORM_ENVELOPED_SIGNATURE;
}

$XMLSignatureInput* TransformEnvelopedSignature::enginePerformTransform($XMLSignatureInput* input, $OutputStream* os, $Element* transformElement, $String* baseURI, bool secureValidation) {
	$var($Node, signatureElement, searchSignatureElement(transformElement));
	$nc(input)->setExcludeNode(signatureElement);
	input->addNodeFilter($$new($TransformEnvelopedSignature$EnvelopedNodeFilter, signatureElement));
	return input;
}

$Node* TransformEnvelopedSignature::searchSignatureElement($Node* signatureElement$renamed) {
	$init(TransformEnvelopedSignature);
	$var($Node, signatureElement, signatureElement$renamed);
	bool found = false;
	while (true) {
		if (signatureElement == nullptr || $nc(signatureElement)->getNodeType() == $Node::DOCUMENT_NODE) {
			break;
		}
		$var($Element, el, $cast($Element, signatureElement));
		$init($Constants);
		bool var$0 = $nc($($nc(el)->getNamespaceURI()))->equals($Constants::SignatureSpecNS);
		if (var$0 && $nc($(el->getLocalName()))->equals($Constants::_TAG_SIGNATURE)) {
			found = true;
			break;
		}
		$assign(signatureElement, $nc(signatureElement)->getParentNode());
	}
	if (!found) {
		$throwNew($TransformationException, "transform.envelopedSignatureTransformNotInSignatureElement"_s);
	}
	return signatureElement;
}

TransformEnvelopedSignature::TransformEnvelopedSignature() {
}

$Class* TransformEnvelopedSignature::load$($String* name, bool initialize) {
	$loadClass(TransformEnvelopedSignature, name, initialize, &_TransformEnvelopedSignature_ClassInfo_, allocate$TransformEnvelopedSignature);
	return class$;
}

$Class* TransformEnvelopedSignature::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com