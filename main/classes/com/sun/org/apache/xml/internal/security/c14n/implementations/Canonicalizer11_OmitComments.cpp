#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer11_OmitComments.h>

#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $Canonicalizer20010315 = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {

$MethodInfo _Canonicalizer11_OmitComments_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Canonicalizer11_OmitComments::*)()>(&Canonicalizer11_OmitComments::init$))},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _Canonicalizer11_OmitComments_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer11_OmitComments",
	"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315",
	nullptr,
	nullptr,
	_Canonicalizer11_OmitComments_MethodInfo_
};

$Object* allocate$Canonicalizer11_OmitComments($Class* clazz) {
	return $of($alloc(Canonicalizer11_OmitComments));
}

void Canonicalizer11_OmitComments::init$() {
	$Canonicalizer20010315::init$(false, true);
}

$String* Canonicalizer11_OmitComments::engineGetURI() {
	$init($Canonicalizer);
	return $Canonicalizer::ALGO_ID_C14N11_OMIT_COMMENTS;
}

Canonicalizer11_OmitComments::Canonicalizer11_OmitComments() {
}

$Class* Canonicalizer11_OmitComments::load$($String* name, bool initialize) {
	$loadClass(Canonicalizer11_OmitComments, name, initialize, &_Canonicalizer11_OmitComments_ClassInfo_, allocate$Canonicalizer11_OmitComments);
	return class$;
}

$Class* Canonicalizer11_OmitComments::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com