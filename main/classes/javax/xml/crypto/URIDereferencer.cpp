#include <javax/xml/crypto/URIDereferencer.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/URIReference.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Data = ::javax::xml::crypto::Data;
using $URIReference = ::javax::xml::crypto::URIReference;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;

namespace javax {
	namespace xml {
		namespace crypto {

$MethodInfo _URIDereferencer_MethodInfo_[] = {
	{"dereference", "(Ljavax/xml/crypto/URIReference;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.URIReferenceException"},
	{}
};

$ClassInfo _URIDereferencer_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.URIDereferencer",
	nullptr,
	nullptr,
	nullptr,
	_URIDereferencer_MethodInfo_
};

$Object* allocate$URIDereferencer($Class* clazz) {
	return $of($alloc(URIDereferencer));
}

$Class* URIDereferencer::load$($String* name, bool initialize) {
	$loadClass(URIDereferencer, name, initialize, &_URIDereferencer_ClassInfo_, allocate$URIDereferencer);
	return class$;
}

$Class* URIDereferencer::class$ = nullptr;

		} // crypto
	} // xml
} // javax