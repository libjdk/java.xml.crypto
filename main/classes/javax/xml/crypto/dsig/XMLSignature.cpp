#include <javax/xml/crypto/dsig/XMLSignature.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/xml/crypto/KeySelectorResult.h>
#include <javax/xml/crypto/dsig/SignedInfo.h>
#include <javax/xml/crypto/dsig/XMLSignContext.h>
#include <javax/xml/crypto/dsig/XMLSignature$SignatureValue.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <jcpp.h>

#undef XMLNS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $KeySelectorResult = ::javax::xml::crypto::KeySelectorResult;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $SignedInfo = ::javax::xml::crypto::dsig::SignedInfo;
using $XMLSignContext = ::javax::xml::crypto::dsig::XMLSignContext;
using $XMLSignature$SignatureValue = ::javax::xml::crypto::dsig::XMLSignature$SignatureValue;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;
using $KeyInfo = ::javax::xml::crypto::dsig::keyinfo::KeyInfo;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$FieldInfo _XMLSignature_FieldInfo_[] = {
	{"XMLNS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XMLSignature, XMLNS)},
	{}
};

$MethodInfo _XMLSignature_MethodInfo_[] = {
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getKeyInfo", "()Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"getKeySelectorResult", "()Ljavax/xml/crypto/KeySelectorResult;", nullptr, $PUBLIC | $ABSTRACT},
	{"getObjects", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/XMLObject;>;", $PUBLIC | $ABSTRACT},
	{"getSignatureValue", "()Ljavax/xml/crypto/dsig/XMLSignature$SignatureValue;", nullptr, $PUBLIC | $ABSTRACT},
	{"getSignedInfo", "()Ljavax/xml/crypto/dsig/SignedInfo;", nullptr, $PUBLIC | $ABSTRACT},
	{"sign", "(Ljavax/xml/crypto/dsig/XMLSignContext;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.MarshalException,javax.xml.crypto.dsig.XMLSignatureException"},
	{"validate", "(Ljavax/xml/crypto/dsig/XMLValidateContext;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.dsig.XMLSignatureException"},
	{}
};

$InnerClassInfo _XMLSignature_InnerClassesInfo_[] = {
	{"javax.xml.crypto.dsig.XMLSignature$SignatureValue", "javax.xml.crypto.dsig.XMLSignature", "SignatureValue", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _XMLSignature_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.XMLSignature",
	nullptr,
	"javax.xml.crypto.XMLStructure",
	_XMLSignature_FieldInfo_,
	_XMLSignature_MethodInfo_,
	nullptr,
	nullptr,
	_XMLSignature_InnerClassesInfo_,
	nullptr,
	nullptr,
	"javax.xml.crypto.dsig.XMLSignature$SignatureValue"
};

$Object* allocate$XMLSignature($Class* clazz) {
	return $of($alloc(XMLSignature));
}


$String* XMLSignature::XMLNS = nullptr;

void clinit$XMLSignature($Class* class$) {
	$assignStatic(XMLSignature::XMLNS, "http://www.w3.org/2000/09/xmldsig#"_s);
}

$Class* XMLSignature::load$($String* name, bool initialize) {
	$loadClass(XMLSignature, name, initialize, &_XMLSignature_ClassInfo_, clinit$XMLSignature, allocate$XMLSignature);
	return class$;
}

$Class* XMLSignature::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax