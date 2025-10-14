#include <com/sun/org/apache/xml/internal/security/utils/JDKXPathFactory.h>

#include <com/sun/org/apache/xml/internal/security/utils/JDKXPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathFactory.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $JDKXPathAPI = ::com::sun::org::apache::xml::internal::security::utils::JDKXPathAPI;
using $XPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XPathAPI;
using $XPathFactory = ::com::sun::org::apache::xml::internal::security::utils::XPathFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$MethodInfo _JDKXPathFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(JDKXPathFactory::*)()>(&JDKXPathFactory::init$))},
	{"newXPathAPI", "()Lcom/sun/org/apache/xml/internal/security/utils/XPathAPI;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _JDKXPathFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.JDKXPathFactory",
	"com.sun.org.apache.xml.internal.security.utils.XPathFactory",
	nullptr,
	nullptr,
	_JDKXPathFactory_MethodInfo_
};

$Object* allocate$JDKXPathFactory($Class* clazz) {
	return $of($alloc(JDKXPathFactory));
}

void JDKXPathFactory::init$() {
	$XPathFactory::init$();
}

$XPathAPI* JDKXPathFactory::newXPathAPI() {
	return $new($JDKXPathAPI);
}

JDKXPathFactory::JDKXPathFactory() {
}

$Class* JDKXPathFactory::load$($String* name, bool initialize) {
	$loadClass(JDKXPathFactory, name, initialize, &_JDKXPathFactory_ClassInfo_, allocate$JDKXPathFactory);
	return class$;
}

$Class* JDKXPathFactory::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com