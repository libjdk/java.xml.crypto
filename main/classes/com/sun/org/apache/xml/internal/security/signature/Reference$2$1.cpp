#include <com/sun/org/apache/xml/internal/security/signature/Reference$2$1.h>

#include <com/sun/org/apache/xml/internal/security/signature/Reference$2.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $Reference$2 = ::com::sun::org::apache::xml::internal::security::signature::Reference$2;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

$FieldInfo _Reference$2$1_FieldInfo_[] = {
	{"this$1", "Lcom/sun/org/apache/xml/internal/security/signature/Reference$2;", nullptr, $FINAL | $SYNTHETIC, $field(Reference$2$1, this$1)},
	{"sIterator", "Ljava/util/Iterator;", "Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $FINAL, $field(Reference$2$1, sIterator)},
	{}
};

$MethodInfo _Reference$2$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/Reference$2;)V", nullptr, 0, $method(static_cast<void(Reference$2$1::*)($Reference$2*)>(&Reference$2$1::init$))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Reference$2$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xml.internal.security.signature.Reference$2",
	"iterator",
	"()Ljava/util/Iterator;"
};

$InnerClassInfo _Reference$2$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.signature.Reference$2", nullptr, nullptr, 0},
	{"com.sun.org.apache.xml.internal.security.signature.Reference$2$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Reference$2$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.Reference$2$1",
	"java.lang.Object",
	"java.util.Iterator",
	_Reference$2$1_FieldInfo_,
	_Reference$2$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Lorg/w3c/dom/Node;>;",
	&_Reference$2$1_EnclosingMethodInfo_,
	_Reference$2$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.signature.Reference"
};

$Object* allocate$Reference$2$1($Class* clazz) {
	return $of($alloc(Reference$2$1));
}

void Reference$2$1::init$($Reference$2* this$1) {
	$set(this, this$1, this$1);
	$set(this, sIterator, $nc(this->this$1->val$s)->iterator());
}

bool Reference$2$1::hasNext() {
	return $nc(this->sIterator)->hasNext();
}

$Object* Reference$2$1::next() {
	return $of($cast($Node, $nc(this->sIterator)->next()));
}

void Reference$2$1::remove() {
	$throwNew($UnsupportedOperationException);
}

Reference$2$1::Reference$2$1() {
}

$Class* Reference$2$1::load$($String* name, bool initialize) {
	$loadClass(Reference$2$1, name, initialize, &_Reference$2$1_ClassInfo_, allocate$Reference$2$1);
	return class$;
}

$Class* Reference$2$1::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com