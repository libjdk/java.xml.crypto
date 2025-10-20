#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolver.h>

#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolver$ResolverIterator.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverException.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/DEREncodedKeyValueResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/DSAKeyValueResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/ECKeyValueResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/KeyInfoReferenceResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/RSAKeyValueResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/RetrievalMethodResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509CertificateResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509DigestResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509IssuerSerialResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509SKIResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/implementations/X509SubjectNameResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver.h>
#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/concurrent/CopyOnWriteArrayList.h>
#include <java/util/concurrent/atomic/AtomicBoolean.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef LOG

using $ClassLoaderUtils = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::ClassLoaderUtils;
using $KeyResolver$ResolverIterator = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolver$ResolverIterator;
using $KeyResolverException = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverException;
using $KeyResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi;
using $DEREncodedKeyValueResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::DEREncodedKeyValueResolver;
using $DSAKeyValueResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::DSAKeyValueResolver;
using $ECKeyValueResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::ECKeyValueResolver;
using $KeyInfoReferenceResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::KeyInfoReferenceResolver;
using $RSAKeyValueResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::RSAKeyValueResolver;
using $RetrievalMethodResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::RetrievalMethodResolver;
using $X509CertificateResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::X509CertificateResolver;
using $X509DigestResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::X509DigestResolver;
using $X509IssuerSerialResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::X509IssuerSerialResolver;
using $X509SKIResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::X509SKIResolver;
using $X509SubjectNameResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::implementations::X509SubjectNameResolver;
using $StorageResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver;
using $JavaUtils = ::com::sun::org::apache::xml::internal::security::utils::JavaUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $PublicKey = ::java::security::PublicKey;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $CopyOnWriteArrayList = ::java::util::concurrent::CopyOnWriteArrayList;
using $AtomicBoolean = ::java::util::concurrent::atomic::AtomicBoolean;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace keyresolver {

$FieldInfo _KeyResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyResolver, LOG)},
	{"resolverList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi;>;", $PRIVATE | $STATIC, $staticField(KeyResolver, resolverList)},
	{"defaultResolversAdded", "Ljava/util/concurrent/atomic/AtomicBoolean;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyResolver, defaultResolversAdded)},
	{}
};

$MethodInfo _KeyResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(KeyResolver::*)()>(&KeyResolver::init$))},
	{"getPublicKey", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/PublicKey;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$PublicKey*(*)($Element*,$String*,$StorageResolver*,bool)>(&KeyResolver::getPublicKey)), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"getX509Certificate", "(Lorg/w3c/dom/Element;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;Z)Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<$X509Certificate*(*)($Element*,$String*,$StorageResolver*,bool)>(&KeyResolver::getX509Certificate)), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lcom/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi;>;", $PUBLIC | $STATIC, $method(static_cast<$Iterator*(*)()>(&KeyResolver::iterator))},
	{"length", "()I", nullptr, $PUBLIC | $STATIC, $method(static_cast<int32_t(*)()>(&KeyResolver::length))},
	{"register", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&KeyResolver::register$)), "java.lang.ClassNotFoundException,java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.reflect.InvocationTargetException"},
	{"register", "(Lcom/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi;Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($KeyResolverSpi*,bool)>(&KeyResolver::register$))},
	{"registerAtStart", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&KeyResolver::registerAtStart))},
	{"registerClassNames", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($List*)>(&KeyResolver::registerClassNames)), "java.lang.ClassNotFoundException,java.lang.IllegalAccessException,java.lang.InstantiationException,java.lang.reflect.InvocationTargetException"},
	{"registerDefaultResolvers", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&KeyResolver::registerDefaultResolvers))},
	{}
};

$InnerClassInfo _KeyResolver_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolver$ResolverIterator", "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolver", "ResolverIterator", $STATIC},
	{}
};

