#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceNodeSetData.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <jcpp.h>

using $ReferenceData = ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceData;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								namespace reference {

$MethodInfo _ReferenceNodeSetData_MethodInfo_[] = {
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _ReferenceNodeSetData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceNodeSetData",
	nullptr,
	"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceData",
	nullptr,
	_ReferenceNodeSetData_MethodInfo_
};

$Object* allocate$ReferenceNodeSetData($Class* clazz) {
	return $of($alloc(ReferenceNodeSetData));
}

$Class* ReferenceNodeSetData::load$($String* name, bool initialize) {
	$loadClass(ReferenceNodeSetData, name, initialize, &_ReferenceNodeSetData_ClassInfo_, allocate$ReferenceNodeSetData);
	return class$;
}

$Class* ReferenceNodeSetData::class$ = nullptr;

								} // reference
							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com