#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/GeneralSecurityException.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <javax/xml/crypto/AlgorithmMethod.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dsig/DigestMethod.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/spec/DigestMethodParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$RIPEMD160.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA1.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA224.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA256.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA384.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA3_224.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA3_256.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA3_384.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA3_512.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$SHA512.h>
#include <org/jcp/xml/dsig/internal/dom/DOMDigestMethod$WHIRLPOOL.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef RIPEMD160
#undef SHA1
#undef WHIRLPOOL
#undef XMLNS

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DigestMethod = ::javax::xml::crypto::dsig::DigestMethod;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $DigestMethodParameterSpec = ::javax::xml::crypto::dsig::spec::DigestMethodParameterSpec;
using $DOMDigestMethod$RIPEMD160 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$RIPEMD160;
using $DOMDigestMethod$SHA1 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA1;
using $DOMDigestMethod$SHA224 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA224;
using $DOMDigestMethod$SHA256 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA256;
using $DOMDigestMethod$SHA384 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA384;
using $DOMDigestMethod$SHA3_224 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA3_224;
using $DOMDigestMethod$SHA3_256 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA3_256;
using $DOMDigestMethod$SHA3_384 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA3_384;
using $DOMDigestMethod$SHA3_512 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA3_512;
using $DOMDigestMethod$SHA512 = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$SHA512;
using $DOMDigestMethod$WHIRLPOOL = ::org::jcp::xml::dsig::internal::dom::DOMDigestMethod$WHIRLPOOL;
using $DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMDigestMethod_FieldInfo_[] = {
	{"SHA224", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMDigestMethod, SHA224)},
	{"SHA384", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMDigestMethod, SHA384)},
	{"WHIRLPOOL", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMDigestMethod, WHIRLPOOL)},
	{"SHA3_224", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMDigestMethod, SHA3_224)},
	{"SHA3_256", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMDigestMethod, SHA3_256)},
	{"SHA3_384", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMDigestMethod, SHA3_384)},
	{"SHA3_512", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(DOMDigestMethod, SHA3_512)},
	{"params", "Ljavax/xml/crypto/dsig/spec/DigestMethodParameterSpec;", nullptr, $PRIVATE, $field(DOMDigestMethod, params)},
	{}
};

$MethodInfo _DOMDigestMethod_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/security/spec/AlgorithmParameterSpec;)V", nullptr, 0, $method(static_cast<void(DOMDigestMethod::*)($AlgorithmParameterSpec*)>(&DOMDigestMethod::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, 0, $method(static_cast<void(DOMDigestMethod::*)($Element*)>(&DOMDigestMethod::init$)), "javax.xml.crypto.MarshalException"},
	{"checkParams", "(Ljavax/xml/crypto/dsig/spec/DigestMethodParameterSpec;)V", nullptr, 0, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getMessageDigestAlgorithm", "()Ljava/lang/String;", nullptr, $ABSTRACT},
	{"getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $FINAL},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"marshalParams", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unmarshal", "(Lorg/w3c/dom/Element;)Ljavax/xml/crypto/dsig/DigestMethod;", nullptr, $STATIC, $method(static_cast<$DigestMethod*(*)($Element*)>(&DOMDigestMethod::unmarshal)), "javax.xml.crypto.MarshalException"},
	{"unmarshalParams", "(Lorg/w3c/dom/Element;)Ljavax/xml/crypto/dsig/spec/DigestMethodParameterSpec;", nullptr, 0, nullptr, "javax.xml.crypto.MarshalException"},
	{}
};

$InnerClassInfo _DOMDigestMethod_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_512", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA3_512", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_384", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA3_384", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_256", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA3_256", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_224", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA3_224", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$WHIRLPOOL", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "WHIRLPOOL", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$RIPEMD160", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "RIPEMD160", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA512", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA512", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA384", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA384", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA256", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA256", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA224", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA224", $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA1", "org.jcp.xml.dsig.internal.dom.DOMDigestMethod", "SHA1", $STATIC | $FINAL},
	{}
};

$ClassInfo _DOMDigestMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.DigestMethod",
	_DOMDigestMethod_FieldInfo_,
	_DOMDigestMethod_MethodInfo_,
	nullptr,
	nullptr,
	_DOMDigestMethod_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_512,org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_384,org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_256,org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA3_224,org.jcp.xml.dsig.internal.dom.DOMDigestMethod$WHIRLPOOL,org.jcp.xml.dsig.internal.dom.DOMDigestMethod$RIPEMD160,org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA512,org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA384,org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA256,org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA224,org.jcp.xml.dsig.internal.dom.DOMDigestMethod$SHA1"
};

$Object* allocate$DOMDigestMethod($Class* clazz) {
	return $of($alloc(DOMDigestMethod));
}

bool DOMDigestMethod::isFeatureSupported($String* feature) {
	 return this->$DOMStructure::isFeatureSupported(feature);
}

$Object* DOMDigestMethod::clone() {
	 return this->$DOMStructure::clone();
}

$String* DOMDigestMethod::toString() {
	 return this->$DOMStructure::toString();
}

void DOMDigestMethod::finalize() {
	this->$DOMStructure::finalize();
}

$String* DOMDigestMethod::SHA224 = nullptr;
$String* DOMDigestMethod::SHA384 = nullptr;
$String* DOMDigestMethod::WHIRLPOOL = nullptr;
$String* DOMDigestMethod::SHA3_224 = nullptr;
$String* DOMDigestMethod::SHA3_256 = nullptr;
$String* DOMDigestMethod::SHA3_384 = nullptr;
$String* DOMDigestMethod::SHA3_512 = nullptr;

void DOMDigestMethod::init$($AlgorithmParameterSpec* params) {
	$DOMStructure::init$();
	if (params != nullptr && !($instanceOf($DigestMethodParameterSpec, params))) {
		$throwNew($InvalidAlgorithmParameterException, "params must be of type DigestMethodParameterSpec"_s);
	}
	checkParams($cast($DigestMethodParameterSpec, params));
	$set(this, params, $cast($DigestMethodParameterSpec, params));
}

void DOMDigestMethod::init$($Element* dmElem) {
	$DOMStructure::init$();
	$var($Element, paramsElem, $DOMUtils::getFirstChildElement(dmElem));
	if (paramsElem != nullptr) {
		$set(this, params, unmarshalParams(paramsElem));
	}
	try {
		checkParams(this->params);
	} catch ($InvalidAlgorithmParameterException&) {
		$var($InvalidAlgorithmParameterException, iape, $catch());
		$throwNew($MarshalException, static_cast<$Throwable*>(iape));
	}
}

$DigestMethod* DOMDigestMethod::unmarshal($Element* dmElem) {
	$init(DOMDigestMethod);
	$var($String, alg, $DOMUtils::getAttributeValue(dmElem, "Algorithm"_s));
	$init($DigestMethod);
	if ($nc(alg)->equals($DigestMethod::SHA1)) {
		return $new($DOMDigestMethod$SHA1, dmElem);
	} else {
		if (alg->equals(DOMDigestMethod::SHA224)) {
			return $new($DOMDigestMethod$SHA224, dmElem);
		} else {
			if (alg->equals($DigestMethod::SHA256)) {
				return $new($DOMDigestMethod$SHA256, dmElem);
			} else {
				if (alg->equals(DOMDigestMethod::SHA384)) {
					return $new($DOMDigestMethod$SHA384, dmElem);
				} else {
					if (alg->equals($DigestMethod::SHA512)) {
						return $new($DOMDigestMethod$SHA512, dmElem);
					} else {
						if (alg->equals($DigestMethod::RIPEMD160)) {
							return $new($DOMDigestMethod$RIPEMD160, dmElem);
						} else {
							if (alg->equals(DOMDigestMethod::WHIRLPOOL)) {
								return $new($DOMDigestMethod$WHIRLPOOL, dmElem);
							} else {
								if (alg->equals(DOMDigestMethod::SHA3_224)) {
									return $new($DOMDigestMethod$SHA3_224, dmElem);
								} else {
									if (alg->equals(DOMDigestMethod::SHA3_256)) {
										return $new($DOMDigestMethod$SHA3_256, dmElem);
									} else {
										if (alg->equals(DOMDigestMethod::SHA3_384)) {
											return $new($DOMDigestMethod$SHA3_384, dmElem);
										} else {
											if (alg->equals(DOMDigestMethod::SHA3_512)) {
												return $new($DOMDigestMethod$SHA3_512, dmElem);
											} else {
												$throwNew($MarshalException, $$str({"unsupported DigestMethod algorithm: "_s, alg}));
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void DOMDigestMethod::checkParams($DigestMethodParameterSpec* params) {
	if (params != nullptr) {
		$throwNew($InvalidAlgorithmParameterException, $$str({"no parameters should be specified for the "_s, $(getMessageDigestAlgorithm()), " DigestMethod algorithm"_s}));
	}
}

$AlgorithmParameterSpec* DOMDigestMethod::getParameterSpec() {
	return this->params;
}

$DigestMethodParameterSpec* DOMDigestMethod::unmarshalParams($Element* paramsElem) {
	$throwNew($MarshalException, $$str({"no parameters should be specified for the "_s, $(getMessageDigestAlgorithm()), " DigestMethod algorithm"_s}));
	$shouldNotReachHere();
}

void DOMDigestMethod::marshal($Node* parent, $String* prefix, $DOMCryptoContext* context) {
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, dmElem, $DOMUtils::createElement(ownerDoc, "DigestMethod"_s, $XMLSignature::XMLNS, prefix));
	$DOMUtils::setAttribute(dmElem, "Algorithm"_s, $(getAlgorithm()));
	if (this->params != nullptr) {
		marshalParams(dmElem, prefix);
	}
	$nc(parent)->appendChild(dmElem);
}

bool DOMDigestMethod::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($DigestMethod, o))) {
		return false;
	}
	$var($DigestMethod, odm, $cast($DigestMethod, o));
	bool paramsEqual = this->params == nullptr ? $nc(odm)->getParameterSpec() == nullptr : $nc($of(this->params))->equals($(odm->getParameterSpec()));
	return $nc($(getAlgorithm()))->equals($(odm->getAlgorithm())) && paramsEqual;
}

int32_t DOMDigestMethod::hashCode() {
	int32_t result = 17;
	if (this->params != nullptr) {
		result = 31 * result + $nc($of(this->params))->hashCode();
	}
	result = 31 * result + $nc($(getAlgorithm()))->hashCode();
	return result;
}

void DOMDigestMethod::marshalParams($Element* parent, $String* prefix) {
	$throwNew($MarshalException, $$str({"no parameters should be specified for the "_s, $(getMessageDigestAlgorithm()), " DigestMethod algorithm"_s}));
}

DOMDigestMethod::DOMDigestMethod() {
}

void clinit$DOMDigestMethod($Class* class$) {
	$assignStatic(DOMDigestMethod::SHA224, "http://www.w3.org/2001/04/xmldsig-more#sha224"_s);
	$assignStatic(DOMDigestMethod::SHA384, "http://www.w3.org/2001/04/xmldsig-more#sha384"_s);
	$assignStatic(DOMDigestMethod::WHIRLPOOL, "http://www.w3.org/2007/05/xmldsig-more#whirlpool"_s);
	$assignStatic(DOMDigestMethod::SHA3_224, "http://www.w3.org/2007/05/xmldsig-more#sha3-224"_s);
	$assignStatic(DOMDigestMethod::SHA3_256, "http://www.w3.org/2007/05/xmldsig-more#sha3-256"_s);
	$assignStatic(DOMDigestMethod::SHA3_384, "http://www.w3.org/2007/05/xmldsig-more#sha3-384"_s);
	$assignStatic(DOMDigestMethod::SHA3_512, "http://www.w3.org/2007/05/xmldsig-more#sha3-512"_s);
}

$Class* DOMDigestMethod::load$($String* name, bool initialize) {
	$loadClass(DOMDigestMethod, name, initialize, &_DOMDigestMethod_ClassInfo_, clinit$DOMDigestMethod, allocate$DOMDigestMethod);
	return class$;
}

$Class* DOMDigestMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org