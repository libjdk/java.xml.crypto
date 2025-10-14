#include <javax/xml/crypto/URIReference.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace javax {
	namespace xml {
		namespace crypto {

$MethodInfo _URIReference_MethodInfo_[] = {
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _URIReference_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.URIReference",
	nullptr,
	nullptr,
	nullptr,
	_URIReference_MethodInfo_
};

$Object* allocate$URIReference($Class* clazz) {
	return $of($alloc(URIReference));
}

$Class* URIReference::load$($String* name, bool initialize) {
	$loadClass(URIReference, name, initialize, &_URIReference_ClassInfo_, allocate$URIReference);
	return class$;
}

$Class* URIReference::class$ = nullptr;

		} // crypto
	} // xml
} // javax