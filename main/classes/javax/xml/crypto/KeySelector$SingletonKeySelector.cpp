#include <javax/xml/crypto/KeySelector$SingletonKeySelector.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <javax/xml/crypto/AlgorithmMethod.h>
#include <javax/xml/crypto/KeySelector$Purpose.h>
#include <javax/xml/crypto/KeySelector$SingletonKeySelector$1.h>
#include <javax/xml/crypto/KeySelector.h>
#include <javax/xml/crypto/KeySelectorResult.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Key = ::java::security::Key;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $KeySelector = ::javax::xml::crypto::KeySelector;
using $KeySelector$Purpose = ::javax::xml::crypto::KeySelector$Purpose;
using $KeySelector$SingletonKeySelector$1 = ::javax::xml::crypto::KeySelector$SingletonKeySelector$1;
using $KeySelectorResult = ::javax::xml::crypto::KeySelectorResult;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $KeyInfo = ::javax::xml::crypto::dsig::keyinfo::KeyInfo;

namespace javax {
	namespace xml {
		namespace crypto {

$FieldInfo _KeySelector$SingletonKeySelector_FieldInfo_[] = {
	{"key", "Ljava/security/Key;", nullptr, $PRIVATE | $FINAL, $field(KeySelector$SingletonKeySelector, key)},
	{}
};

$MethodInfo _KeySelector$SingletonKeySelector_MethodInfo_[] = {
	{"<init>", "(Ljava/security/Key;)V", nullptr, 0, $method(static_cast<void(KeySelector$SingletonKeySelector::*)($Key*)>(&KeySelector$SingletonKeySelector::init$))},
	{"select", "(Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;Ljavax/xml/crypto/KeySelector$Purpose;Ljavax/xml/crypto/AlgorithmMethod;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/KeySelectorResult;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.KeySelectorException"},
	{}
};

$InnerClassInfo _KeySelector$SingletonKeySelector_InnerClassesInfo_[] = {
	{"javax.xml.crypto.KeySelector$SingletonKeySelector", "javax.xml.crypto.KeySelector", "SingletonKeySelector", $PRIVATE | $STATIC},
	{"javax.xml.crypto.KeySelector$SingletonKeySelector$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _KeySelector$SingletonKeySelector_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.crypto.KeySelector$SingletonKeySelector",
	"javax.xml.crypto.KeySelector",
	nullptr,
	_KeySelector$SingletonKeySelector_FieldInfo_,
	_KeySelector$SingletonKeySelector_MethodInfo_,
	nullptr,
	nullptr,
	_KeySelector$SingletonKeySelector_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.crypto.KeySelector"
};

$Object* allocate$KeySelector$SingletonKeySelector($Class* clazz) {
	return $of($alloc(KeySelector$SingletonKeySelector));
}

void KeySelector$SingletonKeySelector::init$($Key* key) {
	$KeySelector::init$();
	if (key == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, key, key);
}

$KeySelectorResult* KeySelector$SingletonKeySelector::select($KeyInfo* keyInfo, $KeySelector$Purpose* purpose, $AlgorithmMethod* method, $XMLCryptoContext* context) {
	return $new($KeySelector$SingletonKeySelector$1, this);
}

KeySelector$SingletonKeySelector::KeySelector$SingletonKeySelector() {
}

$Class* KeySelector$SingletonKeySelector::load$($String* name, bool initialize) {
	$loadClass(KeySelector$SingletonKeySelector, name, initialize, &_KeySelector$SingletonKeySelector_ClassInfo_, allocate$KeySelector$SingletonKeySelector);
	return class$;
}

$Class* KeySelector$SingletonKeySelector::class$ = nullptr;

		} // crypto
	} // xml
} // javax