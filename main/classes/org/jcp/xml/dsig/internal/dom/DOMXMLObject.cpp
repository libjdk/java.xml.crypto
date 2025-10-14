#include <org/jcp/xml/dsig/internal/dom/DOMXMLObject.h>

#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
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
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <javax/xml/crypto/dsig/XMLObject.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <org/jcp/xml/dsig/internal/dom/DOMManifest.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSignatureProperties.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/jcp/xml/dsig/internal/dom/DOMX509Data.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef XMLNS

using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Provider = ::java::security::Provider;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $XMLObject = ::javax::xml::crypto::dsig::XMLObject;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $DOMManifest = ::org::jcp::xml::dsig::internal::dom::DOMManifest;
using $DOMSignatureProperties = ::org::jcp::xml::dsig::internal::dom::DOMSignatureProperties;
using $1DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $DOMX509Data = ::org::jcp::xml::dsig::internal::dom::DOMX509Data;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMXMLObject_FieldInfo_[] = {
	{"id", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMXMLObject, id)},
	{"mimeType", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMXMLObject, mimeType)},
	{"encoding", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMXMLObject, encoding)},
	{"content", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PRIVATE | $FINAL, $field(DOMXMLObject, content)},
	{"objectElem", "Lorg/w3c/dom/Element;", nullptr, $PRIVATE, $field(DOMXMLObject, objectElem)},
	{}
};

$MethodInfo _DOMXMLObject_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/List;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", "(Ljava/util/List<+Ljavax/xml/crypto/XMLStructure;>;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(DOMXMLObject::*)($List*,$String*,$String*,$String*)>(&DOMXMLObject::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljavax/xml/crypto/XMLCryptoContext;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMXMLObject::*)($Element*,$XMLCryptoContext*,$Provider*)>(&DOMXMLObject::init$)), "javax.xml.crypto.MarshalException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getContent", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PUBLIC},
	{"getEncoding", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getMimeType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMXMLObject_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMXMLObject",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.XMLObject",
	_DOMXMLObject_FieldInfo_,
	_DOMXMLObject_MethodInfo_
};

$Object* allocate$DOMXMLObject($Class* clazz) {
	return $of($alloc(DOMXMLObject));
}

bool DOMXMLObject::isFeatureSupported($String* feature) {
	 return this->$1DOMStructure::isFeatureSupported(feature);
}

$Object* DOMXMLObject::clone() {
	 return this->$1DOMStructure::clone();
}

$String* DOMXMLObject::toString() {
	 return this->$1DOMStructure::toString();
}

void DOMXMLObject::finalize() {
	this->$1DOMStructure::finalize();
}

void DOMXMLObject::init$($List* content, $String* id, $String* mimeType, $String* encoding) {
	$1DOMStructure::init$();
	if (content == nullptr || $nc(content)->isEmpty()) {
		$set(this, content, $Collections::emptyList());
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
	$set(this, id, id);
	$set(this, mimeType, mimeType);
	$set(this, encoding, encoding);
}

void DOMXMLObject::init$($Element* objElem, $XMLCryptoContext* context, $Provider* provider) {
	$1DOMStructure::init$();
	$set(this, encoding, $DOMUtils::getAttributeValue(objElem, "Encoding"_s));
	$var($Attr, attr, $nc(objElem)->getAttributeNodeNS(nullptr, "Id"_s));
	if (attr != nullptr) {
		$set(this, id, attr->getValue());
		objElem->setIdAttributeNode(attr, true);
	} else {
		$set(this, id, nullptr);
	}
	$set(this, mimeType, $DOMUtils::getAttributeValue(objElem, "MimeType"_s));
	$var($List, newContent, $new($ArrayList));
	$var($Node, firstChild, objElem->getFirstChild());
	while (firstChild != nullptr) {
		if (firstChild->getNodeType() == $Node::ELEMENT_NODE) {
			$var($Element, childElem, $cast($Element, firstChild));
			$var($String, tag, childElem->getLocalName());
			$var($String, namespace$, childElem->getNamespaceURI());
			bool var$0 = "Manifest"_s->equals(tag);
			$init($XMLSignature);
			if (var$0 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
				newContent->add($$new($DOMManifest, childElem, context, provider));
			} else {
				bool var$2 = "SignatureProperties"_s->equals(tag);
				if (var$2 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
					newContent->add($$new($DOMSignatureProperties, childElem));
				} else {
					bool var$4 = "X509Data"_s->equals(tag);
					if (var$4 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
						newContent->add($$new($DOMX509Data, childElem));
					} else {
						newContent->add($$new($DOMStructure, firstChild));
					}
				}
			}
		} else {
			newContent->add($$new($DOMStructure, firstChild));
		}
		$assign(firstChild, firstChild->getNextSibling());
	}
	$var($NamedNodeMap, nnm, objElem->getAttributes());
	for (int32_t idx = 0; idx < $nc(nnm)->getLength(); ++idx) {
		$var($Node, nsDecl, nnm->item(idx));
		if ($DOMUtils::isNamespace(nsDecl)) {
			newContent->add($$new($DOMStructure, nsDecl));
		}
	}
	if (newContent->isEmpty()) {
		$set(this, content, $Collections::emptyList());
	} else {
		$set(this, content, $Collections::unmodifiableList(newContent));
	}
	$set(this, objectElem, objElem);
}

$List* DOMXMLObject::getContent() {
	return this->content;
}

$String* DOMXMLObject::getId() {
	return this->id;
}

$String* DOMXMLObject::getMimeType() {
	return this->mimeType;
}

$String* DOMXMLObject::getEncoding() {
	return this->encoding;
}

void DOMXMLObject::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$var($Element, objElem, this->objectElem);
	if (objElem == nullptr) {
		$init($XMLSignature);
		$assign(objElem, $DOMUtils::createElement(ownerDoc, "Object"_s, $XMLSignature::XMLNS, dsPrefix));
		$DOMUtils::setAttributeID(objElem, "Id"_s, this->id);
		$DOMUtils::setAttribute(objElem, "MimeType"_s, this->mimeType);
		$DOMUtils::setAttribute(objElem, "Encoding"_s, this->encoding);
		{
			$var($Iterator, i$, $nc(this->content)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($XMLStructure, object, $cast($XMLStructure, i$->next()));
				{
					if ($instanceOf($1DOMStructure, object)) {
						$nc(($cast($1DOMStructure, object)))->marshal(objElem, dsPrefix, context);
					} else {
						$var($DOMStructure, domObject, $cast($DOMStructure, object));
						$DOMUtils::appendChild(objElem, $($nc(domObject)->getNode()));
					}
				}
			}
		}
	}
	$nc(parent)->appendChild(objElem);
}

bool DOMXMLObject::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($XMLObject, o))) {
		return false;
	}
	$var($XMLObject, oxo, $cast($XMLObject, o));
	bool idsEqual = this->id == nullptr ? $nc(oxo)->getId() == nullptr : $nc(this->id)->equals($(oxo->getId()));
	bool encodingsEqual = this->encoding == nullptr ? oxo->getEncoding() == nullptr : $nc(this->encoding)->equals($(oxo->getEncoding()));
	bool mimeTypesEqual = this->mimeType == nullptr ? oxo->getMimeType() == nullptr : $nc(this->mimeType)->equals($(oxo->getMimeType()));
	return idsEqual && encodingsEqual && mimeTypesEqual && equalsContent(this->content, $(oxo->getContent()));
}

int32_t DOMXMLObject::hashCode() {
	int32_t result = 17;
	if (this->id != nullptr) {
		result = 31 * result + $nc(this->id)->hashCode();
	}
	if (this->encoding != nullptr) {
		result = 31 * result + $nc(this->encoding)->hashCode();
	}
	if (this->mimeType != nullptr) {
		result = 31 * result + $nc(this->mimeType)->hashCode();
	}
	result = 31 * result + $nc(this->content)->hashCode();
	return result;
}

DOMXMLObject::DOMXMLObject() {
}

$Class* DOMXMLObject::load$($String* name, bool initialize) {
	$loadClass(DOMXMLObject, name, initialize, &_DOMXMLObject_ClassInfo_, allocate$DOMXMLObject);
	return class$;
}

$Class* DOMXMLObject::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org