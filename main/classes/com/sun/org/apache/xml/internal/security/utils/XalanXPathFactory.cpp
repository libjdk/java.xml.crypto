#include <com/sun/org/apache/xml/internal/security/utils/XalanXPathFactory.h>

#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/XPathFactory.h>
#include <com/sun/org/apache/xml/internal/security/utils/XalanXPathAPI.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XPathAPI;
using $XPathFactory = ::com::sun::org::apache::xml::internal::security::utils::XPathFactory;
using $XalanXPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XalanXPathAPI;
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

$MethodInfo _XalanXPathFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XalanXPathFactory::*)()>(&XalanXPathFactory::init$))},
	{"newXPathAPI", "()Lcom/sun/org/apache/xml/internal/security/utils/XPathAPI;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XalanXPathFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.XalanXPathFactory",
	"com.sun.org.apache.xml.internal.security.utils.XPathFactory",
	nullptr,
	nullptr,
	_XalanXPathFactory_MethodInfo_
};

$Object* allocate$XalanXPathFactory($Class* clazz) {
	return $of($alloc(XalanXPathFactory));
}

void XalanXPathFactory::init$() {
	$XPathFactory::init$();
}

$XPathAPI* XalanXPathFactory::newXPathAPI() {
	return $new($XalanXPathAPI);
}

XalanXPathFactory::XalanXPathFactory() {
}

$Class* XalanXPathFactory::load$($String* name, bool initialize) {
	$loadClass(XalanXPathFactory, name, initialize, &_XalanXPathFactory_ClassInfo_, allocate$XalanXPathFactory);
	return class$;
}

$Class* XalanXPathFactory::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com