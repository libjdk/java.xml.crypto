#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14NExclusiveWithComments.h>

#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315Excl.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315ExclWithComments.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14NExclusive.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef TRANSFORM_C14N_EXCL_WITH_COMMENTS

using $Canonicalizer20010315Excl = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315Excl;
using $Canonicalizer20010315ExclWithComments = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315ExclWithComments;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $TransformC14NExclusive = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformC14NExclusive;
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

$MethodInfo _TransformC14NExclusiveWithComments_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransformC14NExclusiveWithComments::*)()>(&TransformC14NExclusiveWithComments::init$))},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getCanonicalizer", "()Lcom/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315Excl;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _TransformC14NExclusiveWithComments_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14NExclusiveWithComments",
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14NExclusive",
	nullptr,
	nullptr,
	_TransformC14NExclusiveWithComments_MethodInfo_
};

$Object* allocate$TransformC14NExclusiveWithComments($Class* clazz) {
	return $of($alloc(TransformC14NExclusiveWithComments));
}

void TransformC14NExclusiveWithComments::init$() {
	$TransformC14NExclusive::init$();
}

$String* TransformC14NExclusiveWithComments::engineGetURI() {
	$init($Transforms);
	return $Transforms::TRANSFORM_C14N_EXCL_WITH_COMMENTS;
}

$Canonicalizer20010315Excl* TransformC14NExclusiveWithComments::getCanonicalizer() {
	return $new($Canonicalizer20010315ExclWithComments);
}

TransformC14NExclusiveWithComments::TransformC14NExclusiveWithComments() {
}

$Class* TransformC14NExclusiveWithComments::load$($String* name, bool initialize) {
	$loadClass(TransformC14NExclusiveWithComments, name, initialize, &_TransformC14NExclusiveWithComments_ClassInfo_, allocate$TransformC14NExclusiveWithComments);
	return class$;
}

$Class* TransformC14NExclusiveWithComments::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com