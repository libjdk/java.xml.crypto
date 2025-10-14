#include <com/sun/org/apache/xml/internal/security/transforms/TransformParam.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {

$ClassInfo _TransformParam_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.transforms.TransformParam"
};

$Object* allocate$TransformParam($Class* clazz) {
	return $of($alloc(TransformParam));
}

$Class* TransformParam::load$($String* name, bool initialize) {
	$loadClass(TransformParam, name, initialize, &_TransformParam_ClassInfo_, allocate$TransformParam);
	return class$;
}

$Class* TransformParam::class$ = nullptr;

							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com