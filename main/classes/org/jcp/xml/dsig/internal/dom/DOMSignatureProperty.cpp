#include <org/jcp/xml/dsig/internal/dom/DOMSignatureProperty.h>

#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <javax/xml/crypto/dsig/SignatureProperty.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef XMLNS

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $SignatureProperty = ::javax::xml::crypto::dsig::SignatureProperty;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $1DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMSignatureProperty_FieldInfo_[] = {
	{"id", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMSignatureProperty, id)},
	{"target", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMSignatureProperty, target)},
	{"content", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PRIVATE | $FINAL, $field(DOMSignatureProperty, content)},
	{}
};

$MethodInfo _DOMSignatureProperty_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/util/List<+Ljavax/xml/crypto/XMLStructure;>;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(DOMSignatureProperty::*)($List*,$String*,$String*)>(&DOMSignatureProperty::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMSignatureProperty::*)($Element*)>(&DOMSignatureProperty::init$)), "javax.xml.crypto.MarshalException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getContent", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTarget", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMSignatureProperty_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMSignatureProperty",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.SignatureProperty",
	_DOMSignatureProperty_FieldInfo_,
	_DOMSignatureProperty_MethodInfo_
};

$Object* allocate$DOMSignatureProperty($Class* clazz) {
	return $of($alloc(DOMSignatureProperty));
}

bool DOMSignatureProperty::isFeatureSupported($String* feature) {
	 return this->$1DOMStructure::isFeatureSupported(feature);
}

$Object* DOMSignatureProperty::clone() {
	 return this->$1DOMStructure::clone();
}

$String* DOMSignatureProperty::toString() {
	 return this->$1DOMStructure::toString();
}

void DOMSignatureProperty::finalize() {
	this->$1DOMStructure::finalize();
}

void DOMSignatureProperty::init$($List* content, $String* target, $String* id) {
	$1DOMStructure::init$();
	if (target == nullptr) {
		$throwNew($NullPointerException, "target cannot be null"_s);
	} else if (content == nullptr) {
		$throwNew($NullPointerException, "content cannot be null"_s);
	} else if (content->isEmpty()) {
		$throwNew($IllegalArgumentException, "content cannot be empty"_s);
	} else {
		$set(this, content, $Collections::unmodifiableList($$new($ArrayList, static_cast<$Collection*>(content))));
		{
			int32_t i = 0;
			int32_t size = $nc(this->content)->size();
			for (; i < size; ++i) {
				if (!($instanceOf($XMLStructure, $($nc(this->content)->get(i))))) {
					$throwNew($ClassCastException, $$str({"content["_s, $$str(i), "] is not a valid type"_s}));
				}
			}
		}
	}
	$set(this, target, target);
	$set(this, id, id);
}

void DOMSignatureProperty::init$($Element* propElem) {
	$1DOMStructure::init$();
	$set(this, target, $DOMUtils::getAttributeValue(propElem, "Target"_s));
	if (this->target == nullptr) {
		$throwNew($MarshalException, "target cannot be null"_s);
	}
	$var($Attr, attr, $nc(propElem)->getAttributeNodeNS(nullptr, "Id"_s));
	if (attr != nullptr) {
		$set(this, id, attr->getValue());
		propElem->setIdAttributeNode(attr, true);
	} else {
		$set(this, id, nullptr);
	}
	$var($List, newContent, $new($ArrayList));
	$var($Node, firstChild, propElem->getFirstChild());
	while (firstChild != nullptr) {
		newContent->add($$new($DOMStructure, firstChild));
		$assign(firstChild, firstChild->getNextSibling());
	}
	if (newContent->isEmpty()) {
		$throwNew($MarshalException, "content cannot be empty"_s);
	} else {
		$set(this, content, $Collections::unmodifiableList(newContent));
	}
}

$List* DOMSignatureProperty::getContent() {
	return this->content;
}

$String* DOMSignatureProperty::getId() {
	return this->id;
}

$String* DOMSignatureProperty::getTarget() {
	return this->target;
}

void DOMSignatureProperty::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, propElem, $DOMUtils::createElement(ownerDoc, "SignatureProperty"_s, $XMLSignature::XMLNS, dsPrefix));
	$DOMUtils::setAttributeID(propElem, "Id"_s, this->id);
	$DOMUtils::setAttribute(propElem, "Target"_s, this->target);
	{
		$var($Iterator, i$, $nc(this->content)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLStructure, property, $cast($XMLStructure, i$->next()));
			{
				$DOMUtils::appendChild(propElem, $($nc(($cast($DOMStructure, property)))->getNode()));
			}
		}
	}
	$nc(parent)->appendChild(propElem);
}

bool DOMSignatureProperty::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($SignatureProperty, o))) {
		return false;
	}
	$var($SignatureProperty, osp, $cast($SignatureProperty, o));
	bool idsEqual = this->id == nullptr ? $nc(osp)->getId() == nullptr : $nc(this->id)->equals($(osp->getId()));
	$var($List, ospContent, osp->getContent());
	bool var$0 = equalsContent(this->content, ospContent);
	return var$0 && $nc(this->target)->equals($(osp->getTarget())) && idsEqual;
}

int32_t DOMSignatureProperty::hashCode() {
	int32_t result = 17;
	if (this->id != nullptr) {
		result = 31 * result + $nc(this->id)->hashCode();
	}
	result = 31 * result + $nc(this->target)->hashCode();
	result = 31 * result + $nc(this->content)->hashCode();
	return result;
}

DOMSignatureProperty::DOMSignatureProperty() {
}

$Class* DOMSignatureProperty::load$($String* name, bool initialize) {
	$loadClass(DOMSignatureProperty, name, initialize, &_DOMSignatureProperty_ClassInfo_, allocate$DOMSignatureProperty);
	return class$;
}

$Class* DOMSignatureProperty::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org