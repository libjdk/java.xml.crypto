#include <com/sun/org/apache/xml/internal/security/keys/content/RetrievalMethod.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef TYPE_DSA
#undef TYPE_MGMT
#undef TYPE_PGP
#undef TYPE_RAWX509
#undef TYPE_RSA
#undef TYPE_SPKI
#undef TYPE_X509
#undef URI
#undef _ATT_TYPE
#undef _ATT_URI
#undef _TAG_RETRIEVALMETHOD
#undef _TAG_TRANSFORMS

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $KeyInfoContent = ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $SignatureElementProxy = ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
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
								namespace content {

$FieldInfo _RetrievalMethod_FieldInfo_[] = {
	{"TYPE_DSA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RetrievalMethod, TYPE_DSA)},
	{"TYPE_RSA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RetrievalMethod, TYPE_RSA)},
	{"TYPE_PGP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RetrievalMethod, TYPE_PGP)},
	{"TYPE_SPKI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RetrievalMethod, TYPE_SPKI)},
	{"TYPE_MGMT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RetrievalMethod, TYPE_MGMT)},
	{"TYPE_X509", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RetrievalMethod, TYPE_X509)},
	{"TYPE_RAWX509", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(RetrievalMethod, TYPE_RAWX509)},
	{}
};

$MethodInfo _RetrievalMethod_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RetrievalMethod::*)($Element*,$String*)>(&RetrievalMethod::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/transforms/Transforms;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(RetrievalMethod::*)($Document*,$String*,$Transforms*,$String*)>(&RetrievalMethod::init$))},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getTransforms", "()Lcom/sun/org/apache/xml/internal/security/transforms/Transforms;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getURIAttr", "()Lorg/w3c/dom/Attr;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _RetrievalMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.RetrievalMethod",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent",
	_RetrievalMethod_FieldInfo_,
	_RetrievalMethod_MethodInfo_
};

$Object* allocate$RetrievalMethod($Class* clazz) {
	return $of($alloc(RetrievalMethod));
}

int32_t RetrievalMethod::hashCode() {
	 return this->$SignatureElementProxy::hashCode();
}

bool RetrievalMethod::equals(Object$* arg0) {
	 return this->$SignatureElementProxy::equals(arg0);
}

$Object* RetrievalMethod::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* RetrievalMethod::toString() {
	 return this->$SignatureElementProxy::toString();
}

void RetrievalMethod::finalize() {
	this->$SignatureElementProxy::finalize();
}


$String* RetrievalMethod::TYPE_DSA = nullptr;

$String* RetrievalMethod::TYPE_RSA = nullptr;

$String* RetrievalMethod::TYPE_PGP = nullptr;

$String* RetrievalMethod::TYPE_SPKI = nullptr;

$String* RetrievalMethod::TYPE_MGMT = nullptr;

$String* RetrievalMethod::TYPE_X509 = nullptr;

$String* RetrievalMethod::TYPE_RAWX509 = nullptr;

void RetrievalMethod::init$($Element* element, $String* baseURI) {
	$SignatureElementProxy::init$(element, baseURI);
}

void RetrievalMethod::init$($Document* doc, $String* URI, $Transforms* transforms, $String* Type) {
	$SignatureElementProxy::init$(doc);
	$init($Constants);
	setLocalAttribute($Constants::_ATT_URI, URI);
	if (Type != nullptr) {
		setLocalAttribute($Constants::_ATT_TYPE, Type);
	}
	if (transforms != nullptr) {
		appendSelf(static_cast<$ElementProxy*>(transforms));
		addReturnToSelf();
	}
}

$Attr* RetrievalMethod::getURIAttr() {
	$init($Constants);
	return $nc($(getElement()))->getAttributeNodeNS(nullptr, $Constants::_ATT_URI);
}

$String* RetrievalMethod::getURI() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_URI);
}

$String* RetrievalMethod::getType() {
	$init($Constants);
	return getLocalAttribute($Constants::_ATT_TYPE);
}

$Transforms* RetrievalMethod::getTransforms() {
	$useLocalCurrentObjectStackCache();
	try {
		$init($Constants);
		$var($Element, transformsElem, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_TRANSFORMS, 0));
		if (transformsElem != nullptr) {
			return $new($Transforms, transformsElem, this->baseURI);
		}
		return nullptr;
	} catch ($XMLSignatureException&) {
		$var($XMLSignatureException, ex, $catch());
		$throwNew($XMLSecurityException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

$String* RetrievalMethod::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_RETRIEVALMETHOD;
}

RetrievalMethod::RetrievalMethod() {
}

void clinit$RetrievalMethod($Class* class$) {
	$init($Constants);
	$assignStatic(RetrievalMethod::TYPE_DSA, $str({$Constants::SignatureSpecNS, "DSAKeyValue"_s}));
	$assignStatic(RetrievalMethod::TYPE_RSA, $str({$Constants::SignatureSpecNS, "RSAKeyValue"_s}));
	$assignStatic(RetrievalMethod::TYPE_PGP, $str({$Constants::SignatureSpecNS, "PGPData"_s}));
	$assignStatic(RetrievalMethod::TYPE_SPKI, $str({$Constants::SignatureSpecNS, "SPKIData"_s}));
	$assignStatic(RetrievalMethod::TYPE_MGMT, $str({$Constants::SignatureSpecNS, "MgmtData"_s}));
	$assignStatic(RetrievalMethod::TYPE_X509, $str({$Constants::SignatureSpecNS, "X509Data"_s}));
	$assignStatic(RetrievalMethod::TYPE_RAWX509, $str({$Constants::SignatureSpecNS, "rawX509Certificate"_s}));
}

$Class* RetrievalMethod::load$($String* name, bool initialize) {
	$loadClass(RetrievalMethod, name, initialize, &_RetrievalMethod_ClassInfo_, clinit$RetrievalMethod, allocate$RetrievalMethod);
	return class$;
}

$Class* RetrievalMethod::class$ = nullptr;

								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com