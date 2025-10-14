#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath$XPathNodeFilter.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityRuntimeException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/Short.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $XMLSecurityRuntimeException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityRuntimeException;
using $NodeFilter = ::com::sun::org::apache::xml::internal::security::signature::NodeFilter;
using $TransformXPath = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformXPath;
using $XPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XPathAPI;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Short = ::java::lang::Short;
using $TransformerException = ::javax::xml::transform::TransformerException;
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

$FieldInfo _TransformXPath$XPathNodeFilter_FieldInfo_[] = {
	{"xPathAPI", "Lcom/sun/org/apache/xml/internal/security/utils/XPathAPI;", nullptr, $PRIVATE | $FINAL, $field(TransformXPath$XPathNodeFilter, xPathAPI)},
	{"xpathnode", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE | $FINAL, $field(TransformXPath$XPathNodeFilter, xpathnode)},
	{"xpathElement", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE | $FINAL, $field(TransformXPath$XPathNodeFilter, xpathElement)},
	{"str", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TransformXPath$XPathNodeFilter, str)},
	{}
};

$MethodInfo _TransformXPath$XPathNodeFilter_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Element;Lorg/w3c/dom/Node;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/utils/XPathAPI;)V", nullptr, 0, $method(static_cast<void(TransformXPath$XPathNodeFilter::*)($Element*,$Node*,$String*,$XPathAPI*)>(&TransformXPath$XPathNodeFilter::init$))},
	{"isNodeInclude", "(Lorg/w3c/dom/Node;)I", nullptr, $PUBLIC},
	{"isNodeIncludeDO", "(Lorg/w3c/dom/Node;I)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransformXPath$XPathNodeFilter_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath$XPathNodeFilter", "com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath", "XPathNodeFilter", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _TransformXPath$XPathNodeFilter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath$XPathNodeFilter",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.security.signature.NodeFilter",
	_TransformXPath$XPathNodeFilter_FieldInfo_,
	_TransformXPath$XPathNodeFilter_MethodInfo_,
	nullptr,
	nullptr,
	_TransformXPath$XPathNodeFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath"
};

$Object* allocate$TransformXPath$XPathNodeFilter($Class* clazz) {
	return $of($alloc(TransformXPath$XPathNodeFilter));
}

void TransformXPath$XPathNodeFilter::init$($Element* xpathElement, $Node* xpathnode, $String* str, $XPathAPI* xPathAPI) {
	$set(this, xpathnode, xpathnode);
	$set(this, str, str);
	$set(this, xpathElement, xpathElement);
	$set(this, xPathAPI, xPathAPI);
}

int32_t TransformXPath$XPathNodeFilter::isNodeInclude($Node* currentNode) {
	try {
		bool include = $nc(this->xPathAPI)->evaluate(currentNode, this->xpathnode, this->str, this->xpathElement);
		if (include) {
			return 1;
		}
		return 0;
	} catch ($TransformerException&) {
		$var($TransformerException, e, $catch());
		$var($ObjectArray, eArgs, $new($ObjectArray, {$of(currentNode)}));
		$throwNew($XMLSecurityRuntimeException, "signature.Transform.node"_s, eArgs, e);
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($ObjectArray, eArgs, $new($ObjectArray, {
			$of(currentNode),
			$($of($Short::valueOf($nc(currentNode)->getNodeType())))
		}));
		$throwNew($XMLSecurityRuntimeException, "signature.Transform.nodeAndType"_s, eArgs, e);
	}
	$shouldNotReachHere();
}

int32_t TransformXPath$XPathNodeFilter::isNodeIncludeDO($Node* n, int32_t level) {
	return isNodeInclude(n);
}

TransformXPath$XPathNodeFilter::TransformXPath$XPathNodeFilter() {
}

$Class* TransformXPath$XPathNodeFilter::load$($String* name, bool initialize) {
	$loadClass(TransformXPath$XPathNodeFilter, name, initialize, &_TransformXPath$XPathNodeFilter_ClassInfo_, allocate$TransformXPath$XPathNodeFilter);
	return class$;
}

$Class* TransformXPath$XPathNodeFilter::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com