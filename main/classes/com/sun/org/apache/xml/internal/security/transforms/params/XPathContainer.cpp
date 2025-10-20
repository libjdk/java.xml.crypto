#include <com/sun/org/apache/xml/internal/security/transforms/params/XPathContainer.h>

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef _TAG_XPATH

using $TransformParam = ::com::sun::org::apache::xml::internal::security::transforms::TransformParam;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $Text = ::org::w3c::dom::Text;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								namespace params {

$MethodInfo _XPathContainer_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathContainer::*)($Document*)>(&XPathContainer::init$))},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getXPath", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"setXPath", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XPathContainer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.params.XPathContainer",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.transforms.TransformParam",
	nullptr,
	_XPathContainer_MethodInfo_
};

$Object* allocate$XPathContainer($Class* clazz) {
	return $of($alloc(XPathContainer));
}

int32_t XPathContainer::hashCode() {
	 return this->$SignatureElementProxy::hashCode();
}

bool XPathContainer::equals(Object$* arg0) {
	 return this->$SignatureElementProxy::equals(arg0);
}

$Object* XPathContainer::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* XPathContainer::toString() {
	 return this->$SignatureElementProxy::toString();
}

void XPathContainer::finalize() {
	this->$SignatureElementProxy::finalize();
}

void XPathContainer::init$($Document* doc) {
	$SignatureElementProxy::init$(doc);
}

void XPathContainer::setXPath($String* xpath) {
	$useLocalCurrentObjectStackCache();
	$var($Node, childNode, $nc($(getElement()))->getFirstChild());
	while (childNode != nullptr) {
		$var($Node, nodeToBeRemoved, childNode);
		$assign(childNode, childNode->getNextSibling());
		$nc($(getElement()))->removeChild(nodeToBeRemoved);
	}
	$var($Text, xpathText, createText(xpath));
	appendSelf(static_cast<$Node*>(xpathText));
}

$String* XPathContainer::getXPath() {
	return this->getTextFromTextChild();
}

$String* XPathContainer::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_XPATH;
}

XPathContainer::XPathContainer() {
}

$Class* XPathContainer::load$($String* name, bool initialize) {
	$loadClass(XPathContainer, name, initialize, &_XPathContainer_ClassInfo_, allocate$XPathContainer);
	return class$;
}

$Class* XPathContainer::class$ = nullptr;

								} // params
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com