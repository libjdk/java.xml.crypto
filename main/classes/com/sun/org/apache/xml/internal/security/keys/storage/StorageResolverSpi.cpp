#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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

$MethodInfo _StorageResolverSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(StorageResolverSpi::*)()>(&StorageResolverSpi::init$))},
	{"getIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/security/cert/Certificate;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _StorageResolverSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_StorageResolverSpi_MethodInfo_
};

$Object* allocate$StorageResolverSpi($Class* clazz) {
	return $of($alloc(StorageResolverSpi));
}

void StorageResolverSpi::init$() {
}

StorageResolverSpi::StorageResolverSpi() {
}

$Class* StorageResolverSpi::load$($String* name, bool initialize) {
	$loadClass(StorageResolverSpi, name, initialize, &_StorageResolverSpi_ClassInfo_, allocate$StorageResolverSpi);
	return class$;
}

$Class* StorageResolverSpi::class$ = nullptr;

								} // storage
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com