$ClassInfo _KeyResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolver",
	"java.lang.Object",
	nullptr,
	_KeyResolver_FieldInfo_,
	_KeyResolver_MethodInfo_,
	nullptr,
	nullptr,
	_KeyResolver_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolver$ResolverIterator"
};

$Object* allocate$KeyResolver($Class* clazz) {
	return $of($alloc(KeyResolver));
}

$Logger* KeyResolver::LOG = nullptr;
$List* KeyResolver::resolverList = nullptr;
$AtomicBoolean* KeyResolver::defaultResolversAdded = nullptr;

void KeyResolver::init$() {
}

int32_t KeyResolver::length() {
	$init(KeyResolver);
	return $nc(KeyResolver::resolverList)->size();
}

$X509Certificate* KeyResolver::getX509Certificate($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$init(KeyResolver);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(KeyResolver::resolverList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($KeyResolverSpi, resolver, $cast($KeyResolverSpi, i$->next()));
			{
				if (resolver == nullptr) {
					$var($ObjectArray, exArgs, $new($ObjectArray, {element != nullptr && element->getNodeType() == $Node::ELEMENT_NODE ? $($of($nc(element)->getTagName())) : $of("null"_s)}));
					$throwNew($KeyResolverException, "utils.resolver.noClass"_s, exArgs);
				}
				$nc(KeyResolver::LOG)->debug("check resolvability by class {}"_s, $$new($ObjectArray, {$of($nc($of(resolver))->getClass())}));
				$var($X509Certificate, cert, $nc(resolver)->engineLookupResolveX509Certificate(element, baseURI, storage, secureValidation));
				if (cert != nullptr) {
					return cert;
				}
			}
		}
	}
	$var($ObjectArray, exArgs, $new($ObjectArray, {element != nullptr && element->getNodeType() == $Node::ELEMENT_NODE ? $($of($nc(element)->getTagName())) : $of("null"_s)}));
	$throwNew($KeyResolverException, "utils.resolver.noClass"_s, exArgs);
}

$PublicKey* KeyResolver::getPublicKey($Element* element, $String* baseURI, $StorageResolver* storage, bool secureValidation) {
	$init(KeyResolver);
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(KeyResolver::resolverList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($KeyResolverSpi, resolver, $cast($KeyResolverSpi, i$->next()));
			{
				if (resolver == nullptr) {
					$var($ObjectArray, exArgs, $new($ObjectArray, {element != nullptr && element->getNodeType() == $Node::ELEMENT_NODE ? $($of($nc(element)->getTagName())) : $of("null"_s)}));
					$throwNew($KeyResolverException, "utils.resolver.noClass"_s, exArgs);
				}
				$nc(KeyResolver::LOG)->debug("check resolvability by class {}"_s, $$new($ObjectArray, {$of($nc($of(resolver))->getClass())}));
				$var($PublicKey, cert, $nc(resolver)->engineLookupAndResolvePublicKey(element, baseURI, storage, secureValidation));
				if (cert != nullptr) {
					return cert;
				}
			}
		}
	}
	$var($ObjectArray, exArgs, $new($ObjectArray, {element != nullptr && element->getNodeType() == $Node::ELEMENT_NODE ? $($of($nc(element)->getTagName())) : $of("null"_s)}));
	$throwNew($KeyResolverException, "utils.resolver.noClass"_s, exArgs);
}

void KeyResolver::register$($String* className) {
	$init(KeyResolver);
	$JavaUtils::checkRegisterPermission();
	$var($KeyResolverSpi, keyResolverSpi, $cast($KeyResolverSpi, $JavaUtils::newInstanceWithEmptyConstructor($ClassLoaderUtils::loadClass(className, KeyResolver::class$))));
	register$(keyResolverSpi, false);
}

