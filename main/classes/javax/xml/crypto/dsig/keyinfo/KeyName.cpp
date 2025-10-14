#include <javax/xml/crypto/dsig/keyinfo/KeyName.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

$MethodInfo _KeyName_MethodInfo_[] = {
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _KeyName_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.keyinfo.KeyName",
	nullptr,
	"javax.xml.crypto.XMLStructure",
	nullptr,
	_KeyName_MethodInfo_
};

$Object* allocate$KeyName($Class* clazz) {
	return $of($alloc(KeyName));
}

$Class* KeyName::load$($String* name, bool initialize) {
	$loadClass(KeyName, name, initialize, &_KeyName_ClassInfo_, allocate$KeyName);
	return class$;
}

$Class* KeyName::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax