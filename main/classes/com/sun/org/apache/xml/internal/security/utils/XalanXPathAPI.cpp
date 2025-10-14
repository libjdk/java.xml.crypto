#include <com/sun/org/apache/xml/internal/security/utils/XalanXPathAPI.h>

#include <com/sun/org/apache/xml/internal/security/transforms/implementations/FuncHere.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolver.h>
#include <com/sun/org/apache/xml/internal/utils/PrefixResolverDefault.h>
#include <com/sun/org/apache/xpath/internal/Expression.h>
#include <com/sun/org/apache/xpath/internal/XPath.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/compiler/FunctionTable.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/lang/reflect/Modifier.h>
#include <javax/xml/transform/ErrorListener.h>
#include <javax/xml/transform/SourceLocator.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef DOCUMENT_NODE
#undef LOG
#undef SELECT
#undef STATIC
#undef TYPE

using $FuncHere = ::com::sun::org::apache::xml::internal::security::transforms::implementations::FuncHere;
using $XPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XPathAPI;
using $PrefixResolver = ::com::sun::org::apache::xml::internal::utils::PrefixResolver;
using $PrefixResolverDefault = ::com::sun::org::apache::xml::internal::utils::PrefixResolverDefault;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $XPath = ::com::sun::org::apache::xpath::internal::XPath;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $FunctionTable = ::com::sun::org::apache::xpath::internal::compiler::FunctionTable;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $Constructor = ::java::lang::reflect::Constructor;
using $Method = ::java::lang::reflect::Method;
using $Modifier = ::java::lang::reflect::Modifier;
using $ErrorListener = ::javax::xml::transform::ErrorListener;
using $SourceLocator = ::javax::xml::transform::SourceLocator;
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
							namespace utils {

$FieldInfo _XalanXPathAPI_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XalanXPathAPI, LOG)},
	{"xpathStr", "Ljava/lang/String;", nullptr, $PRIVATE, $field(XalanXPathAPI, xpathStr)},
	{"xpath", "Lcom/sun/org/apache/xpath/internal/XPath;", nullptr, $PRIVATE, $field(XalanXPathAPI, xpath)},
	{"funcTable", "Lcom/sun/org/apache/xpath/internal/compiler/FunctionTable;", nullptr, $PRIVATE | $STATIC, $staticField(XalanXPathAPI, funcTable)},
	{"installed", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XalanXPathAPI, installed)},
	{"context", "Lcom/sun/org/apache/xpath/internal/XPathContext;", nullptr, $PRIVATE, $field(XalanXPathAPI, context)},
	{}
};

$MethodInfo _XalanXPathAPI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XalanXPathAPI::*)()>(&XalanXPathAPI::init$))},
	{"clear", "()V", nullptr, $PUBLIC},
	{"createXPath", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/utils/PrefixResolver;)Lcom/sun/org/apache/xpath/internal/XPath;", nullptr, $PRIVATE, $method(static_cast<$XPath*(XalanXPathAPI::*)($String*,$PrefixResolver*)>(&XalanXPathAPI::createXPath)), "javax.xml.transform.TransformerException"},
	{"eval", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PRIVATE, $method(static_cast<$XObject*(XalanXPathAPI::*)($Node*,$Node*,$String*,$Node*)>(&XalanXPathAPI::eval)), "javax.xml.transform.TransformerException"},
	{"evaluate", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"fixupFunctionTable", "()V", nullptr, $PRIVATE | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&XalanXPathAPI::fixupFunctionTable))},
	{"isInstalled", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&XalanXPathAPI::isInstalled))},
	{"selectNodeList", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _XalanXPathAPI_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.XalanXPathAPI",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.security.utils.XPathAPI",
	_XalanXPathAPI_FieldInfo_,
	_XalanXPathAPI_MethodInfo_
};

$Object* allocate$XalanXPathAPI($Class* clazz) {
	return $of($alloc(XalanXPathAPI));
}

$Logger* XalanXPathAPI::LOG = nullptr;
$FunctionTable* XalanXPathAPI::funcTable = nullptr;
bool XalanXPathAPI::installed = false;

void XalanXPathAPI::init$() {
}

$NodeList* XalanXPathAPI::selectNodeList($Node* contextNode, $Node* xpathnode, $String* str, $Node* namespaceNode) {
	$var($XObject, list, eval(contextNode, xpathnode, str, namespaceNode));
	return $nc(list)->nodelist();
}

bool XalanXPathAPI::evaluate($Node* contextNode, $Node* xpathnode, $String* str, $Node* namespaceNode) {
	$var($XObject, object, eval(contextNode, xpathnode, str, namespaceNode));
	return $nc(object)->bool$();
}

void XalanXPathAPI::clear() {
	$set(this, xpathStr, nullptr);
	$set(this, xpath, nullptr);
	$set(this, context, nullptr);
}

bool XalanXPathAPI::isInstalled() {
	$init(XalanXPathAPI);
	return XalanXPathAPI::installed;
}

