#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef EXCLUSIVE
#undef EXCLUSIVE_WITH_COMMENTS
#undef INCLUSIVE
#undef INCLUSIVE_11
#undef INCLUSIVE_11_WITH_COMMENTS
#undef INCLUSIVE_WITH_COMMENTS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Transform = ::javax::xml::crypto::dsig::Transform;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$FieldInfo _CanonicalizationMethod_FieldInfo_[] = {
	{"INCLUSIVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CanonicalizationMethod, INCLUSIVE)},
	{"INCLUSIVE_WITH_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CanonicalizationMethod, INCLUSIVE_WITH_COMMENTS)},
	{"EXCLUSIVE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CanonicalizationMethod, EXCLUSIVE)},
	{"EXCLUSIVE_WITH_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CanonicalizationMethod, EXCLUSIVE_WITH_COMMENTS)},
	{"INCLUSIVE_11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CanonicalizationMethod, INCLUSIVE_11)},
	{"INCLUSIVE_11_WITH_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CanonicalizationMethod, INCLUSIVE_11_WITH_COMMENTS)},
	{}
};

$MethodInfo _CanonicalizationMethod_MethodInfo_[] = {
	{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CanonicalizationMethod_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.dsig.CanonicalizationMethod",
	nullptr,
	"javax.xml.crypto.dsig.Transform",
	_CanonicalizationMethod_FieldInfo_,
	_CanonicalizationMethod_MethodInfo_
};

$Object* allocate$CanonicalizationMethod($Class* clazz) {
	return $of($alloc(CanonicalizationMethod));
}


$String* CanonicalizationMethod::INCLUSIVE = nullptr;

$String* CanonicalizationMethod::INCLUSIVE_WITH_COMMENTS = nullptr;

$String* CanonicalizationMethod::EXCLUSIVE = nullptr;

$String* CanonicalizationMethod::EXCLUSIVE_WITH_COMMENTS = nullptr;

$String* CanonicalizationMethod::INCLUSIVE_11 = nullptr;

$String* CanonicalizationMethod::INCLUSIVE_11_WITH_COMMENTS = nullptr;

void clinit$CanonicalizationMethod($Class* class$) {
	$assignStatic(CanonicalizationMethod::INCLUSIVE, "http://www.w3.org/TR/2001/REC-xml-c14n-20010315"_s);
	$assignStatic(CanonicalizationMethod::INCLUSIVE_WITH_COMMENTS, "http://www.w3.org/TR/2001/REC-xml-c14n-20010315#WithComments"_s);
	$assignStatic(CanonicalizationMethod::EXCLUSIVE, "http://www.w3.org/2001/10/xml-exc-c14n#"_s);
	$assignStatic(CanonicalizationMethod::EXCLUSIVE_WITH_COMMENTS, "http://www.w3.org/2001/10/xml-exc-c14n#WithComments"_s);
	$assignStatic(CanonicalizationMethod::INCLUSIVE_11, "http://www.w3.org/2006/12/xml-c14n11"_s);
	$assignStatic(CanonicalizationMethod::INCLUSIVE_11_WITH_COMMENTS, "http://www.w3.org/2006/12/xml-c14n11#WithComments"_s);
}

$Class* CanonicalizationMethod::load$($String* name, bool initialize) {
	$loadClass(CanonicalizationMethod, name, initialize, &_CanonicalizationMethod_ClassInfo_, clinit$CanonicalizationMethod, allocate$CanonicalizationMethod);
	return class$;
}

$Class* CanonicalizationMethod::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax