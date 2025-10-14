#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/SingleCertificateResolver.h>

#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/SingleCertificateResolver$InternalIterator.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $StorageResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverSpi;
using $SingleCertificateResolver$InternalIterator = ::com::sun::org::apache::xml::internal::security::keys::storage::implementations::SingleCertificateResolver$InternalIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $X509Certificate = ::java::security::cert::X509Certificate;
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

$FieldInfo _SingleCertificateResolver_FieldInfo_[] = {
	{"certificate", "Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE | $FINAL, $field(SingleCertificateResolver, certificate)},
	{}
};

$MethodInfo _SingleCertificateResolver_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $method(static_cast<void(SingleCertificateResolver::*)($X509Certificate*)>(&SingleCertificateResolver::init$))},
	{"getIterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Ljava/security/cert/Certificate;>;", $PUBLIC},
	{}
};

$InnerClassInfo _SingleCertificateResolver_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver$InternalIterator", "com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver", "InternalIterator", $STATIC},
	{}
};

$ClassInfo _SingleCertificateResolver_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver",
	"com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverSpi",
	nullptr,
	_SingleCertificateResolver_FieldInfo_,
	_SingleCertificateResolver_MethodInfo_,
	nullptr,
	nullptr,
	_SingleCertificateResolver_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver$InternalIterator"
};

$Object* allocate$SingleCertificateResolver($Class* clazz) {
	return $of($alloc(SingleCertificateResolver));
}

void SingleCertificateResolver::init$($X509Certificate* x509cert) {
	$StorageResolverSpi::init$();
	$set(this, certificate, x509cert);
}

$Iterator* SingleCertificateResolver::getIterator() {
	return $new($SingleCertificateResolver$InternalIterator, this->certificate);
}

SingleCertificateResolver::SingleCertificateResolver() {
}

$Class* SingleCertificateResolver::load$($String* name, bool initialize) {
	$loadClass(SingleCertificateResolver, name, initialize, &_SingleCertificateResolver_ClassInfo_, allocate$SingleCertificateResolver);
	return class$;
}

$Class* SingleCertificateResolver::class$ = nullptr;

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