$XObject* XalanXPathAPI::eval($Node* contextNode, $Node* xpathnode, $String* str, $Node* namespaceNode) {
	if (this->context == nullptr) {
		$set(this, context, $new($XPathContext, $of(xpathnode)));
		$nc(this->context)->setSecureProcessing(true);
	}
	$var($Node, resolverNode, ($nc(namespaceNode)->getNodeType() == $Node::DOCUMENT_NODE) ? static_cast<$Node*>($nc(($cast($Document, namespaceNode)))->getDocumentElement()) : namespaceNode);
	$var($PrefixResolverDefault, prefixResolver, $new($PrefixResolverDefault, resolverNode));
	if (!$nc(str)->equals(this->xpathStr)) {
		if (str->indexOf("here()"_s) > 0) {
			$nc(this->context)->reset();
		}
		$set(this, xpath, createXPath(str, prefixResolver));
		$set(this, xpathStr, str);
	}
	int32_t ctxtNode = $nc(this->context)->getDTMHandleFromNode(contextNode);
	return $nc(this->xpath)->execute(this->context, ctxtNode, static_cast<$PrefixResolver*>(prefixResolver));
}

$XPath* XalanXPathAPI::createXPath($String* str, $PrefixResolver* prefixResolver) {
	$beforeCallerSensitive();
	$var($XPath, xpath, nullptr);
		$load($String);
		$load($SourceLocator);
		$load($PrefixResolver);
		$init($Integer);
		$load($ErrorListener);
		$load($FunctionTable);
	$var($ClassArray, classes, $new($ClassArray, {
		$String::class$,
		$SourceLocator::class$,
		$PrefixResolver::class$,
		$Integer::TYPE,
		$ErrorListener::class$,
		$FunctionTable::class$
	}));
	$var($ObjectArray, objects, $new($ObjectArray, {
		$of(str),
		($Object*)nullptr,
		$of(prefixResolver),
		$($of($Integer::valueOf($XPath::SELECT))),
		($Object*)nullptr,
		$of(XalanXPathAPI::funcTable)
	}));
	try {
		$load($XPath);
		$var($Constructor, constructor, $XPath::class$->getConstructor(classes));
		$assign(xpath, $cast($XPath, $nc(constructor)->newInstance(objects)));
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$nc(XalanXPathAPI::LOG)->debug($(ex->getMessage()), static_cast<$Throwable*>(ex));
	}
	if (xpath == nullptr) {
		$assign(xpath, $new($XPath, str, nullptr, prefixResolver, $XPath::SELECT, nullptr));
	}
	return xpath;
}

void XalanXPathAPI::fixupFunctionTable() {
	$load(XalanXPathAPI);
	$synchronized(class$) {
		$init(XalanXPathAPI);
		$beforeCallerSensitive();
		XalanXPathAPI::installed = false;
		if ($$new($FunctionTable)->functionAvailable("here"_s)) {
			$nc(XalanXPathAPI::LOG)->debug("Here function already registered"_s);
			XalanXPathAPI::installed = true;
			return;
		}
		$nc(XalanXPathAPI::LOG)->debug("Registering Here function"_s);
		try {
				$load($String);
				$load($Expression);
			$var($ClassArray, args, $new($ClassArray, {
				$String::class$,
				$Expression::class$
			}));
			$var($Method, installFunction, $FunctionTable::class$->getMethod("installFunction"_s, args));
			if (((int32_t)($nc(installFunction)->getModifiers() & (uint32_t)$Modifier::STATIC)) != 0) {
				$var($ObjectArray, params, $new($ObjectArray, {
					$of("here"_s),
					$of($$new($FuncHere))
				}));
				installFunction->invoke(nullptr, params);
				XalanXPathAPI::installed = true;
			}
		} catch ($Exception&) {
			$var($Exception, ex, $catch());
			$nc(XalanXPathAPI::LOG)->debug("Error installing function using the static installFunction method"_s, static_cast<$Throwable*>(ex));
		}
		if (!XalanXPathAPI::installed) {
			try {
				$assignStatic(XalanXPathAPI::funcTable, $new($FunctionTable));
					$load($String);
					$load($Class);
				$var($ClassArray, args, $new($ClassArray, {
					$String::class$,
					$Class::class$
				}));
				$var($Method, installFunction, $FunctionTable::class$->getMethod("installFunction"_s, args));
					$load($FuncHere);
				$var($ObjectArray, params, $new($ObjectArray, {
					$of("here"_s),
					$of($FuncHere::class$)
				}));
				$nc(installFunction)->invoke(XalanXPathAPI::funcTable, params);
				XalanXPathAPI::installed = true;
			} catch ($Exception&) {
				$var($Exception, ex, $catch());
				$nc(XalanXPathAPI::LOG)->debug("Error installing function using the static installFunction method"_s, static_cast<$Throwable*>(ex));
			}
		}
		if (XalanXPathAPI::installed) {
			$load($FuncHere);
			$nc(XalanXPathAPI::LOG)->debug("Registered class {} for XPath function \'here()\' function in internal table"_s, $$new($ObjectArray, {$($of($FuncHere::class$->getName()))}));
		} else {
			$load($FuncHere);
			$nc(XalanXPathAPI::LOG)->debug("Unable to register class {} for XPath function \'here()\' function in internal table"_s, $$new($ObjectArray, {$($of($FuncHere::class$->getName()))}));
		}
	}
}

void clinit$XalanXPathAPI($Class* class$) {
	$assignStatic(XalanXPathAPI::LOG, $LoggerFactory::getLogger(XalanXPathAPI::class$));
	{
		XalanXPathAPI::fixupFunctionTable();
	}
}

XalanXPathAPI::XalanXPathAPI() {
}

$Class* XalanXPathAPI::load$($String* name, bool initialize) {
	$loadClass(XalanXPathAPI, name, initialize, &_XalanXPathAPI_ClassInfo_, clinit$XalanXPathAPI, allocate$XalanXPathAPI);
	return class$;
}

$Class* XalanXPathAPI::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com