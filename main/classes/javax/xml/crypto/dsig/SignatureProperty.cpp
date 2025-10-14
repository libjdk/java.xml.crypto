#include <javax/xml/crypto/dsig/SignatureProperty.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$MethodInfo _SignatureProperty_MethodInfo_[] = {
	{"getContent", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PUBLIC | $ABSTRACT},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SignatureProperty_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.SignatureProperty",
	nullptr,
	"javax.xml.crypto.XMLStructure",
	nullptr,
	_SignatureProperty_MethodInfo_
};

$Object* allocate$SignatureProperty($Class* clazz) {
	return $of($alloc(SignatureProperty));
}

$Class* SignatureProperty::load$($String* name, bool initialize) {
	$loadClass(SignatureProperty, name, initialize, &_SignatureProperty_ClassInfo_, allocate$SignatureProperty);
	return class$;
}

$Class* SignatureProperty::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax