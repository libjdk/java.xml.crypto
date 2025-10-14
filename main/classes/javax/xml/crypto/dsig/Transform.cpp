#include <javax/xml/crypto/dsig/Transform.h>

#include <java/io/OutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <jcpp.h>

#undef BASE64
#undef ENVELOPED
#undef XPATH
#undef XPATH2
#undef XSLT

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $Data = ::javax::xml::crypto::Data;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$FieldInfo _Transform_FieldInfo_[] = {
	{"BASE64", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transform, BASE64)},
	{"ENVELOPED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transform, ENVELOPED)},
	{"XPATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transform, XPATH)},
	{"XPATH2", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transform, XPATH2)},
	{"XSLT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Transform, XSLT)},
	{}
};

$MethodInfo _Transform_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.dsig.TransformException"},
	{"transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;Ljava/io/OutputStream;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.dsig.TransformException"},
	{}
};

$ClassInfo _Transform_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.Transform",
	nullptr,
	"javax.xml.crypto.XMLStructure,javax.xml.crypto.AlgorithmMethod",
	_Transform_FieldInfo_,
	_Transform_MethodInfo_
};

$Object* allocate$Transform($Class* clazz) {
	return $of($alloc(Transform));
}

int32_t Transform::hashCode() {
	 return this->$XMLStructure::hashCode();
}

bool Transform::equals(Object$* arg0) {
	 return this->$XMLStructure::equals(arg0);
}

$Object* Transform::clone() {
	 return this->$XMLStructure::clone();
}

$String* Transform::toString() {
	 return this->$XMLStructure::toString();
}

void Transform::finalize() {
	this->$XMLStructure::finalize();
}


$String* Transform::BASE64 = nullptr;

$String* Transform::ENVELOPED = nullptr;

$String* Transform::XPATH = nullptr;

$String* Transform::XPATH2 = nullptr;

$String* Transform::XSLT = nullptr;

void clinit$Transform($Class* class$) {
	$assignStatic(Transform::BASE64, "http://www.w3.org/2000/09/xmldsig#base64"_s);
	$assignStatic(Transform::ENVELOPED, "http://www.w3.org/2000/09/xmldsig#enveloped-signature"_s);
	$assignStatic(Transform::XPATH, "http://www.w3.org/TR/1999/REC-xpath-19991116"_s);
	$assignStatic(Transform::XPATH2, "http://www.w3.org/2002/06/xmldsig-filter2"_s);
	$assignStatic(Transform::XSLT, "http://www.w3.org/TR/1999/REC-xslt-19991116"_s);
}

$Class* Transform::load$($String* name, bool initialize) {
	$loadClass(Transform, name, initialize, &_Transform_ClassInfo_, clinit$Transform, allocate$Transform);
	return class$;
}

$Class* Transform::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax