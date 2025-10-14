#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type.h>

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
#include <org/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod.h>
#include <jcpp.h>

#undef DSA
#undef ECDSA
#undef HMAC
#undef RSA

using $AbstractDOMSignatureMethod$TypeArray = $Array<::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod$Type>;
using $ClassInfo = ::java::lang::ClassInfo;
using $Enum = ::java::lang::Enum;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractDOMSignatureMethod = ::org::jcp::xml::dsig::internal::dom::AbstractDOMSignatureMethod;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _AbstractDOMSignatureMethod$Type_FieldInfo_[] = {
	{"DSA", "Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractDOMSignatureMethod$Type, DSA)},
	{"RSA", "Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractDOMSignatureMethod$Type, RSA)},
	{"ECDSA", "Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractDOMSignatureMethod$Type, ECDSA)},
	{"HMAC", "Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PUBLIC | $STATIC | $FINAL | $ENUM, $staticField(AbstractDOMSignatureMethod$Type, HMAC)},
	{"$VALUES", "[Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PRIVATE | $STATIC | $FINAL | $SYNTHETIC, $staticField(AbstractDOMSignatureMethod$Type, $VALUES)},
	{}
};

$MethodInfo _AbstractDOMSignatureMethod$Type_MethodInfo_[] = {
	{"$values", "()[Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$AbstractDOMSignatureMethod$TypeArray*(*)()>(&AbstractDOMSignatureMethod$Type::$values))},
	{"<init>", "(Ljava/lang/String;I)V", "()V", $PRIVATE, $method(static_cast<void(AbstractDOMSignatureMethod$Type::*)($String*,int32_t)>(&AbstractDOMSignatureMethod$Type::init$))},
	{"valueOf", "(Ljava/lang/String;)Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<AbstractDOMSignatureMethod$Type*(*)($String*)>(&AbstractDOMSignatureMethod$Type::valueOf))},
	{"values", "()[Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$AbstractDOMSignatureMethod$TypeArray*(*)()>(&AbstractDOMSignatureMethod$Type::values))},
	{}
};

$InnerClassInfo _AbstractDOMSignatureMethod$Type_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod$Type", "org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod", "Type", $STATIC | $FINAL | $ENUM},
	{}
};

$ClassInfo _AbstractDOMSignatureMethod$Type_ClassInfo_ = {
	$FINAL | $ACC_SUPER | $ENUM,
	"org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod$Type",
	"java.lang.Enum",
	nullptr,
	_AbstractDOMSignatureMethod$Type_FieldInfo_,
	_AbstractDOMSignatureMethod$Type_MethodInfo_,
	"Ljava/lang/Enum<Lorg/jcp/xml/dsig/internal/dom/AbstractDOMSignatureMethod$Type;>;",
	nullptr,
	_AbstractDOMSignatureMethod$Type_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.AbstractDOMSignatureMethod"
};

$Object* allocate$AbstractDOMSignatureMethod$Type($Class* clazz) {
	return $of($alloc(AbstractDOMSignatureMethod$Type));
}

AbstractDOMSignatureMethod$Type* AbstractDOMSignatureMethod$Type::DSA = nullptr;
AbstractDOMSignatureMethod$Type* AbstractDOMSignatureMethod$Type::RSA = nullptr;
AbstractDOMSignatureMethod$Type* AbstractDOMSignatureMethod$Type::ECDSA = nullptr;
AbstractDOMSignatureMethod$Type* AbstractDOMSignatureMethod$Type::HMAC = nullptr;
$AbstractDOMSignatureMethod$TypeArray* AbstractDOMSignatureMethod$Type::$VALUES = nullptr;

$AbstractDOMSignatureMethod$TypeArray* AbstractDOMSignatureMethod$Type::$values() {
	$init(AbstractDOMSignatureMethod$Type);
	return $new($AbstractDOMSignatureMethod$TypeArray, {
		AbstractDOMSignatureMethod$Type::DSA,
		AbstractDOMSignatureMethod$Type::RSA,
		AbstractDOMSignatureMethod$Type::ECDSA,
		AbstractDOMSignatureMethod$Type::HMAC
	});
}

$AbstractDOMSignatureMethod$TypeArray* AbstractDOMSignatureMethod$Type::values() {
	$init(AbstractDOMSignatureMethod$Type);
	return $cast($AbstractDOMSignatureMethod$TypeArray, AbstractDOMSignatureMethod$Type::$VALUES->clone());
}

AbstractDOMSignatureMethod$Type* AbstractDOMSignatureMethod$Type::valueOf($String* name) {
	$init(AbstractDOMSignatureMethod$Type);
	return $cast(AbstractDOMSignatureMethod$Type, $Enum::valueOf(AbstractDOMSignatureMethod$Type::class$, name));
}

void AbstractDOMSignatureMethod$Type::init$($String* $enum$name, int32_t $enum$ordinal) {
	$Enum::init$($enum$name, $enum$ordinal);
}

void clinit$AbstractDOMSignatureMethod$Type($Class* class$) {
	$assignStatic(AbstractDOMSignatureMethod$Type::DSA, $new(AbstractDOMSignatureMethod$Type, "DSA"_s, 0));
	$assignStatic(AbstractDOMSignatureMethod$Type::RSA, $new(AbstractDOMSignatureMethod$Type, "RSA"_s, 1));
	$assignStatic(AbstractDOMSignatureMethod$Type::ECDSA, $new(AbstractDOMSignatureMethod$Type, "ECDSA"_s, 2));
	$assignStatic(AbstractDOMSignatureMethod$Type::HMAC, $new(AbstractDOMSignatureMethod$Type, "HMAC"_s, 3));
	$assignStatic(AbstractDOMSignatureMethod$Type::$VALUES, AbstractDOMSignatureMethod$Type::$values());
}

AbstractDOMSignatureMethod$Type::AbstractDOMSignatureMethod$Type() {
}

$Class* AbstractDOMSignatureMethod$Type::load$($String* name, bool initialize) {
	$loadClass(AbstractDOMSignatureMethod$Type, name, initialize, &_AbstractDOMSignatureMethod$Type_ClassInfo_, clinit$AbstractDOMSignatureMethod$Type, allocate$AbstractDOMSignatureMethod$Type);
	return class$;
}

$Class* AbstractDOMSignatureMethod$Type::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org