#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14N11.h>

#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer11_OmitComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14N.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Canonicalizer11_OmitComments = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer11_OmitComments;
using $Canonicalizer20010315 = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315;
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

$MethodInfo _TransformC14N11_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransformC14N11::*)()>(&TransformC14N11::init$))},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"getCanonicalizer", "()Lcom/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _TransformC14N11_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14N11",
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14N",
	nullptr,
	nullptr,
	_TransformC14N11_MethodInfo_
};

$Object* allocate$TransformC14N11($Class* clazz) {
	return $of($alloc(TransformC14N11));
}

void TransformC14N11::init$() {
	$TransformC14N::init$();
}

$String* TransformC14N11::engineGetURI() {
	$init($Transforms);
	return $Transforms::TRANSFORM_C14N11_OMIT_COMMENTS;
}

$Canonicalizer20010315* TransformC14N11::getCanonicalizer() {
	return $new($Canonicalizer11_OmitComments);
}

TransformC14N11::TransformC14N11() {
}

$Class* TransformC14N11::load$($String* name, bool initialize) {
	$loadClass(TransformC14N11, name, initialize, &_TransformC14N11_ClassInfo_, allocate$TransformC14N11);
	return class$;
}

$Class* TransformC14N11::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com