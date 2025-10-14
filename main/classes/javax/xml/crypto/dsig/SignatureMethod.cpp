#include <javax/xml/crypto/dsig/SignatureMethod.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <jcpp.h>

#undef DSA_SHA1
#undef DSA_SHA256
#undef ECDSA_SHA1
#undef ECDSA_SHA224
#undef ECDSA_SHA256
#undef ECDSA_SHA384
#undef ECDSA_SHA512
#undef HMAC_SHA1
#undef HMAC_SHA224
#undef HMAC_SHA256
#undef HMAC_SHA384
#undef HMAC_SHA512
#undef RSA_PSS
#undef RSA_SHA1
#undef RSA_SHA224
#undef RSA_SHA256
#undef RSA_SHA384
#undef RSA_SHA512
#undef SHA1_RSA_MGF1

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$FieldInfo _SignatureMethod_FieldInfo_[] = {
	{"DSA_SHA1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, DSA_SHA1)},
	{"DSA_SHA256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, DSA_SHA256)},
	{"RSA_SHA1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, RSA_SHA1)},
	{"RSA_SHA224", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, RSA_SHA224)},
	{"RSA_SHA256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, RSA_SHA256)},
	{"RSA_SHA384", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, RSA_SHA384)},
	{"RSA_SHA512", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, RSA_SHA512)},
	{"SHA1_RSA_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, SHA1_RSA_MGF1)},
	{"SHA224_RSA_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, SHA224_RSA_MGF1)},
	{"SHA256_RSA_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, SHA256_RSA_MGF1)},
	{"SHA384_RSA_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, SHA384_RSA_MGF1)},
	{"SHA512_RSA_MGF1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, SHA512_RSA_MGF1)},
	{"ECDSA_SHA1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, ECDSA_SHA1)},
	{"ECDSA_SHA224", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, ECDSA_SHA224)},
	{"ECDSA_SHA256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, ECDSA_SHA256)},
	{"ECDSA_SHA384", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, ECDSA_SHA384)},
	{"ECDSA_SHA512", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, ECDSA_SHA512)},
	{"HMAC_SHA1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, HMAC_SHA1)},
	{"HMAC_SHA224", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, HMAC_SHA224)},
	{"HMAC_SHA256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, HMAC_SHA256)},
	{"HMAC_SHA384", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, HMAC_SHA384)},
	{"HMAC_SHA512", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, HMAC_SHA512)},
	{"RSA_PSS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(SignatureMethod, RSA_PSS)},
	{}
};

$MethodInfo _SignatureMethod_MethodInfo_[] = {
	{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _SignatureMethod_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.SignatureMethod",
	nullptr,
	"javax.xml.crypto.XMLStructure,javax.xml.crypto.AlgorithmMethod",
	_SignatureMethod_FieldInfo_,
	_SignatureMethod_MethodInfo_
};

$Object* allocate$SignatureMethod($Class* clazz) {
	return $of($alloc(SignatureMethod));
}

int32_t SignatureMethod::hashCode() {
	 return this->$XMLStructure::hashCode();
}

bool SignatureMethod::equals(Object$* arg0) {
	 return this->$XMLStructure::equals(arg0);
}

$Object* SignatureMethod::clone() {
	 return this->$XMLStructure::clone();
}

$String* SignatureMethod::toString() {
	 return this->$XMLStructure::toString();
}

void SignatureMethod::finalize() {
	this->$XMLStructure::finalize();
}


$String* SignatureMethod::DSA_SHA1 = nullptr;

$String* SignatureMethod::DSA_SHA256 = nullptr;

$String* SignatureMethod::RSA_SHA1 = nullptr;

$String* SignatureMethod::RSA_SHA224 = nullptr;

$String* SignatureMethod::RSA_SHA256 = nullptr;

$String* SignatureMethod::RSA_SHA384 = nullptr;

$String* SignatureMethod::RSA_SHA512 = nullptr;

$String* SignatureMethod::SHA1_RSA_MGF1 = nullptr;

$String* SignatureMethod::SHA224_RSA_MGF1 = nullptr;

$String* SignatureMethod::SHA256_RSA_MGF1 = nullptr;

$String* SignatureMethod::SHA384_RSA_MGF1 = nullptr;

$String* SignatureMethod::SHA512_RSA_MGF1 = nullptr;

$String* SignatureMethod::ECDSA_SHA1 = nullptr;

$String* SignatureMethod::ECDSA_SHA224 = nullptr;

$String* SignatureMethod::ECDSA_SHA256 = nullptr;

$String* SignatureMethod::ECDSA_SHA384 = nullptr;

$String* SignatureMethod::ECDSA_SHA512 = nullptr;

$String* SignatureMethod::HMAC_SHA1 = nullptr;

$String* SignatureMethod::HMAC_SHA224 = nullptr;

$String* SignatureMethod::HMAC_SHA256 = nullptr;

$String* SignatureMethod::HMAC_SHA384 = nullptr;

$String* SignatureMethod::HMAC_SHA512 = nullptr;

$String* SignatureMethod::RSA_PSS = nullptr;

void clinit$SignatureMethod($Class* class$) {
	$assignStatic(SignatureMethod::DSA_SHA1, "http://www.w3.org/2000/09/xmldsig#dsa-sha1"_s);
	$assignStatic(SignatureMethod::DSA_SHA256, "http://www.w3.org/2009/xmldsig11#dsa-sha256"_s);
	$assignStatic(SignatureMethod::RSA_SHA1, "http://www.w3.org/2000/09/xmldsig#rsa-sha1"_s);
	$assignStatic(SignatureMethod::RSA_SHA224, "http://www.w3.org/2001/04/xmldsig-more#rsa-sha224"_s);
	$assignStatic(SignatureMethod::RSA_SHA256, "http://www.w3.org/2001/04/xmldsig-more#rsa-sha256"_s);
	$assignStatic(SignatureMethod::RSA_SHA384, "http://www.w3.org/2001/04/xmldsig-more#rsa-sha384"_s);
	$assignStatic(SignatureMethod::RSA_SHA512, "http://www.w3.org/2001/04/xmldsig-more#rsa-sha512"_s);
	$assignStatic(SignatureMethod::SHA1_RSA_MGF1, "http://www.w3.org/2007/05/xmldsig-more#sha1-rsa-MGF1"_s);
	$assignStatic(SignatureMethod::SHA224_RSA_MGF1, "http://www.w3.org/2007/05/xmldsig-more#sha224-rsa-MGF1"_s);
	$assignStatic(SignatureMethod::SHA256_RSA_MGF1, "http://www.w3.org/2007/05/xmldsig-more#sha256-rsa-MGF1"_s);
	$assignStatic(SignatureMethod::SHA384_RSA_MGF1, "http://www.w3.org/2007/05/xmldsig-more#sha384-rsa-MGF1"_s);
	$assignStatic(SignatureMethod::SHA512_RSA_MGF1, "http://www.w3.org/2007/05/xmldsig-more#sha512-rsa-MGF1"_s);
	$assignStatic(SignatureMethod::ECDSA_SHA1, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha1"_s);
	$assignStatic(SignatureMethod::ECDSA_SHA224, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha224"_s);
	$assignStatic(SignatureMethod::ECDSA_SHA256, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha256"_s);
	$assignStatic(SignatureMethod::ECDSA_SHA384, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha384"_s);
	$assignStatic(SignatureMethod::ECDSA_SHA512, "http://www.w3.org/2001/04/xmldsig-more#ecdsa-sha512"_s);
	$assignStatic(SignatureMethod::HMAC_SHA1, "http://www.w3.org/2000/09/xmldsig#hmac-sha1"_s);
	$assignStatic(SignatureMethod::HMAC_SHA224, "http://www.w3.org/2001/04/xmldsig-more#hmac-sha224"_s);
	$assignStatic(SignatureMethod::HMAC_SHA256, "http://www.w3.org/2001/04/xmldsig-more#hmac-sha256"_s);
	$assignStatic(SignatureMethod::HMAC_SHA384, "http://www.w3.org/2001/04/xmldsig-more#hmac-sha384"_s);
	$assignStatic(SignatureMethod::HMAC_SHA512, "http://www.w3.org/2001/04/xmldsig-more#hmac-sha512"_s);
	$assignStatic(SignatureMethod::RSA_PSS, "http://www.w3.org/2007/05/xmldsig-more#rsa-pss"_s);
}

$Class* SignatureMethod::load$($String* name, bool initialize) {
	$loadClass(SignatureMethod, name, initialize, &_SignatureMethod_ClassInfo_, clinit$SignatureMethod, allocate$SignatureMethod);
	return class$;
}

$Class* SignatureMethod::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax