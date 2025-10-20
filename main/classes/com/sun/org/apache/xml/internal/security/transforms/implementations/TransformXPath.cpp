#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath.h>

#include <com/sun/org/apache/xml/internal/security/signature/NodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformationException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath$XPathNodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathFactory.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef HIERARCHY_REQUEST_ERR
#undef TRANSFORM_XPATH
#undef _TAG_XPATH

using $NodeFilter = ::com::sun::org::apache::xml::internal::security::signature::NodeFilter;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $TransformSpi = ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi;
using $TransformationException = ::com::sun::org::apache::xml::internal::security::transforms::TransformationException;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $TransformXPath$XPathNodeFilter = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformXPath$XPathNodeFilter;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $XPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XPathAPI;
using $XPathFactory = ::com::sun::org::apache::xml::internal::security::utils::XPathFactory;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $DOMException = ::org::w3c::dom::DOMException;
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

$MethodInfo _TransformXPath_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransformXPath::*)()>(&TransformXPath::init$))},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"enginePerformTransform", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/io/OutputStream;Lorg/w3c/dom/Element;Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{"getXPathFactory", "()Lcom/sun/org/apache/xml/internal/security/utils/XPathFactory;", nullptr, $PROTECTED},
	{"needsCircumvent", "(Ljava/lang/String;)Z", nullptr, $PRIVATE, $method(static_cast<bool(TransformXPath::*)($String*)>(&TransformXPath::needsCircumvent))},
	{}
};

$InnerClassInfo _TransformXPath_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath$XPathNodeFilter", "com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath", "XPathNodeFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransformXPath_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath",
	"com.sun.org.apache.xml.internal.security.transforms.TransformSpi",
	nullptr,
	nullptr,
	_TransformXPath_MethodInfo_,
	nullptr,
	nullptr,
	_TransformXPath_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath$XPathNodeFilter"
};

$Object* allocate$TransformXPath($Class* clazz) {
	return $of($alloc(TransformXPath));
}

void TransformXPath::init$() {
	$TransformSpi::init$();
}

$String* TransformXPath::engineGetURI() {
	$init($Transforms);
	return $Transforms::TRANSFORM_XPATH;
}

$XMLSignatureInput* TransformXPath::enginePerformTransform($XMLSignatureInput* input, $OutputStream* os, $Element* transformElement, $String* baseURI, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	try {
		$init($Constants);
		$var($Element, xpathElement, $XMLUtils::selectDsNode($($nc(transformElement)->getFirstChild()), $Constants::_TAG_XPATH, 0));
		if (xpathElement == nullptr) {
			$var($ObjectArray, exArgs, $new($ObjectArray, {
				$of("ds:XPath"_s),
				$of("Transform"_s)
			}));
			$throwNew($TransformationException, "xml.WrongContent"_s, exArgs);
		}
		$var($Node, xpathnode, $nc(xpathElement)->getFirstChild());
		if (xpathnode == nullptr) {
			$throwNew($DOMException, $DOMException::HIERARCHY_REQUEST_ERR, "Text must be in ds:Xpath"_s);
		}
		$var($String, str, $XMLUtils::getStrFromNode(xpathnode));
		$nc(input)->setNeedsToBeExpanded(needsCircumvent(str));
		$var($XPathFactory, xpathFactory, getXPathFactory());
		$var($XPathAPI, xpathAPIInstance, $nc(xpathFactory)->newXPathAPI());
		input->addNodeFilter($$new($TransformXPath$XPathNodeFilter, xpathElement, xpathnode, str, xpathAPIInstance));
		input->setNodeSet(true);
		return input;
	} catch ($DOMException&) {
		$var($DOMException, ex, $catch());
		$throwNew($TransformationException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

$XPathFactory* TransformXPath::getXPathFactory() {
	return $XPathFactory::newInstance();
}

bool TransformXPath::needsCircumvent($String* str) {
	bool var$0 = $nc(str)->indexOf("namespace"_s) != -1;
	return var$0 || $nc(str)->indexOf("name()"_s) != -1;
}

TransformXPath::TransformXPath() {
}

$Class* TransformXPath::load$($String* name, bool initialize) {
	$loadClass(TransformXPath, name, initialize, &_TransformXPath_ClassInfo_, allocate$TransformXPath);
	return class$;
}

$Class* TransformXPath::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com