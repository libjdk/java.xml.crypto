#include <com/sun/org/apache/xml/internal/security/parser/XMLParserImpl.h>

#include <com/sun/org/apache/xml/internal/security/parser/XMLParserException.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParserImpl$1.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParserImpl$2.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/SecurityManager.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/Thread.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractMap.h>
#include <java/util/AbstractQueue.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <java/util/Queue.h>
#include <java/util/WeakHashMap.h>
#include <java/util/concurrent/ArrayBlockingQueue.h>
#include <javax/xml/XMLConstants.h>
#include <javax/xml/parsers/DocumentBuilder.h>
#include <javax/xml/parsers/DocumentBuilderFactory.h>
#include <javax/xml/parsers/ParserConfigurationException.h>
#include <org/w3c/dom/Document.h>
#include <org/xml/sax/SAXException.h>
#include <jcpp.h>

#undef DOCUMENT_BUILDERS
#undef DOCUMENT_BUILDERS_DISALLOW_DOCTYPE
#undef FEATURE_SECURE_PROCESSING

using $XMLParser = ::com::sun::org::apache::xml::internal::security::parser::XMLParser;
using $XMLParserException = ::com::sun::org::apache::xml::internal::security::parser::XMLParserException;
using $XMLParserImpl$1 = ::com::sun::org::apache::xml::internal::security::parser::XMLParserImpl$1;
using $XMLParserImpl$2 = ::com::sun::org::apache::xml::internal::security::parser::XMLParserImpl$2;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $SecurityManager = ::java::lang::SecurityManager;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractMap = ::java::util::AbstractMap;
using $AbstractQueue = ::java::util::AbstractQueue;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Queue = ::java::util::Queue;
using $WeakHashMap = ::java::util::WeakHashMap;
using $ArrayBlockingQueue = ::java::util::concurrent::ArrayBlockingQueue;
using $XMLConstants = ::javax::xml::XMLConstants;
using $DocumentBuilder = ::javax::xml::parsers::DocumentBuilder;
using $DocumentBuilderFactory = ::javax::xml::parsers::DocumentBuilderFactory;
using $ParserConfigurationException = ::javax::xml::parsers::ParserConfigurationException;
using $Document = ::org::w3c::dom::Document;
using $SAXException = ::org::xml::sax::SAXException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace parser {

class XMLParserImpl$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(XMLParserImpl$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(XMLParserImpl::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XMLParserImpl$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo XMLParserImpl$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLParserImpl$$Lambda$lambda$static$0::*)()>(&XMLParserImpl$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XMLParserImpl$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* XMLParserImpl$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(XMLParserImpl$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XMLParserImpl$$Lambda$lambda$static$0::class$ = nullptr;

$FieldInfo _XMLParserImpl_FieldInfo_[] = {
	{"parserPoolSize", "I", nullptr, $PRIVATE | $STATIC, $staticField(XMLParserImpl, parserPoolSize)},
	{"DOCUMENT_BUILDERS", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/ClassLoader;Ljava/util/Queue<Ljavax/xml/parsers/DocumentBuilder;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XMLParserImpl, DOCUMENT_BUILDERS)},
	{"DOCUMENT_BUILDERS_DISALLOW_DOCTYPE", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/ClassLoader;Ljava/util/Queue<Ljavax/xml/parsers/DocumentBuilder;>;>;", $PRIVATE | $STATIC | $FINAL, $staticField(XMLParserImpl, DOCUMENT_BUILDERS_DISALLOW_DOCTYPE)},
	{}
};

$MethodInfo _XMLParserImpl_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLParserImpl::*)()>(&XMLParserImpl::init$))},
	{"createDocumentBuilder", "(Z)Ljavax/xml/parsers/DocumentBuilder;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$DocumentBuilder*(*)(bool)>(&XMLParserImpl::createDocumentBuilder)), "javax.xml.parsers.ParserConfigurationException"},
	{"getClassLoader", "(Ljava/lang/Class;)Ljava/lang/ClassLoader;", "(Ljava/lang/Class<*>;)Ljava/lang/ClassLoader;", $PRIVATE | $STATIC, $method(static_cast<$ClassLoader*(*)($Class*)>(&XMLParserImpl::getClassLoader))},
	{"getContextClassLoader", "()Ljava/lang/ClassLoader;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$ClassLoader*(*)()>(&XMLParserImpl::getContextClassLoader))},
	{"getDocumentBuilder", "(ZLjava/util/Queue;)Ljavax/xml/parsers/DocumentBuilder;", "(ZLjava/util/Queue<Ljavax/xml/parsers/DocumentBuilder;>;)Ljavax/xml/parsers/DocumentBuilder;", $PRIVATE | $STATIC, $method(static_cast<$DocumentBuilder*(*)(bool,$Queue*)>(&XMLParserImpl::getDocumentBuilder)), "javax.xml.parsers.ParserConfigurationException"},
	{"getDocumentBuilderQueue", "(ZLjava/lang/ClassLoader;)Ljava/util/Queue;", "(ZLjava/lang/ClassLoader;)Ljava/util/Queue<Ljavax/xml/parsers/DocumentBuilder;>;", $PRIVATE | $STATIC, $method(static_cast<$Queue*(*)(bool,$ClassLoader*)>(&XMLParserImpl::getDocumentBuilderQueue)), "javax.xml.parsers.ParserConfigurationException"},
	{"lambda$static$0", "()Ljava/lang/Integer;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Integer*(*)()>(&XMLParserImpl::lambda$static$0))},
	{"parse", "(Ljava/io/InputStream;Z)Lorg/w3c/dom/Document;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.parser.XMLParserException"},
	{"repoolDocumentBuilder", "(Ljavax/xml/parsers/DocumentBuilder;Ljava/util/Queue;)V", "(Ljavax/xml/parsers/DocumentBuilder;Ljava/util/Queue<Ljavax/xml/parsers/DocumentBuilder;>;)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($DocumentBuilder*,$Queue*)>(&XMLParserImpl::repoolDocumentBuilder))},
	{}
};

$InnerClassInfo _XMLParserImpl_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$2", nullptr, nullptr, 0},
	{"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLParserImpl_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.security.parser.XMLParser",
	_XMLParserImpl_FieldInfo_,
	_XMLParserImpl_MethodInfo_,
	nullptr,
	nullptr,
	_XMLParserImpl_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$2,com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$1"
};

$Object* allocate$XMLParserImpl($Class* clazz) {
	return $of($alloc(XMLParserImpl));
}

int32_t XMLParserImpl::parserPoolSize = 0;
$Map* XMLParserImpl::DOCUMENT_BUILDERS = nullptr;
$Map* XMLParserImpl::DOCUMENT_BUILDERS_DISALLOW_DOCTYPE = nullptr;

void XMLParserImpl::init$() {
}

$Document* XMLParserImpl::parse($InputStream* inputStream, bool disallowDocTypeDeclarations) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($ClassLoader, loader, getContextClassLoader());
		if (loader == nullptr) {
			$load($XMLUtils);
			$assign(loader, getClassLoader($XMLUtils::class$));
		}
		if (loader == nullptr) {
			$var($DocumentBuilder, documentBuilder, createDocumentBuilder(disallowDocTypeDeclarations));
			return $nc(documentBuilder)->parse(inputStream);
		}
		$var($Queue, queue, getDocumentBuilderQueue(disallowDocTypeDeclarations, loader));
		$var($DocumentBuilder, documentBuilder, getDocumentBuilder(disallowDocTypeDeclarations, queue));
		$var($Document, doc, $nc(documentBuilder)->parse(inputStream));
		repoolDocumentBuilder(documentBuilder, queue);
		return doc;
	} catch ($ParserConfigurationException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLParserException, ex, "empty"_s, $$new($ObjectArray, {$of("Error parsing the inputstream"_s)}));
	} catch ($SAXException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLParserException, ex, "empty"_s, $$new($ObjectArray, {$of("Error parsing the inputstream"_s)}));
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($XMLParserException, ex, "empty"_s, $$new($ObjectArray, {$of("Error parsing the inputstream"_s)}));
	}
	$shouldNotReachHere();
}

