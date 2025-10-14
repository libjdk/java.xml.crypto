#include <org/jcp/xml/dsig/internal/dom/DOMReference$1.h>

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
#include <org/jcp/xml/dsig/internal/dom/DOMReference.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $NodeSetData = ::javax::xml::crypto::NodeSetData;
using $DOMReference = ::org::jcp::xml::dsig::internal::dom::DOMReference;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMReference$1_FieldInfo_[] = {
	{"val$s", "Ljava/util/Set;", nullptr, $FINAL | $SYNTHETIC, $field(DOMReference$1, val$s)},
	{}
};

$MethodInfo _DOMReference$1_MethodInfo_[] = {
	{"<init>", "(Ljava/util/Set;)V", "()V", 0, $method(static_cast<void(DOMReference$1::*)($Set*)>(&DOMReference$1::init$))},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $PUBLIC},
	{}
};

$EnclosingMethodInfo _DOMReference$1_EnclosingMethodInfo_ = {
	"org.jcp.xml.dsig.internal.dom.DOMReference",
	"copyDerefData",
	"(Ljavax/xml/crypto/Data;)Ljavax/xml/crypto/Data;"
};

$InnerClassInfo _DOMReference$1_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMReference$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _DOMReference$1_ClassInfo_ = {
	$ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMReference$1",
	"java.lang.Object",
	"javax.xml.crypto.NodeSetData",
	_DOMReference$1_FieldInfo_,
	_DOMReference$1_MethodInfo_,
	"Ljava/lang/Object;Ljavax/xml/crypto/NodeSetData<Lorg/w3c/dom/Node;>;",
	&_DOMReference$1_EnclosingMethodInfo_,
	_DOMReference$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMReference"
};

$Object* allocate$DOMReference$1($Class* clazz) {
	return $of($alloc(DOMReference$1));
}

void DOMReference$1::init$($Set* val$s) {
	$set(this, val$s, val$s);
}

$Iterator* DOMReference$1::iterator() {
	return $nc(this->val$s)->iterator();
}

DOMReference$1::DOMReference$1() {
}

$Class* DOMReference$1::load$($String* name, bool initialize) {
	$loadClass(DOMReference$1, name, initialize, &_DOMReference$1_ClassInfo_, allocate$DOMReference$1);
	return class$;
}

$Class* DOMReference$1::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org