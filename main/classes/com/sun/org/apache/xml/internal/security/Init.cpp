#include <com/sun/org/apache/xml/internal/security/Init.h>

#include <com/sun/org/apache/xml/internal/security/Init$1.h>
#include <com/sun/org/apache/xml/internal/security/Init$2.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper$Algorithm.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolver.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transform.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolver.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NoClassDefFoundError.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URL.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/PrivilegedActionException.h>
#include <java/security/PrivilegedExceptionAction.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

#undef CONF_NS
#undef ELEMENT_NODE
#undef LOG

using $ElementArray = $Array<::org::w3c::dom::Element>;
using $Init$1 = ::com::sun::org::apache::xml::internal::security::Init$1;
using $Init$2 = ::com::sun::org::apache::xml::internal::security::Init$2;
using $JCEMapper = ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper;
using $JCEMapper$Algorithm = ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper$Algorithm;
using $SignatureAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithm;
using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $KeyResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolver;
using $Transform = ::com::sun::org::apache::xml::internal::security::transforms::Transform;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $I18n = ::com::sun::org::apache::xml::internal::security::utils::I18n;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ResourceResolver = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolver;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NoClassDefFoundError = ::java::lang::NoClassDefFoundError;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $URL = ::java::net::URL;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $PrivilegedActionException = ::java::security::PrivilegedActionException;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Enumeration = ::java::util::Enumeration;
using $List = ::java::util::List;
using $Attr = ::org::w3c::dom::Attr;
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

