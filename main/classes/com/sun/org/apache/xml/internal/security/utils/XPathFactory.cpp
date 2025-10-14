#include <com/sun/org/apache/xml/internal/security/utils/XPathFactory.h>

#include <com/sun/org/apache/xml/internal/security/utils/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/JDKXPathFactory.h>
#include <com/sun/org/apache/xml/internal/security/utils/XalanXPathAPI.h>
#include <com/sun/org/apache/xml/internal/security/utils/XalanXPathFactory.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassLoaderUtils = ::com::sun::org::apache::xml::internal::security::utils::ClassLoaderUtils;
using $JDKXPathFactory = ::com::sun::org::apache::xml::internal::security::utils::JDKXPathFactory;
using $XPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XPathAPI;
using $XalanXPathAPI = ::com::sun::org::apache::xml::internal::security::utils::XalanXPathAPI;
using $XalanXPathFactory = ::com::sun::org::apache::xml::internal::security::utils::XalanXPathFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$FieldInfo _XPathFactory_FieldInfo_[] = {
	{"xalanInstalled", "Z", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XPathFactory, xalanInstalled)},
	{}
};

$MethodInfo _XPathFactory_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XPathFactory::*)()>(&XPathFactory::init$))},
	{"newInstance", "()Lcom/sun/org/apache/xml/internal/security/utils/XPathFactory;", nullptr, $PUBLIC | $STATIC, $method(static_cast<XPathFactory*(*)()>(&XPathFactory::newInstance))},
	{"newXPathAPI", "()Lcom/sun/org/apache/xml/internal/security/utils/XPathAPI;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _XPathFactory_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.utils.XPathFactory",
	"java.lang.Object",
	nullptr,
	_XPathFactory_FieldInfo_,
	_XPathFactory_MethodInfo_
};

$Object* allocate$XPathFactory($Class* clazz) {
	return $of($alloc(XPathFactory));
}

bool XPathFactory::xalanInstalled = false;

void XPathFactory::init$() {
}

XPathFactory* XPathFactory::newInstance() {
	$init(XPathFactory);
	if (XPathFactory::xalanInstalled && $XalanXPathAPI::isInstalled()) {
		return $new($XalanXPathFactory);
	}
	return $new($JDKXPathFactory);
}

void clinit$XPathFactory($Class* class$) {
	{
		bool installed = false;
		try {
			$Class* funcTableClass = $ClassLoaderUtils::loadClass("com.sun.org.apache.xpath.internal.compiler.FunctionTable"_s, XPathFactory::class$);
			if (funcTableClass != nullptr) {
				installed = true;
			}
		} catch ($Exception&) {
			$catch();
		}
		XPathFactory::xalanInstalled = installed;
	}
}

XPathFactory::XPathFactory() {
}

$Class* XPathFactory::load$($String* name, bool initialize) {
	$loadClass(XPathFactory, name, initialize, &_XPathFactory_ClassInfo_, clinit$XPathFactory, allocate$XPathFactory);
	return class$;
}

$Class* XPathFactory::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com