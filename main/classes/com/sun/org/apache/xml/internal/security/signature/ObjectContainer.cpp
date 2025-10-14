#include <com/sun/org/apache/xml/internal/security/signature/ObjectContainer.h>

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
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef _ATT_ENCODING
#undef _ATT_ID
#undef _ATT_MIMETYPE
#undef _TAG_OBJECT

using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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

$MethodInfo _ObjectContainer_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectContainer::*)($Document*)>(&ObjectContainer::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ObjectContainer::*)($Element*,$String*)>(&ObjectContainer::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"appendChild", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMimeType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setEncoding", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setMimeType", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ObjectContainer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.ObjectContainer",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	nullptr,
	nullptr,
	_ObjectContainer_MethodInfo_
};

$Object* allocate$ObjectContainer($Class* clazz) {
	return $of($alloc(ObjectContainer));
}

void ObjectContainer::init$($Document* doc) {
	$SignatureElementProxy::init$(doc);
}

void ObjectContainer::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

void ObjectContainer::setId($String* Id) {
	if (Id != nullptr) {
		$init($Constants);
		setLocalIdAttribute($Constants::_ATT_ID, Id);
	}
}

$String* ObjectContainer::getId() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ID);
}

void ObjectContainer::setMimeType($String* MimeType) {
	if (MimeType != nullptr) {
		$init($Constants);
		setLocalAttribute($Constants::_ATT_MIMETYPE, MimeType);
	}
}

$String* ObjectContainer::getMimeType() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_MIMETYPE);
}

void ObjectContainer::setEncoding($String* Encoding) {
	if (Encoding != nullptr) {
		$init($Constants);
		setLocalAttribute($Constants::_ATT_ENCODING, Encoding);
	}
}

$String* ObjectContainer::getEncoding() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ENCODING);
}

$Node* ObjectContainer::appendChild($Node* node) {
	appendSelf(node);
	return node;
}

$String* ObjectContainer::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_OBJECT;
}

ObjectContainer::ObjectContainer() {
}

$Class* ObjectContainer::load$($String* name, bool initialize) {
	$loadClass(ObjectContainer, name, initialize, &_ObjectContainer_ClassInfo_, allocate$ObjectContainer);
	return class$;
}

$Class* ObjectContainer::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com