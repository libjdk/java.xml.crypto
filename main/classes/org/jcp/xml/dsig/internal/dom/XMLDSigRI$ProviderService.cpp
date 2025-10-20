#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI$ProviderService.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidParameterException.h>
#include <java/security/NoSuchAlgorithmException.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/security/ProviderException.h>
#include <java/util/Arrays.h>
#include <java/util/List.h>
#include <java/util/Map.h>
#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <javax/xml/crypto/dsig/Transform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMBase64Transform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMCanonicalXMLC14N11Method.h>
#include <org/jcp/xml/dsig/internal/dom/DOMCanonicalXMLC14NMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMEnvelopedTransform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMExcC14NMethod.h>
#include <org/jcp/xml/dsig/internal/dom/DOMKeyInfoFactory.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXMLSignatureFactory.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXPathFilter2Transform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXPathTransform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMXSLTTransform.h>
#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI.h>
#include <jcpp.h>

#undef BASE64
#undef ENVELOPED
#undef EXCLUSIVE
#undef EXCLUSIVE_WITH_COMMENTS
#undef INCLUSIVE
#undef INCLUSIVE_WITH_COMMENTS
#undef XPATH
#undef XPATH2
#undef XSLT

using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidParameterException = ::java::security::InvalidParameterException;
using $NoSuchAlgorithmException = ::java::security::NoSuchAlgorithmException;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $ProviderException = ::java::security::ProviderException;
using $Arrays = ::java::util::Arrays;
using $List = ::java::util::List;
using $Map = ::java::util::Map;
using $CanonicalizationMethod = ::javax::xml::crypto::dsig::CanonicalizationMethod;
using $Transform = ::javax::xml::crypto::dsig::Transform;
using $DOMBase64Transform = ::org::jcp::xml::dsig::internal::dom::DOMBase64Transform;
using $DOMCanonicalXMLC14N11Method = ::org::jcp::xml::dsig::internal::dom::DOMCanonicalXMLC14N11Method;
using $DOMCanonicalXMLC14NMethod = ::org::jcp::xml::dsig::internal::dom::DOMCanonicalXMLC14NMethod;
using $DOMEnvelopedTransform = ::org::jcp::xml::dsig::internal::dom::DOMEnvelopedTransform;
using $DOMExcC14NMethod = ::org::jcp::xml::dsig::internal::dom::DOMExcC14NMethod;
using $DOMKeyInfoFactory = ::org::jcp::xml::dsig::internal::dom::DOMKeyInfoFactory;
using $DOMXMLSignatureFactory = ::org::jcp::xml::dsig::internal::dom::DOMXMLSignatureFactory;
using $DOMXPathFilter2Transform = ::org::jcp::xml::dsig::internal::dom::DOMXPathFilter2Transform;
using $DOMXPathTransform = ::org::jcp::xml::dsig::internal::dom::DOMXPathTransform;
using $DOMXSLTTransform = ::org::jcp::xml::dsig::internal::dom::DOMXSLTTransform;
using $XMLDSigRI = ::org::jcp::xml::dsig::internal::dom::XMLDSigRI;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _XMLDSigRI$ProviderService_MethodInfo_[] = {
	{"<init>", "(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(XMLDSigRI$ProviderService::*)($Provider*,$String*,$String*,$String*)>(&XMLDSigRI$ProviderService::init$))},
	{"<init>", "(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(XMLDSigRI$ProviderService::*)($Provider*,$String*,$String*,$String*,$StringArray*)>(&XMLDSigRI$ProviderService::init$))},
	{"<init>", "(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/security/Provider;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;[Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", 0, $method(static_cast<void(XMLDSigRI$ProviderService::*)($Provider*,$String*,$String*,$String*,$StringArray*,$Map*)>(&XMLDSigRI$ProviderService::init$))},
	{"newInstance", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC, nullptr, "java.security.NoSuchAlgorithmException"},
	{}
};

$InnerClassInfo _XMLDSigRI$ProviderService_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.XMLDSigRI$ProviderService", "org.jcp.xml.dsig.internal.dom.XMLDSigRI", "ProviderService", $PRIVATE | $STATIC | $FINAL},
	{"java.security.Provider$Service", "java.security.Provider", "Service", $PUBLIC | $STATIC},
	{}
};

$ClassInfo _XMLDSigRI$ProviderService_ClassInfo_ = {
	$FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.XMLDSigRI$ProviderService",
	"java.security.Provider$Service",
	nullptr,
	nullptr,
	_XMLDSigRI$ProviderService_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDSigRI$ProviderService_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.XMLDSigRI"
};

$Object* allocate$XMLDSigRI$ProviderService($Class* clazz) {
	return $of($alloc(XMLDSigRI$ProviderService));
}

void XMLDSigRI$ProviderService::init$($Provider* p, $String* type, $String* algo, $String* cn) {
	$Provider$Service::init$(p, type, algo, cn, nullptr, nullptr);
}

void XMLDSigRI$ProviderService::init$($Provider* p, $String* type, $String* algo, $String* cn, $StringArray* aliases) {
	$Provider$Service::init$(p, type, algo, cn, aliases == nullptr ? ($List*)nullptr : $($Arrays::asList(aliases)), nullptr);
}

void XMLDSigRI$ProviderService::init$($Provider* p, $String* type, $String* algo, $String* cn, $StringArray* aliases, $Map* attrs) {
	$Provider$Service::init$(p, type, algo, cn, aliases == nullptr ? ($List*)nullptr : $($Arrays::asList(aliases)), attrs);
}

$Object* XMLDSigRI$ProviderService::newInstance(Object$* ctrParamObj) {
	$useLocalCurrentObjectStackCache();
	$var($String, type, getType());
	if (ctrParamObj != nullptr) {
		$throwNew($InvalidParameterException, $$str({"constructorParameter not used with "_s, type, " engines"_s}));
	}
	$var($String, algo, getAlgorithm());
	try {
		if ("XMLSignatureFactory"_s->equals(type)) {
			if ("DOM"_s->equals(algo)) {
				return $of($new($DOMXMLSignatureFactory));
			}
		} else if ("KeyInfoFactory"_s->equals(type)) {
			if ("DOM"_s->equals(algo)) {
				return $of($new($DOMKeyInfoFactory));
			}
		} else if ("TransformService"_s->equals(type)) {
			$init($CanonicalizationMethod);
			bool var$0 = $nc(algo)->equals($CanonicalizationMethod::INCLUSIVE);
			if (var$0 || $nc(algo)->equals($CanonicalizationMethod::INCLUSIVE_WITH_COMMENTS)) {
				return $of($new($DOMCanonicalXMLC14NMethod));
			} else {
				bool var$2 = "http://www.w3.org/2006/12/xml-c14n11"_s->equals(algo);
				if (var$2 || "http://www.w3.org/2006/12/xml-c14n11#WithComments"_s->equals(algo)) {
					return $of($new($DOMCanonicalXMLC14N11Method));
				} else {
					bool var$4 = algo->equals($CanonicalizationMethod::EXCLUSIVE);
					if (var$4 || algo->equals($CanonicalizationMethod::EXCLUSIVE_WITH_COMMENTS)) {
						return $of($new($DOMExcC14NMethod));
					} else {
						$init($Transform);
						if (algo->equals($Transform::BASE64)) {
							return $of($new($DOMBase64Transform));
						} else {
							if (algo->equals($Transform::ENVELOPED)) {
								return $of($new($DOMEnvelopedTransform));
							} else {
								if (algo->equals($Transform::XPATH2)) {
									return $of($new($DOMXPathFilter2Transform));
								} else {
									if (algo->equals($Transform::XPATH)) {
										return $of($new($DOMXPathTransform));
									} else {
										if (algo->equals($Transform::XSLT)) {
											return $of($new($DOMXSLTTransform));
										}
									}
								}
							}
						}
					}
				}
			}
		}
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($NoSuchAlgorithmException, $$str({"Error constructing "_s, type, " for "_s, algo, " using XMLDSig"_s}), ex);
	}
	$throwNew($ProviderException, $$str({"No impl for "_s, algo, " "_s, type}));
	$shouldNotReachHere();
}

XMLDSigRI$ProviderService::XMLDSigRI$ProviderService() {
}

$Class* XMLDSigRI$ProviderService::load$($String* name, bool initialize) {
	$loadClass(XMLDSigRI$ProviderService, name, initialize, &_XMLDSigRI$ProviderService_ClassInfo_, allocate$XMLDSigRI$ProviderService);
	return class$;
}

$Class* XMLDSigRI$ProviderService::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org