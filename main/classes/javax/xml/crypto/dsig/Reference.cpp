#include <javax/xml/crypto/dsig/Reference.h>

#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/URIReference.h>
#include <javax/xml/crypto/dsig/DigestMethod.h>
#include <javax/xml/crypto/dsig/XMLValidateContext.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Data = ::javax::xml::crypto::Data;
using $URIReference = ::javax::xml::crypto::URIReference;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DigestMethod = ::javax::xml::crypto::dsig::DigestMethod;
using $XMLValidateContext = ::javax::xml::crypto::dsig::XMLValidateContext;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$MethodInfo _Reference_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getCalculatedDigestValue", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getDereferencedData", "()Ljavax/xml/crypto/Data;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDigestInputStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDigestMethod", "()Ljavax/xml/crypto/dsig/DigestMethod;", nullptr, $PUBLIC | $ABSTRACT},
	{"getDigestValue", "()[B", nullptr, $PUBLIC | $ABSTRACT},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getTransforms", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/Transform;>;", $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"validate", "(Ljavax/xml/crypto/dsig/XMLValidateContext;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.dsig.XMLSignatureException"},
	{}
};

$ClassInfo _Reference_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.Reference",
	nullptr,
	"javax.xml.crypto.URIReference,javax.xml.crypto.XMLStructure",
	nullptr,
	_Reference_MethodInfo_
};

$Object* allocate$Reference($Class* clazz) {
	return $of($alloc(Reference));
}

int32_t Reference::hashCode() {
	 return this->$URIReference::hashCode();
}

bool Reference::equals(Object$* arg0) {
	 return this->$URIReference::equals(arg0);
}

$Object* Reference::clone() {
	 return this->$URIReference::clone();
}

$String* Reference::toString() {
	 return this->$URIReference::toString();
}

void Reference::finalize() {
	this->$URIReference::finalize();
}

$Class* Reference::load$($String* name, bool initialize) {
	$loadClass(Reference, name, initialize, &_Reference_ClassInfo_, allocate$Reference);
	return class$;
}

$Class* Reference::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax