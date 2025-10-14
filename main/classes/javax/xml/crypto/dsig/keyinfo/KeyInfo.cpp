#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace keyinfo {

$MethodInfo _KeyInfo_MethodInfo_[] = {
	{"getContent", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PUBLIC | $ABSTRACT},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{"marshal", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.crypto.MarshalException"},
	{}
};

$ClassInfo _KeyInfo_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.keyinfo.KeyInfo",
	nullptr,
	"javax.xml.crypto.XMLStructure",
	nullptr,
	_KeyInfo_MethodInfo_
};

$Object* allocate$KeyInfo($Class* clazz) {
	return $of($alloc(KeyInfo));
}

$Class* KeyInfo::load$($String* name, bool initialize) {
	$loadClass(KeyInfo, name, initialize, &_KeyInfo_ClassInfo_, allocate$KeyInfo);
	return class$;
}

$Class* KeyInfo::class$ = nullptr;

				} // keyinfo
			} // dsig
		} // crypto
	} // xml
} // javax