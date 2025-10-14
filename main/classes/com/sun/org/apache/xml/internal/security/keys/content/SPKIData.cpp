#include <com/sun/org/apache/xml/internal/security/keys/content/SPKIData.h>

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef _TAG_SPKIDATA

using $KeyInfoContent = ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace content {

$MethodInfo _SPKIData_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SPKIData::*)($Element*,$String*)>(&SPKIData::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SPKIData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.SPKIData",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent",
	nullptr,
	_SPKIData_MethodInfo_
};

$Object* allocate$SPKIData($Class* clazz) {
	return $of($alloc(SPKIData));
}

int32_t SPKIData::hashCode() {
	 return this->$SignatureElementProxy::hashCode();
}

bool SPKIData::equals(Object$* arg0) {
	 return this->$SignatureElementProxy::equals(arg0);
}

$Object* SPKIData::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* SPKIData::toString() {
	 return this->$SignatureElementProxy::toString();
}

void SPKIData::finalize() {
	this->$SignatureElementProxy::finalize();
}

void SPKIData::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

$String* SPKIData::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_SPKIDATA;
}

SPKIData::SPKIData() {
}

$Class* SPKIData::load$($String* name, bool initialize) {
	$loadClass(SPKIData, name, initialize, &_SPKIData_ClassInfo_, allocate$SPKIData);
	return class$;
}

$Class* SPKIData::class$ = nullptr;

								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com