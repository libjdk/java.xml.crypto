#include <javax/xml/crypto/dom/DOMStructure.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dom {

$FieldInfo _DOMStructure_FieldInfo_[] = {
	{"node", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE | $FINAL, $field(DOMStructure, node)},
	{}
};

$MethodInfo _DOMStructure_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMStructure::*)($Node*)>(&DOMStructure::init$))},
	{"getNode", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMStructure_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.dom.DOMStructure",
	"java.lang.Object",
	"javax.xml.crypto.XMLStructure",
	_DOMStructure_FieldInfo_,
	_DOMStructure_MethodInfo_
};

$Object* allocate$DOMStructure($Class* clazz) {
	return $of($alloc(DOMStructure));
}

void DOMStructure::init$($Node* node) {
	if (node == nullptr) {
		$throwNew($NullPointerException, "node cannot be null"_s);
	}
	$set(this, node, node);
}

$Node* DOMStructure::getNode() {
	return this->node;
}

bool DOMStructure::isFeatureSupported($String* feature) {
	if (feature == nullptr) {
		$throwNew($NullPointerException);
	} else {
		return false;
	}
}

DOMStructure::DOMStructure() {
}

$Class* DOMStructure::load$($String* name, bool initialize) {
	$loadClass(DOMStructure, name, initialize, &_DOMStructure_ClassInfo_, allocate$DOMStructure);
	return class$;
}

$Class* DOMStructure::class$ = nullptr;

			} // dom
		} // crypto
	} // xml
} // javax