#include <com/sun/org/apache/xml/internal/security/transforms/implementations/XPath2NodeFilter.h>

#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

using $NodeFilter = ::com::sun::org::apache::xml::internal::security::signature::NodeFilter;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								namespace implementations {

$FieldInfo _XPath2NodeFilter_FieldInfo_[] = {
	{"hasUnionFilter", "Z", nullptr, $PRIVATE | $FINAL, $field(XPath2NodeFilter, hasUnionFilter)},
	{"hasSubtractFilter", "Z", nullptr, $PRIVATE | $FINAL, $field(XPath2NodeFilter, hasSubtractFilter)},
	{"hasIntersectFilter", "Z", nullptr, $PRIVATE | $FINAL, $field(XPath2NodeFilter, hasIntersectFilter)},
	{"unionNodes", "Ljava/util/Set;", "Ljava/util/Set<Lorg/w3c/dom/Node;>;", $PRIVATE | $FINAL, $field(XPath2NodeFilter, unionNodes)},
	{"subtractNodes", "Ljava/util/Set;", "Ljava/util/Set<Lorg/w3c/dom/Node;>;", $PRIVATE | $FINAL, $field(XPath2NodeFilter, subtractNodes)},
	{"intersectNodes", "Ljava/util/Set;", "Ljava/util/Set<Lorg/w3c/dom/Node;>;", $PRIVATE | $FINAL, $field(XPath2NodeFilter, intersectNodes)},
	{"inSubtract", "I", nullptr, $PRIVATE, $field(XPath2NodeFilter, inSubtract)},
	{"inIntersect", "I", nullptr, $PRIVATE, $field(XPath2NodeFilter, inIntersect)},
	{"inUnion", "I", nullptr, $PRIVATE, $field(XPath2NodeFilter, inUnion)},
	{}
};

$MethodInfo _XPath2NodeFilter_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;Ljava/util/List;Ljava/util/List;)V", "(Ljava/util/List<Lorg/w3c/dom/NodeList;>;Ljava/util/List<Lorg/w3c/dom/NodeList;>;Ljava/util/List<Lorg/w3c/dom/NodeList;>;)V", 0, $method(static_cast<void(XPath2NodeFilter::*)($List*,$List*,$List*)>(&XPath2NodeFilter::init$))},
	{"convertNodeListToSet", "(Ljava/util/List;)Ljava/util/Set;", "(Ljava/util/List<Lorg/w3c/dom/NodeList;>;)Ljava/util/Set<Lorg/w3c/dom/Node;>;", $PRIVATE | $STATIC, $method(static_cast<$Set*(*)($List*)>(&XPath2NodeFilter::convertNodeListToSet))},
	{"inList", "(Lorg/w3c/dom/Node;Ljava/util/Set;)Z", "(Lorg/w3c/dom/Node;Ljava/util/Set<Lorg/w3c/dom/Node;>;)Z", $STATIC, $method(static_cast<bool(*)($Node*,$Set*)>(&XPath2NodeFilter::inList))},
	{"isNodeInclude", "(Lorg/w3c/dom/Node;)I", nullptr, $PUBLIC},
	{"isNodeIncludeDO", "(Lorg/w3c/dom/Node;I)I", nullptr, $PUBLIC},
	{"rooted", "(Lorg/w3c/dom/Node;Ljava/util/Set;)Z", "(Lorg/w3c/dom/Node;Ljava/util/Set<Lorg/w3c/dom/Node;>;)Z", $STATIC, $method(static_cast<bool(*)($Node*,$Set*)>(&XPath2NodeFilter::rooted))},
	{}
};

$ClassInfo _XPath2NodeFilter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.XPath2NodeFilter",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.security.signature.NodeFilter",
	_XPath2NodeFilter_FieldInfo_,
	_XPath2NodeFilter_MethodInfo_
};

$Object* allocate$XPath2NodeFilter($Class* clazz) {
	return $of($alloc(XPath2NodeFilter));
}

