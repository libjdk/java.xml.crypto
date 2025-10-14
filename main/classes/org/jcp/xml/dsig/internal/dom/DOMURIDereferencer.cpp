#include <org/jcp/xml/dsig/internal/dom/DOMURIDereferencer.h>

#include <com/sun/org/apache/xml/internal/security/Init.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolver.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/OctetStreamData.h>
#include <javax/xml/crypto/URIDereferencer.h>
#include <javax/xml/crypto/URIReference.h>
#include <javax/xml/crypto/URIReferenceException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <javax/xml/crypto/dom/DOMURIReference.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheData.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheNodeSetData.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheOctetStreamData.h>
#include <org/jcp/xml/dsig/internal/dom/Policy.h>
#include <org/jcp/xml/dsig/internal/dom/Utils.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef INSTANCE

using $Init = ::com::sun::org::apache::xml::internal::security::Init;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ResourceResolver = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolver;
using $ResourceResolverContext = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Data = ::javax::xml::crypto::Data;
using $OctetStreamData = ::javax::xml::crypto::OctetStreamData;
using $URIDereferencer = ::javax::xml::crypto::URIDereferencer;
using $URIReference = ::javax::xml::crypto::URIReference;
using $URIReferenceException = ::javax::xml::crypto::URIReferenceException;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMURIReference = ::javax::xml::crypto::dom::DOMURIReference;
using $ApacheData = ::org::jcp::xml::dsig::internal::dom::ApacheData;
using $ApacheNodeSetData = ::org::jcp::xml::dsig::internal::dom::ApacheNodeSetData;
using $ApacheOctetStreamData = ::org::jcp::xml::dsig::internal::dom::ApacheOctetStreamData;
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

$FieldInfo _DOMURIDereferencer_FieldInfo_[] = {
	{"INSTANCE", "Ljavax/xml/crypto/URIDereferencer;", nullptr, $STATIC | $FINAL, $staticField(DOMURIDereferencer, INSTANCE)},
	{}
};

$MethodInfo _DOMURIDereferencer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(DOMURIDereferencer::*)()>(&DOMURIDereferencer::init$))},
	{"dereference", "(Ljavax/xml/crypto/URIReference;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.URIReferenceException"},
	{}
};

$ClassInfo _DOMURIDereferencer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMURIDereferencer",
	"java.lang.Object",
	"javax.xml.crypto.URIDereferencer",
	_DOMURIDereferencer_FieldInfo_,
	_DOMURIDereferencer_MethodInfo_
};

$Object* allocate$DOMURIDereferencer($Class* clazz) {
	return $of($alloc(DOMURIDereferencer));
}

$URIDereferencer* DOMURIDereferencer::INSTANCE = nullptr;

void DOMURIDereferencer::init$() {
	$Init::init();
}

$Data* DOMURIDereferencer::dereference($URIReference* uriRef, $XMLCryptoContext* context) {
	if (uriRef == nullptr) {
		$throwNew($NullPointerException, "uriRef cannot be null"_s);
	}
	if (context == nullptr) {
		$throwNew($NullPointerException, "context cannot be null"_s);
	}
	$var($DOMURIReference, domRef, $cast($DOMURIReference, uriRef));
	$var($Attr, uriAttr, $cast($Attr, $nc(domRef)->getHere()));
	$var($String, uri, $nc(uriRef)->getURI());
	$var($DOMCryptoContext, dcc, $cast($DOMCryptoContext, context));
	$var($String, baseURI, $nc(context)->getBaseURI());
	bool secVal = $Utils::secureValidation(context);
	if (secVal && $Policy::restrictReferenceUriScheme(uri)) {
		$throwNew($URIReferenceException, $$str({"Uri "_s, uri, " is forbidden when secure validation is enabled"_s}));
	}
	bool var$0 = uri != nullptr && uri->length() != 0;
	if (var$0 && uri->charAt(0) == u'#') {
		$var($String, id, uri->substring(1));
		if (id->startsWith("xpointer(id("_s)) {
			int32_t i1 = id->indexOf((int32_t)u'\'');
			int32_t i2 = id->indexOf((int32_t)u'\'', i1 + 1);
			$assign(id, id->substring(i1 + 1, i2));
		}
		$var($Node, referencedElem, $nc($($nc(uriAttr)->getOwnerDocument()))->getElementById(id));
		if (referencedElem == nullptr) {
			$assign(referencedElem, $nc(dcc)->getElementById(id));
		}
		if (referencedElem != nullptr) {
			if (secVal && $Policy::restrictDuplicateIds()) {
				$var($Element, start, $nc($(referencedElem->getOwnerDocument()))->getDocumentElement());
				if (!$XMLUtils::protectAgainstWrappingAttack(start, $cast($Element, referencedElem), id)) {
					$var($String, error, $str({"Multiple Elements with the same ID "_s, id, " detected when secure validation is enabled"_s}));
					$throwNew($URIReferenceException, error);
				}
			}
			$var($XMLSignatureInput, result, $new($XMLSignatureInput, referencedElem));
			result->setSecureValidation(secVal);
			if (!$(uri->substring(1))->startsWith("xpointer(id("_s)) {
				result->setExcludeComments(true);
			}
			result->setMIMEType("text/xml"_s);
			if (baseURI != nullptr && baseURI->length() > 0) {
				result->setSourceURI($(baseURI->concat($(uriAttr->getNodeValue()))));
			} else {
				result->setSourceURI($(uriAttr->getNodeValue()));
			}
			return static_cast<$Data*>(static_cast<$ApacheData*>($new($ApacheNodeSetData, result)));
		}
	}
	try {
		$var($ResourceResolverContext, resContext, $new($ResourceResolverContext, uriAttr, baseURI, false));
		$var($XMLSignatureInput, in, $ResourceResolver::resolve(resContext));
		if ($nc(in)->isOctetStream()) {
			return static_cast<$Data*>(static_cast<$OctetStreamData*>($new($ApacheOctetStreamData, in)));
		} else {
			return static_cast<$Data*>(static_cast<$ApacheData*>($new($ApacheNodeSetData, in)));
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($URIReferenceException, static_cast<$Throwable*>(e));
	}
	$shouldNotReachHere();
}

void clinit$DOMURIDereferencer($Class* class$) {
	$assignStatic(DOMURIDereferencer::INSTANCE, $new(DOMURIDereferencer));
}

DOMURIDereferencer::DOMURIDereferencer() {
}

$Class* DOMURIDereferencer::load$($String* name, bool initialize) {
	$loadClass(DOMURIDereferencer, name, initialize, &_DOMURIDereferencer_ClassInfo_, clinit$DOMURIDereferencer, allocate$DOMURIDereferencer);
	return class$;
}

$Class* DOMURIDereferencer::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org