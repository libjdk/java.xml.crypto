#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverXPointer.h>

#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverException.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
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

#undef LOG
#undef XP
#undef XP_LENGTH

using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ResourceResolverContext = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext;
using $ResourceResolverException = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverException;
using $ResourceResolverSpi = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
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
							namespace utils {
								namespace resolver {
									namespace implementations {

$FieldInfo _ResolverXPointer_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResolverXPointer, LOG)},
	{"XP", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResolverXPointer, XP)},
	{"XP_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResolverXPointer, XP_LENGTH)},
	{}
};

$MethodInfo _ResolverXPointer_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResolverXPointer::*)()>(&ResolverXPointer::init$))},
	{"engineCanResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Z", nullptr, $PUBLIC},
	{"engineResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException"},
	{"getXPointerId", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&ResolverXPointer::getXPointerId))},
	{"isXPointerId", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&ResolverXPointer::isXPointerId))},
	{"isXPointerSlash", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&ResolverXPointer::isXPointerSlash))},
	{}
};

$ClassInfo _ResolverXPointer_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverXPointer",
	"com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi",
	nullptr,
	_ResolverXPointer_FieldInfo_,
	_ResolverXPointer_MethodInfo_
};

$Object* allocate$ResolverXPointer($Class* clazz) {
	return $of($alloc(ResolverXPointer));
}

$Logger* ResolverXPointer::LOG = nullptr;
$String* ResolverXPointer::XP = nullptr;
int32_t ResolverXPointer::XP_LENGTH = 0;

void ResolverXPointer::init$() {
	$ResourceResolverSpi::init$();
}

$XMLSignatureInput* ResolverXPointer::engineResolveURI($ResourceResolverContext* context) {
	$var($Node, resultNode, nullptr);
	$var($Document, doc, $nc($($nc($nc(context)->attr)->getOwnerElement()))->getOwnerDocument());
	if (isXPointerSlash(context->uriToResolve)) {
		$assign(resultNode, doc);
	} else if (isXPointerId(context->uriToResolve)) {
		$var($String, id, getXPointerId(context->uriToResolve));
		$assign(resultNode, $nc(doc)->getElementById(id));
		if (context->secureValidation) {
			$var($Element, start, $nc($($nc(context->attr)->getOwnerDocument()))->getDocumentElement());
			if (!$XMLUtils::protectAgainstWrappingAttack(start, id)) {
				$var($ObjectArray, exArgs, $new($ObjectArray, {$of(id)}));
				$throwNew($ResourceResolverException, "signature.Verification.MultipleIDs"_s, exArgs, context->uriToResolve, context->baseUri);
			}
		}
		if (resultNode == nullptr) {
			$var($ObjectArray, exArgs, $new($ObjectArray, {$of(id)}));
			$throwNew($ResourceResolverException, "signature.Verification.MissingID"_s, exArgs, context->uriToResolve, context->baseUri);
		}
	}
	$var($XMLSignatureInput, result, $new($XMLSignatureInput, resultNode));
	result->setSecureValidation(context->secureValidation);
	result->setMIMEType("text/xml"_s);
	if (context->baseUri != nullptr && $nc(context->baseUri)->length() > 0) {
		result->setSourceURI($($nc(context->baseUri)->concat(context->uriToResolve)));
	} else {
		result->setSourceURI(context->uriToResolve);
	}
	return result;
}

bool ResolverXPointer::engineCanResolveURI($ResourceResolverContext* context) {
	bool var$0 = isXPointerSlash($nc(context)->uriToResolve);
	return var$0 || isXPointerId($nc(context)->uriToResolve);
}

bool ResolverXPointer::isXPointerSlash($String* uri) {
	$init(ResolverXPointer);
	return "#xpointer(/)"_s->equals(uri);
}

bool ResolverXPointer::isXPointerId($String* uri) {
	$init(ResolverXPointer);
	bool var$0 = uri != nullptr && uri->startsWith(ResolverXPointer::XP);
	if (var$0 && uri->endsWith("))"_s)) {
		$var($String, idPlusDelim, uri->substring(ResolverXPointer::XP_LENGTH, uri->length() - 2));
		int32_t idLen = idPlusDelim->length() - 1;
		bool var$2 = idPlusDelim->charAt(0) == u'\"';
		bool var$1 = var$2 && idPlusDelim->charAt(idLen) == u'\"';
		if (!var$1) {
			bool var$3 = idPlusDelim->charAt(0) == u'\'';
			var$1 = var$3 && idPlusDelim->charAt(idLen) == u'\'';
		}
		if (var$1) {
			$nc(ResolverXPointer::LOG)->debug("Id = {}"_s, $$new($ObjectArray, {$($of(idPlusDelim->substring(1, idLen)))}));
			return true;
		}
	}
	return false;
}

$String* ResolverXPointer::getXPointerId($String* uri) {
	$init(ResolverXPointer);
	bool var$0 = $nc(uri)->startsWith(ResolverXPointer::XP);
	if (var$0 && uri->endsWith("))"_s)) {
		$var($String, idPlusDelim, uri->substring(ResolverXPointer::XP_LENGTH, uri->length() - 2));
		int32_t idLen = idPlusDelim->length() - 1;
		bool var$2 = idPlusDelim->charAt(0) == u'\"';
		bool var$1 = var$2 && idPlusDelim->charAt(idLen) == u'\"';
		if (!var$1) {
			bool var$3 = idPlusDelim->charAt(0) == u'\'';
			var$1 = var$3 && idPlusDelim->charAt(idLen) == u'\'';
		}
		if (var$1) {
			return idPlusDelim->substring(1, idLen);
		}
	}
	return nullptr;
}

void clinit$ResolverXPointer($Class* class$) {
	$assignStatic(ResolverXPointer::XP, "#xpointer(id("_s);
	$assignStatic(ResolverXPointer::LOG, $LoggerFactory::getLogger(ResolverXPointer::class$));
	ResolverXPointer::XP_LENGTH = $nc(ResolverXPointer::XP)->length();
}

ResolverXPointer::ResolverXPointer() {
}

$Class* ResolverXPointer::load$($String* name, bool initialize) {
	$loadClass(ResolverXPointer, name, initialize, &_ResolverXPointer_ClassInfo_, clinit$ResolverXPointer, allocate$ResolverXPointer);
	return class$;
}

$Class* ResolverXPointer::class$ = nullptr;

									} // implementations
								} // resolver
							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com