$Queue* XMLParserImpl::getDocumentBuilderQueue(bool disallowDocTypeDeclarations, $ClassLoader* loader) {
	$init(XMLParserImpl);
	$useLocalCurrentObjectStackCache();
	$var($Map, docBuilderCache, disallowDocTypeDeclarations ? XMLParserImpl::DOCUMENT_BUILDERS_DISALLOW_DOCTYPE : XMLParserImpl::DOCUMENT_BUILDERS);
	$var($Queue, queue, $cast($Queue, $nc(docBuilderCache)->get(loader)));
	if (queue == nullptr) {
		$assign(queue, static_cast<$Queue*>(static_cast<$AbstractQueue*>($new($ArrayBlockingQueue, XMLParserImpl::parserPoolSize))));
		docBuilderCache->put(loader, queue);
	}
	return queue;
}

$DocumentBuilder* XMLParserImpl::getDocumentBuilder(bool disallowDocTypeDeclarations, $Queue* queue) {
	$init(XMLParserImpl);
	$var($DocumentBuilder, db, $cast($DocumentBuilder, $nc(queue)->poll()));
	if (db == nullptr) {
		$assign(db, createDocumentBuilder(disallowDocTypeDeclarations));
	}
	return db;
}

$DocumentBuilder* XMLParserImpl::createDocumentBuilder(bool disallowDocTypeDeclarations) {
	$init(XMLParserImpl);
	$var($DocumentBuilderFactory, f, $DocumentBuilderFactory::newInstance());
	$nc(f)->setNamespaceAware(true);
	$init($XMLConstants);
	f->setFeature($XMLConstants::FEATURE_SECURE_PROCESSING, true);
	f->setFeature("http://apache.org/xml/features/disallow-doctype-decl"_s, disallowDocTypeDeclarations);
	return f->newDocumentBuilder();
}

void XMLParserImpl::repoolDocumentBuilder($DocumentBuilder* db, $Queue* queue) {
	$init(XMLParserImpl);
	if (queue != nullptr) {
		$nc(db)->reset();
		queue->offer(db);
	}
}

$ClassLoader* XMLParserImpl::getContextClassLoader() {
	$init(XMLParserImpl);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		return $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($XMLParserImpl$1))));
	}
	return $($Thread::currentThread())->getContextClassLoader();
}

$ClassLoader* XMLParserImpl::getClassLoader($Class* clazz) {
	$init(XMLParserImpl);
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$var($SecurityManager, sm, $System::getSecurityManager());
	if (sm != nullptr) {
		return $cast($ClassLoader, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($XMLParserImpl$2, clazz))));
	}
	return $nc(clazz)->getClassLoader();
}

$Integer* XMLParserImpl::lambda$static$0() {
	$init(XMLParserImpl);
	return $Integer::getInteger("com.sun.org.apache.xml.internal.security.parser.pool-size"_s, 20);
}

void clinit$XMLParserImpl($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	XMLParserImpl::parserPoolSize = $nc(($cast($Integer, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(XMLParserImpl$$Lambda$lambda$static$0)))))))->intValue();
	$assignStatic(XMLParserImpl::DOCUMENT_BUILDERS, $Collections::synchronizedMap($$new($WeakHashMap)));
	$assignStatic(XMLParserImpl::DOCUMENT_BUILDERS_DISALLOW_DOCTYPE, $Collections::synchronizedMap($$new($WeakHashMap)));
}

XMLParserImpl::XMLParserImpl() {
}

$Class* XMLParserImpl::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(XMLParserImpl$$Lambda$lambda$static$0::classInfo$.name)) {
			return XMLParserImpl$$Lambda$lambda$static$0::load$(name, initialize);
		}
	}
	$loadClass(XMLParserImpl, name, initialize, &_XMLParserImpl_ClassInfo_, clinit$XMLParserImpl, allocate$XMLParserImpl);
	return class$;
}

$Class* XMLParserImpl::class$ = nullptr;

							} // parser
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com