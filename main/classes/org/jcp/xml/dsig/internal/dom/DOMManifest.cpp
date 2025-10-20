#include <org/jcp/xml/dsig/internal/dom/DOMManifest.h>

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
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/Manifest.h>
#include <javax/xml/crypto/dsig/Reference.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <org/jcp/xml/dsig/internal/dom/DOMReference.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/jcp/xml/dsig/internal/dom/Policy.h>
#include <org/jcp/xml/dsig/internal/dom/Utils.h>
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
using $Provider = ::java::security::Provider;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $Manifest = ::javax::xml::crypto::dsig::Manifest;
using $Reference = ::javax::xml::crypto::dsig::Reference;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $DOMReference = ::org::jcp::xml::dsig::internal::dom::DOMReference;
using $DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Policy = ::org::jcp::xml::dsig::internal::dom::Policy;
using $Utils = ::org::jcp::xml::dsig::internal::dom::Utils;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMManifest_FieldInfo_[] = {
	{"references", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/crypto/dsig/Reference;>;", $PRIVATE | $FINAL, $field(DOMManifest, references)},
	{"id", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMManifest, id)},
	{}
};

$MethodInfo _DOMManifest_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/List;Ljava/lang/String;)V", "(Ljava/util/List<+Ljavax/xml/crypto/dsig/Reference;>;Ljava/lang/String;)V", $PUBLIC, $method(static_cast<void(DOMManifest::*)($List*,$String*)>(&DOMManifest::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljavax/xml/crypto/XMLCryptoContext;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMManifest::*)($Element*,$XMLCryptoContext*,$Provider*)>(&DOMManifest::init$)), "javax.xml.crypto.MarshalException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getManifestReferences", "(Ljavax/xml/crypto/dsig/Manifest;)Ljava/util/List;", "(Ljavax/xml/crypto/dsig/Manifest;)Ljava/util/List<Ljavax/xml/crypto/dsig/Reference;>;", $PUBLIC | $STATIC, $method(static_cast<$List*(*)($Manifest*)>(&DOMManifest::getManifestReferences))},
	{"getReferences", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/Reference;>;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMManifest_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMManifest",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.Manifest",
	_DOMManifest_FieldInfo_,
	_DOMManifest_MethodInfo_
};

$Object* allocate$DOMManifest($Class* clazz) {
	return $of($alloc(DOMManifest));
}

bool DOMManifest::isFeatureSupported($String* feature) {
	 return this->$DOMStructure::isFeatureSupported(feature);
}

$Object* DOMManifest::clone() {
	 return this->$DOMStructure::clone();
}

$String* DOMManifest::toString() {
	 return this->$DOMStructure::toString();
}

void DOMManifest::finalize() {
	this->$DOMStructure::finalize();
}

void DOMManifest::init$($List* references, $String* id) {
	$useLocalCurrentObjectStackCache();
	$DOMStructure::init$();
	if (references == nullptr) {
		$throwNew($NullPointerException, "references cannot be null"_s);
	}
	$set(this, references, $Collections::unmodifiableList($$new($ArrayList, static_cast<$Collection*>(references))));
	if ($nc(this->references)->isEmpty()) {
		$throwNew($IllegalArgumentException, "list of references must contain at least one entry"_s);
	}
	{
		int32_t i = 0;
		int32_t size = $nc(this->references)->size();
		for (; i < size; ++i) {
			if (!($instanceOf($Reference, $($nc(this->references)->get(i))))) {
				$throwNew($ClassCastException, $$str({"references["_s, $$str(i), "] is not a valid type"_s}));
			}
		}
	}
	$set(this, id, id);
}

void DOMManifest::init$($Element* manElem, $XMLCryptoContext* context, $Provider* provider) {
	$useLocalCurrentObjectStackCache();
	$DOMStructure::init$();
	$set(this, id, $DOMUtils::getIdAttributeValue(manElem, "Id"_s));
	bool secVal = $Utils::secureValidation(context);
	$init($XMLSignature);
	$var($Element, refElem, $DOMUtils::getFirstChildElement(manElem, "Reference"_s, $XMLSignature::XMLNS));
	$var($List, refs, $new($ArrayList));
	refs->add($$new($DOMReference, refElem, context, provider));
	$assign(refElem, $DOMUtils::getNextSiblingElement(refElem));
	while (refElem != nullptr) {
		$var($String, localName, refElem->getLocalName());
		$var($String, namespace$, refElem->getNamespaceURI());
		bool var$0 = !"Reference"_s->equals(localName);
		if (var$0 || !$nc($XMLSignature::XMLNS)->equals(namespace$)) {
			$throwNew($MarshalException, $$str({"Invalid element name: "_s, namespace$, ":"_s, localName, ", expected Reference"_s}));
		}
		refs->add($$new($DOMReference, refElem, context, provider));
		if (secVal && $Policy::restrictNumReferences(refs->size())) {
			$var($String, error, $str({"A maxiumum of "_s, $$str($Policy::maxReferences()), " references per Manifest are allowed when secure validation is enabled"_s}));
			$throwNew($MarshalException, error);
		}
		$assign(refElem, $DOMUtils::getNextSiblingElement(refElem));
	}
	$set(this, references, $Collections::unmodifiableList(refs));
}

$String* DOMManifest::getId() {
	return this->id;
}

$List* DOMManifest::getManifestReferences($Manifest* mf) {
	$init(DOMManifest);
	return $nc(mf)->getReferences();
}

$List* DOMManifest::getReferences() {
	return this->references;
}

void DOMManifest::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, manElem, $DOMUtils::createElement(ownerDoc, "Manifest"_s, $XMLSignature::XMLNS, dsPrefix));
	$DOMUtils::setAttributeID(manElem, "Id"_s, this->id);
	{
		$var($Iterator, i$, $nc(this->references)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Reference, ref, $cast($Reference, i$->next()));
			{
				$nc(($cast($DOMReference, ref)))->marshal(manElem, dsPrefix, context);
			}
		}
	}
	$nc(parent)->appendChild(manElem);
}

bool DOMManifest::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($Manifest, o))) {
		return false;
	}
	$var($Manifest, oman, $cast($Manifest, o));
	bool idsEqual = this->id == nullptr ? $nc(oman)->getId() == nullptr : $nc(this->id)->equals($(oman->getId()));
	return idsEqual && $nc(this->references)->equals($(oman->getReferences()));
}

int32_t DOMManifest::hashCode() {
	int32_t result = 17;
	if (this->id != nullptr) {
		result = 31 * result + $nc(this->id)->hashCode();
	}
	result = 31 * result + $nc(this->references)->hashCode();
	return result;
}

DOMManifest::DOMManifest() {
}

$Class* DOMManifest::load$($String* name, bool initialize) {
	$loadClass(DOMManifest, name, initialize, &_DOMManifest_ClassInfo_, allocate$DOMManifest);
	return class$;
}

$Class* DOMManifest::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org