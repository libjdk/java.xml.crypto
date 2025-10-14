#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $List = ::java::util::List;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMStructure_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DOMStructure::*)()>(&DOMStructure::init$))},
	{"equalsContent", "(Ljava/util/List;Ljava/util/List;)Z", "(Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;)Z", $PROTECTED},
	{"isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.MarshalException"},
	{}
};

$ClassInfo _DOMStructure_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"java.lang.Object",
	"javax.xml.crypto.XMLStructure",
	nullptr,
	_DOMStructure_MethodInfo_
};

$Object* allocate$DOMStructure($Class* clazz) {
	return $of($alloc(DOMStructure));
}

void DOMStructure::init$() {
}

bool DOMStructure::isFeatureSupported($String* feature) {
	if (feature == nullptr) {
		$throwNew($NullPointerException);
	} else {
		return false;
	}
}

bool DOMStructure::equalsContent($List* content, $List* otherContent) {
	int32_t size = $nc(content)->size();
	if (size != $nc(otherContent)->size()) {
		return false;
	}
	for (int32_t i = 0; i < size; ++i) {
		$var($XMLStructure, oxs, $cast($XMLStructure, $nc(otherContent)->get(i)));
		$var($XMLStructure, xs, $cast($XMLStructure, content->get(i)));
		if ($instanceOf($DOMStructure, oxs)) {
			if (!($instanceOf($DOMStructure, xs))) {
				return false;
			}
			$var($Node, otherNode, $nc(($cast($DOMStructure, oxs)))->getNode());
			$var($Node, node, $nc(($cast($DOMStructure, xs)))->getNode());
			if (!$DOMUtils::nodesEqual(node, otherNode)) {
				return false;
			}
		} else if (!($nc($of(xs))->equals(oxs))) {
			return false;
		}
	}
	return true;
}

DOMStructure::DOMStructure() {
}

$Class* DOMStructure::load$($String* name, bool initialize) {
	$loadClass(DOMStructure, name, initialize, &_DOMStructure_ClassInfo_, allocate$DOMStructure);
	return class$;
}

$Class* DOMStructure::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org