#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14NWithComments.h>

#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315WithComments.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14N.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TRANSFORM_C14N_WITH_COMMENTS

using $Canonicalizer20010315 = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315;
using $Canonicalizer20010315WithComments = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315WithComments;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $TransformC14N = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14N;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								namespace implementations {

$MethodInfo _TransformC14NWithComments_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransformC14NWithComments::*)()>(&TransformC14NWithComments::init$))},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getCanonicalizer", "()Lcom/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _TransformC14NWithComments_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14NWithComments",
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14N",
	nullptr,
	nullptr,
	_TransformC14NWithComments_MethodInfo_
};

$Object* allocate$TransformC14NWithComments($Class* clazz) {
	return $of($alloc(TransformC14NWithComments));
}

void TransformC14NWithComments::init$() {
	$TransformC14N::init$();
}

$String* TransformC14NWithComments::engineGetURI() {
	$init($Transforms);
	return $Transforms::TRANSFORM_C14N_WITH_COMMENTS;
}

$Canonicalizer20010315* TransformC14NWithComments::getCanonicalizer() {
	return $new($Canonicalizer20010315WithComments);
}

TransformC14NWithComments::TransformC14NWithComments() {
}

$Class* TransformC14NWithComments::load$($String* name, bool initialize) {
	$loadClass(TransformC14NWithComments, name, initialize, &_TransformC14NWithComments_ClassInfo_, allocate$TransformC14NWithComments);
	return class$;
}

$Class* TransformC14NWithComments::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com