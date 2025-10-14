#include <javax/xml/crypto/Data.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace javax {
	namespace xml {
		namespace crypto {

$ClassInfo _Data_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.Data"
};

$Object* allocate$Data($Class* clazz) {
	return $of($alloc(Data));
}

$Class* Data::load$($String* name, bool initialize) {
	$loadClass(Data, name, initialize, &_Data_ClassInfo_, allocate$Data);
	return class$;
}

$Class* Data::class$ = nullptr;

		} // crypto
	} // xml
} // javax