#include <com/sun/org/apache/xml/internal/security/signature/SignatureProperties.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/signature/SignatureProperty.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef _ATT_ID
#undef _TAG_SIGNATUREPROPERTIES
#undef _TAG_SIGNATUREPROPERTY

using $ElementArray = $Array<::org::w3c::dom::Element>;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $SignatureProperty = ::com::sun::org::apache::xml::internal::security::signature::SignatureProperty;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

$MethodInfo _SignatureProperties_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureProperties::*)($Document*)>(&SignatureProperties::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(SignatureProperties::*)($Element*,$String*)>(&SignatureProperties::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"addSignatureProperty", "(Lcom/sun/org/apache/xml/internal/security/signature/SignatureProperty;)V", nullptr, $PUBLIC},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getLength", "()I", nullptr, $PUBLIC},
	{"item", "(I)Lcom/sun/org/apache/xml/internal/security/signature/SignatureProperty;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"setId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _SignatureProperties_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.SignatureProperties",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	nullptr,
	nullptr,
	_SignatureProperties_MethodInfo_
};

$Object* allocate$SignatureProperties($Class* clazz) {
	return $of($alloc(SignatureProperties));
}

void SignatureProperties::init$($Document* doc) {
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
}

void SignatureProperties::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
	$var($Attr, attr, $nc(element)->getAttributeNodeNS(nullptr, "Id"_s));
	if (attr != nullptr) {
		element->setIdAttributeNode(attr, true);
	}
	$init($Constants);
	$var($ElementArray, propertyElems, $XMLUtils::selectDsNodes($(getFirstChild()), $Constants::_TAG_SIGNATUREPROPERTY));
	{
		$var($ElementArray, arr$, propertyElems);
		int32_t len$ = $nc(arr$)->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($Element, propertyElem, arr$->get(i$));
			{
				$var($Attr, propertyAttr, $nc(propertyElem)->getAttributeNodeNS(nullptr, "Id"_s));
				if (propertyAttr != nullptr) {
					propertyElem->setIdAttributeNode(propertyAttr, true);
				}
			}
		}
	}
}

int32_t SignatureProperties::getLength() {
	$init($Constants);
	$var($ElementArray, propertyElems, $XMLUtils::selectDsNodes($(getFirstChild()), $Constants::_TAG_SIGNATUREPROPERTY));
	return $nc(propertyElems)->length;
}

$SignatureProperty* SignatureProperties::item(int32_t i) {
	try {
		$init($Constants);
		$var($Element, propertyElem, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_SIGNATUREPROPERTY, i));
		if (propertyElem == nullptr) {
			return nullptr;
		}
		return $new($SignatureProperty, propertyElem, this->baseURI);
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

void SignatureProperties::setId($String* Id) {
	if (Id != nullptr) {
		$init($Constants);
		setLocalIdAttribute($Constants::_ATT_ID, Id);
	}
}

$String* SignatureProperties::getId() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ID);
}

void SignatureProperties::addSignatureProperty($SignatureProperty* sp) {
	appendSelf(static_cast<$ElementProxy*>(sp));
	addReturnToSelf();
}

$String* SignatureProperties::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_SIGNATUREPROPERTIES;
}

SignatureProperties::SignatureProperties() {
}

$Class* SignatureProperties::load$($String* name, bool initialize) {
	$loadClass(SignatureProperties, name, initialize, &_SignatureProperties_ClassInfo_, allocate$SignatureProperties);
	return class$;
}

$Class* SignatureProperties::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com