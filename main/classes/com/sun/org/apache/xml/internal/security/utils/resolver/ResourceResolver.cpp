#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolver.h>

#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverException.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverDirectHTTP.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverFragment.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverLocalFilesystem.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverXPointer.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <jcpp.h>

#undef LOG

using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $JavaUtils = ::com::sun::org::apache::xml::internal::security::utils::JavaUtils;
using $ClassLoaderUtils = ::com::sun::org::apache::xml::internal::security::utils::resolver::ClassLoaderUtils;
using $ResourceResolverContext = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext;
using $ResourceResolverException = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverException;
using $ResourceResolverSpi = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi;
using $ResolverDirectHTTP = ::com::sun::org::apache::xml::internal::security::utils::resolver::implementations::ResolverDirectHTTP;
using $ResolverFragment = ::com::sun::org::apache::xml::internal::security::utils::resolver::implementations::ResolverFragment;
using $ResolverLocalFilesystem = ::com::sun::org::apache::xml::internal::security::utils::resolver::implementations::ResolverLocalFilesystem;
using $ResolverXPointer = ::com::sun::org::apache::xml::internal::security::utils::resolver::implementations::ResolverXPointer;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {
								namespace resolver {

$FieldInfo _ResourceResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceResolver, LOG)},
	{"resolverList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi;>;", $PRIVATE | $STATIC | $FINAL, $staticField(ResourceResolver, resolverList)},
	{"defaultResolversAdded", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResourceResolver, defaultResolversAdded)},
	{}
};

$MethodInfo _ResourceResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResourceResolver::*)()>(&ResourceResolver::init$))},
	{"register", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&ResourceResolver::register$)), "java.lang.ClassNotFoundException,java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.reflect.InvocationTargetException"},
	{"register", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi;Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($ResourceResolverSpi*,bool)>(&ResourceResolver::register$))},
	{"registerAtStart", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&ResourceResolver::registerAtStart)), "java.lang.ClassNotFoundException,java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.reflect.InvocationTargetException"},
	{"registerClassNames", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($List*)>(&ResourceResolver::registerClassNames)), "java.lang.ClassNotFoundException,java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.reflect.InvocationTargetException"},
	{"registerDefaultResolvers", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&ResourceResolver::registerDefaultResolvers))},
	{"resolve", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$XMLSignatureInput*(*)($ResourceResolverContext*)>(&ResourceResolver::resolve)), "com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException"},
	{"resolve", "(Ljava/util/List;Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi;>;Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", $PUBLIC | $STATIC, $method(static_cast<$XMLSignatureInput*(*)($List*,$ResourceResolverContext*)>(&ResourceResolver::resolve)), "com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException"},
	{}
};

$ClassInfo _ResourceResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolver",
	"java.lang.Object",
	nullptr,
	_ResourceResolver_FieldInfo_,
	_ResourceResolver_MethodInfo_
};

$Object* allocate$ResourceResolver($Class* clazz) {
	return $of($alloc(ResourceResolver));
}

$Logger* ResourceResolver::LOG = nullptr;

$List* ResourceResolver::resolverList = nullptr;
$AtomicBoolean* ResourceResolver::defaultResolversAdded = nullptr;

void ResourceResolver::init$() {
}

void ResourceResolver::register$($String* className) {
	$init(ResourceResolver);
	$JavaUtils::checkRegisterPermission();
	$Class* resourceResolverClass = $ClassLoaderUtils::loadClass(className, ResourceResolver::class$);
	register$($cast($ResourceResolverSpi, $($JavaUtils::newInstanceWithEmptyConstructor(resourceResolverClass))), false);
}

void ResourceResolver::registerAtStart($String* className) {
	$init(ResourceResolver);
	$JavaUtils::checkRegisterPermission();
	$Class* resourceResolverClass = $ClassLoaderUtils::loadClass(className, ResourceResolver::class$);
	register$($cast($ResourceResolverSpi, $($JavaUtils::newInstanceWithEmptyConstructor(resourceResolverClass))), true);
}

void ResourceResolver::register$($ResourceResolverSpi* resourceResolverSpi, bool start) {
	$init(ResourceResolver);
	$useLocalCurrentObjectStackCache();
	$JavaUtils::checkRegisterPermission();
	if (start) {
		$nc(ResourceResolver::resolverList)->add(0, resourceResolverSpi);
	} else {
		$nc(ResourceResolver::resolverList)->add(resourceResolverSpi);
	}
	$nc(ResourceResolver::LOG)->debug("Registered resolver: {}"_s, $$new($ObjectArray, {$($of($nc($of(resourceResolverSpi))->toString()))}));
}

