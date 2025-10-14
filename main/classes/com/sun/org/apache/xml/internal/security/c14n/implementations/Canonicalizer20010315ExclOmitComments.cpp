#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315ExclOmitComments.h>

#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315Excl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ALGO_ID_C14N_EXCL_OMIT_COMMENTS

using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $Canonicalizer20010315Excl = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315Excl;
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

$MethodInfo _Canonicalizer20010315ExclOmitComments_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(Canonicalizer20010315ExclOmitComments::*)()>(&Canonicalizer20010315ExclOmitComments::init$))},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{}
};

$ClassInfo _Canonicalizer20010315ExclOmitComments_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315ExclOmitComments",
	"com.sun.org.apache.xml.internal.security.c14n.implementations.Canonicalizer20010315Excl",
	nullptr,
	nullptr,
	_Canonicalizer20010315ExclOmitComments_MethodInfo_
};

$Object* allocate$Canonicalizer20010315ExclOmitComments($Class* clazz) {
	return $of($alloc(Canonicalizer20010315ExclOmitComments));
}

void Canonicalizer20010315ExclOmitComments::init$() {
	$Canonicalizer20010315Excl::init$(false);
}

$String* Canonicalizer20010315ExclOmitComments::engineGetURI() {
	$init($Canonicalizer);
	return $Canonicalizer::ALGO_ID_C14N_EXCL_OMIT_COMMENTS;
}

Canonicalizer20010315ExclOmitComments::Canonicalizer20010315ExclOmitComments() {
}

$Class* Canonicalizer20010315ExclOmitComments::load$($String* name, bool initialize) {
	$loadClass(Canonicalizer20010315ExclOmitComments, name, initialize, &_Canonicalizer20010315ExclOmitComments_ClassInfo_, allocate$Canonicalizer20010315ExclOmitComments);
	return class$;
}

$Class* Canonicalizer20010315ExclOmitComments::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com