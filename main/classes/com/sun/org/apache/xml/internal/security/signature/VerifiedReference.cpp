#include <com/sun/org/apache/xml/internal/security/signature/VerifiedReference.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

$FieldInfo _VerifiedReference_FieldInfo_[] = {
	{"valid", "Z", nullptr, $PRIVATE | $FINAL, $field(VerifiedReference, valid)},
	{"uri", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(VerifiedReference, uri)},
	{"manifestReferences", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/signature/VerifiedReference;>;", $PRIVATE | $FINAL, $field(VerifiedReference, manifestReferences)},
	{}
};

$MethodInfo _VerifiedReference_MethodInfo_[] = {
	{"<init>", "(ZLjava/lang/String;Ljava/util/List;)V", "(ZLjava/lang/String;Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/signature/VerifiedReference;>;)V", $PUBLIC, $method(static_cast<void(VerifiedReference::*)(bool,$String*,$List*)>(&VerifiedReference::init$))},
	{"getManifestReferences", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/signature/VerifiedReference;>;", $PUBLIC},
	{"getUri", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"isValid", "()Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _VerifiedReference_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.VerifiedReference",
	"java.lang.Object",
	nullptr,
	_VerifiedReference_FieldInfo_,
	_VerifiedReference_MethodInfo_
};

$Object* allocate$VerifiedReference($Class* clazz) {
	return $of($alloc(VerifiedReference));
}

void VerifiedReference::init$(bool valid, $String* uri, $List* manifestReferences) {
	this->valid = valid;
	$set(this, uri, uri);
	if (manifestReferences != nullptr) {
		$set(this, manifestReferences, manifestReferences);
	} else {
		$set(this, manifestReferences, $Collections::emptyList());
	}
}

bool VerifiedReference::isValid() {
	return this->valid;
}

$String* VerifiedReference::getUri() {
	return this->uri;
}

$List* VerifiedReference::getManifestReferences() {
	return $Collections::unmodifiableList(this->manifestReferences);
}

VerifiedReference::VerifiedReference() {
}

$Class* VerifiedReference::load$($String* name, bool initialize) {
	$loadClass(VerifiedReference, name, initialize, &_VerifiedReference_ClassInfo_, allocate$VerifiedReference);
	return class$;
}

$Class* VerifiedReference::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com