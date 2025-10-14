#include <com/sun/org/apache/xml/internal/security/algorithms/Algorithm.h>

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef _ATT_ALGORITHM

using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace algorithms {

$MethodInfo _Algorithm_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Algorithm::*)($Document*,$String*)>(&Algorithm::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(Algorithm::*)($Element*,$String*)>(&Algorithm::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getAlgorithmURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setAlgorithmURI", "(Ljava/lang/String;)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _Algorithm_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.algorithms.Algorithm",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	nullptr,
	nullptr,
	_Algorithm_MethodInfo_
};

$Object* allocate$Algorithm($Class* clazz) {
	return $of($alloc(Algorithm));
}

void Algorithm::init$($Document* doc, $String* algorithmURI) {
	$SignatureElementProxy::init$(doc);
	this->setAlgorithmURI(algorithmURI);
}

void Algorithm::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

$String* Algorithm::getAlgorithmURI() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ALGORITHM);
}

void Algorithm::setAlgorithmURI($String* algorithmURI) {
	if (algorithmURI != nullptr) {
		$init($Constants);
		setLocalAttribute($Constants::_ATT_ALGORITHM, algorithmURI);
	}
}

Algorithm::Algorithm() {
}

$Class* Algorithm::load$($String* name, bool initialize) {
	$loadClass(Algorithm, name, initialize, &_Algorithm_ClassInfo_, allocate$Algorithm);
	return class$;
}

$Class* Algorithm::class$ = nullptr;

							} // algorithms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com