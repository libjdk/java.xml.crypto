#include <javax/xml/crypto/dom/DOMURIReference.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URIReference = ::javax::xml::crypto::URIReference;
using $Node = ::org::w3c::dom::Node;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dom {

$MethodInfo _DOMURIReference_MethodInfo_[] = {
	{"getHere", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _DOMURIReference_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dom.DOMURIReference",
	nullptr,
	"javax.xml.crypto.URIReference",
	nullptr,
	_DOMURIReference_MethodInfo_
};

$Object* allocate$DOMURIReference($Class* clazz) {
	return $of($alloc(DOMURIReference));
}

$Class* DOMURIReference::load$($String* name, bool initialize) {
	$loadClass(DOMURIReference, name, initialize, &_DOMURIReference_ClassInfo_, allocate$DOMURIReference);
	return class$;
}

$Class* DOMURIReference::class$ = nullptr;

			} // dom
		} // crypto
	} // xml
} // javax