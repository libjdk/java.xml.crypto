#include <javax/xml/crypto/dsig/XMLValidateContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$ClassInfo _XMLValidateContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.XMLValidateContext",
	nullptr,
	"javax.xml.crypto.XMLCryptoContext"
};

$Object* allocate$XMLValidateContext($Class* clazz) {
	return $of($alloc(XMLValidateContext));
}

$Class* XMLValidateContext::load$($String* name, bool initialize) {
	$loadClass(XMLValidateContext, name, initialize, &_XMLValidateContext_ClassInfo_, allocate$XMLValidateContext);
	return class$;
}

$Class* XMLValidateContext::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax