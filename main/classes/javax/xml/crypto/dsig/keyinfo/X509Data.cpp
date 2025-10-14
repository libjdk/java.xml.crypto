#include <javax/xml/crypto/dsig/keyinfo/X509Data.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef RAW_X509_CERTIFICATE_TYPE
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

$FieldInfo _X509Data_FieldInfo_[] = {
	{"TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X509Data, TYPE)},
	{"RAW_X509_CERTIFICATE_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(X509Data, RAW_X509_CERTIFICATE_TYPE)},
	{}
};

$MethodInfo _X509Data_MethodInfo_[] = {
	{"getContent", "()Ljava/util/List;", "()Ljava/util/List<*>;", $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _X509Data_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.keyinfo.X509Data",
	nullptr,
	"javax.xml.crypto.XMLStructure",
	_X509Data_FieldInfo_,
	_X509Data_MethodInfo_
};

$Object* allocate$X509Data($Class* clazz) {
	return $of($alloc(X509Data));
}


$String* X509Data::TYPE = nullptr;

$String* X509Data::RAW_X509_CERTIFICATE_TYPE = nullptr;

void clinit$X509Data($Class* class$) {
	$assignStatic(X509Data::TYPE, "http://www.w3.org/2000/09/xmldsig#X509Data"_s);
	$assignStatic(X509Data::RAW_X509_CERTIFICATE_TYPE, "http://www.w3.org/2000/09/xmldsig#rawX509Certificate"_s);
}

$Class* X509Data::load$($String* name, bool initialize) {
	$loadClass(X509Data, name, initialize, &_X509Data_ClassInfo_, clinit$X509Data, allocate$X509Data);
	return class$;
}

$Class* X509Data::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax