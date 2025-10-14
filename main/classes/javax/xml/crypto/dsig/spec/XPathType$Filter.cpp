#include <javax/xml/crypto/dsig/spec/XPathType$Filter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/dsig/spec/XPathType.h>
#include <jcpp.h>

#undef INTERSECT
#undef SUBTRACT
#undef UNION

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $XPathType = ::javax::xml::crypto::dsig::spec::XPathType;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$FieldInfo _XPathType$Filter_FieldInfo_[] = {
	{"operation", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XPathType$Filter, operation)},
	{"INTERSECT", "Ljavax/xml/crypto/dsig/spec/XPathType$Filter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathType$Filter, INTERSECT)},
	{"SUBTRACT", "Ljavax/xml/crypto/dsig/spec/XPathType$Filter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathType$Filter, SUBTRACT)},
	{"UNION", "Ljavax/xml/crypto/dsig/spec/XPathType$Filter;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(XPathType$Filter, UNION)},
	{}
};

$MethodInfo _XPathType$Filter_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(XPathType$Filter::*)($String*)>(&XPathType$Filter::init$))},
	{"toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _XPathType$Filter_InnerClassesInfo_[] = {
	{"javax.xml.crypto.dsig.spec.XPathType$Filter", "javax.xml.crypto.dsig.spec.XPathType", "Filter", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XPathType$Filter_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"javax.xml.crypto.dsig.spec.XPathType$Filter",
	"java.lang.Object",
	nullptr,
	_XPathType$Filter_FieldInfo_,
	_XPathType$Filter_MethodInfo_,
	nullptr,
	nullptr,
	_XPathType$Filter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.crypto.dsig.spec.XPathType"
};

$Object* allocate$XPathType$Filter($Class* clazz) {
	return $of($alloc(XPathType$Filter));
}


XPathType$Filter* XPathType$Filter::INTERSECT = nullptr;

XPathType$Filter* XPathType$Filter::SUBTRACT = nullptr;

XPathType$Filter* XPathType$Filter::UNION = nullptr;

void XPathType$Filter::init$($String* operation) {
	$set(this, operation, operation);
}

$String* XPathType$Filter::toString() {
	return this->operation;
}

void clinit$XPathType$Filter($Class* class$) {
	$assignStatic(XPathType$Filter::INTERSECT, $new(XPathType$Filter, "intersect"_s));
	$assignStatic(XPathType$Filter::SUBTRACT, $new(XPathType$Filter, "subtract"_s));
	$assignStatic(XPathType$Filter::UNION, $new(XPathType$Filter, "union"_s));
}

XPathType$Filter::XPathType$Filter() {
}

$Class* XPathType$Filter::load$($String* name, bool initialize) {
	$loadClass(XPathType$Filter, name, initialize, &_XPathType$Filter_ClassInfo_, clinit$XPathType$Filter, allocate$XPathType$Filter);
	return class$;
}

$Class* XPathType$Filter::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax