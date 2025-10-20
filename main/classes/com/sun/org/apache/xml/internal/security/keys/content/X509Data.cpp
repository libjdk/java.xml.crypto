#include <com/sun/org/apache/xml/internal/security/keys/content/X509Data.h>

#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509CRL.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Certificate.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Digest.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509IssuerSerial.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SKI.h>
#include <com/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SubjectName.h>
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
#include <java/math/BigInteger.h>
#include <java/security/cert/X509Certificate.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef LOG
#undef _TAG_X509CERTIFICATE
#undef _TAG_X509CRL
#undef _TAG_X509DATA
#undef _TAG_X509DIGEST
#undef _TAG_X509ISSUERSERIAL
#undef _TAG_X509SKI
#undef _TAG_X509SUBJECTNAME

using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $KeyInfoContent = ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoContent;
using $XMLX509CRL = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509CRL;
using $XMLX509Certificate = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Certificate;
using $XMLX509Digest = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Digest;
using $XMLX509IssuerSerial = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509IssuerSerial;
using $XMLX509SKI = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SKI;
using $XMLX509SubjectName = ::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SubjectName;
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
using $BigInteger = ::java::math::BigInteger;
using $X509Certificate = ::java::security::cert::X509Certificate;
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

$FieldInfo _X509Data_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(X509Data, LOG)},
	{}
};

$MethodInfo _X509Data_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC, $method(static_cast<void(X509Data::*)($Document*)>(&X509Data::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(X509Data::*)($Element*,$String*)>(&X509Data::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509IssuerSerial;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SKI;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SubjectName;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Certificate;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509CRL;)V", nullptr, $PUBLIC},
	{"add", "(Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Digest;)V", nullptr, $PUBLIC},
	{"addCRL", "([B)V", nullptr, $PUBLIC},
	{"addCertificate", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"addCertificate", "([B)V", nullptr, $PUBLIC},
	{"addDigest", "(Ljava/security/cert/X509Certificate;Ljava/lang/String;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"addDigest", "([BLjava/lang/String;)V", nullptr, $PUBLIC},
	{"addIssuerSerial", "(Ljava/lang/String;Ljava/math/BigInteger;)V", nullptr, $PUBLIC},
	{"addIssuerSerial", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addIssuerSerial", "(Ljava/lang/String;I)V", nullptr, $PUBLIC},
	{"addSKI", "([B)V", nullptr, $PUBLIC},
	{"addSKI", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"addSubjectName", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"addSubjectName", "(Ljava/security/cert/X509Certificate;)V", nullptr, $PUBLIC},
	{"addUnknownElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC},
	{"containsCRL", "()Z", nullptr, $PUBLIC},
	{"containsCertificate", "()Z", nullptr, $PUBLIC},
	{"containsDigest", "()Z", nullptr, $PUBLIC},
	{"containsIssuerSerial", "()Z", nullptr, $PUBLIC},
	{"containsSKI", "()Z", nullptr, $PUBLIC},
	{"containsSubjectName", "()Z", nullptr, $PUBLIC},
	{"containsUnknownElement", "()Z", nullptr, $PUBLIC},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"itemCRL", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509CRL;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemCertificate", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Certificate;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemDigest", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509Digest;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemIssuerSerial", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509IssuerSerial;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemSKI", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SKI;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemSubjectName", "(I)Lcom/sun/org/apache/xml/internal/security/keys/content/x509/XMLX509SubjectName;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"itemUnknownElement", "(I)Lorg/w3c/dom/Element;", nullptr, $PUBLIC},
	{"lengthCRL", "()I", nullptr, $PUBLIC},
	{"lengthCertificate", "()I", nullptr, $PUBLIC},
	{"lengthDigest", "()I", nullptr, $PUBLIC},
	{"lengthIssuerSerial", "()I", nullptr, $PUBLIC},
	{"lengthSKI", "()I", nullptr, $PUBLIC},
	{"lengthSubjectName", "()I", nullptr, $PUBLIC},
	{"lengthUnknownElement", "()I", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _X509Data_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.keys.content.X509Data",
	"com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy",
	"com.sun.org.apache.xml.internal.security.keys.content.KeyInfoContent",
	_X509Data_FieldInfo_,
	_X509Data_MethodInfo_
};

$Object* allocate$X509Data($Class* clazz) {
	return $of($alloc(X509Data));
}

int32_t X509Data::hashCode() {
	 return this->$SignatureElementProxy::hashCode();
}

bool X509Data::equals(Object$* arg0) {
	 return this->$SignatureElementProxy::equals(arg0);
}

$Object* X509Data::clone() {
	 return this->$SignatureElementProxy::clone();
}

$String* X509Data::toString() {
	 return this->$SignatureElementProxy::toString();
}

void X509Data::finalize() {
	this->$SignatureElementProxy::finalize();
}

$Logger* X509Data::LOG = nullptr;

void X509Data::init$($Document* doc) {
	$SignatureElementProxy::init$(doc);
	addReturnToSelf();
}

void X509Data::init$($Element* element, $String* baseURI) {
	$useLocalCurrentObjectStackCache();
	$SignatureElementProxy::init$(element, baseURI);
	$var($Node, sibling, getFirstChild());
	while (sibling != nullptr && sibling->getNodeType() != $Node::ELEMENT_NODE) {
		$assign(sibling, sibling->getNextSibling());
	}
	if (sibling == nullptr || $nc(sibling)->getNodeType() != $Node::ELEMENT_NODE) {
			$init($Constants);
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of("Elements"_s),
			$of($Constants::_TAG_X509DATA)
		}));
		$throwNew($XMLSecurityException, "xml.WrongContent"_s, exArgs);
	}
}

void X509Data::addIssuerSerial($String* X509IssuerName, $BigInteger* X509SerialNumber) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($XMLX509IssuerSerial, $(getDocument()), X509IssuerName, X509SerialNumber));
}

void X509Data::addIssuerSerial($String* X509IssuerName, $String* X509SerialNumber) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($XMLX509IssuerSerial, $(getDocument()), X509IssuerName, X509SerialNumber));
}

void X509Data::addIssuerSerial($String* X509IssuerName, int32_t X509SerialNumber) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($XMLX509IssuerSerial, $(getDocument()), X509IssuerName, X509SerialNumber));
}

void X509Data::add($XMLX509IssuerSerial* xmlX509IssuerSerial) {
	appendSelf(static_cast<$ElementProxy*>(xmlX509IssuerSerial));
	addReturnToSelf();
}

void X509Data::addSKI($bytes* skiBytes) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($XMLX509SKI, $(getDocument()), skiBytes));
}

void X509Data::addSKI($X509Certificate* x509certificate) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($XMLX509SKI, $(getDocument()), x509certificate));
}

void X509Data::add($XMLX509SKI* xmlX509SKI) {
	appendSelf(static_cast<$ElementProxy*>(xmlX509SKI));
	addReturnToSelf();
}

void X509Data::addSubjectName($String* subjectName) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($XMLX509SubjectName, $(getDocument()), subjectName));
}

void X509Data::addSubjectName($X509Certificate* x509certificate) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($XMLX509SubjectName, $(getDocument()), x509certificate));
}

void X509Data::add($XMLX509SubjectName* xmlX509SubjectName) {
	appendSelf(static_cast<$ElementProxy*>(xmlX509SubjectName));
	addReturnToSelf();
}

void X509Data::addCertificate($X509Certificate* x509certificate) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($XMLX509Certificate, $(getDocument()), x509certificate));
}

void X509Data::addCertificate($bytes* x509certificateBytes) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($XMLX509Certificate, $(getDocument()), x509certificateBytes));
}

void X509Data::add($XMLX509Certificate* xmlX509Certificate) {
	appendSelf(static_cast<$ElementProxy*>(xmlX509Certificate));
	addReturnToSelf();
}

void X509Data::addCRL($bytes* crlBytes) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($XMLX509CRL, $(getDocument()), crlBytes));
}

void X509Data::add($XMLX509CRL* xmlX509CRL) {
	appendSelf(static_cast<$ElementProxy*>(xmlX509CRL));
	addReturnToSelf();
}

void X509Data::addDigest($X509Certificate* x509certificate, $String* algorithmURI) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($XMLX509Digest, $(getDocument()), x509certificate, algorithmURI));
}

void X509Data::addDigest($bytes* x509CertificateDigestBytes, $String* algorithmURI) {
	$useLocalCurrentObjectStackCache();
	this->add($$new($XMLX509Digest, $(getDocument()), x509CertificateDigestBytes, algorithmURI));
}

void X509Data::add($XMLX509Digest* xmlX509Digest) {
	appendSelf(static_cast<$ElementProxy*>(xmlX509Digest));
	addReturnToSelf();
}

void X509Data::addUnknownElement($Element* element) {
	appendSelf(static_cast<$Node*>(element));
	addReturnToSelf();
}

int32_t X509Data::lengthIssuerSerial() {
	$init($Constants);
	return this->length($Constants::SignatureSpecNS, $Constants::_TAG_X509ISSUERSERIAL);
}

int32_t X509Data::lengthSKI() {
	$init($Constants);
	return this->length($Constants::SignatureSpecNS, $Constants::_TAG_X509SKI);
}

int32_t X509Data::lengthSubjectName() {
	$init($Constants);
	return this->length($Constants::SignatureSpecNS, $Constants::_TAG_X509SUBJECTNAME);
}

int32_t X509Data::lengthCertificate() {
	$init($Constants);
	return this->length($Constants::SignatureSpecNS, $Constants::_TAG_X509CERTIFICATE);
}

int32_t X509Data::lengthCRL() {
	$init($Constants);
	return this->length($Constants::SignatureSpecNS, $Constants::_TAG_X509CRL);
}

int32_t X509Data::lengthDigest() {
	$init($Constants);
	return this->length($Constants::SignatureSpec11NS, $Constants::_TAG_X509DIGEST);
}

int32_t X509Data::lengthUnknownElement() {
	$useLocalCurrentObjectStackCache();
	int32_t result = 0;
	$var($Node, n, getFirstChild());
	while (n != nullptr) {
		bool var$0 = n->getNodeType() == $Node::ELEMENT_NODE;
		$init($Constants);
		if (var$0 && !$nc($(n->getNamespaceURI()))->equals($Constants::SignatureSpecNS)) {
			++result;
		}
		$assign(n, n->getNextSibling());
	}
	return result;
}

$XMLX509IssuerSerial* X509Data::itemIssuerSerial(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_X509ISSUERSERIAL, i));
	if (e != nullptr) {
		return $new($XMLX509IssuerSerial, e, this->baseURI);
	}
	return nullptr;
}

$XMLX509SKI* X509Data::itemSKI(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_X509SKI, i));
	if (e != nullptr) {
		return $new($XMLX509SKI, e, this->baseURI);
	}
	return nullptr;
}

$XMLX509SubjectName* X509Data::itemSubjectName(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_X509SUBJECTNAME, i));
	if (e != nullptr) {
		return $new($XMLX509SubjectName, e, this->baseURI);
	}
	return nullptr;
}

$XMLX509Certificate* X509Data::itemCertificate(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_X509CERTIFICATE, i));
	if (e != nullptr) {
		return $new($XMLX509Certificate, e, this->baseURI);
	}
	return nullptr;
}

$XMLX509CRL* X509Data::itemCRL(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDsNode($(getFirstChild()), $Constants::_TAG_X509CRL, i));
	if (e != nullptr) {
		return $new($XMLX509CRL, e, this->baseURI);
	}
	return nullptr;
}

$XMLX509Digest* X509Data::itemDigest(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$init($Constants);
	$var($Element, e, $XMLUtils::selectDs11Node($(getFirstChild()), $Constants::_TAG_X509DIGEST, i));
	if (e != nullptr) {
		return $new($XMLX509Digest, e, this->baseURI);
	}
	return nullptr;
}

$Element* X509Data::itemUnknownElement(int32_t i) {
	$useLocalCurrentObjectStackCache();
	$nc(X509Data::LOG)->debug("itemUnknownElement not implemented: {}"_s, $$new($ObjectArray, {$($of($Integer::valueOf(i)))}));
	return nullptr;
}

bool X509Data::containsIssuerSerial() {
	return this->lengthIssuerSerial() > 0;
}

bool X509Data::containsSKI() {
	return this->lengthSKI() > 0;
}

bool X509Data::containsSubjectName() {
	return this->lengthSubjectName() > 0;
}

bool X509Data::containsCertificate() {
	return this->lengthCertificate() > 0;
}

bool X509Data::containsDigest() {
	return this->lengthDigest() > 0;
}

bool X509Data::containsCRL() {
	return this->lengthCRL() > 0;
}

bool X509Data::containsUnknownElement() {
	return this->lengthUnknownElement() > 0;
}

$String* X509Data::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_X509DATA;
}

void clinit$X509Data($Class* class$) {
	$assignStatic(X509Data::LOG, $LoggerFactory::getLogger(X509Data::class$));
}

X509Data::X509Data() {
}

$Class* X509Data::load$($String* name, bool initialize) {
	$loadClass(X509Data, name, initialize, &_X509Data_ClassInfo_, clinit$X509Data, allocate$X509Data);
	return class$;
}

$Class* X509Data::class$ = nullptr;

								} // content
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com