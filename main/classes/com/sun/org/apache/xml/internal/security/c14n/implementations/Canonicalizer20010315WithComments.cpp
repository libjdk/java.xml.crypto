#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315WithComments.h>

#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ALGO_ID_C14N_WITH_COMMENTS

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

$MethodInfo _Canonicalizer20010315WithComments_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Canonicalizer20010315WithComments::*)()>(&Canonicalizer20010315WithComments::init$))},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _Canonicalizer20010315WithComments_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315WithComments",
	"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315",
	nullptr,
	nullptr,
	_Canonicalizer20010315WithComments_MethodInfo_
};

$Object* allocate$Canonicalizer20010315WithComments($Class* clazz) {
	return $of($alloc(Canonicalizer20010315WithComments));
}

void Canonicalizer20010315WithComments::init$() {
	$Canonicalizer20010315::init$(true);
}

$String* Canonicalizer20010315WithComments::engineGetURI() {
	$init($Canonicalizer);
	return $Canonicalizer::ALGO_ID_C14N_WITH_COMMENTS;
}

Canonicalizer20010315WithComments::Canonicalizer20010315WithComments() {
}

$Class* Canonicalizer20010315WithComments::load$($String* name, bool initialize) {
	$loadClass(Canonicalizer20010315WithComments, name, initialize, &_Canonicalizer20010315WithComments_ClassInfo_, allocate$Canonicalizer20010315WithComments);
	return class$;
}

$Class* Canonicalizer20010315WithComments::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com