#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/KeyStoreResolver$KeyStoreIterator.h>

#include <com/sun/org/apache/xml/internal/security/keys/storage/implementations/KeyStoreResolver.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/KeyStore.h>
#include <java/security/KeyStoreException.h>
#include <java/security/cert/Certificate.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Enumeration.h>
#include <java/util/List.h>
#include <java/util/NoSuchElementException.h>
#include <jcpp.h>

#undef LOG

using $KeyStoreResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::implementations::KeyStoreResolver;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $KeyStore = ::java::security::KeyStore;
using $KeyStoreException = ::java::security::KeyStoreException;
using $Certificate = ::java::security::cert::Certificate;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Enumeration = ::java::util::Enumeration;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
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

$FieldInfo _KeyStoreResolver$KeyStoreIterator_FieldInfo_[] = {
	{"certs", "Ljava/util/List;", "Ljava/util/List<Ljava/security/cert/Certificate;>;", $PRIVATE | $FINAL, $field(KeyStoreResolver$KeyStoreIterator, certs)},
	{"i", "I", nullptr, $PRIVATE, $field(KeyStoreResolver$KeyStoreIterator, i)},
	{}
};

$MethodInfo _KeyStoreResolver$KeyStoreIterator_MethodInfo_[] = {
	{"<init>", "(Ljava/security/KeyStore;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyStoreResolver$KeyStoreIterator::*)($KeyStore*)>(&KeyStoreResolver$KeyStoreIterator::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Ljava/security/cert/Certificate;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeyStoreResolver$KeyStoreIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver$KeyStoreIterator", "com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver", "KeyStoreIterator", $STATIC},
	{}
};

$ClassInfo _KeyStoreResolver$KeyStoreIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver$KeyStoreIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_KeyStoreResolver$KeyStoreIterator_FieldInfo_,
	_KeyStoreResolver$KeyStoreIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Ljava/security/cert/Certificate;>;",
	nullptr,
	_KeyStoreResolver$KeyStoreIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver"
};

$Object* allocate$KeyStoreResolver$KeyStoreIterator($Class* clazz) {
	return $of($alloc(KeyStoreResolver$KeyStoreIterator));
}

void KeyStoreResolver$KeyStoreIterator::init$($KeyStore* keyStore) {
	$var($List, tmpCerts, $new($ArrayList));
	try {
		$var($Enumeration, aliases, $nc(keyStore)->aliases());
		while ($nc(aliases)->hasMoreElements()) {
			$var($String, alias, $cast($String, aliases->nextElement()));
			$var($Certificate, cert, keyStore->getCertificate(alias));
			if (cert != nullptr) {
				tmpCerts->add(cert);
			}
		}
	} catch ($KeyStoreException&) {
		$var($KeyStoreException, ex, $catch());
		$init($KeyStoreResolver);
		$nc($KeyStoreResolver::LOG)->debug("Error reading certificates: {}"_s, $$new($ObjectArray, {$($of(ex->getMessage()))}));
	}
	$set(this, certs, $Collections::unmodifiableList(tmpCerts));
	this->i = 0;
}

bool KeyStoreResolver$KeyStoreIterator::hasNext() {
	return this->i < $nc(this->certs)->size();
}

$Object* KeyStoreResolver$KeyStoreIterator::next() {
	if (hasNext()) {
		return $of($cast($Certificate, $nc(this->certs)->get(this->i++)));
	}
	$throwNew($NoSuchElementException);
}

void KeyStoreResolver$KeyStoreIterator::remove() {
	$throwNew($UnsupportedOperationException, "Can\'t remove keys from KeyStore"_s);
}

KeyStoreResolver$KeyStoreIterator::KeyStoreResolver$KeyStoreIterator() {
}

$Class* KeyStoreResolver$KeyStoreIterator::load$($String* name, bool initialize) {
	$loadClass(KeyStoreResolver$KeyStoreIterator, name, initialize, &_KeyStoreResolver$KeyStoreIterator_ClassInfo_, allocate$KeyStoreResolver$KeyStoreIterator);
	return class$;
}

$Class* KeyStoreResolver$KeyStoreIterator::class$ = nullptr;

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