#include <javax/xml/crypto/KeySelector.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Key.h>
#include <javax/xml/crypto/AlgorithmMethod.h>
#include <javax/xml/crypto/KeySelector$Purpose.h>
#include <javax/xml/crypto/KeySelector$SingletonKeySelector.h>
#include <javax/xml/crypto/KeySelectorResult.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Key = ::java::security::Key;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $KeySelector$Purpose = ::javax::xml::crypto::KeySelector$Purpose;
using $KeySelector$SingletonKeySelector = ::javax::xml::crypto::KeySelector$SingletonKeySelector;
using $KeySelectorResult = ::javax::xml::crypto::KeySelectorResult;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $KeyInfo = ::javax::xml::crypto::dsig::keyinfo::KeyInfo;

namespace javax {
	namespace xml {
		namespace crypto {

$MethodInfo _KeySelector_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PROTECTED, $method(static_cast<void(KeySelector::*)()>(&KeySelector::init$))},
	{"select", "(Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;Ljavax/xml/crypto/KeySelector$Purpose;Ljavax/xml/crypto/AlgorithmMethod;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/KeySelectorResult;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.KeySelectorException"},
	{"singletonKeySelector", "(Ljava/security/Key;)Ljavax/xml/crypto/KeySelector;", nullptr, $PUBLIC | $STATIC, $method(static_cast<KeySelector*(*)($Key*)>(&KeySelector::singletonKeySelector))},
	{}
};

$InnerClassInfo _KeySelector_InnerClassesInfo_[] = {
	{"javax.xml.crypto.KeySelector$SingletonKeySelector", "javax.xml.crypto.KeySelector", "SingletonKeySelector", $PRIVATE | $STATIC},
	{"javax.xml.crypto.KeySelector$Purpose", "javax.xml.crypto.KeySelector", "Purpose", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _KeySelector_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"javax.xml.crypto.KeySelector",
	"java.lang.Object",
	nullptr,
	nullptr,
	_KeySelector_MethodInfo_,
	nullptr,
	nullptr,
	_KeySelector_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.crypto.KeySelector$SingletonKeySelector,javax.xml.crypto.KeySelector$SingletonKeySelector$1,javax.xml.crypto.KeySelector$Purpose"
};

$Object* allocate$KeySelector($Class* clazz) {
	return $of($alloc(KeySelector));
}

void KeySelector::init$() {
}

KeySelector* KeySelector::singletonKeySelector($Key* key) {
	return $new($KeySelector$SingletonKeySelector, key);
}

KeySelector::KeySelector() {
}

$Class* KeySelector::load$($String* name, bool initialize) {
	$loadClass(KeySelector, name, initialize, &_KeySelector_ClassInfo_, allocate$KeySelector);
	return class$;
}

$Class* KeySelector::class$ = nullptr;

		} // crypto
	} // xml
} // javax