#include <com/sun/org/apache/xml/internal/security/keys/KeyInfo.h>

#include <com/sun/org/apache/xml/internal/security/keys/content/DEREncodedKeyValue.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/KeyInfoReference.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/KeyName.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/KeyValue.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/MgmtData.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/PGPData.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/RetrievalMethod.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/SPKIData.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/X509Data.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/DSAKeyValue.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/keyvalues/RSAKeyValue.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolver.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>
#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolver.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/Signature11ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PrivateKey.h>
#include <java/security/PublicKey.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collections.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <javax/crypto/SecretKey.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef LOG
#undef URI
#undef _ATT_ID
#undef _TAG_DERENCODEDKEYVALUE
#undef _TAG_KEYINFO
#undef _TAG_KEYINFOREFERENCE
#undef _TAG_KEYNAME
#undef _TAG_KEYVALUE
#undef _TAG_MGMTDATA
#undef _TAG_PGPDATA
#undef _TAG_RETRIEVALMETHOD
#undef _TAG_SPKIDATA
#undef _TAG_X509DATA

using $DEREncodedKeyValue = ::com::sun::org::apache::xml::internal::security::keys::content::DEREncodedKeyValue;
using $KeyInfoReference = ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoReference;
using $KeyName = ::com::sun::org::apache::xml::internal::security::keys::content::KeyName;
using $KeyValue = ::com::sun::org::apache::xml::internal::security::keys::content::KeyValue;
using $MgmtData = ::com::sun::org::apache::xml::internal::security::keys::content::MgmtData;
using $PGPData = ::com::sun::org::apache::xml::internal::security::keys::content::PGPData;
using $RetrievalMethod = ::com::sun::org::apache::xml::internal::security::keys::content::RetrievalMethod;
using $SPKIData = ::com::sun::org::apache::xml::internal::security::keys::content::SPKIData;
using $X509Data = ::com::sun::org::apache::xml::internal::security::keys::content::X509Data;
using $DSAKeyValue = ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::DSAKeyValue;
using $RSAKeyValue = ::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::RSAKeyValue;
using $KeyResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolver;
using $KeyResolverSpi = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi;
using $StorageResolver = ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $Signature11ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivateKey = ::java::security::PrivateKey;
using $PublicKey = ::java::security::PublicKey;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collections = ::java::util::Collections;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $SecretKey = ::javax::crypto::SecretKey;
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
							namespace keys {

$FieldInfo _KeyInfo_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(KeyInfo, LOG)},
	{"x509Datas", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/keys/content/X509Data;>;", $PRIVATE, $field(KeyInfo, x509Datas)},
	{"nullList", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;>;", $PRIVATE | $STATIC | $FINAL, $staticField(KeyInfo, nullList)},
	{"storageResolvers", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;>;", $PRIVATE, $field(KeyInfo, storageResolvers)},
	{"internalKeyResolvers", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi;>;", $PRIVATE, $field(KeyInfo, internalKeyResolvers)},
	{"secureValidation", "Z", nullptr, $PRIVATE, $field(KeyInfo, secureValidation)},
	{}
};

$MethodInfo _KeyInfo_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyInfo::*)($Document*)>(&KeyInfo::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(KeyInfo::*)($Element*,$String*)>(&KeyInfo::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/KeyName;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/keyvalues/DSAKeyValue;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/keyvalues/RSAKeyValue;)V", nullptr, $PUBLIC},
	{"add", "(Ljava/security/PublicKey;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/KeyValue;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/MgmtData;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/PGPData;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/RetrievalMethod;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/SPKIData;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/X509Data;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/DEREncodedKeyValue;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/KeyInfoReference;)V", nullptr, $PUBLIC},
	{"addDEREncodedKeyValue", "(Ljava/security/PublicKey;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"addKeyInfoReference", "(Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"addKeyName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addKeyValue", "(Ljava/security/PublicKey;)V", nullptr, $PUBLIC},
	{"addKeyValue", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC},
	{"addMgmtData", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addRetrievalMethod", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/transforms/Transforms;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addStorageResolver", "(Lcom/sun/org/apache/xml/internal/security/keys/storage/StorageResolver;)V", nullptr, $PUBLIC},
	{"addUnknownElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC},
	{"applyCurrentResolver", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi;)Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE, $method(static_cast<$X509Certificate*(KeyInfo::*)($String*,$KeyResolverSpi*)>(&KeyInfo::applyCurrentResolver)), "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"containsDEREncodedKeyValue", "()Z", nullptr, $PUBLIC},
	{"containsKeyInfoReference", "()Z", nullptr, $PUBLIC},
	{"containsKeyName", "()Z", nullptr, $PUBLIC},
	{"containsKeyValue", "()Z", nullptr, $PUBLIC},
	{"containsMgmtData", "()Z", nullptr, $PUBLIC},
	{"containsPGPData", "()Z", nullptr, $PUBLIC},
	{"containsRetrievalMethod", "()Z", nullptr, $PUBLIC},
	{"containsSPKIData", "()Z", nullptr, $PUBLIC},
	{"containsUnknownElement", "()Z", nullptr, $PUBLIC},
	{"containsX509Data", "()Z", nullptr, $PUBLIC},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getId", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrivateKey", "()Ljava/security/PrivateKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"getPrivateKeyFromInternalResolvers", "()Ljava/security/PrivateKey;", nullptr, 0, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"getPrivateKeyFromStaticResolvers", "()Ljava/security/PrivateKey;", nullptr, 0, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"getPublicKey", "()Ljava/security/PublicKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"getPublicKeyFromInternalResolvers", "()Ljava/security/PublicKey;", nullptr, 0, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"getPublicKeyFromStaticResolvers", "()Ljava/security/PublicKey;", nullptr, 0, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"getSecretKey", "()Ljavax/crypto/SecretKey;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"getSecretKeyFromInternalResolvers", "()Ljavax/crypto/SecretKey;", nullptr, 0, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"getSecretKeyFromStaticResolvers", "()Ljavax/crypto/SecretKey;", nullptr, 0, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"getX509Certificate", "()Ljava/security/cert/X509Certificate;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"getX509CertificateFromInternalResolvers", "()Ljava/security/cert/X509Certificate;", nullptr, 0, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"getX509CertificateFromStaticResolvers", "()Ljava/security/cert/X509Certificate;", nullptr, 0, nullptr, "com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverException"},
	{"isEmpty", "()Z", nullptr, $PUBLIC},
	{"itemDEREncodedKeyValue", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/DEREncodedKeyValue;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemInternalKeyResolver", "(I)Lcom/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi;", nullptr, 0},
	{"itemKeyInfoReference", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/KeyInfoReference;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemKeyName", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/KeyName;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemKeyValue", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/KeyValue;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemMgmtData", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/MgmtData;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemPGPData", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/PGPData;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemRetrievalMethod", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/RetrievalMethod;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemSPKIData", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/SPKIData;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemUnknownElement", "(I)Lorg/w3c/dom/Element;", nullptr, $PUBLIC},
	{"itemX509Data", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/X509Data;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"lengthDEREncodedKeyValue", "()I", nullptr, $PUBLIC},
	{"lengthInternalKeyResolver", "()I", nullptr, 0},
	{"lengthKeyInfoReference", "()I", nullptr, $PUBLIC},
	{"lengthKeyName", "()I", nullptr, $PUBLIC},
	{"lengthKeyValue", "()I", nullptr, $PUBLIC},
	{"lengthMgmtData", "()I", nullptr, $PUBLIC},
	{"lengthPGPData", "()I", nullptr, $PUBLIC},
	{"lengthRetrievalMethod", "()I", nullptr, $PUBLIC},
	{"lengthSPKIData", "()I", nullptr, $PUBLIC},
	{"lengthUnknownElement", "()I", nullptr, $PUBLIC},
	{"lengthX509Data", "()I", nullptr, $PUBLIC},
	{"registerInternalKeyResolver", "(Lcom/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi;)V", nullptr, $PUBLIC},
	{"setId", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"setSecureValidation", "(Z)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _KeyInfo_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.KeyInfo",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	nullptr,
	_KeyInfo_FieldInfo_,
	_KeyInfo_MethodInfo_
};

$Object* allocate$KeyInfo($Class* clazz) {
	return $of($alloc(KeyInfo));
}

$Logger* KeyInfo::LOG = nullptr;
$List* KeyInfo::nullList = nullptr;

void KeyInfo::init$($Document* doc) {
	$useLocalCurrentObjectStackCache();
	$SignatureElementProxy::init$(doc);
	$set(this, storageResolvers, KeyInfo::nullList);
	$set(this, internalKeyResolvers, $new($ArrayList));
	addReturnToSelf();
	$var($String, prefix, $ElementProxy::getDefaultPrefix($(this->getBaseNamespace())));
	if (prefix != nullptr && prefix->length() > 0) {
		$init($Constants);
		$nc($(getElement()))->setAttributeNS($Constants::NamespaceSpecNS, $$str({"xmlns:"_s, prefix}), $(this->getBaseNamespace()));
	}
}

void KeyInfo::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
	$set(this, storageResolvers, KeyInfo::nullList);
	$set(this, internalKeyResolvers, $new($ArrayList));
	$var($Attr, attr, $nc(element)->getAttributeNodeNS(nullptr, "Id"_s));
	if (attr != nullptr) {
		element->setIdAttributeNode(attr, true);
	}
}

void KeyInfo::setSecureValidation(bool secureValidation) {
	this->secureValidation = secureValidation;
}

void KeyInfo::setId($String* id) {
	if (id != nullptr) {
		$init($Constants);
		setLocalIdAttribute($Constants::_ATT_ID, id);
	}
}

$String* KeyInfo::getId() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_ID);
}

void KeyInfo::addKeyName($String* keynameString) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($KeyName, $(getDocument()), keynameString));
}

void KeyInfo::add($KeyName* keyname) {
	appendSelf(static_cast<$ElementProxy*>(keyname));
	addReturnToSelf();
}

void KeyInfo::addKeyValue($PublicKey* pk) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($KeyValue, $(getDocument()), pk));
}

void KeyInfo::addKeyValue($Element* unknownKeyValueElement) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($KeyValue, $(getDocument()), unknownKeyValueElement));
}

void KeyInfo::add($DSAKeyValue* dsakeyvalue) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($KeyValue, $(getDocument()), dsakeyvalue));
}

void KeyInfo::add($RSAKeyValue* rsakeyvalue) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($KeyValue, $(getDocument()), rsakeyvalue));
}

void KeyInfo::add($PublicKey* pk) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($KeyValue, $(getDocument()), pk));
}

void KeyInfo::add($KeyValue* keyvalue) {
	appendSelf(static_cast<$ElementProxy*>(keyvalue));
	addReturnToSelf();
}

void KeyInfo::addMgmtData($String* mgmtdata) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($MgmtData, $(getDocument()), mgmtdata));
}

void KeyInfo::add($MgmtData* mgmtdata) {
	appendSelf(static_cast<$ElementProxy*>(mgmtdata));
	addReturnToSelf();
}

void KeyInfo::add($PGPData* pgpdata) {
	appendSelf(static_cast<$ElementProxy*>(pgpdata));
	addReturnToSelf();
}

void KeyInfo::addRetrievalMethod($String* uri, $Transforms* transforms, $String* Type) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($RetrievalMethod, $(getDocument()), uri, transforms, Type));
}