class Init$$Lambda$lambda$init$0 : public $PrivilegedAction {
	$class(Init$$Lambda$lambda$init$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(Init::lambda$init$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<Init$$Lambda$lambda$init$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo Init$$Lambda$lambda$init$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Init$$Lambda$lambda$init$0::*)()>(&Init$$Lambda$lambda$init$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo Init$$Lambda$lambda$init$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xml.internal.security.Init$$Lambda$lambda$init$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* Init$$Lambda$lambda$init$0::load$($String* name, bool initialize) {
	$loadClass(Init$$Lambda$lambda$init$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* Init$$Lambda$lambda$init$0::class$ = nullptr;

$FieldInfo _Init_FieldInfo_[] = {
	{"CONF_NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Init, CONF_NS)},
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(Init, LOG)},
	{"alreadyInitialized", "Z", nullptr, $PRIVATE | $STATIC, $staticField(Init, alreadyInitialized)},
	{}
};

$MethodInfo _Init_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Init::*)()>(&Init::init$))},
	{"dynamicInit", "()V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)()>(&Init::dynamicInit))},
	{"fileInit", "(Ljava/io/InputStream;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($InputStream*)>(&Init::fileInit))},
	{"getResource", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/net/URL;", "(Ljava/lang/String;Ljava/lang/Class<*>;)Ljava/net/URL;", $PUBLIC | $STATIC, $method(static_cast<$URL*(*)($String*,$Class*)>(&Init::getResource))},
	{"getResourceAsStream", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/io/InputStream;", "(Ljava/lang/String;Ljava/lang/Class<*>;)Ljava/io/InputStream;", $PRIVATE | $STATIC, $method(static_cast<$InputStream*(*)($String*,$Class*)>(&Init::getResourceAsStream))},
	{"getResources", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/util/List;", "(Ljava/lang/String;Ljava/lang/Class<*>;)Ljava/util/List<Ljava/net/URL;>;", $PRIVATE | $STATIC, $method(static_cast<$List*(*)($String*,$Class*)>(&Init::getResources))},
	{"init", "()V", nullptr, $PUBLIC | $STATIC | $SYNCHRONIZED, $method(static_cast<void(*)()>(&Init::init))},
	{"isInitialized", "()Z", nullptr, $PUBLIC | $STATIC | $FINAL | $SYNCHRONIZED, $method(static_cast<bool(*)()>(&Init::isInitialized))},
	{"lambda$init$0", "()Ljava/io/InputStream;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$InputStream*(*)()>(&Init::lambda$init$0))},
	{}
};

$InnerClassInfo _Init_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.Init$2", nullptr, nullptr, 0},
	{"com.sun.org.apache.xml.internal.security.Init$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Init_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.Init",
	"java.lang.Object",
	nullptr,
	_Init_FieldInfo_,
	_Init_MethodInfo_,
	nullptr,
	nullptr,
	_Init_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.Init$2,com.sun.org.apache.xml.internal.security.Init$1"
};

$Object* allocate$Init($Class* clazz) {
	return $of($alloc(Init));
}


$String* Init::CONF_NS = nullptr;
$Logger* Init::LOG = nullptr;

bool Init::alreadyInitialized = false;

void Init::init$() {
}

bool Init::isInitialized() {
	$load(Init);
	$synchronized(class$) {
		$init(Init);
		return Init::alreadyInitialized;
	}
}

void Init::init() {
	$load(Init);
	$synchronized(class$) {
		$init(Init);
		$beforeCallerSensitive();
		if (Init::alreadyInitialized) {
			return;
		}
		$var($InputStream, is, $cast($InputStream, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(Init$$Lambda$lambda$init$0)))));
		if (is == nullptr) {
			dynamicInit();
		} else {
			fileInit(is);
			try {
				$nc(is)->close();
			} catch ($IOException&) {
				$var($IOException, ex, $catch());
				$nc(Init::LOG)->warn($(ex->getMessage()));
			}
		}
		Init::alreadyInitialized = true;
	}
}

void Init::dynamicInit() {
	$init(Init);
	$beforeCallerSensitive();
	$I18n::init("en"_s, "US"_s);
	$nc(Init::LOG)->debug("Registering default algorithms"_s);
	try {
		$AccessController::doPrivileged(static_cast<$PrivilegedExceptionAction*>($$new($Init$1)));
	} catch ($PrivilegedActionException&) {
		$var($PrivilegedActionException, ex, $catch());
		$var($XMLSecurityException, xse, $cast($XMLSecurityException, ex->getException()));
		$nc(Init::LOG)->error($($nc(xse)->getMessage()), static_cast<$Throwable*>(xse));
		$nc(xse)->printStackTrace();
	}
}

void Init::fileInit($InputStream* is) {
	$init(Init);
	try {
		$var($Document, doc, $XMLUtils::read(is, true));
		$var($Node, config, $nc(doc)->getFirstChild());
		for (; config != nullptr; $assign(config, $nc(config)->getNextSibling())) {
			if ("Configuration"_s->equals($(config->getLocalName()))) {
				break;
			}
		}
		if (config == nullptr) {
			$nc(Init::LOG)->error("Error in reading configuration file - Configuration element not found"_s);
			return;
		}
		{
			$var($Node, el, config->getFirstChild());
			for (; el != nullptr; $assign(el, $nc(el)->getNextSibling())) {
				if ($Node::ELEMENT_NODE != el->getNodeType()) {
					continue;
				}
				$var($String, tag, el->getLocalName());
				if ("ResourceBundles"_s->equals(tag)) {
					$var($Element, resource, $cast($Element, el));
					$var($Attr, langAttr, resource->getAttributeNodeNS(nullptr, "defaultLanguageCode"_s));
					$var($Attr, countryAttr, resource->getAttributeNodeNS(nullptr, "defaultCountryCode"_s));
					$var($String, languageCode, (langAttr == nullptr) ? ($String*)nullptr : $nc(langAttr)->getNodeValue());
					$var($String, countryCode, (countryAttr == nullptr) ? ($String*)nullptr : $nc(countryAttr)->getNodeValue());
					$I18n::init(languageCode, countryCode);
				}
				if ("CanonicalizationMethods"_s->equals(tag)) {
					$var($ElementArray, list, $XMLUtils::selectNodes($(el->getFirstChild()), Init::CONF_NS, "CanonicalizationMethod"_s));
					{
						$var($ElementArray, arr$, list);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($Element, element, arr$->get(i$));
							{
								$var($String, uri, $nc(element)->getAttributeNS(nullptr, "URI"_s));
								$var($String, javaClass, element->getAttributeNS(nullptr, "JAVACLASS"_s));
								try {
									$Canonicalizer::register$(uri, javaClass);
									$nc(Init::LOG)->debug("Canonicalizer.register({}, {})"_s, $$new($ObjectArray, {
										$of(uri),
										$of(javaClass)
									}));
								} catch ($ClassNotFoundException&) {
									$var($ClassNotFoundException, e, $catch());
									$var($ObjectArray, exArgs, $new($ObjectArray, {
										$of(uri),
										$of(javaClass)
									}));
									$nc(Init::LOG)->error($($I18n::translate("algorithm.classDoesNotExist"_s, exArgs)));
								}
							}
						}
					}
				}
				if ("TransformAlgorithms"_s->equals(tag)) {
					$var($ElementArray, tranElem, $XMLUtils::selectNodes($(el->getFirstChild()), Init::CONF_NS, "TransformAlgorithm"_s));
					{
						$var($ElementArray, arr$, tranElem);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($Element, element, arr$->get(i$));
							{
								$var($String, uri, $nc(element)->getAttributeNS(nullptr, "URI"_s));
								$var($String, javaClass, element->getAttributeNS(nullptr, "JAVACLASS"_s));
								try {
									$Transform::register$(uri, javaClass);
									$nc(Init::LOG)->debug("Transform.register({}, {})"_s, $$new($ObjectArray, {
										$of(uri),
										$of(javaClass)
									}));
								} catch ($ClassNotFoundException&) {
									$var($ClassNotFoundException, e, $catch());
									$var($ObjectArray, exArgs, $new($ObjectArray, {
										$of(uri),
										$of(javaClass)
									}));
									$nc(Init::LOG)->error($($I18n::translate("algorithm.classDoesNotExist"_s, exArgs)));
								} catch ($NoClassDefFoundError&) {
									$var($NoClassDefFoundError, ex, $catch());
									$nc(Init::LOG)->warn("Not able to found dependencies for algorithm, I\'ll keep working."_s);
								}
							}
						}
					}
				}
				if ("JCEAlgorithmMappings"_s->equals(tag)) {
					$var($Node, algorithmsNode, $nc($($nc(($cast($Element, el)))->getElementsByTagName("Algorithms"_s)))->item(0));
					if (algorithmsNode != nullptr) {
						$var($ElementArray, algorithms, $XMLUtils::selectNodes($(algorithmsNode->getFirstChild()), Init::CONF_NS, "Algorithm"_s));
						{
							$var($ElementArray, arr$, algorithms);
							int32_t len$ = $nc(arr$)->length;
							int32_t i$ = 0;
							for (; i$ < len$; ++i$) {
								$var($Element, element, arr$->get(i$));
								{
									$var($String, id, $nc(element)->getAttributeNS(nullptr, "URI"_s));
									$JCEMapper::register$(id, $$new($JCEMapper$Algorithm, element));
								}
							}
						}
					}
				}
				if ("SignatureAlgorithms"_s->equals(tag)) {
					$var($ElementArray, sigElems, $XMLUtils::selectNodes($(el->getFirstChild()), Init::CONF_NS, "SignatureAlgorithm"_s));
					{
						$var($ElementArray, arr$, sigElems);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($Element, sigElem, arr$->get(i$));
							{
								$var($String, uri, $nc(sigElem)->getAttributeNS(nullptr, "URI"_s));
								$var($String, javaClass, sigElem->getAttributeNS(nullptr, "JAVACLASS"_s));
								try {
									$SignatureAlgorithm::register$(uri, javaClass);
									$nc(Init::LOG)->debug("SignatureAlgorithm.register({}, {})"_s, $$new($ObjectArray, {
										$of(uri),
										$of(javaClass)
									}));
								} catch ($ClassNotFoundException&) {
									$var($ClassNotFoundException, e, $catch());
									$var($ObjectArray, exArgs, $new($ObjectArray, {
										$of(uri),
										$of(javaClass)
									}));
									$nc(Init::LOG)->error($($I18n::translate("algorithm.classDoesNotExist"_s, exArgs)));
								}
							}
						}
					}
				}
				if ("ResourceResolvers"_s->equals(tag)) {
					$var($ElementArray, resolverElem, $XMLUtils::selectNodes($(el->getFirstChild()), Init::CONF_NS, "Resolver"_s));
					$var($List, classNames, $new($ArrayList, $nc(resolverElem)->length));
					{
						$var($ElementArray, arr$, resolverElem);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($Element, element, arr$->get(i$));
							{
								$var($String, javaClass, $nc(element)->getAttributeNS(nullptr, "JAVACLASS"_s));
								$var($String, description, element->getAttributeNS(nullptr, "DESCRIPTION"_s));
								if (description != nullptr && description->length() > 0) {
									$nc(Init::LOG)->debug("Register Resolver: {}: {}"_s, $$new($ObjectArray, {
										$of(javaClass),
										$of(description)
									}));
								} else {
									$nc(Init::LOG)->debug("Register Resolver: {}: For unknown purposes"_s, $$new($ObjectArray, {$of(javaClass)}));
								}
								classNames->add(javaClass);
							}
						}
					}
					$ResourceResolver::registerClassNames(classNames);
				}
				if ("KeyResolver"_s->equals(tag)) {
					$var($ElementArray, resolverElem, $XMLUtils::selectNodes($(el->getFirstChild()), Init::CONF_NS, "Resolver"_s));
					$var($List, classNames, $new($ArrayList, $nc(resolverElem)->length));
					{
						$var($ElementArray, arr$, resolverElem);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($Element, element, arr$->get(i$));
							{
								$var($String, javaClass, $nc(element)->getAttributeNS(nullptr, "JAVACLASS"_s));
								$var($String, description, element->getAttributeNS(nullptr, "DESCRIPTION"_s));
								if (description != nullptr && description->length() > 0) {
									$nc(Init::LOG)->debug("Register Resolver: {}: {}"_s, $$new($ObjectArray, {
										$of(javaClass),
										$of(description)
									}));
								} else {
									$nc(Init::LOG)->debug("Register Resolver: {}: For unknown purposes"_s, $$new($ObjectArray, {$of(javaClass)}));
								}
								classNames->add(javaClass);
							}
						}
					}
					$KeyResolver::registerClassNames(classNames);
				}
				if ("PrefixMappings"_s->equals(tag)) {
					$nc(Init::LOG)->debug("Now I try to bind prefixes:"_s);
					$var($ElementArray, nl, $XMLUtils::selectNodes($(el->getFirstChild()), Init::CONF_NS, "PrefixMapping"_s));
					{
						$var($ElementArray, arr$, nl);
						int32_t len$ = $nc(arr$)->length;
						int32_t i$ = 0;
						for (; i$ < len$; ++i$) {
							$var($Element, element, arr$->get(i$));
							{
								$var($String, namespace$, $nc(element)->getAttributeNS(nullptr, "namespace"_s));
								$var($String, prefix, element->getAttributeNS(nullptr, "prefix"_s));
								$nc(Init::LOG)->debug("Now I try to bind {} to {}"_s, $$new($ObjectArray, {
									$of(prefix),
									$of(namespace$)
								}));
								$ElementProxy::setDefaultPrefix(namespace$, prefix);
							}
						}
					}
				}
			}
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$nc(Init::LOG)->error("Bad: "_s, static_cast<$Throwable*>(e));
	}
}

$URL* Init::getResource($String* resourceName, $Class* callingClass) {
	$init(Init);
	$beforeCallerSensitive();
	$var($URL, url, $nc($($($Thread::currentThread())->getContextClassLoader()))->getResource(resourceName));
	if (url == nullptr && $nc(resourceName)->charAt(0) == u'/') {
		$assign(url, $nc($($($Thread::currentThread())->getContextClassLoader()))->getResource($(resourceName->substring(1))));
	}
	$var($ClassLoader, cluClassloader, Init::class$->getClassLoader());
	if (cluClassloader == nullptr) {
		$assign(cluClassloader, $ClassLoader::getSystemClassLoader());
	}
	if (url == nullptr) {
		$assign(url, $nc(cluClassloader)->getResource(resourceName));
	}
	if (url == nullptr && $nc(resourceName)->charAt(0) == u'/') {
		$assign(url, $nc(cluClassloader)->getResource($(resourceName->substring(1))));
	}
	if (url == nullptr) {
		$var($ClassLoader, cl, $nc(callingClass)->getClassLoader());
		if (cl != nullptr) {
			$assign(url, cl->getResource(resourceName));
		}
	}
	if (url == nullptr) {
		$assign(url, $nc(callingClass)->getResource(resourceName));
	}
	if (url == nullptr && $nc(resourceName)->charAt(0) != u'/') {
		return getResource($$str({$$str(u'/'), resourceName}), callingClass);
	}
	return url;
}

$List* Init::getResources($String* resourceName, $Class* callingClass) {
	$init(Init);
	$beforeCallerSensitive();
	$var($List, ret, $new($ArrayList));
	$var($Enumeration, urls, $new($Init$2));
	try {
		$assign(urls, $nc($($($Thread::currentThread())->getContextClassLoader()))->getResources(resourceName));
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$nc(Init::LOG)->debug($(e->getMessage()), static_cast<$Throwable*>(e));
	}
	bool var$0 = !urls->hasMoreElements();
	if (var$0 && $nc(resourceName)->charAt(0) == u'/') {
		try {
			$assign(urls, $nc($($($Thread::currentThread())->getContextClassLoader()))->getResources($(resourceName->substring(1))));
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$nc(Init::LOG)->debug($(e->getMessage()), static_cast<$Throwable*>(e));
		}
	}
	$var($ClassLoader, cluClassloader, Init::class$->getClassLoader());
	if (cluClassloader == nullptr) {
		$assign(cluClassloader, $ClassLoader::getSystemClassLoader());
	}
	if (!urls->hasMoreElements()) {
		try {
			$assign(urls, $nc(cluClassloader)->getResources(resourceName));
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$nc(Init::LOG)->debug($(e->getMessage()), static_cast<$Throwable*>(e));
		}
	}
	bool var$1 = !urls->hasMoreElements();
	if (var$1 && $nc(resourceName)->charAt(0) == u'/') {
		try {
			$assign(urls, $nc(cluClassloader)->getResources($(resourceName->substring(1))));
		} catch ($IOException&) {
			$var($IOException, e, $catch());
			$nc(Init::LOG)->debug($(e->getMessage()), static_cast<$Throwable*>(e));
		}
	}
	if (!urls->hasMoreElements()) {
		$var($ClassLoader, cl, $nc(callingClass)->getClassLoader());
		if (cl != nullptr) {
			try {
				$assign(urls, cl->getResources(resourceName));
			} catch ($IOException&) {
				$var($IOException, e, $catch());
				$nc(Init::LOG)->debug($(e->getMessage()), static_cast<$Throwable*>(e));
			}
		}
	}
	if (!urls->hasMoreElements()) {
		$var($URL, url, $nc(callingClass)->getResource(resourceName));
		if (url != nullptr) {
			ret->add(url);
		}
	}
	while (urls->hasMoreElements()) {
		ret->add($cast($URL, $(urls->nextElement())));
	}
	bool var$2 = ret->isEmpty() && resourceName != nullptr;
	if (var$2 && resourceName->charAt(0) != u'/') {
		return getResources($$str({$$str(u'/'), resourceName}), callingClass);
	}
	return ret;
}

$InputStream* Init::getResourceAsStream($String* resourceName, $Class* callingClass) {
	$init(Init);
	$var($URL, url, getResource(resourceName, callingClass));
	try {
		return (url != nullptr) ? $nc(url)->openStream() : ($InputStream*)nullptr;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$nc(Init::LOG)->debug($(e->getMessage()), static_cast<$Throwable*>(e));
		return nullptr;
	}
	$shouldNotReachHere();
}

$InputStream* Init::lambda$init$0() {
	$init(Init);
	$var($String, cfile, $System::getProperty("com.sun.org.apache.xml.internal.security.resource.config"_s));
	if (cfile == nullptr) {
		return nullptr;
	}
	return getResourceAsStream(cfile, Init::class$);
}

void clinit$Init($Class* class$) {
	$assignStatic(Init::CONF_NS, "http://www.xmlsecurity.org/NS/#configuration"_s);
	$assignStatic(Init::LOG, $LoggerFactory::getLogger(Init::class$));
	Init::alreadyInitialized = false;
}

Init::Init() {
}

$Class* Init::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(Init$$Lambda$lambda$init$0::classInfo$.name)) {
			return Init$$Lambda$lambda$init$0::load$(name, initialize);
		}
	}
	$loadClass(Init, name, initialize, &_Init_ClassInfo_, clinit$Init, allocate$Init);
	return class$;
}

$Class* Init::class$ = nullptr;

						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com