#include <org/jcp/xml/dsig/internal/dom/DOMKeyInfo.h>

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
#include <java/security/Provider.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/dom/DOMSignContext.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyInfo.h>
#include <javax/xml/crypto/dsig/keyinfo/KeyValue.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyName.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue.h>
#include <org/jcp/xml/dsig/internal/dom/DOMPGPData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMRetrievalMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/jcp/xml/dsig/internal/dom/DOMX509Data.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef XMLNS

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Provider = ::java::security::Provider;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $DOMSignContext = ::javax::xml::crypto::dsig::dom::DOMSignContext;
using $KeyInfo = ::javax::xml::crypto::dsig::keyinfo::KeyInfo;
using $KeyValue = ::javax::xml::crypto::dsig::keyinfo::KeyValue;
using $DOMKeyName = ::org::jcp::xml::dsig::internal::dom::DOMKeyName;
using $DOMKeyValue = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue;
using $DOMPGPData = ::org::jcp::xml::dsig::internal::dom::DOMPGPData;
using $DOMRetrievalMethod = ::org::jcp::xml::dsig::internal::dom::DOMRetrievalMethod;
using $1DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $DOMX509Data = ::org::jcp::xml::dsig::internal::dom::DOMX509Data;
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

$FieldInfo _DOMKeyInfo_FieldInfo_[] = {
	{"id", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMKeyInfo, id)},
	{"keyInfoTypes", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PRIVATE | $FINAL, $field(DOMKeyInfo, keyInfoTypes)},
	{}
};

$MethodInfo _DOMKeyInfo_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/List;Ljava/lang/String;)V", "(Ljava/util/List<+Ljavax/xml/crypto/XMLStructure;>;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(DOMKeyInfo::*)($List*,$String*)>(&DOMKeyInfo::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljavax/xml/crypto/XMLCryptoContext;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMKeyInfo::*)($Element*,$XMLCryptoContext*,$Provider*)>(&DOMKeyInfo::init$)), "javax.xml.crypto.MarshalException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getContent", "(Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;)Ljava/util/List;", "(Ljavax/xml/crypto/dsig/keyinfo/KeyInfo;)Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($KeyInfo*)>(&DOMKeyInfo::getContent))},
	{"getContent", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"marshal", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMKeyInfo::*)($Node*,$Node*,$String*,$DOMCryptoContext*)>(&DOMKeyInfo::marshal)), "javax.xml.crypto.MarshalException"},
	{"marshal", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Element;Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PRIVATE, $method(static_cast<void(DOMKeyInfo::*)($Node*,$Element*,$Node*,$String*,$DOMCryptoContext*)>(&DOMKeyInfo::marshal)), "javax.xml.crypto.MarshalException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMKeyInfo_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMKeyInfo",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.keyinfo.KeyInfo",
	_DOMKeyInfo_FieldInfo_,
	_DOMKeyInfo_MethodInfo_
};

$Object* allocate$DOMKeyInfo($Class* clazz) {
	return $of($alloc(DOMKeyInfo));
}

bool DOMKeyInfo::isFeatureSupported($String* feature) {
	 return this->$1DOMStructure::isFeatureSupported(feature);
}

$Object* DOMKeyInfo::clone() {
	 return this->$1DOMStructure::clone();
}

$String* DOMKeyInfo::toString() {
	 return this->$1DOMStructure::toString();
}

void DOMKeyInfo::finalize() {
	this->$1DOMStructure::finalize();
}

$List* DOMKeyInfo::getContent($KeyInfo* ki) {
	$init(DOMKeyInfo);
	return $nc(ki)->getContent();
}

void DOMKeyInfo::init$($List* content, $String* id) {
	$1DOMStructure::init$();
	if (content == nullptr) {
		$throwNew($NullPointerException, "content cannot be null"_s);
	}
	$set(this, keyInfoTypes, $Collections::unmodifiableList($$new($ArrayList, static_cast<$Collection*>(content))));
	if ($nc(this->keyInfoTypes)->isEmpty()) {
		$throwNew($IllegalArgumentException, "content cannot be empty"_s);
	}
	{
		int32_t i = 0;
		int32_t size = $nc(this->keyInfoTypes)->size();
		for (; i < size; ++i) {
			if (!($instanceOf($XMLStructure, $($nc(this->keyInfoTypes)->get(i))))) {
				$throwNew($ClassCastException, $$str({"content["_s, $$str(i), "] is not a valid KeyInfo type"_s}));
			}
		}
	}
	$set(this, id, id);
}

void DOMKeyInfo::init$($Element* kiElem, $XMLCryptoContext* context, $Provider* provider) {
	$1DOMStructure::init$();
	$var($Attr, attr, $nc(kiElem)->getAttributeNodeNS(nullptr, "Id"_s));
	if (attr != nullptr) {
		$set(this, id, attr->getValue());
		kiElem->setIdAttributeNode(attr, true);
	} else {
		$set(this, id, nullptr);
	}
	$var($List, content, $new($ArrayList));
	$var($Node, firstChild, kiElem->getFirstChild());
	if (firstChild == nullptr) {
		$throwNew($MarshalException, "KeyInfo must contain at least one type"_s);
	}
	while (firstChild != nullptr) {
		if (firstChild->getNodeType() == $Node::ELEMENT_NODE) {
			$var($Element, childElem, $cast($Element, firstChild));
			$var($String, localName, childElem->getLocalName());
			$var($String, namespace$, childElem->getNamespaceURI());
			bool var$0 = "X509Data"_s->equals(localName);
			$init($XMLSignature);
			if (var$0 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
				content->add($$new($DOMX509Data, childElem));
			} else {
				bool var$2 = "KeyName"_s->equals(localName);
				if (var$2 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
					content->add($$new($DOMKeyName, childElem));
				} else {
					bool var$4 = "KeyValue"_s->equals(localName);
					if (var$4 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
						content->add($($DOMKeyValue::unmarshal(childElem)));
					} else {
						bool var$6 = "RetrievalMethod"_s->equals(localName);
						if (var$6 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
							content->add($$new($DOMRetrievalMethod, childElem, context, provider));
						} else {
							bool var$8 = "PGPData"_s->equals(localName);
							if (var$8 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
								content->add($$new($DOMPGPData, childElem));
							} else {
								content->add($$new($DOMStructure, childElem));
							}
						}
					}
				}
			}
		}
		$assign(firstChild, firstChild->getNextSibling());
	}
	$set(this, keyInfoTypes, $Collections::unmodifiableList(content));
}

$String* DOMKeyInfo::getId() {
	return this->id;
}

$List* DOMKeyInfo::getContent() {
	return this->keyInfoTypes;
}

void DOMKeyInfo::marshal($XMLStructure* parent, $XMLCryptoContext* context) {
	if (parent == nullptr) {
		$throwNew($NullPointerException, "parent is null"_s);
	}
	if (!($instanceOf($DOMStructure, parent))) {
		$throwNew($ClassCastException, "parent must be of type DOMStructure"_s);
	}
	$var($Node, pNode, $nc(($cast($DOMStructure, parent)))->getNode());
	$var($String, dsPrefix, $DOMUtils::getSignaturePrefix(context));
	$init($XMLSignature);
	$var($Element, kiElem, $DOMUtils::createElement($($DOMUtils::getOwnerDocument(pNode)), "KeyInfo"_s, $XMLSignature::XMLNS, dsPrefix));
	if (dsPrefix == nullptr || $nc(dsPrefix)->length() == 0) {
		$nc(kiElem)->setAttributeNS("http://www.w3.org/2000/xmlns/"_s, "xmlns"_s, $XMLSignature::XMLNS);
	} else {
		$nc(kiElem)->setAttributeNS("http://www.w3.org/2000/xmlns/"_s, $$str({"xmlns:"_s, dsPrefix}), $XMLSignature::XMLNS);
	}
	$var($Node, nextSibling, nullptr);
	if ($instanceOf($DOMSignContext, context)) {
		$assign(nextSibling, $nc(($cast($DOMSignContext, context)))->getNextSibling());
	}
	marshal(pNode, kiElem, nextSibling, dsPrefix, $cast($DOMCryptoContext, context));
}

void DOMKeyInfo::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	marshal(parent, nullptr, dsPrefix, context);
}

void DOMKeyInfo::marshal($Node* parent, $Node* nextSibling, $String* dsPrefix, $DOMCryptoContext* context) {
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, kiElem, $DOMUtils::createElement(ownerDoc, "KeyInfo"_s, $XMLSignature::XMLNS, dsPrefix));
	marshal(parent, kiElem, nextSibling, dsPrefix, context);
}

void DOMKeyInfo::marshal($Node* parent, $Element* kiElem, $Node* nextSibling, $String* dsPrefix, $DOMCryptoContext* context) {
	{
		$var($Iterator, i$, $nc(this->keyInfoTypes)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLStructure, kiType, $cast($XMLStructure, i$->next()));
			{
				if ($instanceOf($1DOMStructure, kiType)) {
					$nc(($cast($1DOMStructure, kiType)))->marshal(kiElem, dsPrefix, context);
				} else {
					$DOMUtils::appendChild(kiElem, $($nc(($cast($DOMStructure, kiType)))->getNode()));
				}
			}
		}
	}
	$DOMUtils::setAttributeID(kiElem, "Id"_s, this->id);
	$nc(parent)->insertBefore(kiElem, nextSibling);
}

bool DOMKeyInfo::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($KeyInfo, o))) {
		return false;
	}
	$var($KeyInfo, oki, $cast($KeyInfo, o));
	bool idsEqual = this->id == nullptr ? $nc(oki)->getId() == nullptr : $nc(this->id)->equals($(oki->getId()));
	return $nc(this->keyInfoTypes)->equals($(oki->getContent())) && idsEqual;
}

int32_t DOMKeyInfo::hashCode() {
	int32_t result = 17;
	if (this->id != nullptr) {
		result = 31 * result + $nc(this->id)->hashCode();
	}
	result = 31 * result + $nc(this->keyInfoTypes)->hashCode();
	return result;
}

DOMKeyInfo::DOMKeyInfo() {
}

$Class* DOMKeyInfo::load$($String* name, bool initialize) {
	$loadClass(DOMKeyInfo, name, initialize, &_DOMKeyInfo_ClassInfo_, allocate$DOMKeyInfo);
	return class$;
}

$Class* DOMKeyInfo::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org