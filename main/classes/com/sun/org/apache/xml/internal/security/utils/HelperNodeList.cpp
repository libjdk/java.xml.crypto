#include <com/sun/org/apache/xml/internal/security/utils/HelperNodeList.h>

#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$FieldInfo _HelperNodeList_FieldInfo_[] = {
	{"nodes", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/Node;>;", $PRIVATE | $FINAL, $field(HelperNodeList, nodes)},
	{"allNodesMustHaveSameParent", "Z", nullptr, $PRIVATE | $FINAL, $field(HelperNodeList, allNodesMustHaveSameParent)},
	{}
};

$MethodInfo _HelperNodeList_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(HelperNodeList::*)()>(&HelperNodeList::init$))},
	{"<init>", "(Z)V", nullptr, $PUBLIC, $method(static_cast<void(HelperNodeList::*)(bool)>(&HelperNodeList::init$))},
	{"appendChild", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, nullptr, "java.lang.IllegalArgumentException"},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"getOwnerDocument", "()Lorg/w3c/dom/Document;", nullptr, $PUBLIC},
	{"item", "(I)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _HelperNodeList_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.HelperNodeList",
	"java.lang.Object",
	"org.w3c.dom.NodeList",
	_HelperNodeList_FieldInfo_,
	_HelperNodeList_MethodInfo_
};

$Object* allocate$HelperNodeList($Class* clazz) {
	return $of($alloc(HelperNodeList));
}

void HelperNodeList::init$() {
	HelperNodeList::init$(false);
}

void HelperNodeList::init$(bool allNodesMustHaveSameParent) {
	$set(this, nodes, $new($ArrayList));
	this->allNodesMustHaveSameParent = allNodesMustHaveSameParent;
}

$Node* HelperNodeList::item(int32_t index) {
	return $cast($Node, $nc(this->nodes)->get(index));
}

int32_t HelperNodeList::getLength() {
	return $nc(this->nodes)->size();
}

void HelperNodeList::appendChild($Node* node) {
	bool var$0 = this->allNodesMustHaveSameParent && this->getLength() > 0;
	if (var$0) {
		var$0 = $nc($(this->item(0)))->getParentNode() != $nc(node)->getParentNode();
	}
	if (var$0) {
		$throwNew($IllegalArgumentException, "Nodes have not the same Parent"_s);
	}
	$nc(this->nodes)->add(node);
}

$Document* HelperNodeList::getOwnerDocument() {
	if (this->getLength() == 0) {
		return nullptr;
	}
	return $XMLUtils::getOwnerDocument($(this->item(0)));
}

HelperNodeList::HelperNodeList() {
}

$Class* HelperNodeList::load$($String* name, bool initialize) {
	$loadClass(HelperNodeList, name, initialize, &_HelperNodeList_ClassInfo_, allocate$HelperNodeList);
	return class$;
}

$Class* HelperNodeList::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com