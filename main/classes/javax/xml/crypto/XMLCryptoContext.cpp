#include <javax/xml/crypto/XMLCryptoContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/KeySelector.h>
#include <javax/xml/crypto/URIDereferencer.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $KeySelector = ::javax::xml::crypto::KeySelector;
using $URIDereferencer = ::javax::xml::crypto::URIDereferencer;

namespace javax {
	namespace xml {
		namespace crypto {

$MethodInfo _XMLCryptoContext_MethodInfo_[] = {
	{"get", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getBaseURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDefaultNamespacePrefix", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getKeySelector", "()Ljavax/xml/crypto/KeySelector;", nullptr, $PUBLIC | $ABSTRACT},
	{"getNamespacePrefix", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getProperty", "(Ljava/lang/String;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"getURIDereferencer", "()Ljavax/xml/crypto/URIDereferencer;", nullptr, $PUBLIC | $ABSTRACT},
	{"put", "(Ljava/lang/Object;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"putNamespacePrefix", "(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"setBaseURI", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setDefaultNamespacePrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setKeySelector", "(Ljavax/xml/crypto/KeySelector;)V", nullptr, $PUBLIC | $ABSTRACT},
	{"setProperty", "(Ljava/lang/String;Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $ABSTRACT},
	{"setURIDereferencer", "(Ljavax/xml/crypto/URIDereferencer;)V", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XMLCryptoContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.XMLCryptoContext",
	nullptr,
	nullptr,
	nullptr,
	_XMLCryptoContext_MethodInfo_
};

$Object* allocate$XMLCryptoContext($Class* clazz) {
	return $of($alloc(XMLCryptoContext));
}

$Class* XMLCryptoContext::load$($String* name, bool initialize) {
	$loadClass(XMLCryptoContext, name, initialize, &_XMLCryptoContext_ClassInfo_, allocate$XMLCryptoContext);
	return class$;
}

$Class* XMLCryptoContext::class$ = nullptr;

		} // crypto
	} // xml
} // javax