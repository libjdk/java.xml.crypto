#include <org/jcp/xml/dsig/internal/dom/DOMKeyName.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyName.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef XMLNS

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $KeyName = ::javax::xml::crypto::dsig::keyinfo::KeyName;
using $DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;
using $Text = ::org::w3c::dom::Text;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMKeyName_FieldInfo_[] = {
	{"name", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMKeyName, name)},
	{}
};

$MethodInfo _DOMKeyName_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMKeyName::*)($String*)>(&DOMKeyName::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMKeyName::*)($Element*)>(&DOMKeyName::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMKeyName_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMKeyName",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.keyinfo.KeyName",
	_DOMKeyName_FieldInfo_,
	_DOMKeyName_MethodInfo_
};

$Object* allocate$DOMKeyName($Class* clazz) {
	return $of($alloc(DOMKeyName));
}

bool DOMKeyName::isFeatureSupported($String* feature) {
	 return this->$DOMStructure::isFeatureSupported(feature);
}

$Object* DOMKeyName::clone() {
	 return this->$DOMStructure::clone();
}

$String* DOMKeyName::toString() {
	 return this->$DOMStructure::toString();
}

void DOMKeyName::finalize() {
	this->$DOMStructure::finalize();
}

void DOMKeyName::init$($String* name) {
	$DOMStructure::init$();
	if (name == nullptr) {
		$throwNew($NullPointerException, "name cannot be null"_s);
	}
	$set(this, name, name);
}

void DOMKeyName::init$($Element* knElem) {
	$DOMStructure::init$();
	$set(this, name, $nc($($nc(knElem)->getFirstChild()))->getNodeValue());
}

$String* DOMKeyName::getName() {
	return this->name;
}

void DOMKeyName::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, knElem, $DOMUtils::createElement(ownerDoc, "KeyName"_s, $XMLSignature::XMLNS, dsPrefix));
	$nc(knElem)->appendChild($($nc(ownerDoc)->createTextNode(this->name)));
	$nc(parent)->appendChild(knElem);
}

bool DOMKeyName::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf($KeyName, obj))) {
		return false;
	}
	$var($KeyName, okn, $cast($KeyName, obj));
	return $nc(this->name)->equals($($nc(okn)->getName()));
}

int32_t DOMKeyName::hashCode() {
	int32_t result = 17;
	result = 31 * result + $nc(this->name)->hashCode();
	return result;
}

DOMKeyName::DOMKeyName() {
}

$Class* DOMKeyName::load$($String* name, bool initialize) {
	$loadClass(DOMKeyName, name, initialize, &_DOMKeyName_ClassInfo_, allocate$DOMKeyName);
	return class$;
}

$Class* DOMKeyName::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org