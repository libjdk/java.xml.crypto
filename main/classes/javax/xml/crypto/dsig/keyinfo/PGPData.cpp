#include <javax/xml/crypto/dsig/keyinfo/PGPData.h>

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
				namespace keyinfo {

$FieldInfo _PGPData_FieldInfo_[] = {
	{"TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(PGPData, TYPE)},
	{}
};

$MethodInfo _PGPData_MethodInfo_[] = {
	{"getExternalElements", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PUBLIC | $ABSTRACT},
	{"getKeyId", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getKeyPacket", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _PGPData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.keyinfo.PGPData",
	nullptr,
	"javax.xml.crypto.XMLStructure",
	_PGPData_FieldInfo_,
	_PGPData_MethodInfo_
};

$Object* allocate$PGPData($Class* clazz) {
	return $of($alloc(PGPData));
}


$String* PGPData::TYPE = nullptr;

void clinit$PGPData($Class* class$) {
	$assignStatic(PGPData::TYPE, "http://www.w3.org/2000/09/xmldsig#PGPData"_s);
}

$Class* PGPData::load$($String* name, bool initialize) {
	$loadClass(PGPData, name, initialize, &_PGPData_ClassInfo_, clinit$PGPData, allocate$PGPData);
	return class$;
}

$Class* PGPData::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax