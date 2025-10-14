#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformEnvelopedSignature$EnvelopedNodeFilter.h>

#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformEnvelopedSignature.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $NodeFilter = ::com::sun::org::apache::xml::internal::security::signature::NodeFilter;
using $TransformEnvelopedSignature = ::com::sun::org::apache::xml::internal::security::transforms::implementations::TransformEnvelopedSignature;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								namespace implementations {

$FieldInfo _TransformEnvelopedSignature$EnvelopedNodeFilter_FieldInfo_[] = {
	{"exclude", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE | $FINAL, $field(TransformEnvelopedSignature$EnvelopedNodeFilter, exclude)},
	{}
};

$MethodInfo _TransformEnvelopedSignature$EnvelopedNodeFilter_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, 0, $method(static_cast<void(TransformEnvelopedSignature$EnvelopedNodeFilter::*)($Node*)>(&TransformEnvelopedSignature$EnvelopedNodeFilter::init$))},
	{"isNodeInclude", "(Lorg/w3c/dom/Node;)I", nullptr, $PUBLIC},
	{"isNodeIncludeDO", "(Lorg/w3c/dom/Node;I)I", nullptr, $PUBLIC},
	{}
};

$InnerClassInfo _TransformEnvelopedSignature$EnvelopedNodeFilter_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformEnvelopedSignature$EnvelopedNodeFilter", "com.sun.org.apache.xml.internal.security.transforms.implementations.TransformEnvelopedSignature", "EnvelopedNodeFilter", $STATIC},
	{}
};

$ClassInfo _TransformEnvelopedSignature$EnvelopedNodeFilter_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformEnvelopedSignature$EnvelopedNodeFilter",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.security.signature.NodeFilter",
	_TransformEnvelopedSignature$EnvelopedNodeFilter_FieldInfo_,
	_TransformEnvelopedSignature$EnvelopedNodeFilter_MethodInfo_,
	nullptr,
	nullptr,
	_TransformEnvelopedSignature$EnvelopedNodeFilter_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformEnvelopedSignature"
};

$Object* allocate$TransformEnvelopedSignature$EnvelopedNodeFilter($Class* clazz) {
	return $of($alloc(TransformEnvelopedSignature$EnvelopedNodeFilter));
}

void TransformEnvelopedSignature$EnvelopedNodeFilter::init$($Node* n) {
	$set(this, exclude, n);
}

int32_t TransformEnvelopedSignature$EnvelopedNodeFilter::isNodeIncludeDO($Node* n, int32_t level) {
	if (n == this->exclude) {
		return -1;
	}
	return 1;
}

int32_t TransformEnvelopedSignature$EnvelopedNodeFilter::isNodeInclude($Node* n) {
	if (n == this->exclude || $XMLUtils::isDescendantOrSelf(this->exclude, n)) {
		return -1;
	}
	return 1;
}

TransformEnvelopedSignature$EnvelopedNodeFilter::TransformEnvelopedSignature$EnvelopedNodeFilter() {
}

$Class* TransformEnvelopedSignature$EnvelopedNodeFilter::load$($String* name, bool initialize) {
	$loadClass(TransformEnvelopedSignature$EnvelopedNodeFilter, name, initialize, &_TransformEnvelopedSignature$EnvelopedNodeFilter_ClassInfo_, allocate$TransformEnvelopedSignature$EnvelopedNodeFilter);
	return class$;
}

$Class* TransformEnvelopedSignature$EnvelopedNodeFilter::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com