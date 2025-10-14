#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData$DelayedNodeIterator.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $NodeSetData = ::javax::xml::crypto::NodeSetData;
using $DOMSubTreeData$DelayedNodeIterator = ::org::jcp::xml::dsig::internal::dom::DOMSubTreeData$DelayedNodeIterator;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMSubTreeData_FieldInfo_[] = {
	{"excludeComments", "Z", nullptr, $PRIVATE, $field(DOMSubTreeData, excludeComments$)},
	{"root", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMSubTreeData, root)},
	{}
};

$MethodInfo _DOMSubTreeData_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Node;Z)V", nullptr, $PUBLIC, $method(static_cast<void(DOMSubTreeData::*)($Node*,bool)>(&DOMSubTreeData::init$))},
	{"excludeComments", "()Z", nullptr, $PUBLIC},
	{"getRoot", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $PUBLIC},
	{}
};

$InnerClassInfo _DOMSubTreeData_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSubTreeData$DelayedNodeIterator", "org.jcp.xml.dsig.internal.dom.DOMSubTreeData", "DelayedNodeIterator", $STATIC},
	{}
};

$ClassInfo _DOMSubTreeData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMSubTreeData",
	"java.lang.Object",
	"javax.xml.crypto.NodeSetData",
	_DOMSubTreeData_FieldInfo_,
	_DOMSubTreeData_MethodInfo_,
	"Ljava/lang/Object;Ljavax/xml/crypto/NodeSetData<Lorg/w3c/dom/Node;>;",
	nullptr,
	_DOMSubTreeData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSubTreeData$DelayedNodeIterator"
};

$Object* allocate$DOMSubTreeData($Class* clazz) {
	return $of($alloc(DOMSubTreeData));
}

void DOMSubTreeData::init$($Node* root, bool excludeComments) {
	$set(this, root, root);
	this->excludeComments$ = excludeComments;
}

$Iterator* DOMSubTreeData::iterator() {
	return $new($DOMSubTreeData$DelayedNodeIterator, this->root, this->excludeComments$);
}

$Node* DOMSubTreeData::getRoot() {
	return this->root;
}

bool DOMSubTreeData::excludeComments() {
	return this->excludeComments$;
}

DOMSubTreeData::DOMSubTreeData() {
}

$Class* DOMSubTreeData::load$($String* name, bool initialize) {
	$loadClass(DOMSubTreeData, name, initialize, &_DOMSubTreeData_ClassInfo_, allocate$DOMSubTreeData);
	return class$;
}

$Class* DOMSubTreeData::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org