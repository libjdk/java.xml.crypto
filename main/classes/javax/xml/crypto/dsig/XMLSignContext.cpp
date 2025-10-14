#include <javax/xml/crypto/dsig/XMLSignContext.h>

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

$ClassInfo _XMLSignContext_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.XMLSignContext",
	nullptr,
	"javax.xml.crypto.XMLCryptoContext"
};

$Object* allocate$XMLSignContext($Class* clazz) {
	return $of($alloc(XMLSignContext));
}

$Class* XMLSignContext::load$($String* name, bool initialize) {
	$loadClass(XMLSignContext, name, initialize, &_XMLSignContext_ClassInfo_, allocate$XMLSignContext);
	return class$;
}

$Class* XMLSignContext::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax