#include <javax/xml/crypto/KeySelector$Purpose.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/KeySelector.h>
#include <jcpp.h>

#undef DECRYPT
#undef ENCRYPT
#undef SIGN
#undef VERIFY

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeySelector = ::javax::xml::crypto::KeySelector;

namespace javax {
	namespace xml {
		namespace crypto {

$FieldInfo _KeySelector$Purpose_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(KeySelector$Purpose, name)},
	{"SIGN", "Ljavax/xml/crypto/KeySelector$Purpose;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeySelector$Purpose, SIGN)},
	{"VERIFY", "Ljavax/xml/crypto/KeySelector$Purpose;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeySelector$Purpose, VERIFY)},
	{"ENCRYPT", "Ljavax/xml/crypto/KeySelector$Purpose;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeySelector$Purpose, ENCRYPT)},
	{"DECRYPT", "Ljavax/xml/crypto/KeySelector$Purpose;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(KeySelector$Purpose, DECRYPT)},
	{}
};

$MethodInfo _KeySelector$Purpose_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(KeySelector$Purpose::*)($String*)>(&KeySelector$Purpose::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _KeySelector$Purpose_InnerClassesInfo_[] = {
	{"javax.xml.crypto.KeySelector$Purpose", "javax.xml.crypto.KeySelector", "Purpose", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _KeySelector$Purpose_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.KeySelector$Purpose",
	"java.lang.Object",
	nullptr,
	_KeySelector$Purpose_FieldInfo_,
	_KeySelector$Purpose_MethodInfo_,
	nullptr,
	nullptr,
	_KeySelector$Purpose_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.crypto.KeySelector"
};

$Object* allocate$KeySelector$Purpose($Class* clazz) {
	return $of($alloc(KeySelector$Purpose));
}


KeySelector$Purpose* KeySelector$Purpose::SIGN = nullptr;

KeySelector$Purpose* KeySelector$Purpose::VERIFY = nullptr;

KeySelector$Purpose* KeySelector$Purpose::ENCRYPT = nullptr;

KeySelector$Purpose* KeySelector$Purpose::DECRYPT = nullptr;

void KeySelector$Purpose::init$($String* name) {
	$set(this, name, name);
}

$String* KeySelector$Purpose::toString() {
	return this->name;
}

void clinit$KeySelector$Purpose($Class* class$) {
	$assignStatic(KeySelector$Purpose::SIGN, $new(KeySelector$Purpose, "sign"_s));
	$assignStatic(KeySelector$Purpose::VERIFY, $new(KeySelector$Purpose, "verify"_s));
	$assignStatic(KeySelector$Purpose::ENCRYPT, $new(KeySelector$Purpose, "encrypt"_s));
	$assignStatic(KeySelector$Purpose::DECRYPT, $new(KeySelector$Purpose, "decrypt"_s));
}

KeySelector$Purpose::KeySelector$Purpose() {
}

$Class* KeySelector$Purpose::load$($String* name, bool initialize) {
	$loadClass(KeySelector$Purpose, name, initialize, &_KeySelector$Purpose_ClassInfo_, clinit$KeySelector$Purpose, allocate$KeySelector$Purpose);
	return class$;
}

$Class* KeySelector$Purpose::class$ = nullptr;

		} // crypto
	} // xml
} // javax