#include <com/sun/org/apache/xml/internal/security/Init$2.h>

#include <com/sun/org/apache/xml/internal/security/Init.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Init = ::com::sun::org::apache::xml::internal::security::Init;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Enumeration = ::java::util::Enumeration;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {

$MethodInfo _Init$2_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Init$2::*)()>(&Init$2::init$))},
	{"hasMoreElements", "()Z", nullptr, $PUBLIC},
	{"nextElement", "()Ljava/net/URL;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Init$2_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xml.internal.security.Init",
	"getResources",
	"(Ljava/lang/String;Ljava/lang/Class;)Ljava/util/List;"
};

$InnerClassInfo _Init$2_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.Init$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Init$2_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.Init$2",
	"java.lang.Object",
	"java.util.Enumeration",
	nullptr,
	_Init$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Enumeration<Ljava/net/URL;>;",
	&_Init$2_EnclosingMethodInfo_,
	_Init$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.Init"
};

$Object* allocate$Init$2($Class* clazz) {
	return $of($alloc(Init$2));
}

void Init$2::init$() {
}

bool Init$2::hasMoreElements() {
	return false;
}

$Object* Init$2::nextElement() {
	return $of(nullptr);
}

Init$2::Init$2() {
}

$Class* Init$2::load$($String* name, bool initialize) {
	$loadClass(Init$2, name, initialize, &_Init$2_ClassInfo_, allocate$Init$2);
	return class$;
}

$Class* Init$2::class$ = nullptr;

						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com