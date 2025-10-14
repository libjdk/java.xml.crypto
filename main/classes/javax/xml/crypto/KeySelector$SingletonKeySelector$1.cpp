#include <javax/xml/crypto/KeySelector$SingletonKeySelector$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <javax/xml/crypto/KeySelector$SingletonKeySelector.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $KeySelector$SingletonKeySelector = ::javax::xml::crypto::KeySelector$SingletonKeySelector;
using $KeySelectorResult = ::javax::xml::crypto::KeySelectorResult;

namespace javax {
	namespace xml {
		namespace crypto {

$FieldInfo _KeySelector$SingletonKeySelector$1_FieldInfo_[] = {
	{"this$0", "Ljavax/xml/crypto/KeySelector$SingletonKeySelector;", nullptr, $FINAL | $SYNTHETIC, $field(KeySelector$SingletonKeySelector$1, this$0)},
	{}
};

$MethodInfo _KeySelector$SingletonKeySelector$1_MethodInfo_[] = {
	{"<init>", "(Ljavax/xml/crypto/KeySelector$SingletonKeySelector;)V", nullptr, 0, $method(static_cast<void(KeySelector$SingletonKeySelector$1::*)($KeySelector$SingletonKeySelector*)>(&KeySelector$SingletonKeySelector$1::init$))},
	{"getKey", "()Ljava/security/Key;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _KeySelector$SingletonKeySelector$1_EnclosingMethodInfo_ = {
	"javax.xml.crypto.KeySelector$SingletonKeySelector",
	"select",
	"(Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;Ljavax/xml/crypto/KeySelector$Purpose;Ljavax/xml/crypto/AlgorithmMethod;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/KeySelectorResult;"
};

$InnerClassInfo _KeySelector$SingletonKeySelector$1_InnerClassesInfo_[] = {
	{"javax.xml.crypto.KeySelector$SingletonKeySelector", "javax.xml.crypto.KeySelector", "SingletonKeySelector", $PRIVATE | $STATIC},
	{"javax.xml.crypto.KeySelector$SingletonKeySelector$1", nullptr, nullptr, 0},
	{"javax.xml.crypto.KeySelector$Purpose", "javax.xml.crypto.KeySelector", "Purpose", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _KeySelector$SingletonKeySelector$1_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.crypto.KeySelector$SingletonKeySelector$1",
	"java.lang.Object",
	"javax.xml.crypto.KeySelectorResult",
	_KeySelector$SingletonKeySelector$1_FieldInfo_,
	_KeySelector$SingletonKeySelector$1_MethodInfo_,
	nullptr,
	&_KeySelector$SingletonKeySelector$1_EnclosingMethodInfo_,
	_KeySelector$SingletonKeySelector$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.crypto.KeySelector"
};

$Object* allocate$KeySelector$SingletonKeySelector$1($Class* clazz) {
	return $of($alloc(KeySelector$SingletonKeySelector$1));
}

void KeySelector$SingletonKeySelector$1::init$($KeySelector$SingletonKeySelector* this$0) {
	$set(this, this$0, this$0);
}

$Key* KeySelector$SingletonKeySelector$1::getKey() {
	return this->this$0->key;
}

KeySelector$SingletonKeySelector$1::KeySelector$SingletonKeySelector$1() {
}

$Class* KeySelector$SingletonKeySelector$1::load$($String* name, bool initialize) {
	$loadClass(KeySelector$SingletonKeySelector$1, name, initialize, &_KeySelector$SingletonKeySelector$1_ClassInfo_, allocate$KeySelector$SingletonKeySelector$1);
	return class$;
}

$Class* KeySelector$SingletonKeySelector$1::class$ = nullptr;

		} // crypto
	} // xml
} // javax