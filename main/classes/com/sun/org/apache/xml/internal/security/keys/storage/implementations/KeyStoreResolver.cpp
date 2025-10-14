#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/KeyStoreResolver.h>

#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverException.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/KeyStoreResolver$KeyStoreIterator.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/KeyStore.h>
#include <java/security/KeyStoreException.h>
#include <java/util/Enumeration.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

#undef LOG

using $StorageResolverException = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverException;
using $StorageResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverSpi;
using $KeyStoreResolver$KeyStoreIterator = ::com::sun::org::apache::xml::internal::security::keys::storage::implementations::KeyStoreResolver$KeyStoreIterator;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $KeyStore = ::java::security::KeyStore;
using $KeyStoreException = ::java::security::KeyStoreException;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace storage {
									namespace implementations {

$FieldInfo _KeyStoreResolver_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyStoreResolver, LOG)},
	{"keyStore", "Ljava/security/KeyStore;", nullptr, $PRIVATE | $FINAL, $field(KeyStoreResolver, keyStore)},
	{}
};

$MethodInfo _KeyStoreResolver_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyStore;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyStoreResolver::*)($KeyStore*)>(&KeyStoreResolver::init$)), "com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverException"},
	{"getIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/security/cert/Certificate;>;", $PUBLIC},
	{}
};

$InnerClassInfo _KeyStoreResolver_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver$KeyStoreIterator", "com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver", "KeyStoreIterator", $STATIC},
	{}
};

$ClassInfo _KeyStoreResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver",
	"com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverSpi",
	nullptr,
	_KeyStoreResolver_FieldInfo_,
	_KeyStoreResolver_MethodInfo_,
	nullptr,
	nullptr,
	_KeyStoreResolver_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver$KeyStoreIterator"
};

$Object* allocate$KeyStoreResolver($Class* clazz) {
	return $of($alloc(KeyStoreResolver));
}

$Logger* KeyStoreResolver::LOG = nullptr;

void KeyStoreResolver::init$($KeyStore* keyStore) {
	$StorageResolverSpi::init$();
	$set(this, keyStore, keyStore);
	try {
		$nc(keyStore)->aliases();
	} catch ($KeyStoreException&) {
		$var($KeyStoreException, ex, $catch());
		$throwNew($StorageResolverException, static_cast<$Exception*>(ex));
	}
}

$Iterator* KeyStoreResolver::getIterator() {
	return $new($KeyStoreResolver$KeyStoreIterator, this->keyStore);
}

void clinit$KeyStoreResolver($Class* class$) {
	$assignStatic(KeyStoreResolver::LOG, $LoggerFactory::getLogger(KeyStoreResolver::class$));
}

KeyStoreResolver::KeyStoreResolver() {
}

$Class* KeyStoreResolver::load$($String* name, bool initialize) {
	$loadClass(KeyStoreResolver, name, initialize, &_KeyStoreResolver_ClassInfo_, clinit$KeyStoreResolver, allocate$KeyStoreResolver);
	return class$;
}

$Class* KeyStoreResolver::class$ = nullptr;

									} // implementations
								} // storage
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com