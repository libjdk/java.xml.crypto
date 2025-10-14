#include <javax/xml/crypto/XMLStructure.h>

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

$MethodInfo _XMLStructure_MethodInfo_[] = {
	{"isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLStructure_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.XMLStructure",
	nullptr,
	nullptr,
	nullptr,
	_XMLStructure_MethodInfo_
};

$Object* allocate$XMLStructure($Class* clazz) {
	return $of($alloc(XMLStructure));
}

$Class* XMLStructure::load$($String* name, bool initialize) {
	$loadClass(XMLStructure, name, initialize, &_XMLStructure_ClassInfo_, allocate$XMLStructure);
	return class$;
}

$Class* XMLStructure::class$ = nullptr;

		} // crypto
	} // xml
} // javax