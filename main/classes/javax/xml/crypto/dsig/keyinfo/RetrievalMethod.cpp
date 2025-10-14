#include <javax/xml/crypto/dsig/keyinfo/RetrievalMethod.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/URIReference.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $Data = ::javax::xml::crypto::Data;
using $URIReference = ::javax::xml::crypto::URIReference;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

$MethodInfo _RetrievalMethod_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"dereference", "(Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.URIReferenceException"},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"getTransforms", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/Transform;>;", $PUBLIC | $ABSTRACT},
	{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RetrievalMethod_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.keyinfo.RetrievalMethod",
	nullptr,
	"javax.xml.crypto.URIReference,javax.xml.crypto.XMLStructure",
	nullptr,
	_RetrievalMethod_MethodInfo_
};

$Object* allocate$RetrievalMethod($Class* clazz) {
	return $of($alloc(RetrievalMethod));
}

int32_t RetrievalMethod::hashCode() {
	 return this->$URIReference::hashCode();
}

bool RetrievalMethod::equals(Object$* arg0) {
	 return this->$URIReference::equals(arg0);
}

$Object* RetrievalMethod::clone() {
	 return this->$URIReference::clone();
}

$String* RetrievalMethod::toString() {
	 return this->$URIReference::toString();
}

void RetrievalMethod::finalize() {
	this->$URIReference::finalize();
}

$Class* RetrievalMethod::load$($String* name, bool initialize) {
	$loadClass(RetrievalMethod, name, initialize, &_RetrievalMethod_ClassInfo_, allocate$RetrievalMethod);
	return class$;
}

$Class* RetrievalMethod::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax