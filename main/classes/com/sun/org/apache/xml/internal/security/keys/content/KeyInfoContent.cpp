#include <com/sun/org/apache/xml/internal/security/keys/content/KeyInfoContent.h>

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

$ClassInfo _KeyInfoContent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent"
};

$Object* allocate$KeyInfoContent($Class* clazz) {
	return $of($alloc(KeyInfoContent));
}

$Class* KeyInfoContent::load$($String* name, bool initialize) {
	$loadClass(KeyInfoContent, name, initialize, &_KeyInfoContent_ClassInfo_, allocate$KeyInfoContent);
	return class$;
}

$Class* KeyInfoContent::class$ = nullptr;

								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com