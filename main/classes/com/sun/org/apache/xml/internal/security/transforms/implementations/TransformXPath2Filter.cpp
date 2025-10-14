#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformXPath2Filter.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/signature/NodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformationException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/XPath2NodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/transforms/params/XPath2FilterContainer.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathFactory.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/w3c/dom/DOMException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef TRANSFORM_XPATH2FILTER
#undef _TAG_XPATH2

using $ElementArray = $Array<::org::w3c::dom::Element>;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $NodeFilter = ::com::sun::org::apache::xml::internal::security::signature::NodeFilter;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $TransformSpi = ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi;
using $TransformationException = ::com::sun::org::apache::xml::internal::security::transforms::TransformationException;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $XPath2NodeFilter = ::com::sun::org::apache::xml::internal::security::transforms::implementations::XPath2NodeFilter;
using $XPath2FilterContainer = ::com::sun::org::apache::xml::internal::security::transforms::params::XPath2FilterContainer;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $XPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XPathAPI;
using $XPathFactory = ::com::sun::org::apache::xml::internal::security::utils::XPathFactory;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $DOMException = ::org::w3c::dom::DOMException;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								namespace implementations {

$MethodInfo _TransformXPath2Filter_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransformXPath2Filter::*)()>(&TransformXPath2Filter::init$))},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"enginePerformTransform", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/io/OutputStream;Lorg/w3c/dom/Element;Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.transforms.TransformationException"},
	{}
};

$ClassInfo _TransformXPath2Filter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformXPath2Filter",
	"com.sun.org.apache.xml.internal.security.transforms.TransformSpi",
	nullptr,
	nullptr,
	_TransformXPath2Filter_MethodInfo_
};

$Object* allocate$TransformXPath2Filter($Class* clazz) {
	return $of($alloc(TransformXPath2Filter));
}

void TransformXPath2Filter::init$() {
	$TransformSpi::init$();
}

$String* TransformXPath2Filter::engineGetURI() {
	$init($Transforms);
	return $Transforms::TRANSFORM_XPATH2FILTER;
}

$XMLSignatureInput* TransformXPath2Filter::enginePerformTransform($XMLSignatureInput* input, $OutputStream* os, $Element* transformElement, $String* baseURI, bool secureValidation) {
	try {
		$var($List, unionNodes, $new($ArrayList));
		$var($List, subtractNodes, $new($ArrayList));
		$var($List, intersectNodes, $new($ArrayList));
		$init($XPath2FilterContainer);
		$var($ElementArray, xpathElements, $XMLUtils::selectNodes($($nc(transformElement)->getFirstChild()), $XPath2FilterContainer::XPathFilter2NS, $XPath2FilterContainer::_TAG_XPATH2));
		if ($nc(xpathElements)->length == 0) {
				$init($Transforms);
			$var($ObjectArray, exArgs, $new($ObjectArray, {
				$of($Transforms::TRANSFORM_XPATH2FILTER),
				$of("XPath"_s)
			}));
			$throwNew($TransformationException, "xml.WrongContent"_s, exArgs);
		}
		$var($Document, inputDoc, nullptr);
		if ($nc(input)->getSubNode() != nullptr) {
			$assign(inputDoc, $XMLUtils::getOwnerDocument($(input->getSubNode())));
		} else {
			$assign(inputDoc, $XMLUtils::getOwnerDocument($(input->getNodeSet())));
		}
		$var($XPathFactory, xpathFactory, $XPathFactory::newInstance());
		for (int32_t i = 0; i < $nc(xpathElements)->length; ++i) {
			$var($Element, xpathElement, xpathElements->get(i));
			$var($XPath2FilterContainer, xpathContainer, $XPath2FilterContainer::newInstance(xpathElement, $($nc(input)->getSourceURI())));
			$var($String, str, $XMLUtils::getStrFromNode($($nc(xpathContainer)->getXPathFilterTextNode())));
			$var($XPathAPI, xpathAPIInstance, $nc(xpathFactory)->newXPathAPI());
			$var($Node, var$0, static_cast<$Node*>(inputDoc));
			$var($Node, var$1, $nc(xpathContainer)->getXPathFilterTextNode());
			$var($String, var$2, str);
			$var($NodeList, subtreeRoots, $nc(xpathAPIInstance)->selectNodeList(var$0, var$1, var$2, $(xpathContainer->getElement())));
			if ($nc(xpathContainer)->isIntersect()) {
				intersectNodes->add(subtreeRoots);
			} else if (xpathContainer->isSubtract()) {
				subtractNodes->add(subtreeRoots);
			} else if (xpathContainer->isUnion()) {
				unionNodes->add(subtreeRoots);
			}
		}
		$nc(input)->addNodeFilter($$new($XPath2NodeFilter, unionNodes, subtractNodes, intersectNodes));
		input->setNodeSet(true);
		return input;
	} catch ($TransformerException&) {
		$var($Exception, ex, $catch());
		$throwNew($TransformationException, ex);
	} catch ($DOMException&) {
		$var($Exception, ex, $catch());
		$throwNew($TransformationException, ex);
	} catch ($XMLSecurityException&) {
		$var($Exception, ex, $catch());
		$throwNew($TransformationException, ex);
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($TransformationException, ex);
	}
	$shouldNotReachHere();
}

TransformXPath2Filter::TransformXPath2Filter() {
}

$Class* TransformXPath2Filter::load$($String* name, bool initialize) {
	$loadClass(TransformXPath2Filter, name, initialize, &_TransformXPath2Filter_ClassInfo_, allocate$TransformXPath2Filter);
	return class$;
}

$Class* TransformXPath2Filter::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com