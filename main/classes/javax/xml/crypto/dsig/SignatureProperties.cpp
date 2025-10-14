#include <javax/xml/crypto/dsig/SignatureProperties.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$FieldInfo _SignatureProperties_FieldInfo_[] = {
	{"TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureProperties, TYPE)},
	{}
};

$MethodInfo _SignatureProperties_MethodInfo_[] = {
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getProperties", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/SignatureProperty;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SignatureProperties_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.SignatureProperties",
	nullptr,
	"javax.xml.crypto.XMLStructure",
	_SignatureProperties_FieldInfo_,
	_SignatureProperties_MethodInfo_
};

$Object* allocate$SignatureProperties($Class* clazz) {
	return $of($alloc(SignatureProperties));
}


$String* SignatureProperties::TYPE = nullptr;

void clinit$SignatureProperties($Class* class$) {
	$assignStatic(SignatureProperties::TYPE, "http://www.w3.org/2000/09/xmldsig#SignatureProperties"_s);
}

$Class* SignatureProperties::load$($String* name, bool initialize) {
	$loadClass(SignatureProperties, name, initialize, &_SignatureProperties_ClassInfo_, clinit$SignatureProperties, allocate$SignatureProperties);
	return class$;
}

$Class* SignatureProperties::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax