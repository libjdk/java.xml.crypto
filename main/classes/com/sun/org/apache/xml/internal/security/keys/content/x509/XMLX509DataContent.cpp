#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509DataContent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace content {
									namespace x509 {

$ClassInfo _XMLX509DataContent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509DataContent"
};

$Object* allocate$XMLX509DataContent($Class* clazz) {
	return $of($alloc(XMLX509DataContent));
}

$Class* XMLX509DataContent::load$($String* name, bool initialize) {
	$loadClass(XMLX509DataContent, name, initialize, &_XMLX509DataContent_ClassInfo_, allocate$XMLX509DataContent);
	return class$;
}

$Class* XMLX509DataContent::class$ = nullptr;

									} // x509
								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com