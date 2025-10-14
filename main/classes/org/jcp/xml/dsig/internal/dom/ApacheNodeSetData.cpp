#include <org/jcp/xml/dsig/internal/dom/ApacheNodeSetData.h>

#include <com/sun/org/apache/xml/internal/security/signature/NodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/LinkedHashSet.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $NodeFilter = ::com::sun::org::apache::xml::internal::security::signature::NodeFilter;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $LinkedHashSet = ::java::util::LinkedHashSet;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $NodeSetData = ::javax::xml::crypto::NodeSetData;
using $ApacheData = ::org::jcp::xml::dsig::internal::dom::ApacheData;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _ApacheNodeSetData_FieldInfo_[] = {
	{"xi", "Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PRIVATE, $field(ApacheNodeSetData, xi)},
	{}
};

$MethodInfo _ApacheNodeSetData_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;)V", nullptr, $PUBLIC, $method(static_cast<void(ApacheNodeSetData::*)($XMLSignatureInput*)>(&ApacheNodeSetData::init$))},
	{"getNodeSet", "(Ljava/util/List;)Ljava/util/Set;", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/signature/NodeFilter;>;)Ljava/util/Set<Lorg/w3c/dom/Node;>;", $PRIVATE, $method(static_cast<$Set*(ApacheNodeSetData::*)($List*)>(&ApacheNodeSetData::getNodeSet))},
	{"getXMLSignatureInput", "()Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC},
	{"iterator", "()Ljava/util/Iterator;", "()Ljava/util/Iterator<Lorg/w3c/dom/Node;>;", $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ApacheNodeSetData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.ApacheNodeSetData",
	"java.lang.Object",
	"org.jcp.xml.dsig.internal.dom.ApacheData,javax.xml.crypto.NodeSetData",
	_ApacheNodeSetData_FieldInfo_,
	_ApacheNodeSetData_MethodInfo_,
	"Ljava/lang/Object;Lorg/jcp/xml/dsig/internal/dom/ApacheData;Ljavax/xml/crypto/NodeSetData<Lorg/w3c/dom/Node;>;"
};

$Object* allocate$ApacheNodeSetData($Class* clazz) {
	return $of($alloc(ApacheNodeSetData));
}

int32_t ApacheNodeSetData::hashCode() {
	 return this->$ApacheData::hashCode();
}

bool ApacheNodeSetData::equals(Object$* arg0) {
	 return this->$ApacheData::equals(arg0);
}

$Object* ApacheNodeSetData::clone() {
	 return this->$ApacheData::clone();
}

$String* ApacheNodeSetData::toString() {
	 return this->$ApacheData::toString();
}

void ApacheNodeSetData::finalize() {
	this->$ApacheData::finalize();
}

void ApacheNodeSetData::init$($XMLSignatureInput* xi) {
	$set(this, xi, xi);
}

$Iterator* ApacheNodeSetData::iterator() {
	bool var$0 = $nc(this->xi)->getNodeFilters() != nullptr;
	if (var$0 && !$nc($($nc(this->xi)->getNodeFilters()))->isEmpty()) {
		return $nc($($Collections::unmodifiableSet($(getNodeSet($($nc(this->xi)->getNodeFilters()))))))->iterator();
	}
	try {
		return $nc($($Collections::unmodifiableSet($($nc(this->xi)->getNodeSet()))))->iterator();
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($RuntimeException, "unrecoverable error retrieving nodeset"_s, e);
	}
	$shouldNotReachHere();
}

$XMLSignatureInput* ApacheNodeSetData::getXMLSignatureInput() {
	return this->xi;
}

$Set* ApacheNodeSetData::getNodeSet($List* nodeFilters) {
	if ($nc(this->xi)->isNeedsToBeExpanded()) {
		$XMLUtils::circumventBug2650($($XMLUtils::getOwnerDocument($($nc(this->xi)->getSubNode()))));
	}
	$var($Set, inputSet, $new($LinkedHashSet));
	$var($Node, var$0, $nc(this->xi)->getSubNode());
	$var($Set, var$1, inputSet);
	$XMLUtils::getSet(var$0, var$1, nullptr, !$nc(this->xi)->isExcludeComments());
	$var($Set, nodeSet, $new($LinkedHashSet));
	{
		$var($Iterator, i$, inputSet->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Node, currentNode, $cast($Node, i$->next()));
			{
				$var($Iterator, it, $nc(nodeFilters)->iterator());
				bool skipNode = false;
				while ($nc(it)->hasNext() && !skipNode) {
					$var($NodeFilter, nf, $cast($NodeFilter, it->next()));
					if ($nc(nf)->isNodeInclude(currentNode) != 1) {
						skipNode = true;
					}
				}
				if (!skipNode) {
					nodeSet->add(currentNode);
				}
			}
		}
	}
	return nodeSet;
}

ApacheNodeSetData::ApacheNodeSetData() {
}

$Class* ApacheNodeSetData::load$($String* name, bool initialize) {
	$loadClass(ApacheNodeSetData, name, initialize, &_ApacheNodeSetData_ClassInfo_, allocate$ApacheNodeSetData);
	return class$;
}

$Class* ApacheNodeSetData::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org