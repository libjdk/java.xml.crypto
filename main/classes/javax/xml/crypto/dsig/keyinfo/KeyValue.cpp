#include <javax/xml/crypto/dsig/keyinfo/KeyValue.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PublicKey.h>
#include <jcpp.h>

#undef DSA_TYPE
#undef EC_TYPE
#undef RSA_TYPE

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

$FieldInfo _KeyValue_FieldInfo_[] = {
	{"DSA_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyValue, DSA_TYPE)},
	{"RSA_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyValue, RSA_TYPE)},
	{"EC_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeyValue, EC_TYPE)},
	{}
};

$MethodInfo _KeyValue_MethodInfo_[] = {
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "java.security.KeyException"},
	{}
};

$ClassInfo _KeyValue_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.keyinfo.KeyValue",
	nullptr,
	"javax.xml.crypto.XMLStructure",
	_KeyValue_FieldInfo_,
	_KeyValue_MethodInfo_
};

$Object* allocate$KeyValue($Class* clazz) {
	return $of($alloc(KeyValue));
}


$String* KeyValue::DSA_TYPE = nullptr;

$String* KeyValue::RSA_TYPE = nullptr;

$String* KeyValue::EC_TYPE = nullptr;

void clinit$KeyValue($Class* class$) {
	$assignStatic(KeyValue::DSA_TYPE, "http://www.w3.org/2000/09/xmldsig#DSAKeyValue"_s);
	$assignStatic(KeyValue::RSA_TYPE, "http://www.w3.org/2000/09/xmldsig#RSAKeyValue"_s);
	$assignStatic(KeyValue::EC_TYPE, "http://www.w3.org/2009/xmldsig11#ECKeyValue"_s);
}

$Class* KeyValue::load$($String* name, bool initialize) {
	$loadClass(KeyValue, name, initialize, &_KeyValue_ClassInfo_, clinit$KeyValue, allocate$KeyValue);
	return class$;
}

$Class* KeyValue::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax