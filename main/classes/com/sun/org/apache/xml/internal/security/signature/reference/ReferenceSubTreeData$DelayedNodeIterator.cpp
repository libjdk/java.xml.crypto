#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceSubTreeData$DelayedNodeIterator.h>

#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceSubTreeData.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/NoSuchElementException.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE

using $ReferenceSubTreeData = ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceSubTreeData;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $NoSuchElementException = ::java::util::NoSuchElementException;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
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

$FieldInfo _ReferenceSubTreeData$DelayedNodeIterator_FieldInfo_[] = {
	{"root", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(ReferenceSubTreeData$DelayedNodeIterator, root)},
	{"nodeSet", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/Node;>;", $PRIVATE, $field(ReferenceSubTreeData$DelayedNodeIterator, nodeSet)},
	{"li", "Ljava/util/ListIterator;", "Ljava/util/ListIterator<Lorg/w3c/dom/Node;>;", $PRIVATE, $field(ReferenceSubTreeData$DelayedNodeIterator, li)},
	{"withComments", "Z", nullptr, $PRIVATE, $field(ReferenceSubTreeData$DelayedNodeIterator, withComments)},
	{}
};

$MethodInfo _ReferenceSubTreeData$DelayedNodeIterator_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Node;Z)V", nullptr, 0, $method(static_cast<void(ReferenceSubTreeData$DelayedNodeIterator::*)($Node*,bool)>(&ReferenceSubTreeData$DelayedNodeIterator::init$))},
	{"dereferenceSameDocumentURI", "(Lorg/w3c/dom/Node;)Ljava/util/List;", "(Lorg/w3c/dom/Node;)Ljava/util/List<Lorg/w3c/dom/Node;>;", $PRIVATE, $method(static_cast<$List*(ReferenceSubTreeData$DelayedNodeIterator::*)($Node*)>(&ReferenceSubTreeData$DelayedNodeIterator::dereferenceSameDocumentURI))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"nodeSetMinusCommentNodes", "(Lorg/w3c/dom/Node;Ljava/util/List;Lorg/w3c/dom/Node;)V", "(Lorg/w3c/dom/Node;Ljava/util/List<Lorg/w3c/dom/Node;>;Lorg/w3c/dom/Node;)V", $PRIVATE, $method(static_cast<void(ReferenceSubTreeData$DelayedNodeIterator::*)($Node*,$List*,$Node*)>(&ReferenceSubTreeData$DelayedNodeIterator::nodeSetMinusCommentNodes))},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _ReferenceSubTreeData$DelayedNodeIterator_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceSubTreeData$DelayedNodeIterator", "com.sun.org.apache.xml.internal.security.signature.reference.ReferenceSubTreeData", "DelayedNodeIterator", $STATIC},
	{}
};

$ClassInfo _ReferenceSubTreeData$DelayedNodeIterator_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceSubTreeData$DelayedNodeIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_ReferenceSubTreeData$DelayedNodeIterator_FieldInfo_,
	_ReferenceSubTreeData$DelayedNodeIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Lorg/w3c/dom/Node;>;",
	nullptr,
	_ReferenceSubTreeData$DelayedNodeIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceSubTreeData"
};

$Object* allocate$ReferenceSubTreeData$DelayedNodeIterator($Class* clazz) {
	return $of($alloc(ReferenceSubTreeData$DelayedNodeIterator));
}

void ReferenceSubTreeData$DelayedNodeIterator::init$($Node* root, bool excludeComments) {
	$set(this, root, root);
	this->withComments = !excludeComments;
}

bool ReferenceSubTreeData$DelayedNodeIterator::hasNext() {
	if (this->nodeSet == nullptr) {
		$set(this, nodeSet, dereferenceSameDocumentURI(this->root));
		$set(this, li, $nc(this->nodeSet)->listIterator());
	}
	return $nc(this->li)->hasNext();
}

$Object* ReferenceSubTreeData$DelayedNodeIterator::next() {
	if (this->nodeSet == nullptr) {
		$set(this, nodeSet, dereferenceSameDocumentURI(this->root));
		$set(this, li, $nc(this->nodeSet)->listIterator());
	}
	if ($nc(this->li)->hasNext()) {
		return $of($cast($Node, $nc(this->li)->next()));
	} else {
		$throwNew($NoSuchElementException);
	}
}

void ReferenceSubTreeData$DelayedNodeIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

$List* ReferenceSubTreeData$DelayedNodeIterator::dereferenceSameDocumentURI($Node* node) {
	$var($List, nodeSet, $new($ArrayList));
	if (node != nullptr) {
		nodeSetMinusCommentNodes(node, nodeSet, nullptr);
	}
	return nodeSet;
}

void ReferenceSubTreeData$DelayedNodeIterator::nodeSetMinusCommentNodes($Node* node, $List* nodeSet, $Node* prevSibling) {
	$useLocalCurrentObjectStackCache();
	{
		$var($NamedNodeMap, attrs, nullptr)
		$var($Node, pSibling, nullptr)
		switch ($nc(node)->getNodeType()) {
		case $Node::ELEMENT_NODE:
			{
				$nc(nodeSet)->add(node);
				$assign(attrs, node->getAttributes());
				if (attrs != nullptr) {
					{
						int32_t i = 0;
						int32_t len = attrs->getLength();
						for (; i < len; ++i) {
							$nc(nodeSet)->add($(attrs->item(i)));
						}
					}
				}
				$assign(pSibling, nullptr);
				{
					$var($Node, child, node->getFirstChild());
					for (; child != nullptr; $assign(child, $nc(child)->getNextSibling())) {
						nodeSetMinusCommentNodes(child, nodeSet, pSibling);
						$assign(pSibling, child);
					}
				}
				break;
			}
		case $Node::DOCUMENT_NODE:
			{
				$assign(pSibling, nullptr);
				{
					$var($Node, child, node->getFirstChild());
					for (; child != nullptr; $assign(child, $nc(child)->getNextSibling())) {
						nodeSetMinusCommentNodes(child, nodeSet, pSibling);
						$assign(pSibling, child);
					}
				}
				break;
			}
		case $Node::TEXT_NODE:
			{}
		case $Node::CDATA_SECTION_NODE:
			{
				bool var$0 = prevSibling != nullptr;
				if (var$0) {
					bool var$1 = prevSibling->getNodeType() == $Node::TEXT_NODE;
					var$0 = (var$1 || prevSibling->getNodeType() == $Node::CDATA_SECTION_NODE);
				}
				if (var$0) {
					return;
				}
				$nc(nodeSet)->add(node);
				break;
			}
		case $Node::PROCESSING_INSTRUCTION_NODE:
			{
				$nc(nodeSet)->add(node);
				break;
			}
		case $Node::COMMENT_NODE:
			{
				if (this->withComments) {
					$nc(nodeSet)->add(node);
				}
			}
		}
	}
}

ReferenceSubTreeData$DelayedNodeIterator::ReferenceSubTreeData$DelayedNodeIterator() {
}

$Class* ReferenceSubTreeData$DelayedNodeIterator::load$($String* name, bool initialize) {
	$loadClass(ReferenceSubTreeData$DelayedNodeIterator, name, initialize, &_ReferenceSubTreeData$DelayedNodeIterator_ClassInfo_, allocate$ReferenceSubTreeData$DelayedNodeIterator);
	return class$;
}

$Class* ReferenceSubTreeData$DelayedNodeIterator::class$ = nullptr;

								} // reference
							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com