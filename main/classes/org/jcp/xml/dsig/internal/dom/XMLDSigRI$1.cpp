#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI$1.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _XMLDSigRI$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XMLDSigRI$1::*)()>(&XMLDSigRI$1::init$))},
	{"run", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XMLDSigRI$1_EnclosingMethodInfo_ = {
	"org.jcp.xml.dsig.internal.dom.XMLDSigRI",
	nullptr,
	nullptr
};

$InnerClassInfo _XMLDSigRI$1_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.XMLDSigRI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLDSigRI$1_ClassInfo_ = {
	$ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.XMLDSigRI$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_XMLDSigRI$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/String;>;",
	&_XMLDSigRI$1_EnclosingMethodInfo_,
	_XMLDSigRI$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.XMLDSigRI"
};

$Object* allocate$XMLDSigRI$1($Class* clazz) {
	return $of($alloc(XMLDSigRI$1));
}

void XMLDSigRI$1::init$() {
}

$Object* XMLDSigRI$1::run() {
	return $of($System::getProperty("java.specification.version"_s));
}

XMLDSigRI$1::XMLDSigRI$1() {
}

$Class* XMLDSigRI$1::load$($String* name, bool initialize) {
	$loadClass(XMLDSigRI$1, name, initialize, &_XMLDSigRI$1_ClassInfo_, allocate$XMLDSigRI$1);
	return class$;
}

$Class* XMLDSigRI$1::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org