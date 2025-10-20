#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Enum.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/dsig/DigestMethod.h>
#include <jcpp.h>

using $SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithmArray = $Array<::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm>;
using $SignatureBaseRSA = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA;
using $SignatureBaseRSA$SignatureRSASSAPSS = ::com::sun::org::apache::xml::internal::security::algorithms::implementations::SignatureBaseRSA$SignatureRSASSAPSS;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DigestMethod = ::javax::xml::crypto::dsig::DigestMethod;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {
								namespace implementations {

$FieldInfo _SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm_FieldInfo_[] = {
	{"SHA224", "Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, SHA224)},
	{"SHA256", "Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, SHA256)},
	{"SHA384", "Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, SHA384)},
	{"SHA512", "Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, SHA512)},
	{"SHA3_224", "Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, SHA3_224)},
	{"SHA3_256", "Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, SHA3_256)},
	{"SHA3_384", "Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, SHA3_384)},
	{"SHA3_512", "Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, SHA3_512)},
	{"$VALUES", "[Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, $VALUES)},
	{"xmlDigestAlgorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, xmlDigestAlgorithm)},
	{"digestAlgorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, digestAlgorithm)},
	{"saltLength", "I", nullptr, $PRIVATE | $FINAL, $field(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, saltLength)},
	{}
};

$MethodInfo _SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm_MethodInfo_[] = {
	{"$values", "()[Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithmArray*(*)()>(&SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::$values))},
	{"<init>", "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;I)V", "(Ljava/lang/String;Ljava/lang/String;I)V", $PRIVATE, $method(static_cast<void(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::*)($String*,int32_t,$String*,$String*,int32_t)>(&SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::init$))},
	{"fromDigestAlgorithm", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm*(*)($String*)>(&SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::fromDigestAlgorithm)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"fromXmlDigestAlgorithm", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm*(*)($String*)>(&SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::fromXmlDigestAlgorithm)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getDigestAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::*)()>(&SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::getDigestAlgorithm))},
	{"getSaltLength", "()I", nullptr, $PUBLIC, $method(static_cast<int32_t(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::*)()>(&SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::getSaltLength))},
	{"getXmlDigestAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::*)()>(&SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::getXmlDigestAlgorithm))},
	{"valueOf", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PUBLIC | $STATIC, $method(static_cast<SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm*(*)($String*)>(&SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::valueOf))},
	{"values", "()[Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithmArray*(*)()>(&SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::values))},
	{}
};

$InnerClassInfo _SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA", "SignatureRSASSAPSS", $PUBLIC | $STATIC},
	{"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm", "com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS", "DigestAlgorithm", $PUBLIC | $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER | $ENUM,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm",
	"java.lang.Enum",
	nullptr,
	_SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm_FieldInfo_,
	_SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm_MethodInfo_,
	"Ljava/lang/Enum<Lcom/sun/org/apache/xml/internal/security/algorithms/implementations/SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm;>;",
	nullptr,
	_SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.algorithms.implementations.SignatureBaseRSA"
};

$Object* allocate$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm($Class* clazz) {
	return $of($alloc(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm));
}

SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA224 = nullptr;
SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA256 = nullptr;
SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA384 = nullptr;
SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA512 = nullptr;
SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA3_224 = nullptr;
SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA3_256 = nullptr;
SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA3_384 = nullptr;
SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA3_512 = nullptr;
$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithmArray* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::$VALUES = nullptr;

$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithmArray* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::$values() {
	$init(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm);
	return $new($SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithmArray, {
		SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA224,
		SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA256,
		SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA384,
		SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA512,
		SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA3_224,
		SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA3_256,
		SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA3_384,
		SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA3_512
	});
}

$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithmArray* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::values() {
	$init(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm);
	return $cast($SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithmArray, SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::$VALUES->clone());
}

SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::valueOf($String* name) {
	$init(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm);
	return $cast(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, $Enum::valueOf(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::class$, name));
}

void SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::init$($String* $enum$name, int32_t $enum$ordinal, $String* digestAlgorithm, $String* xmlDigestAlgorithm, int32_t saltLength) {
	$Enum::init$($enum$name, $enum$ordinal);
	$set(this, digestAlgorithm, digestAlgorithm);
	$set(this, xmlDigestAlgorithm, xmlDigestAlgorithm);
	this->saltLength = saltLength;
}

$String* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::getXmlDigestAlgorithm() {
	return this->xmlDigestAlgorithm;
}

$String* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::getDigestAlgorithm() {
	return this->digestAlgorithm;
}

int32_t SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::getSaltLength() {
	return this->saltLength;
}

SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::fromXmlDigestAlgorithm($String* xmlDigestAlgorithm) {
	$init(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm);
	$useLocalCurrentObjectStackCache();
	{
		$var($SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithmArray, arr$, SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* value = arr$->get(i$);
			{
				if ($nc($($nc(value)->getXmlDigestAlgorithm()))->equals(xmlDigestAlgorithm)) {
					return value;
				}
			}
		}
	}
	$throwNew($XMLSignatureException);
}

SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::fromDigestAlgorithm($String* digestAlgorithm) {
	$init(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm);
	$useLocalCurrentObjectStackCache();
	{
		$var($SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithmArray, arr$, SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::values());
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm* value = arr$->get(i$);
			{
				if ($nc($($nc(value)->getDigestAlgorithm()))->equals(digestAlgorithm)) {
					return value;
				}
			}
		}
	}
	$throwNew($XMLSignatureException);
}

void clinit$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm($Class* class$) {
	$init($DigestMethod);
	$assignStatic(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA224, $new(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, "SHA224"_s, 0, "SHA-224"_s, $DigestMethod::SHA224, 28));
	$assignStatic(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA256, $new(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, "SHA256"_s, 1, "SHA-256"_s, $DigestMethod::SHA256, 32));
	$assignStatic(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA384, $new(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, "SHA384"_s, 2, "SHA-384"_s, $DigestMethod::SHA384, 48));
	$assignStatic(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA512, $new(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, "SHA512"_s, 3, "SHA-512"_s, $DigestMethod::SHA512, 64));
	$assignStatic(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA3_224, $new(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, "SHA3_224"_s, 4, "SHA3-224"_s, $DigestMethod::SHA3_224, 28));
	$assignStatic(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA3_256, $new(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, "SHA3_256"_s, 5, "SHA3-256"_s, $DigestMethod::SHA3_256, 32));
	$assignStatic(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA3_384, $new(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, "SHA3_384"_s, 6, "SHA3-384"_s, $DigestMethod::SHA3_384, 48));
	$assignStatic(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SHA3_512, $new(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, "SHA3_512"_s, 7, "SHA3-512"_s, $DigestMethod::SHA3_512, 64));
	$assignStatic(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::$VALUES, SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::$values());
}

SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm() {
}

$Class* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::load$($String* name, bool initialize) {
	$loadClass(SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, name, initialize, &_SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm_ClassInfo_, clinit$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm, allocate$SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm);
	return class$;
}

$Class* SignatureBaseRSA$SignatureRSASSAPSS$DigestAlgorithm::class$ = nullptr;

								} // implementations
							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com