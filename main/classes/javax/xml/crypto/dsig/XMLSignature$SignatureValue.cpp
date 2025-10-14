#include <javax/xml/crypto/dsig/XMLSignature$SignatureValue.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$MethodInfo _XMLSignature$SignatureValue_MethodInfo_[] = {
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getValue", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"validate", "(Ljavax/xml/crypto/dsig/XMLValidateContext;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.dsig.XMLSignatureException"},
	{}
};

$InnerClassInfo _XMLSignature$SignatureValue_InnerClassesInfo_[] = {
	{"javax.xml.crypto.dsig.XMLSignature$SignatureValue", "javax.xml.crypto.dsig.XMLSignature", "SignatureValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _XMLSignature$SignatureValue_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.XMLSignature$SignatureValue",
	nullptr,
	"javax.xml.crypto.XMLStructure",
	nullptr,
	_XMLSignature$SignatureValue_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSignature$SignatureValue_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.crypto.dsig.XMLSignature"
};

$Object* allocate$XMLSignature$SignatureValue($Class* clazz) {
	return $of($alloc(XMLSignature$SignatureValue));
}

$Class* XMLSignature$SignatureValue::load$($String* name, bool initialize) {
	$loadClass(XMLSignature$SignatureValue, name, initialize, &_XMLSignature$SignatureValue_ClassInfo_, allocate$XMLSignature$SignatureValue);
	return class$;
}

$Class* XMLSignature$SignatureValue::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax