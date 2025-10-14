#include <com/sun/org/apache/xml/internal/security/keys/content/MgmtData.h>

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

#undef _TAG_MGMTDATA

using $KeyInfoContent = ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent;
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
							namespace keys {
								namespace content {

$MethodInfo _MgmtData_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MgmtData::*)($Element*,$String*)>(&MgmtData::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(MgmtData::*)($Document*,$String*)>(&MgmtData::init$))},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMgmtData", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _MgmtData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.MgmtData",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent",
	nullptr,
	_MgmtData_MethodInfo_
};

$Object* allocate$MgmtData($Class* clazz) {
	return $of($alloc(MgmtData));
}

int32_t MgmtData::hashCode() {
	 return this->$SignatureElementProxy::hashCode();
}

bool MgmtData::equals(Object$* arg0) {
	 return this->$SignatureElementProxy::equals(arg0);
}

$Object* MgmtData::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* MgmtData::toString() {
	 return this->$SignatureElementProxy::toString();
}

void MgmtData::finalize() {
	this->$SignatureElementProxy::finalize();
}

void MgmtData::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

void MgmtData::init$($Document* doc, $String* mgmtData) {
	$SignatureElementProxy::init$(doc);
	this->addText(mgmtData);
}

$String* MgmtData::getMgmtData() {
	return this->getTextFromTextChild();
}

$String* MgmtData::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_MGMTDATA;
}

MgmtData::MgmtData() {
}

$Class* MgmtData::load$($String* name, bool initialize) {
	$loadClass(MgmtData, name, initialize, &_MgmtData_ClassInfo_, allocate$MgmtData);
	return class$;
}

$Class* MgmtData::class$ = nullptr;

								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com