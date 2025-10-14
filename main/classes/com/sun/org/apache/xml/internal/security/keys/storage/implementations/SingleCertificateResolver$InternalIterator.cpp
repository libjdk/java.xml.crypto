#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/SingleCertificateResolver$InternalIterator.h>

#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/SingleCertificateResolver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

using $SingleCertificateResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::implementations::SingleCertificateResolver;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $X509Certificate = ::java::security::cert::X509Certificate;
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
									namespace implementations {

$FieldInfo _SingleCertificateResolver$InternalIterator_FieldInfo_[] = {
	{"alreadyReturned", "Z", nullptr, $PRIVATE, $field(SingleCertificateResolver$InternalIterator, alreadyReturned)},
	{"certificate", "Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE | $FINAL, $field(SingleCertificateResolver$InternalIterator, certificate)},
	{}
};

$MethodInfo _SingleCertificateResolver$InternalIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, $method(static_cast<void(SingleCertificateResolver$InternalIterator::*)($X509Certificate*)>(&SingleCertificateResolver$InternalIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/security/cert/Certificate;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _SingleCertificateResolver$InternalIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver$InternalIterator", "com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver", "InternalIterator", $STATIC},
	{}
};

$ClassInfo _SingleCertificateResolver$InternalIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver$InternalIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_SingleCertificateResolver$InternalIterator_FieldInfo_,
	_SingleCertificateResolver$InternalIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/security/cert/Certificate;>;",
	nullptr,
	_SingleCertificateResolver$InternalIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver"
};

$Object* allocate$SingleCertificateResolver$InternalIterator($Class* clazz) {
	return $of($alloc(SingleCertificateResolver$InternalIterator));
}

void SingleCertificateResolver$InternalIterator::init$($X509Certificate* x509cert) {
	$set(this, certificate, x509cert);
}

bool SingleCertificateResolver$InternalIterator::hasNext() {
	return !this->alreadyReturned;
}

$Object* SingleCertificateResolver$InternalIterator::next() {
	if (this->alreadyReturned) {
		$throwNew($NoSuchElementException);
	}
	this->alreadyReturned = true;
	return $of(this->certificate);
}

void SingleCertificateResolver$InternalIterator::remove() {
	$throwNew($UnsupportedOperationException, "Can\'t remove keys from KeyStore"_s);
}

SingleCertificateResolver$InternalIterator::SingleCertificateResolver$InternalIterator() {
}

$Class* SingleCertificateResolver$InternalIterator::load$($String* name, bool initialize) {
	$loadClass(SingleCertificateResolver$InternalIterator, name, initialize, &_SingleCertificateResolver$InternalIterator_ClassInfo_, allocate$SingleCertificateResolver$InternalIterator);
	return class$;
}

$Class* SingleCertificateResolver$InternalIterator::class$ = nullptr;

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