#include <javax/xml/crypto/dsig/XMLObject.h>

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

$FieldInfo _XMLObject_FieldInfo_[] = {
	{"TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLObject, TYPE)},
	{}
};

$MethodInfo _XMLObject_MethodInfo_[] = {
	{"getContent", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PUBLIC | $ABSTRACT},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getMimeType", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLObject_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.XMLObject",
	nullptr,
	"javax.xml.crypto.XMLStructure",
	_XMLObject_FieldInfo_,
	_XMLObject_MethodInfo_
};

$Object* allocate$XMLObject($Class* clazz) {
	return $of($alloc(XMLObject));
}


$String* XMLObject::TYPE = nullptr;

void clinit$XMLObject($Class* class$) {
	$assignStatic(XMLObject::TYPE, "http://www.w3.org/2000/09/xmldsig#Object"_s);
}

$Class* XMLObject::load$($String* name, bool initialize) {
	$loadClass(XMLObject, name, initialize, &_XMLObject_ClassInfo_, clinit$XMLObject, allocate$XMLObject);
	return class$;
}

$Class* XMLObject::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax