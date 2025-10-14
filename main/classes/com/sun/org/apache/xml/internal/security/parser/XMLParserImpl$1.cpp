#include <com/sun/org/apache/xml/internal/security/parser/XMLParserImpl$1.h>

#include <com/sun/org/apache/xml/internal/security/parser/XMLParserImpl.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassLoader.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Thread.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLParserImpl = ::com::sun::org::apache::xml::internal::security::parser::XMLParserImpl;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassLoader = ::java::lang::ClassLoader;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace parser {

$MethodInfo _XMLParserImpl$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(XMLParserImpl$1::*)()>(&XMLParserImpl$1::init$))},
	{"run", "()Ljava/lang/ClassLoader;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XMLParserImpl$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl",
	"getContextClassLoader",
	"()Ljava/lang/ClassLoader;"
};

$InnerClassInfo _XMLParserImpl$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLParserImpl$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	_XMLParserImpl$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/ClassLoader;>;",
	&_XMLParserImpl$1_EnclosingMethodInfo_,
	_XMLParserImpl$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.parser.XMLParserImpl"
};

$Object* allocate$XMLParserImpl$1($Class* clazz) {
	return $of($alloc(XMLParserImpl$1));
}

void XMLParserImpl$1::init$() {
}

$Object* XMLParserImpl$1::run() {
	$beforeCallerSensitive();
	return $of($($Thread::currentThread())->getContextClassLoader());
}

XMLParserImpl$1::XMLParserImpl$1() {
}

$Class* XMLParserImpl$1::load$($String* name, bool initialize) {
	$loadClass(XMLParserImpl$1, name, initialize, &_XMLParserImpl$1_ClassInfo_, allocate$XMLParserImpl$1);
	return class$;
}

$Class* XMLParserImpl$1::class$ = nullptr;

							} // parser
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com