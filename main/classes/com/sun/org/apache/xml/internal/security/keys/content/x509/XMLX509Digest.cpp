#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Digest.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/Signature11ElementProxy.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/MessageDigest.h>
#include <java/security/cert/X509Certificate.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef _ATT_ALGORITHM
#undef _TAG_X509DIGEST

using $JCEMapper = ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $XMLX509DataContent = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509DataContent;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $Signature11ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::Signature11ElementProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $MessageDigest = ::java::security::MessageDigest;
using $Certificate = ::java::security::cert::Certificate;
using $X509Certificate = ::java::security::cert::X509Certificate;
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
									namespace x509 {

$MethodInfo _XMLX509Digest_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509Digest::*)($Element*,$String*)>(&XMLX509Digest::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"<init>", "(Lorg/w3c/dom/Document;[BLjava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509Digest::*)($Document*,$bytes*,$String*)>(&XMLX509Digest::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/security/cert/X509Certificate;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLX509Digest::*)($Document*,$X509Certificate*,$String*)>(&XMLX509Digest::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getAlgorithmAttr", "()Lorg/w3c/dom/Attr;", nullptr, $PUBLIC},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getDigestBytes", "()[B", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getDigestBytesFromCert", "(Ljava/security/cert/X509Certificate;Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($X509Certificate*,$String*)>(&XMLX509Digest::getDigestBytesFromCert)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _XMLX509Digest_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509Digest",
	"com.sun.org.apache.xml.internal.security.utils.Signature11ElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.x509.XMLX509DataContent",
	nullptr,
	_XMLX509Digest_MethodInfo_
};

$Object* allocate$XMLX509Digest($Class* clazz) {
	return $of($alloc(XMLX509Digest));
}

int32_t XMLX509Digest::hashCode() {
	 return this->$Signature11ElementProxy::hashCode();
}

bool XMLX509Digest::equals(Object$* arg0) {
	 return this->$Signature11ElementProxy::equals(arg0);
}

$Object* XMLX509Digest::clone() {
	 return this->$Signature11ElementProxy::clone();
}

$String* XMLX509Digest::toString() {
	 return this->$Signature11ElementProxy::toString();
}

void XMLX509Digest::finalize() {
	this->$Signature11ElementProxy::finalize();
}

void XMLX509Digest::init$($Element* element, $String* baseURI) {
	$Signature11ElementProxy::init$(element, baseURI);
}

void XMLX509Digest::init$($Document* doc, $bytes* digestBytes, $String* algorithmURI) {
	$Signature11ElementProxy::init$(doc);
	this->addBase64Text(digestBytes);
	$init($Constants);
	setLocalAttribute($Constants::_ATT_ALGORITHM, algorithmURI);
}

void XMLX509Digest::init$($Document* doc, $X509Certificate* x509certificate, $String* algorithmURI) {
	$Signature11ElementProxy::init$(doc);
	this->addBase64Text($(getDigestBytesFromCert(x509certificate, algorithmURI)));
	$init($Constants);
	setLocalAttribute($Constants::_ATT_ALGORITHM, algorithmURI);
}

$Attr* XMLX509Digest::getAlgorithmAttr() {
	$init($Constants);
	return $nc($(getElement()))->getAttributeNodeNS(nullptr, $Constants::_ATT_ALGORITHM);
}

$String* XMLX509Digest::getAlgorithm() {
	return $nc($(this->getAlgorithmAttr()))->getNodeValue();
}

$bytes* XMLX509Digest::getDigestBytes() {
	return this->getBytesFromTextChild();
}

$bytes* XMLX509Digest::getDigestBytesFromCert($X509Certificate* cert, $String* algorithmURI) {
	$init(XMLX509Digest);
	$useLocalCurrentObjectStackCache();
	$var($String, jcaDigestAlgorithm, $JCEMapper::translateURItoJCEID(algorithmURI));
	if (jcaDigestAlgorithm == nullptr) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(algorithmURI)}));
		$throwNew($XMLSecurityException, "XMLX509Digest.UnknownDigestAlgorithm"_s, exArgs);
	}
	try {
		$var($MessageDigest, md, $MessageDigest::getInstance(jcaDigestAlgorithm));
		return $nc(md)->digest($($nc(cert)->getEncoded()));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(jcaDigestAlgorithm)}));
		$throwNew($XMLSecurityException, "XMLX509Digest.FailedDigest"_s, exArgs);
	}
	$shouldNotReachHere();
}

$String* XMLX509Digest::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_X509DIGEST;
}

XMLX509Digest::XMLX509Digest() {
}

$Class* XMLX509Digest::load$($String* name, bool initialize) {
	$loadClass(XMLX509Digest, name, initialize, &_XMLX509Digest_ClassInfo_, allocate$XMLX509Digest);
	return class$;
}

$Class* XMLX509Digest::class$ = nullptr;

									} // x509
								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com