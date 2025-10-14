#include <javax/xml/crypto/dsig/SignedInfo.h>

#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <javax/xml/crypto/dsig/SignatureMethod.h>
#include <jcpp.h>

using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $CanonicalizationMethod = ::javax::xml::crypto::dsig::CanonicalizationMethod;
using $SignatureMethod = ::javax::xml::crypto::dsig::SignatureMethod;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$MethodInfo _SignedInfo_MethodInfo_[] = {
	{"getCanonicalizationMethod", "()Ljavax/xml/crypto/dsig/CanonicalizationMethod;", nullptr, $PUBLIC | $ABSTRACT},
	{"getCanonicalizedData", "()Ljava/io/InputStream;", nullptr, $PUBLIC | $ABSTRACT},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"getReferences", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/Reference;>;", $PUBLIC | $ABSTRACT},
	{"getSignatureMethod", "()Ljavax/xml/crypto/dsig/SignatureMethod;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _SignedInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.SignedInfo",
	nullptr,
	"javax.xml.crypto.XMLStructure",
	nullptr,
	_SignedInfo_MethodInfo_
};

$Object* allocate$SignedInfo($Class* clazz) {
	return $of($alloc(SignedInfo));
}

$Class* SignedInfo::load$($String* name, bool initialize) {
	$loadClass(SignedInfo, name, initialize, &_SignedInfo_ClassInfo_, allocate$SignedInfo);
	return class$;
}

$Class* SignedInfo::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax