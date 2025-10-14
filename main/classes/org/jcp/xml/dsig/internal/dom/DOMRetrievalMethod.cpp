#include <org/jcp/xml/dsig/internal/dom/DOMRetrievalMethod.h>

#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassCastException.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/security/Provider.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/NodeSetData.h>
#include <javax/xml/crypto/URIDereferencer.h>
#include <javax/xml/crypto/URIReference.h>
#include <javax/xml/crypto/URIReferenceException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/Transform.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/keyinfo/RetrievalMethod.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMTransform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMURIDereferencer.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/jcp/xml/dsig/internal/dom/DOMX509Data.h>
#include <org/jcp/xml/dsig/internal/dom/Policy.h>
#include <org/jcp/xml/dsig/internal/dom/Utils.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef INSTANCE
#undef XMLNS

using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $Provider = ::java::security::Provider;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Data = ::javax::xml::crypto::Data;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $NodeSetData = ::javax::xml::crypto::NodeSetData;
using $URIDereferencer = ::javax::xml::crypto::URIDereferencer;
using $URIReference = ::javax::xml::crypto::URIReference;
using $URIReferenceException = ::javax::xml::crypto::URIReferenceException;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMURIReference = ::javax::xml::crypto::dom::DOMURIReference;
using $Transform = ::javax::xml::crypto::dsig::Transform;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $RetrievalMethod = ::javax::xml::crypto::dsig::keyinfo::RetrievalMethod;
using $ApacheData = ::org::jcp::xml::dsig::internal::dom::ApacheData;
using $DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMTransform = ::org::jcp::xml::dsig::internal::dom::DOMTransform;
using $DOMURIDereferencer = ::org::jcp::xml::dsig::internal::dom::DOMURIDereferencer;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $DOMX509Data = ::org::jcp::xml::dsig::internal::dom::DOMX509Data;
using $Policy = ::org::jcp::xml::dsig::internal::dom::Policy;
using $Utils = ::org::jcp::xml::dsig::internal::dom::Utils;
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

$FieldInfo _DOMRetrievalMethod_FieldInfo_[] = {
	{"transforms", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/crypto/dsig/Transform;>;", $PRIVATE | $FINAL, $field(DOMRetrievalMethod, transforms)},
	{"uri", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMRetrievalMethod, uri)},
	{"type", "Ljava/lang/String;", nullptr, $PRIVATE, $field(DOMRetrievalMethod, type)},
	{"here", "Lorg/w3c/dom/Attr;", nullptr, $PRIVATE, $field(DOMRetrievalMethod, here)},
	{}
};

$MethodInfo _DOMRetrievalMethod_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/util/List<+Ljavax/xml/crypto/dsig/Transform;>;)V", $PUBLIC, $method(static_cast<void(DOMRetrievalMethod::*)($String*,$String*,$List*)>(&DOMRetrievalMethod::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljavax/xml/crypto/XMLCryptoContext;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMRetrievalMethod::*)($Element*,$XMLCryptoContext*,$Provider*)>(&DOMRetrievalMethod::init$)), "javax.xml.crypto.MarshalException"},
	{"dereference", "(Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.URIReferenceException"},
	{"dereferenceAsXMLStructure", "(Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/XMLStructure;", nullptr, $PUBLIC, $method(static_cast<$XMLStructure*(DOMRetrievalMethod::*)($XMLCryptoContext*)>(&DOMRetrievalMethod::dereferenceAsXMLStructure)), "javax.xml.crypto.URIReferenceException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getHere", "()Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getTransforms", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/Transform;>;", $PUBLIC},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMRetrievalMethod_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMRetrievalMethod",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.keyinfo.RetrievalMethod,javax.xml.crypto.dom.DOMURIReference",
	_DOMRetrievalMethod_FieldInfo_,
	_DOMRetrievalMethod_MethodInfo_
};

$Object* allocate$DOMRetrievalMethod($Class* clazz) {
	return $of($alloc(DOMRetrievalMethod));
}

bool DOMRetrievalMethod::isFeatureSupported($String* feature) {
	 return this->$DOMStructure::isFeatureSupported(feature);
}

$Object* DOMRetrievalMethod::clone() {
	 return this->$DOMStructure::clone();
}

$String* DOMRetrievalMethod::toString() {
	 return this->$DOMStructure::toString();
}

void DOMRetrievalMethod::finalize() {
	this->$DOMStructure::finalize();
}

void DOMRetrievalMethod::init$($String* uri, $String* type, $List* transforms) {
	$DOMStructure::init$();
	if (uri == nullptr) {
		$throwNew($NullPointerException, "uri cannot be null"_s);
	}
	if (transforms == nullptr || $nc(transforms)->isEmpty()) {
		$set(this, transforms, $Collections::emptyList());
	} else {
		$set(this, transforms, $Collections::unmodifiableList($$new($ArrayList, static_cast<$Collection*>(transforms))));
		{
			int32_t i = 0;
			int32_t size = $nc(this->transforms)->size();
			for (; i < size; ++i) {
				if (!($instanceOf($Transform, $($nc(this->transforms)->get(i))))) {
					$throwNew($ClassCastException, $$str({"transforms["_s, $$str(i), "] is not a valid type"_s}));
				}
			}
		}
	}
	$set(this, uri, uri);
	if (!$nc(uri)->isEmpty()) {
		try {
			$new($URI, uri);
		} catch ($URISyntaxException&) {
			$var($URISyntaxException, e, $catch());
			$throwNew($IllegalArgumentException, $(e->getMessage()));
		}
	}
	$set(this, type, type);
}

void DOMRetrievalMethod::init$($Element* rmElem, $XMLCryptoContext* context, $Provider* provider) {
	$DOMStructure::init$();
	$set(this, uri, $DOMUtils::getAttributeValue(rmElem, "URI"_s));
	$set(this, type, $DOMUtils::getAttributeValue(rmElem, "Type"_s));
	$set(this, here, $nc(rmElem)->getAttributeNodeNS(nullptr, "URI"_s));
	bool secVal = $Utils::secureValidation(context);
	$var($List, newTransforms, $new($ArrayList));
	$var($Element, transformsElem, $DOMUtils::getFirstChildElement(rmElem));
	if (transformsElem != nullptr) {
		$var($String, localName, transformsElem->getLocalName());
		$var($String, namespace$, transformsElem->getNamespaceURI());
		bool var$0 = !"Transforms"_s->equals(localName);
		$init($XMLSignature);
		if (var$0 || !$nc($XMLSignature::XMLNS)->equals(namespace$)) {
			$throwNew($MarshalException, $$str({"Invalid element name: "_s, namespace$, ":"_s, localName, ", expected Transforms"_s}));
		}
		$var($Element, transformElem, $DOMUtils::getFirstChildElement(transformsElem, "Transform"_s, $XMLSignature::XMLNS));
		while (transformElem != nullptr) {
			$var($String, name, transformElem->getLocalName());
			$assign(namespace$, transformElem->getNamespaceURI());
			bool var$1 = !"Transform"_s->equals(name);
			if (var$1 || !$nc($XMLSignature::XMLNS)->equals(namespace$)) {
				$throwNew($MarshalException, $$str({"Invalid element name: "_s, name, ", expected Transform"_s}));
			}
			newTransforms->add($$new($DOMTransform, transformElem, context, provider));
			if (secVal && $Policy::restrictNumTransforms(newTransforms->size())) {
				$var($String, error, $str({"A maximum of "_s, $$str($Policy::maxTransforms()), " transforms per Reference are allowed when secure validation is enabled"_s}));
				$throwNew($MarshalException, error);
			}
			$assign(transformElem, $DOMUtils::getNextSiblingElement(transformElem));
		}
	}
	if (newTransforms->isEmpty()) {
		$set(this, transforms, $Collections::emptyList());
	} else {
		$set(this, transforms, $Collections::unmodifiableList(newTransforms));
	}
}

$String* DOMRetrievalMethod::getURI() {
	return this->uri;
}

$String* DOMRetrievalMethod::getType() {
	return this->type;
}

$List* DOMRetrievalMethod::getTransforms() {
	return this->transforms;
}

void DOMRetrievalMethod::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, rmElem, $DOMUtils::createElement(ownerDoc, "RetrievalMethod"_s, $XMLSignature::XMLNS, dsPrefix));
	$DOMUtils::setAttribute(rmElem, "URI"_s, this->uri);
	$DOMUtils::setAttribute(rmElem, "Type"_s, this->type);
	if (!$nc(this->transforms)->isEmpty()) {
		$var($Element, transformsElem, $DOMUtils::createElement(ownerDoc, "Transforms"_s, $XMLSignature::XMLNS, dsPrefix));
		$nc(rmElem)->appendChild(transformsElem);
		{
			$var($Iterator, i$, $nc(this->transforms)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Transform, transform, $cast($Transform, i$->next()));
				{
					$nc(($cast($DOMTransform, transform)))->marshal(transformsElem, dsPrefix, context);
				}
			}
		}
	}
	$nc(parent)->appendChild(rmElem);
	$set(this, here, $nc(rmElem)->getAttributeNodeNS(nullptr, "URI"_s));
}

$Node* DOMRetrievalMethod::getHere() {
	return this->here;
}

$Data* DOMRetrievalMethod::dereference($XMLCryptoContext* context) {
	if (context == nullptr) {
		$throwNew($NullPointerException, "context cannot be null"_s);
	}
	$var($URIDereferencer, deref, $nc(context)->getURIDereferencer());
	if (deref == nullptr) {
		$init($DOMURIDereferencer);
		$assign(deref, $DOMURIDereferencer::INSTANCE);
	}
	$var($Data, data, $nc(deref)->dereference(static_cast<$URIReference*>(static_cast<$RetrievalMethod*>(this)), context));
	try {
		{
			$var($Iterator, i$, $nc(this->transforms)->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Transform, transform, $cast($Transform, i$->next()));
				{
					$assign(data, $nc(($cast($DOMTransform, transform)))->transform(data, context));
				}
			}
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($URIReferenceException, static_cast<$Throwable*>(e));
	}
	bool var$0 = $instanceOf($NodeSetData, data) && $Utils::secureValidation(context);
	if (var$0 && $Policy::restrictRetrievalMethodLoops()) {
		$var($NodeSetData, nsd, $cast($NodeSetData, data));
		$var($Iterator, i, $nc(nsd)->iterator());
		if ($nc(i)->hasNext()) {
			$var($Node, root, $cast($Node, i->next()));
			if ("RetrievalMethod"_s->equals($($nc(root)->getLocalName()))) {
				$throwNew($URIReferenceException, "It is forbidden to have one RetrievalMethod point to another when secure validation is enabled"_s);
			}
		}
	}
	return data;
}

$XMLStructure* DOMRetrievalMethod::dereferenceAsXMLStructure($XMLCryptoContext* context) {
	bool secVal = $Utils::secureValidation(context);
	$var($ApacheData, data, $cast($ApacheData, dereference(context)));
	try {
		$var($InputStream, is, $new($ByteArrayInputStream, $($nc($($nc(data)->getXMLSignatureInput()))->getBytes())));
		{
			$var($Throwable, var$0, nullptr);
			$var($XMLStructure, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($Document, doc, $XMLUtils::read(is, secVal));
					$var($Element, kiElem, $nc(doc)->getDocumentElement());
					bool var$3 = "X509Data"_s->equals($($nc(kiElem)->getLocalName()));
					$init($XMLSignature);
					if (var$3 && $nc($XMLSignature::XMLNS)->equals($($nc(kiElem)->getNamespaceURI()))) {
						$assign(var$2, static_cast<$XMLStructure*>(static_cast<$DOMStructure*>($new($DOMX509Data, kiElem))));
						return$1 = true;
						goto $finally;
					} else {
						$assign(var$2, nullptr);
						return$1 = true;
						goto $finally;
					}
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						is->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				is->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($URIReferenceException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

bool DOMRetrievalMethod::equals(Object$* obj) {
	if ($equals(this, obj)) {
		return true;
	}
	if (!($instanceOf($RetrievalMethod, obj))) {
		return false;
	}
	$var($RetrievalMethod, orm, $cast($RetrievalMethod, obj));
	bool typesEqual = this->type == nullptr ? $nc(orm)->getType() == nullptr : $nc(this->type)->equals($(orm->getType()));
	bool var$0 = $nc(this->uri)->equals($(orm->getURI()));
	return var$0 && $nc(this->transforms)->equals($(orm->getTransforms())) && typesEqual;
}

int32_t DOMRetrievalMethod::hashCode() {
	int32_t result = 17;
	if (this->type != nullptr) {
		result = 31 * result + $nc(this->type)->hashCode();
	}
	result = 31 * result + $nc(this->uri)->hashCode();
	result = 31 * result + $nc(this->transforms)->hashCode();
	return result;
}

DOMRetrievalMethod::DOMRetrievalMethod() {
}

$Class* DOMRetrievalMethod::load$($String* name, bool initialize) {
	$loadClass(DOMRetrievalMethod, name, initialize, &_DOMRetrievalMethod_ClassInfo_, allocate$DOMRetrievalMethod);
	return class$;
}

$Class* DOMRetrievalMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org