#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData$DelayedNodeIterator.h>

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
#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_NODE
#undef ELEMENT_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE

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
using $DOMSubTreeData = ::org::jcp::xml::dsig::internal::dom::DOMSubTreeData;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMSubTreeData$DelayedNodeIterator_FieldInfo_[] = {
	{"root", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMSubTreeData$DelayedNodeIterator, root)},
	{"nodeSet", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/Node;>;", $PRIVATE, $field(DOMSubTreeData$DelayedNodeIterator, nodeSet)},
	{"li", "Ljava/util/ListIterator;", "Ljava/util/ListIterator<Lorg/w3c/dom/Node;>;", $PRIVATE, $field(DOMSubTreeData$DelayedNodeIterator, li)},
	{"withComments", "Z", nullptr, $PRIVATE, $field(DOMSubTreeData$DelayedNodeIterator, withComments)},
	{}
};

$MethodInfo _DOMSubTreeData$DelayedNodeIterator_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Node;Z)V", nullptr, 0, $method(static_cast<void(DOMSubTreeData$DelayedNodeIterator::*)($Node*,bool)>(&DOMSubTreeData$DelayedNodeIterator::init$))},
	{"dereferenceSameDocumentURI", "(Lorg/w3c/dom/Node;)Ljava/util/List;", "(Lorg/w3c/dom/Node;)Ljava/util/List<Lorg/w3c/dom/Node;>;", $PRIVATE, $method(static_cast<$List*(DOMSubTreeData$DelayedNodeIterator::*)($Node*)>(&DOMSubTreeData$DelayedNodeIterator::dereferenceSameDocumentURI))},
	{"hasNext", "()Z", nullptr, $PUBLIC},
	{"next", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"nodeSetMinusCommentNodes", "(Lorg/w3c/dom/Node;Ljava/util/List;Lorg/w3c/dom/Node;)V", "(Lorg/w3c/dom/Node;Ljava/util/List<Lorg/w3c/dom/Node;>;Lorg/w3c/dom/Node;)V", $PRIVATE, $method(static_cast<void(DOMSubTreeData$DelayedNodeIterator::*)($Node*,$List*,$Node*)>(&DOMSubTreeData$DelayedNodeIterator::nodeSetMinusCommentNodes))},
	{"remove", "()V", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _DOMSubTreeData$DelayedNodeIterator_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMSubTreeData$DelayedNodeIterator", "org.jcp.xml.dsig.internal.dom.DOMSubTreeData", "DelayedNodeIterator", $STATIC},
	{}
};

$ClassInfo _DOMSubTreeData$DelayedNodeIterator_ClassInfo_ = {
	$ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMSubTreeData$DelayedNodeIterator",
	"java.lang.Object",
	"java.util.Iterator",
	_DOMSubTreeData$DelayedNodeIterator_FieldInfo_,
	_DOMSubTreeData$DelayedNodeIterator_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Iterator<Lorg/w3c/dom/Node;>;",
	nullptr,
	_DOMSubTreeData$DelayedNodeIterator_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMSubTreeData"
};

$Object* allocate$DOMSubTreeData$DelayedNodeIterator($Class* clazz) {
	return $of($alloc(DOMSubTreeData$DelayedNodeIterator));
}

void DOMSubTreeData$DelayedNodeIterator::init$($Node* root, bool excludeComments) {
	$set(this, root, root);
	this->withComments = !excludeComments;
}

bool DOMSubTreeData$DelayedNodeIterator::hasNext() {
	if (this->nodeSet == nullptr) {
		$set(this, nodeSet, dereferenceSameDocumentURI(this->root));
		$set(this, li, $nc(this->nodeSet)->listIterator());
	}
	return $nc(this->li)->hasNext();
}

$Object* DOMSubTreeData$DelayedNodeIterator::next() {
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

void DOMSubTreeData$DelayedNodeIterator::remove() {
	$throwNew($UnsupportedOperationException);
}

$List* DOMSubTreeData$DelayedNodeIterator::dereferenceSameDocumentURI($Node* node) {
	$var($List, nodes, $new($ArrayList));
	if (node != nullptr) {
		nodeSetMinusCommentNodes(node, nodes, nullptr);
	}
	return nodes;
}

void DOMSubTreeData$DelayedNodeIterator::nodeSetMinusCommentNodes($Node* node, $List* nodeSet, $Node* prevSibling) {
	$useLocalCurrentObjectStackCache();
	{
		$var($NamedNodeMap, attrs, nullptr)
		$var($Node, pSibling, nullptr)
		switch ($nc(node)->getNodeType()) {
		case $Node::ELEMENT_NODE:
			{
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
				$nc(nodeSet)->add(node);
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

DOMSubTreeData$DelayedNodeIterator::DOMSubTreeData$DelayedNodeIterator() {
}

$Class* DOMSubTreeData$DelayedNodeIterator::load$($String* name, bool initialize) {
	$loadClass(DOMSubTreeData$DelayedNodeIterator, name, initialize, &_DOMSubTreeData$DelayedNodeIterator_ClassInfo_, allocate$DOMSubTreeData$DelayedNodeIterator);
	return class$;
}

$Class* DOMSubTreeData$DelayedNodeIterator::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org