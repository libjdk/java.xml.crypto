#include <org/jcp/xml/dsig/internal/dom/DOMPGPData.h>

#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Array.h>
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
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef XMLNS

using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
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
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $PGPData = ::javax::xml::crypto::dsig::keyinfo::PGPData;
using $1DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
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

$FieldInfo _DOMPGPData_FieldInfo_[] = {
	{"keyId", "[B", nullptr, $PRIVATE | $FINAL, $field(DOMPGPData, keyId)},
	{"keyPacket", "[B", nullptr, $PRIVATE | $FINAL, $field(DOMPGPData, keyPacket)},
	{"externalElements", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PRIVATE | $FINAL, $field(DOMPGPData, externalElements)},
	{}
};

$MethodInfo _DOMPGPData_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "([BLjava/util/List;)V", "([BLjava/util/List<+Ljavax/xml/crypto/XMLStructure;>;)V", $PUBLIC, $method(static_cast<void(DOMPGPData::*)($bytes*,$List*)>(&DOMPGPData::init$))},
	{"<init>", "([B[BLjava/util/List;)V", "([B[BLjava/util/List<+Ljavax/xml/crypto/XMLStructure;>;)V", $PUBLIC, $method(static_cast<void(DOMPGPData::*)($bytes*,$bytes*,$List*)>(&DOMPGPData::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMPGPData::*)($Element*)>(&DOMPGPData::init$)), "javax.xml.crypto.MarshalException"},
	{"checkKeyPacket", "([B)V", nullptr, $PRIVATE, $method(static_cast<void(DOMPGPData::*)($bytes*)>(&DOMPGPData::checkKeyPacket))},
	{"getExternalElements", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/XMLStructure;>;", $PUBLIC},
	{"getKeyId", "()[B", nullptr, $PUBLIC},
	{"getKeyPacket", "()[B", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMPGPData_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMPGPData",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.keyinfo.PGPData",
	_DOMPGPData_FieldInfo_,
	_DOMPGPData_MethodInfo_
};

$Object* allocate$DOMPGPData($Class* clazz) {
	return $of($alloc(DOMPGPData));
}

bool DOMPGPData::isFeatureSupported($String* feature) {
	 return this->$1DOMStructure::isFeatureSupported(feature);
}

int32_t DOMPGPData::hashCode() {
	 return this->$1DOMStructure::hashCode();
}

bool DOMPGPData::equals(Object$* arg0) {
	 return this->$1DOMStructure::equals(arg0);
}

$Object* DOMPGPData::clone() {
	 return this->$1DOMStructure::clone();
}

$String* DOMPGPData::toString() {
	 return this->$1DOMStructure::toString();
}

void DOMPGPData::finalize() {
	this->$1DOMStructure::finalize();
}

void DOMPGPData::init$($bytes* keyPacket, $List* other) {
	$useLocalCurrentObjectStackCache();
	$1DOMStructure::init$();
	if (keyPacket == nullptr) {
		$throwNew($NullPointerException, "keyPacket cannot be null"_s);
	}
	if (other == nullptr || $nc(other)->isEmpty()) {
		$set(this, externalElements, $Collections::emptyList());
	} else {
		$set(this, externalElements, $Collections::unmodifiableList($$new($ArrayList, static_cast<$Collection*>(other))));
		{
			int32_t i = 0;
			int32_t size = $nc(this->externalElements)->size();
			for (; i < size; ++i) {
				if (!($instanceOf($XMLStructure, $($nc(this->externalElements)->get(i))))) {
					$throwNew($ClassCastException, $$str({"other["_s, $$str(i), "] is not a valid PGPData type"_s}));
				}
			}
		}
	}
	$set(this, keyPacket, $cast($bytes, $nc(keyPacket)->clone()));
	checkKeyPacket(keyPacket);
	$set(this, keyId, nullptr);
}

void DOMPGPData::init$($bytes* keyId, $bytes* keyPacket, $List* other) {
	$useLocalCurrentObjectStackCache();
	$1DOMStructure::init$();
	if (keyId == nullptr) {
		$throwNew($NullPointerException, "keyId cannot be null"_s);
	}
	if ($nc(keyId)->length != 8) {
		$throwNew($IllegalArgumentException, "keyId must be 8 bytes long"_s);
	}
	if (other == nullptr || $nc(other)->isEmpty()) {
		$set(this, externalElements, $Collections::emptyList());
	} else {
		$set(this, externalElements, $Collections::unmodifiableList($$new($ArrayList, static_cast<$Collection*>(other))));
		{
			int32_t i = 0;
			int32_t size = $nc(this->externalElements)->size();
			for (; i < size; ++i) {
				if (!($instanceOf($XMLStructure, $($nc(this->externalElements)->get(i))))) {
					$throwNew($ClassCastException, $$str({"other["_s, $$str(i), "] is not a valid PGPData type"_s}));
				}
			}
		}
	}
	$set(this, keyId, $cast($bytes, $nc(keyId)->clone()));
	$set(this, keyPacket, keyPacket == nullptr ? ($bytes*)nullptr : $cast($bytes, $nc(keyPacket)->clone()));
	if (keyPacket != nullptr) {
		checkKeyPacket(keyPacket);
	}
}

void DOMPGPData::init$($Element* pdElem) {
	$useLocalCurrentObjectStackCache();
	$1DOMStructure::init$();
	$var($bytes, pgpKeyId, nullptr);
	$var($bytes, pgpKeyPacket, nullptr);
	$var($List, other, $new($ArrayList));
	$var($Node, firstChild, $nc(pdElem)->getFirstChild());
	while (firstChild != nullptr) {
		if (firstChild->getNodeType() == $Node::ELEMENT_NODE) {
			$var($Element, childElem, $cast($Element, firstChild));
			$var($String, localName, childElem->getLocalName());
			$var($String, namespace$, childElem->getNamespaceURI());
			bool var$0 = "PGPKeyID"_s->equals(localName);
			$init($XMLSignature);
			if (var$0 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
				$var($String, content, $XMLUtils::getFullTextChildrenFromNode(childElem));
				$assign(pgpKeyId, $XMLUtils::decode(content));
			} else {
				bool var$2 = "PGPKeyPacket"_s->equals(localName);
				if (var$2 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
					$var($String, content, $XMLUtils::getFullTextChildrenFromNode(childElem));
					$assign(pgpKeyPacket, $XMLUtils::decode(content));
				} else {
					other->add($$new($DOMStructure, childElem));
				}
			}
		}
		$assign(firstChild, firstChild->getNextSibling());
	}
	$set(this, keyId, pgpKeyId);
	$set(this, keyPacket, pgpKeyPacket);
	$set(this, externalElements, $Collections::unmodifiableList(other));
}

$bytes* DOMPGPData::getKeyId() {
	return this->keyId == nullptr ? ($bytes*)nullptr : $cast($bytes, $nc(this->keyId)->clone());
}

$bytes* DOMPGPData::getKeyPacket() {
	return this->keyPacket == nullptr ? ($bytes*)nullptr : $cast($bytes, $nc(this->keyPacket)->clone());
}

$List* DOMPGPData::getExternalElements() {
	return this->externalElements;
}

void DOMPGPData::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, pdElem, $DOMUtils::createElement(ownerDoc, "PGPData"_s, $XMLSignature::XMLNS, dsPrefix));
	if (this->keyId != nullptr) {
		$var($Element, keyIdElem, $DOMUtils::createElement(ownerDoc, "PGPKeyID"_s, $XMLSignature::XMLNS, dsPrefix));
		$nc(keyIdElem)->appendChild($($nc(ownerDoc)->createTextNode($($XMLUtils::encodeToString(this->keyId)))));
		$nc(pdElem)->appendChild(keyIdElem);
	}
	if (this->keyPacket != nullptr) {
		$var($Element, keyPktElem, $DOMUtils::createElement(ownerDoc, "PGPKeyPacket"_s, $XMLSignature::XMLNS, dsPrefix));
		$nc(keyPktElem)->appendChild($($nc(ownerDoc)->createTextNode($($XMLUtils::encodeToString(this->keyPacket)))));
		$nc(pdElem)->appendChild(keyPktElem);
	}
	{
		$var($Iterator, i$, $nc(this->externalElements)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($XMLStructure, extElem, $cast($XMLStructure, i$->next()));
			{
				$DOMUtils::appendChild(pdElem, $($nc(($cast($DOMStructure, extElem)))->getNode()));
			}
		}
	}
	$nc(parent)->appendChild(pdElem);
}

void DOMPGPData::checkKeyPacket($bytes* keyPacket) {
	if ($nc(keyPacket)->length < 3) {
		$throwNew($IllegalArgumentException, "keypacket must be at least 3 bytes long"_s);
	}
	int32_t tag = $nc(keyPacket)->get(0);
	if (((int32_t)(tag & (uint32_t)128)) != 128) {
		$throwNew($IllegalArgumentException, "keypacket tag is invalid: bit 7 is not set"_s);
	}
	if (((int32_t)(tag & (uint32_t)64)) != 64) {
		$throwNew($IllegalArgumentException, "old keypacket tag format is unsupported"_s);
	}
	if (((int32_t)(tag & (uint32_t)6)) != 6 && ((int32_t)(tag & (uint32_t)14)) != 14 && ((int32_t)(tag & (uint32_t)5)) != 5 && ((int32_t)(tag & (uint32_t)7)) != 7) {
		$throwNew($IllegalArgumentException, "keypacket tag is invalid: must be 6, 14, 5, or 7"_s);
	}
}

DOMPGPData::DOMPGPData() {
}

$Class* DOMPGPData::load$($String* name, bool initialize) {
	$loadClass(DOMPGPData, name, initialize, &_DOMPGPData_ClassInfo_, allocate$DOMPGPData);
	return class$;
}

$Class* DOMPGPData::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org