#include <javax/xml/crypto/dsig/DigestMethod.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <jcpp.h>

#undef RIPEMD160
#undef SHA1

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$FieldInfo _DigestMethod_FieldInfo_[] = {
	{"SHA1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DigestMethod, SHA1)},
	{"SHA224", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DigestMethod, SHA224)},
	{"SHA256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DigestMethod, SHA256)},
	{"SHA384", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DigestMethod, SHA384)},
	{"SHA512", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DigestMethod, SHA512)},
	{"RIPEMD160", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DigestMethod, RIPEMD160)},
	{"SHA3_224", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DigestMethod, SHA3_224)},
	{"SHA3_256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DigestMethod, SHA3_256)},
	{"SHA3_384", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DigestMethod, SHA3_384)},
	{"SHA3_512", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(DigestMethod, SHA3_512)},
	{}
};

$MethodInfo _DigestMethod_MethodInfo_[] = {
	{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _DigestMethod_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.DigestMethod",
	nullptr,
	"javax.xml.crypto.XMLStructure,javax.xml.crypto.AlgorithmMethod",
	_DigestMethod_FieldInfo_,
	_DigestMethod_MethodInfo_
};

$Object* allocate$DigestMethod($Class* clazz) {
	return $of($alloc(DigestMethod));
}

int32_t DigestMethod::hashCode() {
	 return this->$XMLStructure::hashCode();
}

bool DigestMethod::equals(Object$* arg0) {
	 return this->$XMLStructure::equals(arg0);
}

$Object* DigestMethod::clone() {
	 return this->$XMLStructure::clone();
}

$String* DigestMethod::toString() {
	 return this->$XMLStructure::toString();
}

void DigestMethod::finalize() {
	this->$XMLStructure::finalize();
}


$String* DigestMethod::SHA1 = nullptr;

$String* DigestMethod::SHA224 = nullptr;

$String* DigestMethod::SHA256 = nullptr;

$String* DigestMethod::SHA384 = nullptr;

$String* DigestMethod::SHA512 = nullptr;

$String* DigestMethod::RIPEMD160 = nullptr;

$String* DigestMethod::SHA3_224 = nullptr;

$String* DigestMethod::SHA3_256 = nullptr;

$String* DigestMethod::SHA3_384 = nullptr;

$String* DigestMethod::SHA3_512 = nullptr;

void clinit$DigestMethod($Class* class$) {
	$assignStatic(DigestMethod::SHA1, "http://www.w3.org/2000/09/xmldsig#sha1"_s);
	$assignStatic(DigestMethod::SHA224, "http://www.w3.org/2001/04/xmldsig-more#sha224"_s);
	$assignStatic(DigestMethod::SHA256, "http://www.w3.org/2001/04/xmlenc#sha256"_s);
	$assignStatic(DigestMethod::SHA384, "http://www.w3.org/2001/04/xmldsig-more#sha384"_s);
	$assignStatic(DigestMethod::SHA512, "http://www.w3.org/2001/04/xmlenc#sha512"_s);
	$assignStatic(DigestMethod::RIPEMD160, "http://www.w3.org/2001/04/xmlenc#ripemd160"_s);
	$assignStatic(DigestMethod::SHA3_224, "http://www.w3.org/2007/05/xmldsig-more#sha3-224"_s);
	$assignStatic(DigestMethod::SHA3_256, "http://www.w3.org/2007/05/xmldsig-more#sha3-256"_s);
	$assignStatic(DigestMethod::SHA3_384, "http://www.w3.org/2007/05/xmldsig-more#sha3-384"_s);
	$assignStatic(DigestMethod::SHA3_512, "http://www.w3.org/2007/05/xmldsig-more#sha3-512"_s);
}

$Class* DigestMethod::load$($String* name, bool initialize) {
	$loadClass(DigestMethod, name, initialize, &_DigestMethod_ClassInfo_, clinit$DigestMethod, allocate$DigestMethod);
	return class$;
}

$Class* DigestMethod::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax