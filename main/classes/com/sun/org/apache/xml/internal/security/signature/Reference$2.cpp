#include <com/sun/org/apache/xml/internal/security/signature/Reference$2.h>

#include <com/sun/org/apache/xml/internal/security/signature/Reference$2$1.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <jcpp.h>

using $Reference = ::com::sun::org::apache::xml::internal::security::signature::Reference;
using $Reference$2$1 = ::com::sun::org::apache::xml::internal::security::signature::Reference$2$1;
using $ReferenceNodeSetData = ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceNodeSetData;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

$FieldInfo _Reference$2_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/security/signature/Reference;", nullptr, $FINAL | $SYNTHETIC, $field(Reference$2, this$0)},
	{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(Reference$2, val$s)},
	{}
};

$MethodInfo _Reference$2_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/Reference;Ljava/util/Set;)V", "()V", 0, $method(static_cast<void(Reference$2::*)($Reference*,$Set*)>(&Reference$2::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _Reference$2_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xml.internal.security.signature.Reference",
	"cacheDereferencedElement",
	"(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;)V"
};

$InnerClassInfo _Reference$2_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.signature.Reference$2", nullptr, nullptr, 0},
	{"com.sun.org.apache.xml.internal.security.signature.Reference$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Reference$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.Reference$2",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceNodeSetData",
	_Reference$2_FieldInfo_,
	_Reference$2_MethodInfo_,
	nullptr,
	&_Reference$2_EnclosingMethodInfo_,
	_Reference$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.signature.Reference"
};

$Object* allocate$Reference$2($Class* clazz) {
	return $of($alloc(Reference$2));
}

void Reference$2::init$($Reference* this$0, $Set* val$s) {
	$set(this, this$0, this$0);
	$set(this, val$s, val$s);
}

$Iterator* Reference$2::iterator() {
	return $new($Reference$2$1, this);
}

Reference$2::Reference$2() {
}

$Class* Reference$2::load$($String* name, bool initialize) {
	$loadClass(Reference$2, name, initialize, &_Reference$2_ClassInfo_, allocate$Reference$2);
	return class$;
}

$Class* Reference$2::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com