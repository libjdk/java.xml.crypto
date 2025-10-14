#include <org/jcp/xml/dsig/internal/dom/DOMKeyInfoFactory$UnmarshalContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyInfoFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMKeyInfoFactory = ::org::jcp::xml::dsig::internal::dom::DOMKeyInfoFactory;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMKeyInfoFactory$UnmarshalContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DOMKeyInfoFactory$UnmarshalContext::*)()>(&DOMKeyInfoFactory$UnmarshalContext::init$))},
	{}
};

$InnerClassInfo _DOMKeyInfoFactory$UnmarshalContext_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory$UnmarshalContext", "org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory", "UnmarshalContext", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DOMKeyInfoFactory$UnmarshalContext_ClassInfo_ = {
	$ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory$UnmarshalContext",
	"javax.xml.crypto.dom.DOMCryptoContext",
	nullptr,
	nullptr,
	_DOMKeyInfoFactory$UnmarshalContext_MethodInfo_,
	nullptr,
	nullptr,
	_DOMKeyInfoFactory$UnmarshalContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory"
};

$Object* allocate$DOMKeyInfoFactory$UnmarshalContext($Class* clazz) {
	return $of($alloc(DOMKeyInfoFactory$UnmarshalContext));
}

void DOMKeyInfoFactory$UnmarshalContext::init$() {
	$DOMCryptoContext::init$();
}

DOMKeyInfoFactory$UnmarshalContext::DOMKeyInfoFactory$UnmarshalContext() {
}

$Class* DOMKeyInfoFactory$UnmarshalContext::load$($String* name, bool initialize) {
	$loadClass(DOMKeyInfoFactory$UnmarshalContext, name, initialize, &_DOMKeyInfoFactory$UnmarshalContext_ClassInfo_, allocate$DOMKeyInfoFactory$UnmarshalContext);
	return class$;
}

$Class* DOMKeyInfoFactory$UnmarshalContext::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org