void KeyInfo::add($RetrievalMethod* retrievalmethod) {
	appendSelf(static_cast<$ElementProxy*>(retrievalmethod));
	addReturnToSelf();
}

void KeyInfo::add($SPKIData* spkidata) {
	appendSelf(static_cast<$ElementProxy*>(spkidata));
	addReturnToSelf();
}

void KeyInfo::add($X509Data* x509data) {
	if (this->x509Datas == nullptr) {
		$set(this, x509Datas, $new($ArrayList));
	}
	$nc(this->x509Datas)->add(x509data);
	appendSelf(static_cast<$ElementProxy*>(x509data));
	addReturnToSelf();
}

void KeyInfo::addDEREncodedKeyValue($PublicKey* pk) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($DEREncodedKeyValue, $(getDocument()), pk));
}

void KeyInfo::add($DEREncodedKeyValue* derEncodedKeyValue) {
	appendSelf(static_cast<$ElementProxy*>(derEncodedKeyValue));
	addReturnToSelf();
}

void KeyInfo::addKeyInfoReference($String* URI) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($KeyInfoReference, $(getDocument()), URI));
}

void KeyInfo::add($KeyInfoReference* keyInfoReference) {
	appendSelf(static_cast<$ElementProxy*>(keyInfoReference));
	addReturnToSelf();
}

void KeyInfo::addUnknownElement($Element* element) {
	appendSelf(static_cast<$Node*>(element));
	addReturnToSelf();
}

int32_t KeyInfo::lengthKeyName() {
	$init($Constants);
	return this->length($Constants::SignatureSpecNS, $Constants::_TAG_KEYNAME);
}

int32_t KeyInfo::lengthKeyValue() {
	$init($Constants);
	return this->length($Constants::SignatureSpecNS, $Constants::_TAG_KEYVALUE);
}

int32_t KeyInfo::lengthMgmtData() {
	$init($Constants);
	return this->length($Constants::SignatureSpecNS, $Constants::_TAG_MGMTDATA);
}

int32_t KeyInfo::lengthPGPData() {
	$init($Constants);
	return this->length($Constants::SignatureSpecNS, $Constants::_TAG_PGPDATA);
}

int32_t KeyInfo::lengthRetrievalMethod() {
	$init($Constants);
	return this->length($Constants::SignatureSpecNS, $Constants::_TAG_RETRIEVALMETHOD);
}

int32_t KeyInfo::lengthSPKIData() {
	$init($Constants);
	return this->length($Constants::SignatureSpecNS, $Constants::_TAG_SPKIDATA);
}

int32_t KeyInfo::lengthX509Data() {
	if (this->x509Datas != nullptr) {
		return $nc(this->x509Datas)->size();
	}
	$init($Constants);
	return this->length($Constants::SignatureSpecNS, $Constants::_TAG_X509DATA);
}

int32_t KeyInfo::lengthDEREncodedKeyValue() {
	$init($Constants);
	return this->length($Constants::SignatureSpec11NS, $Constants::_TAG_DERENCODEDKEYVALUE);
}

int32_t KeyInfo::lengthKeyInfoReference() {
	$init($Constants);
	return this->length($Constants::SignatureSpec11NS, $Constants::_TAG_KEYINFOREFERENCE);
}

int32_t KeyInfo::lengthUnknownElement() {
	$useLocalCurrentObjectStackCache();
	int32_t res = 0;
	$var($Node, childNode, $nc($(getElement()))->getFirstChild());
	while (childNode != nullptr) {
		bool var$0 = childNode->getNodeType() == $Node::ELEMENT_NODE;
		$init($Constants);
		if (var$0 && $nc($(childNode->getNamespaceURI()))->equals($Constants::SignatureSpecNS)) {
			++res;
		}
		$assign(childNode, childNode->getNextSibling());
	}
	return res;
}

$KeyName* KeyInfo::itemKeyName(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_KEYNAME, i));
	if (e != nullptr) {
		return $new($KeyName, e, this->baseURI);
	}
	return nullptr;
}

$KeyValue* KeyInfo::itemKeyValue(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_KEYVALUE, i));
	if (e != nullptr) {
		return $new($KeyValue, e, this->baseURI);
	}
	return nullptr;
}

$MgmtData* KeyInfo::itemMgmtData(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_MGMTDATA, i));
	if (e != nullptr) {
		return $new($MgmtData, e, this->baseURI);
	}
	return nullptr;
}

$PGPData* KeyInfo::itemPGPData(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_PGPDATA, i));
	if (e != nullptr) {
		return $new($PGPData, e, this->baseURI);
	}
	return nullptr;
}

$RetrievalMethod* KeyInfo::itemRetrievalMethod(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_RETRIEVALMETHOD, i));
	if (e != nullptr) {
		return $new($RetrievalMethod, e, this->baseURI);
	}
	return nullptr;
}

$SPKIData* KeyInfo::itemSPKIData(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_SPKIDATA, i));
	if (e != nullptr) {
		return $new($SPKIData, e, this->baseURI);
	}
	return nullptr;
}

$X509Data* KeyInfo::itemX509Data(int32_t i) {
	$useLocalCurrentObjectStackCache();
	if (this->x509Datas != nullptr) {
		return $cast($X509Data, $nc(this->x509Datas)->get(i));
	}
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_X509DATA, i));
	if (e != nullptr) {
		return $new($X509Data, e, this->baseURI);
	}
	return nullptr;
}

$DEREncodedKeyValue* KeyInfo::itemDEREncodedKeyValue(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDs11Node($(getFirstChild()), $Constants::_TAG_DERENCODEDKEYVALUE, i));
	if (e != nullptr) {
		return $new($DEREncodedKeyValue, e, this->baseURI);
	}
	return nullptr;
}

$KeyInfoReference* KeyInfo::itemKeyInfoReference(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDs11Node($(getFirstChild()), $Constants::_TAG_KEYINFOREFERENCE, i));
	if (e != nullptr) {
		return $new($KeyInfoReference, e, this->baseURI);
	}
	return nullptr;
}

$Element* KeyInfo::itemUnknownElement(int32_t i) {
	$useLocalCurrentObjectStackCache();
	int32_t res = 0;
	$var($Node, childNode, $nc($(getElement()))->getFirstChild());
	while (childNode != nullptr) {
		bool var$0 = childNode->getNodeType() == $Node::ELEMENT_NODE;
		$init($Constants);
		if (var$0 && $nc($(childNode->getNamespaceURI()))->equals($Constants::SignatureSpecNS)) {
			++res;
			if (res == i) {
				return $cast($Element, childNode);
			}
		}
		$assign(childNode, childNode->getNextSibling());
	}
	return nullptr;
}

bool KeyInfo::isEmpty() {
	return getFirstChild() == nullptr;
}

bool KeyInfo::containsKeyName() {
	return this->lengthKeyName() > 0;
}

bool KeyInfo::containsKeyValue() {
	return this->lengthKeyValue() > 0;
}

bool KeyInfo::containsMgmtData() {
	return this->lengthMgmtData() > 0;
}

bool KeyInfo::containsPGPData() {
	return this->lengthPGPData() > 0;
}

bool KeyInfo::containsRetrievalMethod() {
	return this->lengthRetrievalMethod() > 0;
}

bool KeyInfo::containsSPKIData() {
	return this->lengthSPKIData() > 0;
}

bool KeyInfo::containsUnknownElement() {
	return this->lengthUnknownElement() > 0;
}

bool KeyInfo::containsX509Data() {
	return this->lengthX509Data() > 0;
}

bool KeyInfo::containsDEREncodedKeyValue() {
	return this->lengthDEREncodedKeyValue() > 0;
}

bool KeyInfo::containsKeyInfoReference() {
	return this->lengthKeyInfoReference() > 0;
}

$PublicKey* KeyInfo::getPublicKey() {
	$var($PublicKey, pk, this->getPublicKeyFromInternalResolvers());
	if (pk != nullptr) {
		$nc(KeyInfo::LOG)->debug("I could find a key using the per-KeyInfo key resolvers"_s);
		return pk;
	}
	$nc(KeyInfo::LOG)->debug("I couldn\'t find a key using the per-KeyInfo key resolvers"_s);
	$assign(pk, this->getPublicKeyFromStaticResolvers());
	if (pk != nullptr) {
		$nc(KeyInfo::LOG)->debug("I could find a key using the system-wide key resolvers"_s);
		return pk;
	}
	$nc(KeyInfo::LOG)->debug("I couldn\'t find a key using the system-wide key resolvers"_s);
	return nullptr;
}

$PublicKey* KeyInfo::getPublicKeyFromStaticResolvers() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, it, $KeyResolver::iterator());
	while ($nc(it)->hasNext()) {
		$var($KeyResolverSpi, keyResolver, $cast($KeyResolverSpi, it->next()));
		$var($Node, currentChild, getFirstChild());
		$var($String, uri, this->getBaseURI());
		while (currentChild != nullptr) {
			if (currentChild->getNodeType() == $Node::ELEMENT_NODE) {
				{
					$var($Iterator, i$, $nc(this->storageResolvers)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($StorageResolver, storage, $cast($StorageResolver, i$->next()));
						{
							$var($PublicKey, pk, $nc(keyResolver)->engineLookupAndResolvePublicKey($cast($Element, currentChild), uri, storage, this->secureValidation));
							if (pk != nullptr) {
								return pk;
							}
						}
					}
				}
			}
			$assign(currentChild, currentChild->getNextSibling());
		}
	}
	return nullptr;
}

$PublicKey* KeyInfo::getPublicKeyFromInternalResolvers() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->internalKeyResolvers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($KeyResolverSpi, keyResolver, $cast($KeyResolverSpi, i$->next()));
			{
				$nc(KeyInfo::LOG)->debug("Try {}"_s, $$new($ObjectArray, {$($of($nc($of(keyResolver))->getClass()->getName()))}));
				$var($Node, currentChild, getFirstChild());
				$var($String, uri, this->getBaseURI());
				while (currentChild != nullptr) {
					if (currentChild->getNodeType() == $Node::ELEMENT_NODE) {
						{
							$var($Iterator, i$, $nc(this->storageResolvers)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($StorageResolver, storage, $cast($StorageResolver, i$->next()));
								{
									$var($PublicKey, pk, $nc(keyResolver)->engineLookupAndResolvePublicKey($cast($Element, currentChild), uri, storage, this->secureValidation));
									if (pk != nullptr) {
										return pk;
									}
								}
							}
						}
					}
					$assign(currentChild, currentChild->getNextSibling());
				}
			}
		}
	}
	return nullptr;
}

$X509Certificate* KeyInfo::getX509Certificate() {
	$var($X509Certificate, cert, this->getX509CertificateFromInternalResolvers());
	if (cert != nullptr) {
		$nc(KeyInfo::LOG)->debug("I could find a X509Certificate using the per-KeyInfo key resolvers"_s);
		return cert;
	}
	$nc(KeyInfo::LOG)->debug("I couldn\'t find a X509Certificate using the per-KeyInfo key resolvers"_s);
	$assign(cert, this->getX509CertificateFromStaticResolvers());
	if (cert != nullptr) {
		$nc(KeyInfo::LOG)->debug("I could find a X509Certificate using the system-wide key resolvers"_s);
		return cert;
	}
	$nc(KeyInfo::LOG)->debug("I couldn\'t find a X509Certificate using the system-wide key resolvers"_s);
	return nullptr;
}

$X509Certificate* KeyInfo::getX509CertificateFromStaticResolvers() {
	$useLocalCurrentObjectStackCache();
	$nc(KeyInfo::LOG)->debug("Start getX509CertificateFromStaticResolvers() with {} resolvers"_s, $$new($ObjectArray, {$($of($Integer::valueOf($KeyResolver::length())))}));
	$var($String, uri, this->getBaseURI());
	$var($Iterator, it, $KeyResolver::iterator());
	while ($nc(it)->hasNext()) {
		$var($KeyResolverSpi, keyResolver, $cast($KeyResolverSpi, it->next()));
		$var($X509Certificate, cert, applyCurrentResolver(uri, keyResolver));
		if (cert != nullptr) {
			return cert;
		}
	}
	return nullptr;
}

$X509Certificate* KeyInfo::applyCurrentResolver($String* uri, $KeyResolverSpi* keyResolver) {
	$useLocalCurrentObjectStackCache();
	$var($Node, currentChild, getFirstChild());
	while (currentChild != nullptr) {
		if (currentChild->getNodeType() == $Node::ELEMENT_NODE) {
			{
				$var($Iterator, i$, $nc(this->storageResolvers)->iterator());
				for (; $nc(i$)->hasNext();) {
					$var($StorageResolver, storage, $cast($StorageResolver, i$->next()));
					{
						$var($X509Certificate, cert, $nc(keyResolver)->engineLookupResolveX509Certificate($cast($Element, currentChild), uri, storage, this->secureValidation));
						if (cert != nullptr) {
							return cert;
						}
					}
				}
			}
		}
		$assign(currentChild, currentChild->getNextSibling());
	}
	return nullptr;
}

$X509Certificate* KeyInfo::getX509CertificateFromInternalResolvers() {
	$useLocalCurrentObjectStackCache();
	$nc(KeyInfo::LOG)->debug("Start getX509CertificateFromInternalResolvers() with {} resolvers"_s, $$new($ObjectArray, {$($of($Integer::valueOf(+this->lengthInternalKeyResolver())))}));
	$var($String, uri, this->getBaseURI());
	{
		$var($Iterator, i$, $nc(this->internalKeyResolvers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($KeyResolverSpi, keyResolver, $cast($KeyResolverSpi, i$->next()));
			{
				$nc(KeyInfo::LOG)->debug("Try {}"_s, $$new($ObjectArray, {$($of($nc($of(keyResolver))->getClass()->getName()))}));
				$var($X509Certificate, cert, applyCurrentResolver(uri, keyResolver));
				if (cert != nullptr) {
					return cert;
				}
			}
		}
	}
	return nullptr;
}

$SecretKey* KeyInfo::getSecretKey() {
	$var($SecretKey, sk, this->getSecretKeyFromInternalResolvers());
	if (sk != nullptr) {
		$nc(KeyInfo::LOG)->debug("I could find a secret key using the per-KeyInfo key resolvers"_s);
		return sk;
	}
	$nc(KeyInfo::LOG)->debug("I couldn\'t find a secret key using the per-KeyInfo key resolvers"_s);
	$assign(sk, this->getSecretKeyFromStaticResolvers());
	if (sk != nullptr) {
		$nc(KeyInfo::LOG)->debug("I could find a secret key using the system-wide key resolvers"_s);
		return sk;
	}
	$nc(KeyInfo::LOG)->debug("I couldn\'t find a secret key using the system-wide key resolvers"_s);
	return nullptr;
}

$SecretKey* KeyInfo::getSecretKeyFromStaticResolvers() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, it, $KeyResolver::iterator());
	while ($nc(it)->hasNext()) {
		$var($KeyResolverSpi, keyResolver, $cast($KeyResolverSpi, it->next()));
		$var($Node, currentChild, getFirstChild());
		$var($String, uri, this->getBaseURI());
		while (currentChild != nullptr) {
			if (currentChild->getNodeType() == $Node::ELEMENT_NODE) {
				{
					$var($Iterator, i$, $nc(this->storageResolvers)->iterator());
					for (; $nc(i$)->hasNext();) {
						$var($StorageResolver, storage, $cast($StorageResolver, i$->next()));
						{
							$var($SecretKey, sk, $nc(keyResolver)->engineLookupAndResolveSecretKey($cast($Element, currentChild), uri, storage, this->secureValidation));
							if (sk != nullptr) {
								return sk;
							}
						}
					}
				}
			}
			$assign(currentChild, currentChild->getNextSibling());
		}
	}
	return nullptr;
}

$SecretKey* KeyInfo::getSecretKeyFromInternalResolvers() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->internalKeyResolvers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($KeyResolverSpi, keyResolver, $cast($KeyResolverSpi, i$->next()));
			{
				$nc(KeyInfo::LOG)->debug("Try {}"_s, $$new($ObjectArray, {$($of($nc($of(keyResolver))->getClass()->getName()))}));
				$var($Node, currentChild, getFirstChild());
				$var($String, uri, this->getBaseURI());
				while (currentChild != nullptr) {
					if (currentChild->getNodeType() == $Node::ELEMENT_NODE) {
						{
							$var($Iterator, i$, $nc(this->storageResolvers)->iterator());
							for (; $nc(i$)->hasNext();) {
								$var($StorageResolver, storage, $cast($StorageResolver, i$->next()));
								{
									$var($SecretKey, sk, $nc(keyResolver)->engineLookupAndResolveSecretKey($cast($Element, currentChild), uri, storage, this->secureValidation));
									if (sk != nullptr) {
										return sk;
									}
								}
							}
						}
					}
					$assign(currentChild, currentChild->getNextSibling());
				}
			}
		}
	}
	return nullptr;
}

$PrivateKey* KeyInfo::getPrivateKey() {
	$var($PrivateKey, pk, this->getPrivateKeyFromInternalResolvers());
	if (pk != nullptr) {
		$nc(KeyInfo::LOG)->debug("I could find a private key using the per-KeyInfo key resolvers"_s);
		return pk;
	}
	$nc(KeyInfo::LOG)->debug("I couldn\'t find a secret key using the per-KeyInfo key resolvers"_s);
	$assign(pk, this->getPrivateKeyFromStaticResolvers());
	if (pk != nullptr) {
		$nc(KeyInfo::LOG)->debug("I could find a private key using the system-wide key resolvers"_s);
		return pk;
	}
	$nc(KeyInfo::LOG)->debug("I couldn\'t find a private key using the system-wide key resolvers"_s);
	return nullptr;
}

$PrivateKey* KeyInfo::getPrivateKeyFromStaticResolvers() {
	$useLocalCurrentObjectStackCache();
	$var($Iterator, it, $KeyResolver::iterator());
	while ($nc(it)->hasNext()) {
		$var($KeyResolverSpi, keyResolver, $cast($KeyResolverSpi, it->next()));
		$var($Node, currentChild, getFirstChild());
		$var($String, uri, this->getBaseURI());
		while (currentChild != nullptr) {
			if (currentChild->getNodeType() == $Node::ELEMENT_NODE) {
				$var($PrivateKey, pk, $nc(keyResolver)->engineLookupAndResolvePrivateKey($cast($Element, currentChild), uri, nullptr, this->secureValidation));
				if (pk != nullptr) {
					return pk;
				}
			}
			$assign(currentChild, currentChild->getNextSibling());
		}
	}
	return nullptr;
}

$PrivateKey* KeyInfo::getPrivateKeyFromInternalResolvers() {
	$useLocalCurrentObjectStackCache();
	{
		$var($Iterator, i$, $nc(this->internalKeyResolvers)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($KeyResolverSpi, keyResolver, $cast($KeyResolverSpi, i$->next()));
			{
				$nc(KeyInfo::LOG)->debug("Try {}"_s, $$new($ObjectArray, {$($of($nc($of(keyResolver))->getClass()->getName()))}));
				$var($Node, currentChild, getFirstChild());
				$var($String, uri, this->getBaseURI());
				while (currentChild != nullptr) {
					if (currentChild->getNodeType() == $Node::ELEMENT_NODE) {
						$var($PrivateKey, pk, $nc(keyResolver)->engineLookupAndResolvePrivateKey($cast($Element, currentChild), uri, nullptr, this->secureValidation));
						if (pk != nullptr) {
							return pk;
						}
					}
					$assign(currentChild, currentChild->getNextSibling());
				}
			}
		}
	}
	return nullptr;
}

void KeyInfo::registerInternalKeyResolver($KeyResolverSpi* realKeyResolver) {
	$nc(this->internalKeyResolvers)->add(realKeyResolver);
}

int32_t KeyInfo::lengthInternalKeyResolver() {
	return $nc(this->internalKeyResolvers)->size();
}

$KeyResolverSpi* KeyInfo::itemInternalKeyResolver(int32_t i) {
	return $cast($KeyResolverSpi, $nc(this->internalKeyResolvers)->get(i));
}

void KeyInfo::addStorageResolver($StorageResolver* storageResolver) {
	if (this->storageResolvers == KeyInfo::nullList) {
		$set(this, storageResolvers, $new($ArrayList));
	}
	$nc(this->storageResolvers)->add(storageResolver);
}

$String* KeyInfo::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_KEYINFO;
}

void clinit$KeyInfo($Class* class$) {
	$assignStatic(KeyInfo::LOG, $LoggerFactory::getLogger(KeyInfo::class$));
	{
		$var($List, list, $new($ArrayList, 1));
		list->add(nullptr);
		$assignStatic(KeyInfo::nullList, $Collections::unmodifiableList(list));
	}
}

KeyInfo::KeyInfo() {
}

$Class* KeyInfo::load$($String* name, bool initialize) {
	$loadClass(KeyInfo, name, initialize, &_KeyInfo_ClassInfo_, clinit$KeyInfo, allocate$KeyInfo);
	return class$;
}

$Class* KeyInfo::class$ = nullptr;

							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com