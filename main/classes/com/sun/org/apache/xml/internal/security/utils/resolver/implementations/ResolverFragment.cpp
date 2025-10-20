#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverFragment.h>

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

$FieldInfo _ResolverFragment_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResolverFragment, LOG)},
	{}
};

$MethodInfo _ResolverFragment_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResolverFragment::*)()>(&ResolverFragment::init$))},
	{"engineCanResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Z", nullptr, $PUBLIC},
	{"engineResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException"},
	{}
};

$ClassInfo _ResolverFragment_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverFragment",
	"com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi",
	nullptr,
	_ResolverFragment_FieldInfo_,
	_ResolverFragment_MethodInfo_
};

$Object* allocate$ResolverFragment($Class* clazz) {
	return $of($alloc(ResolverFragment));
}

$Logger* ResolverFragment::LOG = nullptr;

void ResolverFragment::init$() {
	$ResourceResolverSpi::init$();
}

$XMLSignatureInput* ResolverFragment::engineResolveURI($ResourceResolverContext* context) {
	$useLocalCurrentObjectStackCache();
	$var($Document, doc, $nc($($nc($nc(context)->attr)->getOwnerElement()))->getOwnerDocument());
	$var($Node, selectedElem, nullptr);
	if ($nc(context->uriToResolve)->isEmpty()) {
		$nc(ResolverFragment::LOG)->debug("ResolverFragment with empty URI (means complete document)"_s);
		$assign(selectedElem, doc);
	} else {
		$var($String, id, $nc(context->uriToResolve)->substring(1));
		$assign(selectedElem, $nc(doc)->getElementById(id));
		if (selectedElem == nullptr) {
			$var($ObjectArray, exArgs, $new($ObjectArray, {$of(id)}));
			$throwNew($ResourceResolverException, "signature.Verification.MissingID"_s, exArgs, context->uriToResolve, context->baseUri);
		}
		if (context->secureValidation) {
			$var($Element, start, $nc($($nc(context->attr)->getOwnerDocument()))->getDocumentElement());
			if (!$XMLUtils::protectAgainstWrappingAttack(start, id)) {
				$var($ObjectArray, exArgs, $new($ObjectArray, {$of(id)}));
				$throwNew($ResourceResolverException, "signature.Verification.MultipleIDs"_s, exArgs, context->uriToResolve, context->baseUri);
			}
		}
		$nc(ResolverFragment::LOG)->debug("Try to catch an Element with ID {} and Element was {}"_s, $$new($ObjectArray, {
			$of(id),
			$of(selectedElem)
		}));
	}
	$var($XMLSignatureInput, result, $new($XMLSignatureInput, selectedElem));
	result->setSecureValidation(context->secureValidation);
	result->setExcludeComments(true);
	result->setMIMEType("text/xml"_s);
	if (context->baseUri != nullptr && $nc(context->baseUri)->length() > 0) {
		result->setSourceURI($($nc(context->baseUri)->concat(context->uriToResolve)));
	} else {
		result->setSourceURI(context->uriToResolve);
	}
	return result;
}

bool ResolverFragment::engineCanResolveURI($ResourceResolverContext* context) {
	$useLocalCurrentObjectStackCache();
	if ($nc(context)->uriToResolve == nullptr) {
		$nc(ResolverFragment::LOG)->debug("Quick fail for null uri"_s);
		return false;
	}
	bool var$0 = $nc($nc(context)->uriToResolve)->isEmpty();
	if (!var$0) {
		bool var$1 = $nc($nc(context)->uriToResolve)->charAt(0) == u'#';
		var$0 = var$1 && !$nc(context->uriToResolve)->startsWith("#xpointer("_s);
	}
	if (var$0) {
		$nc(ResolverFragment::LOG)->debug("State I can resolve reference: \"{}\""_s, $$new($ObjectArray, {$of(context->uriToResolve)}));
		return true;
	}
	$nc(ResolverFragment::LOG)->debug("Do not seem to be able to resolve reference: \"{}\""_s, $$new($ObjectArray, {$of($nc(context)->uriToResolve)}));
	return false;
}

void clinit$ResolverFragment($Class* class$) {
	$assignStatic(ResolverFragment::LOG, $LoggerFactory::getLogger(ResolverFragment::class$));
}

ResolverFragment::ResolverFragment() {
}

$Class* ResolverFragment::load$($String* name, bool initialize) {
	$loadClass(ResolverFragment, name, initialize, &_ResolverFragment_ClassInfo_, clinit$ResolverFragment, allocate$ResolverFragment);
	return class$;
}

$Class* ResolverFragment::class$ = nullptr;

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