#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue$Unknown.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/PublicKey.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyValue.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PublicKey = ::java::security::PublicKey;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $DOMKeyValue = ::org::jcp::xml::dsig::internal::dom::DOMKeyValue;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMKeyValue$Unknown_FieldInfo_[] = {
	{"externalPublicKey", "Ljavax/xml/crypto/dom/DOMStructure;", nullptr, $PRIVATE, $field(DOMKeyValue$Unknown, externalPublicKey)},
	{}
};

$MethodInfo _DOMKeyValue$Unknown_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMKeyValue$Unknown::*)($Element*)>(&DOMKeyValue$Unknown::init$)), "javax.xml.crypto.MarshalException"},
	{"marshalPublicKey", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Document;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{"unmarshalKeyValue", "(Lorg/w3c/dom/Element;)Ljava/security/PublicKey;", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{}
};

$InnerClassInfo _DOMKeyValue$Unknown_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMKeyValue$Unknown", "org.jcp.xml.dsig.internal.dom.DOMKeyValue", "Unknown", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMKeyValue$Unknown_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMKeyValue$Unknown",
	"org.jcp.xml.dsig.internal.dom.DOMKeyValue",
	nullptr,
	_DOMKeyValue$Unknown_FieldInfo_,
	_DOMKeyValue$Unknown_MethodInfo_,
	"Lorg/jcp/xml/dsig/internal/dom/DOMKeyValue<Ljava/security/PublicKey;>;",
	nullptr,
	_DOMKeyValue$Unknown_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMKeyValue"
};

$Object* allocate$DOMKeyValue$Unknown($Class* clazz) {
	return $of($alloc(DOMKeyValue$Unknown));
}

void DOMKeyValue$Unknown::init$($Element* elem) {
	$DOMKeyValue::init$(elem);
}

$PublicKey* DOMKeyValue$Unknown::unmarshalKeyValue($Element* kvElem) {
	$set(this, externalPublicKey, $new($DOMStructure, kvElem));
	return nullptr;
}

void DOMKeyValue$Unknown::marshalPublicKey($Node* parent, $Document* doc, $String* dsPrefix, $DOMCryptoContext* context) {
	$nc(parent)->appendChild($($nc(this->externalPublicKey)->getNode()));
}

DOMKeyValue$Unknown::DOMKeyValue$Unknown() {
}

$Class* DOMKeyValue$Unknown::load$($String* name, bool initialize) {
	$loadClass(DOMKeyValue$Unknown, name, initialize, &_DOMKeyValue$Unknown_ClassInfo_, allocate$DOMKeyValue$Unknown);
	return class$;
}

$Class* DOMKeyValue$Unknown::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org