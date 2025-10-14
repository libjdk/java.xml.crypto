#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer11_WithComments.h>

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

$MethodInfo _Canonicalizer11_WithComments_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Canonicalizer11_WithComments::*)()>(&Canonicalizer11_WithComments::init$))},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _Canonicalizer11_WithComments_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer11_WithComments",
	"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315",
	nullptr,
	nullptr,
	_Canonicalizer11_WithComments_MethodInfo_
};

$Object* allocate$Canonicalizer11_WithComments($Class* clazz) {
	return $of($alloc(Canonicalizer11_WithComments));
}

void Canonicalizer11_WithComments::init$() {
	$Canonicalizer20010315::init$(true, true);
}

$String* Canonicalizer11_WithComments::engineGetURI() {
	$init($Canonicalizer);
	return $Canonicalizer::ALGO_ID_C14N11_WITH_COMMENTS;
}

Canonicalizer11_WithComments::Canonicalizer11_WithComments() {
}

$Class* Canonicalizer11_WithComments::load$($String* name, bool initialize) {
	$loadClass(Canonicalizer11_WithComments, name, initialize, &_Canonicalizer11_WithComments_ClassInfo_, allocate$Canonicalizer11_WithComments);
	return class$;
}

$Class* Canonicalizer11_WithComments::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com