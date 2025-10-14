#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignatureFactory$UnmarshalContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignatureFactory.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMXMLSignatureFactory = ::org::jcp::xml::dsig::internal::dom::DOMXMLSignatureFactory;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMXMLSignatureFactory$UnmarshalContext_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(DOMXMLSignatureFactory$UnmarshalContext::*)()>(&DOMXMLSignatureFactory$UnmarshalContext::init$))},
	{}
};

$InnerClassInfo _DOMXMLSignatureFactory$UnmarshalContext_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory$UnmarshalContext", "org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory", "UnmarshalContext", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _DOMXMLSignatureFactory$UnmarshalContext_ClassInfo_ = {
	$ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory$UnmarshalContext",
	"javax.xml.crypto.dom.DOMCryptoContext",
	nullptr,
	nullptr,
	_DOMXMLSignatureFactory$UnmarshalContext_MethodInfo_,
	nullptr,
	nullptr,
	_DOMXMLSignatureFactory$UnmarshalContext_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory"
};

$Object* allocate$DOMXMLSignatureFactory$UnmarshalContext($Class* clazz) {
	return $of($alloc(DOMXMLSignatureFactory$UnmarshalContext));
}

void DOMXMLSignatureFactory$UnmarshalContext::init$() {
	$DOMCryptoContext::init$();
}

DOMXMLSignatureFactory$UnmarshalContext::DOMXMLSignatureFactory$UnmarshalContext() {
}

$Class* DOMXMLSignatureFactory$UnmarshalContext::load$($String* name, bool initialize) {
	$loadClass(DOMXMLSignatureFactory$UnmarshalContext, name, initialize, &_DOMXMLSignatureFactory$UnmarshalContext_ClassInfo_, allocate$DOMXMLSignatureFactory$UnmarshalContext);
	return class$;
}

$Class* DOMXMLSignatureFactory$UnmarshalContext::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org