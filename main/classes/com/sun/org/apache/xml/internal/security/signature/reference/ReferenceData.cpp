#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceData.h>

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
							namespace signature {
								namespace reference {

$ClassInfo _ReferenceData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceData"
};

$Object* allocate$ReferenceData($Class* clazz) {
	return $of($alloc(ReferenceData));
}

$Class* ReferenceData::load$($String* name, bool initialize) {
	$loadClass(ReferenceData, name, initialize, &_ReferenceData_ClassInfo_, allocate$ReferenceData);
	return class$;
}

$Class* ReferenceData::class$ = nullptr;

								} // reference
							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com