void XPath2NodeFilter::init$($List* unionNodes, $List* subtractNodes, $List* intersectNodes) {
	this->inSubtract = -1;
	this->inIntersect = -1;
	this->inUnion = -1;
	this->hasUnionFilter = !$nc(unionNodes)->isEmpty();
	$set(this, unionNodes, convertNodeListToSet(unionNodes));
	this->hasSubtractFilter = !$nc(subtractNodes)->isEmpty();
	$set(this, subtractNodes, convertNodeListToSet(subtractNodes));
	this->hasIntersectFilter = !$nc(intersectNodes)->isEmpty();
	$set(this, intersectNodes, convertNodeListToSet(intersectNodes));
}

int32_t XPath2NodeFilter::isNodeInclude($Node* currentNode) {
	int32_t result = 1;
	if (this->hasSubtractFilter && rooted(currentNode, this->subtractNodes)) {
		result = -1;
	} else if (this->hasIntersectFilter && !rooted(currentNode, this->intersectNodes)) {
		result = 0;
	}
	if (result == 1) {
		return 1;
	}
	if (this->hasUnionFilter) {
		if (rooted(currentNode, this->unionNodes)) {
			return 1;
		}
		result = 0;
	}
	return result;
}

int32_t XPath2NodeFilter::isNodeIncludeDO($Node* n, int32_t level) {
	int32_t result = 1;
	if (this->hasSubtractFilter) {
		if (this->inSubtract == -1 || level <= this->inSubtract) {
			if (inList(n, this->subtractNodes)) {
				this->inSubtract = level;
			} else {
				this->inSubtract = -1;
			}
		}
		if (this->inSubtract != -1) {
			result = -1;
		}
	}
	if (result != -1 && this->hasIntersectFilter && (this->inIntersect == -1 || level <= this->inIntersect)) {
		if (!inList(n, this->intersectNodes)) {
			this->inIntersect = -1;
			result = 0;
		} else {
			this->inIntersect = level;
		}
	}
	if (level <= this->inUnion) {
		this->inUnion = -1;
	}
	if (result == 1) {
		return 1;
	}
	if (this->hasUnionFilter) {
		if (this->inUnion == -1 && inList(n, this->unionNodes)) {
			this->inUnion = level;
		}
		if (this->inUnion != -1) {
			return 1;
		}
		result = 0;
	}
	return result;
}

bool XPath2NodeFilter::rooted($Node* currentNode, $Set* nodeList) {
	$init(XPath2NodeFilter);
	$useLocalCurrentObjectStackCache();
	if ($nc(nodeList)->isEmpty()) {
		return false;
	}
	if ($nc(nodeList)->contains(currentNode)) {
		return true;
	}
	{
		$var($Iterator, i$, $nc(nodeList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Node, rootNode, $cast($Node, i$->next()));
			{
				if ($XMLUtils::isDescendantOrSelf(rootNode, currentNode)) {
					return true;
				}
			}
		}
	}
	return false;
}

bool XPath2NodeFilter::inList($Node* currentNode, $Set* nodeList) {
	$init(XPath2NodeFilter);
	return $nc(nodeList)->contains(currentNode);
}

$Set* XPath2NodeFilter::convertNodeListToSet($List* l) {
	$init(XPath2NodeFilter);
	$useLocalCurrentObjectStackCache();
	$var($Set, result, $new($HashSet));
	{
		$var($Iterator, i$, $nc(l)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($NodeList, rootNodes, $cast($NodeList, i$->next()));
			{
				int32_t length = $nc(rootNodes)->getLength();
				for (int32_t i = 0; i < length; ++i) {
					$var($Node, rootNode, rootNodes->item(i));
					result->add(rootNode);
				}
			}
		}
	}
	return result;
}

XPath2NodeFilter::XPath2NodeFilter() {
}

$Class* XPath2NodeFilter::load$($String* name, bool initialize) {
	$loadClass(XPath2NodeFilter, name, initialize, &_XPath2NodeFilter_ClassInfo_, allocate$XPath2NodeFilter);
	return class$;
}

$Class* XPath2NodeFilter::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com