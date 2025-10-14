#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/KeyValueContent.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PublicKey.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace content {
									namespace keyvalues {

$MethodInfo _KeyValueContent_MethodInfo_[] = {
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{}
};

$ClassInfo _KeyValueContent_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.keys.content.keyvalues.KeyValueContent",
	nullptr,
	nullptr,
	nullptr,
	_KeyValueContent_MethodInfo_
};

$Object* allocate$KeyValueContent($Class* clazz) {
	return $of($alloc(KeyValueContent));
}

$Class* KeyValueContent::load$($String* name, bool initialize) {
	$loadClass(KeyValueContent, name, initialize, &_KeyValueContent_ClassInfo_, allocate$KeyValueContent);
	return class$;
}

$Class* KeyValueContent::class$ = nullptr;

									} // keyvalues
								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com