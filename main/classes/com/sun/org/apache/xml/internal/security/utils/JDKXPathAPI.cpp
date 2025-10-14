#include <com/sun/org/apache/xml/internal/security/utils/JDKXPathAPI.h>

#include <com/sun/org/apache/xml/internal/security/utils/DOMNamespaceContext.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/namespace/NamespaceContext.h>
#include <javax/xml/namespace/QName.h>
#include <javax/xml/transform/TransformerException.h>
#include <javax/xml/xpath/XPath.h>
#include <javax/xml/xpath/XPathConstants.h>
#include <javax/xml/xpath/XPathException.h>
#include <javax/xml/xpath/XPathExpression.h>
#include <javax/xml/xpath/XPathExpressionException.h>
#include <javax/xml/xpath/XPathFactory.h>
#include <javax/xml/xpath/XPathFactoryConfigurationException.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef BOOLEAN
#undef FEATURE_SECURE_PROCESSING
#undef NODESET
#undef TRUE

using $DOMNamespaceContext = ::com::sun::org::apache::xml::internal::security::utils::DOMNamespaceContext;
using $XPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XPathAPI;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLConstants = ::javax::xml::XMLConstants;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $QName = ::javax::xml::namespace$::QName;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $XPath = ::javax::xml::xpath::XPath;
using $XPathConstants = ::javax::xml::xpath::XPathConstants;
using $XPathException = ::javax::xml::xpath::XPathException;
using $XPathExpression = ::javax::xml::xpath::XPathExpression;
using $XPathExpressionException = ::javax::xml::xpath::XPathExpressionException;
using $XPathFactory = ::javax::xml::xpath::XPathFactory;
using $XPathFactoryConfigurationException = ::javax::xml::xpath::XPathFactoryConfigurationException;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$FieldInfo _JDKXPathAPI_FieldInfo_[] = {
	{"xpf", "Ljavax/xml/xpath/XPathFactory;", nullptr, $PRIVATE, $field(JDKXPathAPI, xpf)},
	{"xpathStr", "Ljava/lang/String;", nullptr, $PRIVATE, $field(JDKXPathAPI, xpathStr)},
	{"xpathExpression", "Ljavax/xml/xpath/XPathExpression;", nullptr, $PRIVATE, $field(JDKXPathAPI, xpathExpression)},
	{}
};

$MethodInfo _JDKXPathAPI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(JDKXPathAPI::*)()>(&JDKXPathAPI::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"evaluate", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"selectNodeList", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _JDKXPathAPI_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.JDKXPathAPI",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.security.utils.XPathAPI",
	_JDKXPathAPI_FieldInfo_,
	_JDKXPathAPI_MethodInfo_
};

$Object* allocate$JDKXPathAPI($Class* clazz) {
	return $of($alloc(JDKXPathAPI));
}

void JDKXPathAPI::init$() {
}

$NodeList* JDKXPathAPI::selectNodeList($Node* contextNode, $Node* xpathnode, $String* str, $Node* namespaceNode) {
	if (!$nc(str)->equals(this->xpathStr) || this->xpathExpression == nullptr) {
		if (this->xpf == nullptr) {
			$set(this, xpf, $XPathFactory::newInstance());
			try {
				$init($XMLConstants);
				$init($Boolean);
				$nc(this->xpf)->setFeature($XMLConstants::FEATURE_SECURE_PROCESSING, $nc($Boolean::TRUE)->booleanValue());
			} catch ($XPathFactoryConfigurationException&) {
				$var($XPathFactoryConfigurationException, ex, $catch());
				$throwNew($TransformerException, static_cast<$Throwable*>(ex));
			}
		}
		$var($XPath, xpath, $nc(this->xpf)->newXPath());
		$nc(xpath)->setNamespaceContext($$new($DOMNamespaceContext, namespaceNode));
		$set(this, xpathStr, str);
		try {
			$set(this, xpathExpression, xpath->compile(this->xpathStr));
		} catch ($XPathExpressionException&) {
			$var($XPathExpressionException, ex, $catch());
			$throwNew($TransformerException, static_cast<$Throwable*>(ex));
		}
	}
	try {
		$init($XPathConstants);
		return $cast($NodeList, $nc(this->xpathExpression)->evaluate($of(contextNode), $XPathConstants::NODESET));
	} catch ($XPathExpressionException&) {
		$var($XPathExpressionException, ex, $catch());
		$throwNew($TransformerException, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

bool JDKXPathAPI::evaluate($Node* contextNode, $Node* xpathnode, $String* str, $Node* namespaceNode) {
	if (!$nc(str)->equals(this->xpathStr) || this->xpathExpression == nullptr) {
		if (this->xpf == nullptr) {
			$set(this, xpf, $XPathFactory::newInstance());
			try {
				$init($XMLConstants);
				$init($Boolean);
				$nc(this->xpf)->setFeature($XMLConstants::FEATURE_SECURE_PROCESSING, $nc($Boolean::TRUE)->booleanValue());
			} catch ($XPathFactoryConfigurationException&) {
				$var($XPathFactoryConfigurationException, ex, $catch());
				$throwNew($TransformerException, static_cast<$Throwable*>(ex));
			}
		}
		$var($XPath, xpath, $nc(this->xpf)->newXPath());
		$nc(xpath)->setNamespaceContext($$new($DOMNamespaceContext, namespaceNode));
		$set(this, xpathStr, str);
		try {
			$set(this, xpathExpression, xpath->compile(this->xpathStr));
		} catch ($XPathExpressionException&) {
			$var($XPathExpressionException, ex, $catch());
			$throwNew($TransformerException, static_cast<$Throwable*>(ex));
		}
	}
	try {
		$init($XPathConstants);
		return $nc(($cast($Boolean, $($nc(this->xpathExpression)->evaluate($of(contextNode), $XPathConstants::BOOLEAN)))))->booleanValue();
	} catch ($XPathExpressionException&) {
		$var($XPathExpressionException, ex, $catch());
		$throwNew($TransformerException, static_cast<$Throwable*>(ex));
	}
	$shouldNotReachHere();
}

void JDKXPathAPI::clear() {
	$set(this, xpathStr, nullptr);
	$set(this, xpathExpression, nullptr);
	$set(this, xpf, nullptr);
}

JDKXPathAPI::JDKXPathAPI() {
}

$Class* JDKXPathAPI::load$($String* name, bool initialize) {
	$loadClass(JDKXPathAPI, name, initialize, &_JDKXPathAPI_ClassInfo_, allocate$JDKXPathAPI);
	return class$;
}

$Class* JDKXPathAPI::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com