#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver$StorageResolverIterator.h>

#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/Certificate.h>
#include <java/util/Iterator.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $StorageResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver;
using $StorageResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverSpi;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Certificate = ::java::security::cert::Certificate;
using $Iterator = ::java::util::Iterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace storage {

$FieldInfo _StorageResolver$StorageResolverIterator_FieldInfo_[] = {
	{"resolvers", "Ljava/util/Iterator;", "Ljava/util/Iterator<Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi;>;", $PRIVATE | $FINAL, $field(StorageResolver$StorageResolverIterator, resolvers)},
	{"currentResolver", "Ljava/util/Iterator;", "Ljava/util/Iterator<Ljava/security/cert/Certificate;>;", $PRIVATE, $field(StorageResolver$StorageResolverIterator, currentResolver)},
	{}
};

$MethodInfo _StorageResolver$StorageResolverIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Iterator;)V", "(Ljava/util/Iterator<Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi;>;)V", $PUBLIC, $method(static_cast<void(StorageResolver$StorageResolverIterator::*)($Iterator*)>(&StorageResolver$StorageResolverIterator::init$))},
	{"findNextResolver", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/security/cert/Certificate;>;", $PRIVATE, $method(static_cast<$Iterator*(StorageResolver$StorageResolverIterator::*)()>(&StorageResolver$StorageResolverIterator::findNextResolver))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/security/cert/Certificate;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _StorageResolver$StorageResolverIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.keys.storage.StorageResolver$StorageResolverIterator", "com.sun.org.apache.xml.internal.security.keys.storage.StorageResolver", "StorageResolverIterator", $STATIC},
	{}
};

$ClassInfo _StorageResolver$StorageResolverIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.storage.StorageResolver$StorageResolverIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_StorageResolver$StorageResolverIterator_FieldInfo_,
	_StorageResolver$StorageResolverIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/security/cert/Certificate;>;",
	nullptr,
	_StorageResolver$StorageResolverIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.keys.storage.StorageResolver"
};

$Object* allocate$StorageResolver$StorageResolverIterator($Class* clazz) {
	return $of($alloc(StorageResolver$StorageResolverIterator));
}

void StorageResolver$StorageResolverIterator::init$($Iterator* resolvers) {
	$set(this, resolvers, resolvers);
	$set(this, currentResolver, findNextResolver());
}

bool StorageResolver$StorageResolverIterator::hasNext() {
	if (this->currentResolver == nullptr) {
		return false;
	}
	if ($nc(this->currentResolver)->hasNext()) {
		return true;
	}
	$set(this, currentResolver, findNextResolver());
	return this->currentResolver != nullptr;
}

$Object* StorageResolver$StorageResolverIterator::next() {
	if (hasNext()) {
		return $of($cast($Certificate, $nc(this->currentResolver)->next()));
	}
	$throwNew($NoSuchElementException);
}

void StorageResolver$StorageResolverIterator::remove() {
	$throwNew($UnsupportedOperationException, "Can\'t remove keys from KeyStore"_s);
}

$Iterator* StorageResolver$StorageResolverIterator::findNextResolver() {
	$useLocalCurrentObjectStackCache();
	while ($nc(this->resolvers)->hasNext()) {
		$var($StorageResolverSpi, resolverSpi, $cast($StorageResolverSpi, $nc(this->resolvers)->next()));
		$var($Iterator, iter, $nc(resolverSpi)->getIterator());
		if ($nc(iter)->hasNext()) {
			return iter;
		}
	}
	return nullptr;
}

StorageResolver$StorageResolverIterator::StorageResolver$StorageResolverIterator() {
}

$Class* StorageResolver$StorageResolverIterator::load$($String* name, bool initialize) {
	$loadClass(StorageResolver$StorageResolverIterator, name, initialize, &_StorageResolver$StorageResolverIterator_ClassInfo_, allocate$StorageResolver$StorageResolverIterator);
	return class$;
}

$Class* StorageResolver$StorageResolverIterator::class$ = nullptr;

								} // storage
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com