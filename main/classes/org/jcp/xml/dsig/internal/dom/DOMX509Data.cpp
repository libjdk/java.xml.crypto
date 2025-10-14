#include <org/jcp/xml/dsig/internal/dom/DOMX509Data.h>

#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/IOException.h>
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
#include <java/security/GeneralSecurityException.h>
#include <java/security/cert/CRL.h>
#include <java/security/cert/CRLException.h>
#include <java/security/cert/Certificate.h>
#include <java/security/cert/CertificateEncodingException.h>
#include <java/security/cert/CertificateException.h>
#include <java/security/cert/CertificateFactory.h>
#include <java/security/cert/X509CRL.h>
#include <java/security/cert/X509Certificate.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Arrays.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <javax/security/auth/x500/X500Principal.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMStructure.h>
#include <javax/xml/crypto/dsig/XMLSignature.h>
#include <javax/xml/crypto/dsig/keyinfo/X509Data.h>
#include <javax/xml/crypto/dsig/keyinfo/X509IssuerSerial.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/jcp/xml/dsig/internal/dom/DOMX509IssuerSerial.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef ELEMENT_NODE
#undef XMLNS

using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassCastException = ::java::lang::ClassCastException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $GeneralSecurityException = ::java::security::GeneralSecurityException;
using $CRL = ::java::security::cert::CRL;
using $CRLException = ::java::security::cert::CRLException;
using $Certificate = ::java::security::cert::Certificate;
using $CertificateEncodingException = ::java::security::cert::CertificateEncodingException;
using $CertificateException = ::java::security::cert::CertificateException;
using $CertificateFactory = ::java::security::cert::CertificateFactory;
using $X509CRL = ::java::security::cert::X509CRL;
using $X509Certificate = ::java::security::cert::X509Certificate;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Arrays = ::java::util::Arrays;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $X500Principal = ::javax::security::auth::x500::X500Principal;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMStructure = ::javax::xml::crypto::dom::DOMStructure;
using $XMLSignature = ::javax::xml::crypto::dsig::XMLSignature;
using $X509Data = ::javax::xml::crypto::dsig::keyinfo::X509Data;
using $X509IssuerSerial = ::javax::xml::crypto::dsig::keyinfo::X509IssuerSerial;
using $1DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $DOMX509IssuerSerial = ::org::jcp::xml::dsig::internal::dom::DOMX509IssuerSerial;
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

$FieldInfo _DOMX509Data_FieldInfo_[] = {
	{"content", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/Object;>;", $PRIVATE | $FINAL, $field(DOMX509Data, content)},
	{"cf", "Ljava/security/cert/CertificateFactory;", nullptr, $PRIVATE, $field(DOMX509Data, cf)},
	{}
};

$MethodInfo _DOMX509Data_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<*>;)V", $PUBLIC, $method(static_cast<void(DOMX509Data::*)($List*)>(&DOMX509Data::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMX509Data::*)($Element*)>(&DOMX509Data::init$)), "javax.xml.crypto.MarshalException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getContent", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/Object;>;", $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"marshalCRL", "(Ljava/security/cert/X509CRL;Lorg/w3c/dom/Node;Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(DOMX509Data::*)($X509CRL*,$Node*,$Document*,$String*)>(&DOMX509Data::marshalCRL)), "javax.xml.crypto.MarshalException"},
	{"marshalCert", "(Ljava/security/cert/X509Certificate;Lorg/w3c/dom/Node;Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(DOMX509Data::*)($X509Certificate*,$Node*,$Document*,$String*)>(&DOMX509Data::marshalCert)), "javax.xml.crypto.MarshalException"},
	{"marshalSKI", "([BLorg/w3c/dom/Node;Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(DOMX509Data::*)($bytes*,$Node*,$Document*,$String*)>(&DOMX509Data::marshalSKI))},
	{"marshalSubjectName", "(Ljava/lang/String;Lorg/w3c/dom/Node;Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(DOMX509Data::*)($String*,$Node*,$Document*,$String*)>(&DOMX509Data::marshalSubjectName))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"unmarshalBase64Binary", "(Lorg/w3c/dom/Element;)Ljava/io/ByteArrayInputStream;", nullptr, $PRIVATE, $method(static_cast<$ByteArrayInputStream*(DOMX509Data::*)($Element*)>(&DOMX509Data::unmarshalBase64Binary)), "javax.xml.crypto.MarshalException"},
	{"unmarshalX509CRL", "(Lorg/w3c/dom/Element;)Ljava/security/cert/X509CRL;", nullptr, $PRIVATE, $method(static_cast<$X509CRL*(DOMX509Data::*)($Element*)>(&DOMX509Data::unmarshalX509CRL)), "javax.xml.crypto.MarshalException"},
	{"unmarshalX509Certificate", "(Lorg/w3c/dom/Element;)Ljava/security/cert/X509Certificate;", nullptr, $PRIVATE, $method(static_cast<$X509Certificate*(DOMX509Data::*)($Element*)>(&DOMX509Data::unmarshalX509Certificate)), "javax.xml.crypto.MarshalException"},
	{}
};

$ClassInfo _DOMX509Data_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMX509Data",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	"javax.xml.crypto.dsig.keyinfo.X509Data",
	_DOMX509Data_FieldInfo_,
	_DOMX509Data_MethodInfo_
};

$Object* allocate$DOMX509Data($Class* clazz) {
	return $of($alloc(DOMX509Data));
}

bool DOMX509Data::isFeatureSupported($String* feature) {
	 return this->$1DOMStructure::isFeatureSupported(feature);
}

$Object* DOMX509Data::clone() {
	 return this->$1DOMStructure::clone();
}

$String* DOMX509Data::toString() {
	 return this->$1DOMStructure::toString();
}

void DOMX509Data::finalize() {
	this->$1DOMStructure::finalize();
}

void DOMX509Data::init$($List* content) {
	$1DOMStructure::init$();
	if (content == nullptr) {
		$throwNew($NullPointerException, "content cannot be null"_s);
	}
	$var($List, contentCopy, $new($ArrayList, static_cast<$Collection*>(content)));
	if (contentCopy->isEmpty()) {
		$throwNew($IllegalArgumentException, "content cannot be empty"_s);
	}
	{
		int32_t i = 0;
		int32_t size = contentCopy->size();
		for (; i < size; ++i) {
			$var($Object, x509Type, contentCopy->get(i));
			if ($instanceOf($String, x509Type)) {
				$new($X500Principal, $cast($String, x509Type));
			} else if (!($instanceOf($bytes, x509Type)) && !($instanceOf($X509Certificate, x509Type)) && !($instanceOf($X509CRL, x509Type)) && !($instanceOf($XMLStructure, x509Type))) {
				$throwNew($ClassCastException, $$str({"content["_s, $$str(i), "] is not a valid X509Data type"_s}));
			}
		}
	}
	$set(this, content, $Collections::unmodifiableList(contentCopy));
}

void DOMX509Data::init$($Element* xdElem) {
	$1DOMStructure::init$();
	$var($List, newContent, $new($ArrayList));
	$var($Node, firstChild, $nc(xdElem)->getFirstChild());
	while (firstChild != nullptr) {
		if (firstChild->getNodeType() == $Node::ELEMENT_NODE) {
			$var($Element, childElem, $cast($Element, firstChild));
			$var($String, localName, childElem->getLocalName());
			$var($String, namespace$, childElem->getNamespaceURI());
			bool var$0 = "X509Certificate"_s->equals(localName);
			$init($XMLSignature);
			if (var$0 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
				newContent->add($(unmarshalX509Certificate(childElem)));
			} else {
				bool var$2 = "X509IssuerSerial"_s->equals(localName);
				if (var$2 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
					newContent->add($$new($DOMX509IssuerSerial, childElem));
				} else {
					bool var$4 = "X509SubjectName"_s->equals(localName);
					if (var$4 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
						newContent->add($($nc($(childElem->getFirstChild()))->getNodeValue()));
					} else {
						bool var$6 = "X509SKI"_s->equals(localName);
						if (var$6 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
							$var($String, content, $XMLUtils::getFullTextChildrenFromNode(childElem));
							newContent->add($($XMLUtils::decode(content)));
						} else {
							bool var$8 = "X509CRL"_s->equals(localName);
							if (var$8 && $nc($XMLSignature::XMLNS)->equals(namespace$)) {
								newContent->add($(unmarshalX509CRL(childElem)));
							} else {
								newContent->add($$new($DOMStructure, childElem));
							}
						}
					}
				}
			}
		}
		$assign(firstChild, firstChild->getNextSibling());
	}
	$set(this, content, $Collections::unmodifiableList(newContent));
}

$List* DOMX509Data::getContent() {
	return this->content;
}

void DOMX509Data::marshal($Node* parent, $String* dsPrefix, $DOMCryptoContext* context) {
	$var($Document, ownerDoc, $DOMUtils::getOwnerDocument(parent));
	$init($XMLSignature);
	$var($Element, xdElem, $DOMUtils::createElement(ownerDoc, "X509Data"_s, $XMLSignature::XMLNS, dsPrefix));
	{
		int32_t i = 0;
		int32_t size = $nc(this->content)->size();
		for (; i < size; ++i) {
			$var($Object, object, $nc(this->content)->get(i));
			if ($instanceOf($X509Certificate, object)) {
				marshalCert($cast($X509Certificate, object), xdElem, ownerDoc, dsPrefix);
			} else if ($instanceOf($XMLStructure, object)) {
				if ($instanceOf($X509IssuerSerial, object)) {
					$nc(($cast($DOMX509IssuerSerial, object)))->marshal(xdElem, dsPrefix, context);
				} else {
					$var($DOMStructure, domContent, $cast($DOMStructure, object));
					$DOMUtils::appendChild(xdElem, $($nc(domContent)->getNode()));
				}
			} else if ($instanceOf($bytes, object)) {
				marshalSKI($cast($bytes, object), xdElem, ownerDoc, dsPrefix);
			} else if ($instanceOf($String, object)) {
				marshalSubjectName($cast($String, object), xdElem, ownerDoc, dsPrefix);
			} else if ($instanceOf($X509CRL, object)) {
				marshalCRL($cast($X509CRL, object), xdElem, ownerDoc, dsPrefix);
			}
		}
	}
	$nc(parent)->appendChild(xdElem);
}

void DOMX509Data::marshalSKI($bytes* skid, $Node* parent, $Document* doc, $String* dsPrefix) {
	$init($XMLSignature);
	$var($Element, skidElem, $DOMUtils::createElement(doc, "X509SKI"_s, $XMLSignature::XMLNS, dsPrefix));
	$nc(skidElem)->appendChild($($nc(doc)->createTextNode($($XMLUtils::encodeToString(skid)))));
	$nc(parent)->appendChild(skidElem);
}

void DOMX509Data::marshalSubjectName($String* name, $Node* parent, $Document* doc, $String* dsPrefix) {
	$init($XMLSignature);
	$var($Element, snElem, $DOMUtils::createElement(doc, "X509SubjectName"_s, $XMLSignature::XMLNS, dsPrefix));
	$nc(snElem)->appendChild($($nc(doc)->createTextNode(name)));
	$nc(parent)->appendChild(snElem);
}

void DOMX509Data::marshalCert($X509Certificate* cert, $Node* parent, $Document* doc, $String* dsPrefix) {
	$init($XMLSignature);
	$var($Element, certElem, $DOMUtils::createElement(doc, "X509Certificate"_s, $XMLSignature::XMLNS, dsPrefix));
	try {
		$nc(certElem)->appendChild($($nc(doc)->createTextNode($($XMLUtils::encodeToString($($nc(cert)->getEncoded()))))));
	} catch ($CertificateEncodingException&) {
		$var($CertificateEncodingException, e, $catch());
		$throwNew($MarshalException, "Error encoding X509Certificate"_s, e);
	}
	$nc(parent)->appendChild(certElem);
}

void DOMX509Data::marshalCRL($X509CRL* crl, $Node* parent, $Document* doc, $String* dsPrefix) {
	$init($XMLSignature);
	$var($Element, crlElem, $DOMUtils::createElement(doc, "X509CRL"_s, $XMLSignature::XMLNS, dsPrefix));
	try {
		$nc(crlElem)->appendChild($($nc(doc)->createTextNode($($XMLUtils::encodeToString($($nc(crl)->getEncoded()))))));
	} catch ($CRLException&) {
		$var($CRLException, e, $catch());
		$throwNew($MarshalException, "Error encoding X509CRL"_s, e);
	}
	$nc(parent)->appendChild(crlElem);
}

$X509Certificate* DOMX509Data::unmarshalX509Certificate($Element* elem) {
	try {
		$var($ByteArrayInputStream, bs, unmarshalBase64Binary(elem));
		{
			$var($Throwable, var$0, nullptr);
			$var($X509Certificate, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$assign(var$2, $cast($X509Certificate, $nc(this->cf)->generateCertificate(bs)));
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (bs != nullptr) {
						try {
							bs->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				if (bs != nullptr) {
					bs->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($CertificateException&) {
		$var($CertificateException, e, $catch());
		$throwNew($MarshalException, "Cannot create X509Certificate"_s, e);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($MarshalException, "Error closing stream"_s, e);
	}
	$shouldNotReachHere();
}

$X509CRL* DOMX509Data::unmarshalX509CRL($Element* elem) {
	try {
		$var($ByteArrayInputStream, bs, unmarshalBase64Binary(elem));
		{
			$var($Throwable, var$0, nullptr);
			$var($X509CRL, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$assign(var$2, $cast($X509CRL, $nc(this->cf)->generateCRL(bs)));
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					if (bs != nullptr) {
						try {
							bs->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				if (bs != nullptr) {
					bs->close();
				}
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	} catch ($CRLException&) {
		$var($CRLException, e, $catch());
		$throwNew($MarshalException, "Cannot create X509CRL"_s, e);
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($MarshalException, "Error closing stream"_s, e);
	}
	$shouldNotReachHere();
}

$ByteArrayInputStream* DOMX509Data::unmarshalBase64Binary($Element* elem) {
	try {
		if (this->cf == nullptr) {
			$set(this, cf, $CertificateFactory::getInstance("X.509"_s));
		}
		$var($String, content, $XMLUtils::getFullTextChildrenFromNode(elem));
		return $new($ByteArrayInputStream, $($XMLUtils::decode(content)));
	} catch ($CertificateException&) {
		$var($CertificateException, e, $catch());
		$throwNew($MarshalException, "Cannot create CertificateFactory"_s, e);
	}
	$shouldNotReachHere();
}

bool DOMX509Data::equals(Object$* o) {
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($X509Data, o))) {
		return false;
	}
	$var($X509Data, oxd, $cast($X509Data, o));
	$var($List, ocontent, $nc(oxd)->getContent());
	int32_t size = $nc(this->content)->size();
	if (size != $nc(ocontent)->size()) {
		return false;
	}
	for (int32_t i = 0; i < size; ++i) {
		$var($Object, x, $nc(this->content)->get(i));
		$var($Object, ox, $nc(ocontent)->get(i));
		if ($instanceOf($bytes, x)) {
			if (!($instanceOf($bytes, ox)) || !$Arrays::equals($cast($bytes, x), $cast($bytes, ox))) {
				return false;
			}
		} else if (!($nc($of(x))->equals(ox))) {
			return false;
		}
	}
	return true;
}

int32_t DOMX509Data::hashCode() {
	int32_t result = 17;
	result = 31 * result + $nc(this->content)->hashCode();
	return result;
}

DOMX509Data::DOMX509Data() {
}

$Class* DOMX509Data::load$($String* name, bool initialize) {
	$loadClass(DOMX509Data, name, initialize, &_DOMX509Data_ClassInfo_, allocate$DOMX509Data);
	return class$;
}

$Class* DOMX509Data::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org