#include <com/sun/org/apache/xml/internal/security/utils/XPathAPI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$MethodInfo _XPathAPI_MethodInfo_[] = {
	{"clear", "()V", nullptr, $PUBLIC | $ABSTRACT},
	{"evaluate", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerException"},
	{"selectNodeList", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;Lorg/w3c/dom/Node;)Lorg/w3c/dom/NodeList;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "javax.xml.transform.TransformerException"},
	{}
};

$ClassInfo _XPathAPI_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.utils.XPathAPI",
	nullptr,
	nullptr,
	nullptr,
	_XPathAPI_MethodInfo_
};

$Object* allocate$XPathAPI($Class* clazz) {
	return $of($alloc(XPathAPI));
}

$Class* XPathAPI::load$($String* name, bool initialize) {
	$loadClass(XPathAPI, name, initialize, &_XPathAPI_ClassInfo_, allocate$XPathAPI);
	return class$;
}

$Class* XPathAPI::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com