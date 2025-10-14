#include <com/sun/org/apache/xml/internal/security/keys/content/PGPData.h>

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

#undef _TAG_PGPDATA

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

$MethodInfo _PGPData_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(PGPData::*)($Element*,$String*)>(&PGPData::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _PGPData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.PGPData",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent",
	nullptr,
	_PGPData_MethodInfo_
};

$Object* allocate$PGPData($Class* clazz) {
	return $of($alloc(PGPData));
}

int32_t PGPData::hashCode() {
	 return this->$SignatureElementProxy::hashCode();
}

bool PGPData::equals(Object$* arg0) {
	 return this->$SignatureElementProxy::equals(arg0);
}

$Object* PGPData::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* PGPData::toString() {
	 return this->$SignatureElementProxy::toString();
}

void PGPData::finalize() {
	this->$SignatureElementProxy::finalize();
}

void PGPData::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

$String* PGPData::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_PGPDATA;
}

PGPData::PGPData() {
}

$Class* PGPData::load$($String* name, bool initialize) {
	$loadClass(PGPData, name, initialize, &_PGPData_ClassInfo_, allocate$PGPData);
	return class$;
}

$Class* PGPData::class$ = nullptr;

								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com