void KeyResolver::registerAtStart($String* className) {
	$init(KeyResolver);
	$useLocalCurrentObjectStackCache();
	$JavaUtils::checkRegisterPermission();
	$var($KeyResolverSpi, keyResolverSpi, nullptr);
	$var($Exception, ex, nullptr);
	try {
		$assign(keyResolverSpi, $cast($KeyResolverSpi, $JavaUtils::newInstanceWithEmptyConstructor($ClassLoaderUtils::loadClass(className, KeyResolver::class$))));
		register$(keyResolverSpi, true);
	} catch ($ClassNotFoundException&) {
		$var($ReflectiveOperationException, e, $catch());
		$assign(ex, e);
	} catch ($IllegalAccessException&) {
		$var($ReflectiveOperationException, e, $catch());
		$assign(ex, e);
	} catch ($InstantiationException&) {
		$var($ReflectiveOperationException, e, $catch());
		$assign(ex, e);
	} catch ($InvocationTargetException&) {
		$var($ReflectiveOperationException, e, $catch());
		$assign(ex, e);
	}
	if (ex != nullptr) {
		$throw($cast($IllegalArgumentException, $($$new($IllegalArgumentException, "Invalid KeyResolver class name"_s)->initCause(ex))));
	}
}

void KeyResolver::register$($KeyResolverSpi* keyResolverSpi, bool start) {
	$init(KeyResolver);
	$JavaUtils::checkRegisterPermission();
	if (start) {
		$nc(KeyResolver::resolverList)->add(0, keyResolverSpi);
	} else {
		$nc(KeyResolver::resolverList)->add(keyResolverSpi);
	}
}

void KeyResolver::registerClassNames($List* classNames) {
	$init(KeyResolver);
	$useLocalCurrentObjectStackCache();
	$JavaUtils::checkRegisterPermission();
	$var($List, keyResolverList, $new($ArrayList, $nc(classNames)->size()));
	{
		$var($Iterator, i$, $nc(classNames)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, className, $cast($String, i$->next()));
			{
				$var($KeyResolverSpi, keyResolverSpi, $cast($KeyResolverSpi, $JavaUtils::newInstanceWithEmptyConstructor($ClassLoaderUtils::loadClass(className, KeyResolver::class$))));
				keyResolverList->add(keyResolverSpi);
			}
		}
	}
	$nc(KeyResolver::resolverList)->addAll(keyResolverList);
}

void KeyResolver::registerDefaultResolvers() {
	$init(KeyResolver);
	$useLocalCurrentObjectStackCache();
	if ($nc(KeyResolver::defaultResolversAdded)->compareAndSet(false, true)) {
		$var($List, keyResolverList, $new($ArrayList));
		keyResolverList->add($$new($RSAKeyValueResolver));
		keyResolverList->add($$new($DSAKeyValueResolver));
		keyResolverList->add($$new($X509CertificateResolver));
		keyResolverList->add($$new($X509SKIResolver));
		keyResolverList->add($$new($RetrievalMethodResolver));
		keyResolverList->add($$new($X509SubjectNameResolver));
		keyResolverList->add($$new($X509IssuerSerialResolver));
		keyResolverList->add($$new($DEREncodedKeyValueResolver));
		keyResolverList->add($$new($KeyInfoReferenceResolver));
		keyResolverList->add($$new($X509DigestResolver));
		keyResolverList->add($$new($ECKeyValueResolver));
		$nc(KeyResolver::resolverList)->addAll(keyResolverList);
	}
}

$Iterator* KeyResolver::iterator() {
	$init(KeyResolver);
	return $new($KeyResolver$ResolverIterator, KeyResolver::resolverList);
}

void clinit$KeyResolver($Class* class$) {
	$assignStatic(KeyResolver::LOG, $LoggerFactory::getLogger(KeyResolver::class$));
	$assignStatic(KeyResolver::resolverList, $new($CopyOnWriteArrayList));
	$assignStatic(KeyResolver::defaultResolversAdded, $new($AtomicBoolean));
}

KeyResolver::KeyResolver() {
}

$Class* KeyResolver::load$($String* name, bool initialize) {
	$loadClass(KeyResolver, name, initialize, &_KeyResolver_ClassInfo_, clinit$KeyResolver, allocate$KeyResolver);
	return class$;
}

$Class* KeyResolver::class$ = nullptr;

								} // keyresolver
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com