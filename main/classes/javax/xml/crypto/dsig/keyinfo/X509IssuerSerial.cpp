#include <javax/xml/crypto/dsig/keyinfo/X509IssuerSerial.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $BigInteger = ::java::math::BigInteger;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

$MethodInfo _X509IssuerSerial_MethodInfo_[] = {
	{"getIssuerName", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSerialNumber", "()Ljava/math/BigInteger;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _X509IssuerSerial_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.keyinfo.X509IssuerSerial",
	nullptr,
	"javax.xml.crypto.XMLStructure",
	nullptr,
	_X509IssuerSerial_MethodInfo_
};

$Object* allocate$X509IssuerSerial($Class* clazz) {
	return $of($alloc(X509IssuerSerial));
}

$Class* X509IssuerSerial::load$($String* name, bool initialize) {
	$loadClass(X509IssuerSerial, name, initialize, &_X509IssuerSerial_ClassInfo_, allocate$X509IssuerSerial);
	return class$;
}

$Class* X509IssuerSerial::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax