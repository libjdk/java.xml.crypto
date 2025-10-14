#include <com/sun/org/apache/xml/internal/security/signature/NodeFilter.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

$MethodInfo _NodeFilter_MethodInfo_[] = {
	{"isNodeInclude", "(Lorg/w3c/dom/Node;)I", nullptr, $PUBLIC | $ABSTRACT},
	{"isNodeIncludeDO", "(Lorg/w3c/dom/Node;I)I", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _NodeFilter_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.signature.NodeFilter",
	nullptr,
	nullptr,
	nullptr,
	_NodeFilter_MethodInfo_
};

$Object* allocate$NodeFilter($Class* clazz) {
	return $of($alloc(NodeFilter));
}

$Class* NodeFilter::load$($String* name, bool initialize) {
	$loadClass(NodeFilter, name, initialize, &_NodeFilter_ClassInfo_, allocate$NodeFilter);
	return class$;
}

$Class* NodeFilter::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com