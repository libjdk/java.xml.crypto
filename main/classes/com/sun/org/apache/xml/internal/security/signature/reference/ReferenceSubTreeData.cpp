#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceSubTreeData.h>

#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceSubTreeData$DelayedNodeIterator.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ReferenceNodeSetData = ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceNodeSetData;
using $ReferenceSubTreeData$DelayedNodeIterator = ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceSubTreeData$DelayedNodeIterator;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Iterator = ::java::util::Iterator;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								namespace reference {

$FieldInfo _ReferenceSubTreeData_FieldInfo_[] = {
	{"excludeComments", "Z", nullptr, $PRIVATE, $field(ReferenceSubTreeData, excludeComments$)},
	{"root", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(ReferenceSubTreeData, root)},
	{}
};

$MethodInfo _ReferenceSubTreeData_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Node;Z)V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceSubTreeData::*)($Node*,bool)>(&ReferenceSubTreeData::init$))},
	{"excludeComments", "()Z", nullptr, $PUBLIC},
	{"getRoot", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $PUBLIC},
	{}
};

$InnerClassInfo _ReferenceSubTreeData_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceSubTreeData$DelayedNodeIterator", "com.sun.org.apache.xml.internal.security.signature.reference.ReferenceSubTreeData", "DelayedNodeIterator", $STATIC},
	{}
};

$ClassInfo _ReferenceSubTreeData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceSubTreeData",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceNodeSetData",
	_ReferenceSubTreeData_FieldInfo_,
	_ReferenceSubTreeData_MethodInfo_,
	nullptr,
	nullptr,
	_ReferenceSubTreeData_InnerClassesInfo_,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceSubTreeData$DelayedNodeIterator"
};

$Object* allocate$ReferenceSubTreeData($Class* clazz) {
	return $of($alloc(ReferenceSubTreeData));
}

void ReferenceSubTreeData::init$($Node* root, bool excludeComments) {
	$set(this, root, root);
	this->excludeComments$ = excludeComments;
}

$Iterator* ReferenceSubTreeData::iterator() {
	return $new($ReferenceSubTreeData$DelayedNodeIterator, this->root, this->excludeComments$);
}

$Node* ReferenceSubTreeData::getRoot() {
	return this->root;
}

bool ReferenceSubTreeData::excludeComments() {
	return this->excludeComments$;
}

ReferenceSubTreeData::ReferenceSubTreeData() {
}

$Class* ReferenceSubTreeData::load$($String* name, bool initialize) {
	$loadClass(ReferenceSubTreeData, name, initialize, &_ReferenceSubTreeData_ClassInfo_, allocate$ReferenceSubTreeData);
	return class$;
}

$Class* ReferenceSubTreeData::class$ = nullptr;

								} // reference
							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com