void ResourceResolver::registerClassNames($List* classNames) {
	$init(ResourceResolver);
	$useLocalCurrentObjectStackCache();
	$JavaUtils::checkRegisterPermission();
	$var($List, resourceResolversToAdd, $new($ArrayList, $nc(classNames)->size()));
	{
		$var($Iterator, i$, $nc(classNames)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, className, $cast($String, i$->next()));
			{
				$var($ResourceResolverSpi, resourceResolverSpi, $cast($ResourceResolverSpi, $JavaUtils::newInstanceWithEmptyConstructor($ClassLoaderUtils::loadClass(className, ResourceResolver::class$))));
				resourceResolversToAdd->add(resourceResolverSpi);
			}
		}
	}
	$nc(ResourceResolver::resolverList)->addAll(resourceResolversToAdd);
}

void ResourceResolver::registerDefaultResolvers() {
	$init(ResourceResolver);
	$useLocalCurrentObjectStackCache();
	if ($nc(ResourceResolver::defaultResolversAdded)->compareAndSet(false, true)) {
		$var($List, resourceResolversToAdd, $new($ArrayList));
		resourceResolversToAdd->add($$new($ResolverFragment));
		resourceResolversToAdd->add($$new($ResolverLocalFilesystem));
		resourceResolversToAdd->add($$new($ResolverXPointer));
		resourceResolversToAdd->add($$new($ResolverDirectHTTP));
		$nc(ResourceResolver::resolverList)->addAll(resourceResolversToAdd);
	}
}

$XMLSignatureInput* ResourceResolver::resolve($ResourceResolverContext* context) {
	$init(ResourceResolver);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(ResourceResolver::resolverList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($ResourceResolverSpi, resolver, $cast($ResourceResolverSpi, i$->next()));
			{
				$nc(ResourceResolver::LOG)->debug("check resolvability by class {}"_s, $$new($ObjectArray, {$($of($nc($of(resolver))->getClass()->getName()))}));
				if ($nc(resolver)->engineCanResolveURI(context)) {
					if ($nc(context)->secureValidation && ($instanceOf($ResolverLocalFilesystem, resolver) || $instanceOf($ResolverDirectHTTP, resolver))) {
						$var($ObjectArray, exArgs, $new($ObjectArray, {$($of($of(resolver)->getClass()->getName()))}));
						$throwNew($ResourceResolverException, "signature.Reference.ForbiddenResolver"_s, exArgs, $nc(context)->uriToResolve, context->baseUri);
					}
					return resolver->engineResolveURI(context);
				}
			}
		}
	}
	$var($ObjectArray, exArgs, $new($ObjectArray, {
		$nc(context)->uriToResolve != nullptr ? $of($nc(context)->uriToResolve) : $of("null"_s),
		$of(context->baseUri)
	}));
	$throwNew($ResourceResolverException, "utils.resolver.noClass"_s, exArgs, context->uriToResolve, context->baseUri);
}

$XMLSignatureInput* ResourceResolver::resolve($List* individualResolvers, $ResourceResolverContext* context) {
	$init(ResourceResolver);
	$useLocalCurrentObjectStackCache();
	$nc(ResourceResolver::LOG)->debug("I was asked to create a ResourceResolver and got {}"_s, $$new($ObjectArray, {$($of($Integer::valueOf(individualResolvers == nullptr ? 0 : $nc(individualResolvers)->size())))}));
	if (individualResolvers != nullptr) {
		{
			$var($Iterator, i$, individualResolvers->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($ResourceResolverSpi, resolver, $cast($ResourceResolverSpi, i$->next()));
				{
					$var($String, currentClass, $nc($of(resolver))->getClass()->getName());
					$nc(ResourceResolver::LOG)->debug("check resolvability by class {}"_s, $$new($ObjectArray, {$of(currentClass)}));
					if (resolver->engineCanResolveURI(context)) {
						return resolver->engineResolveURI(context);
					}
				}
			}
		}
	}
	return resolve(context);
}

void clinit$ResourceResolver($Class* class$) {
	$assignStatic(ResourceResolver::LOG, $LoggerFactory::getLogger(ResourceResolver::class$));
	$assignStatic(ResourceResolver::resolverList, $new($CopyOnWriteArrayList));
	$assignStatic(ResourceResolver::defaultResolversAdded, $new($AtomicBoolean));
}

ResourceResolver::ResourceResolver() {
}

$Class* ResourceResolver::load$($String* name, bool initialize) {
	$loadClass(ResourceResolver, name, initialize, &_ResourceResolver_ClassInfo_, clinit$ResourceResolver, allocate$ResourceResolver);
	return class$;
}

$Class* ResourceResolver::class$ = nullptr;

								} // resolver
							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com