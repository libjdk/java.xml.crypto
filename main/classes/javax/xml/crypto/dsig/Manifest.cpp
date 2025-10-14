#include <javax/xml/crypto/dsig/Manifest.h>

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

$FieldInfo _Manifest_FieldInfo_[] = {
	{"TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Manifest, TYPE)},
	{}
};

$MethodInfo _Manifest_MethodInfo_[] = {
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getReferences", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/Reference;>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _Manifest_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.Manifest",
	nullptr,
	"javax.xml.crypto.XMLStructure",
	_Manifest_FieldInfo_,
	_Manifest_MethodInfo_
};

$Object* allocate$Manifest($Class* clazz) {
	return $of($alloc(Manifest));
}


$String* Manifest::TYPE = nullptr;

void clinit$Manifest($Class* class$) {
	$assignStatic(Manifest::TYPE, "http://www.w3.org/2000/09/xmldsig#Manifest"_s);
}

$Class* Manifest::load$($String* name, bool initialize) {
	$loadClass(Manifest, name, initialize, &_Manifest_ClassInfo_, clinit$Manifest, allocate$Manifest);
	return class$;
}

$Class* Manifest::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax