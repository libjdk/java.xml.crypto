#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>

#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $ResourceResolverContext = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {
								namespace resolver {

$MethodInfo _ResourceResolverSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResourceResolverSpi::*)()>(&ResourceResolverSpi::init$))},
	{"engineCanResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"engineResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException"},
	{}
};

$ClassInfo _ResourceResolverSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_ResourceResolverSpi_MethodInfo_
};

$Object* allocate$ResourceResolverSpi($Class* clazz) {
	return $of($alloc(ResourceResolverSpi));
}

void ResourceResolverSpi::init$() {
}

ResourceResolverSpi::ResourceResolverSpi() {
}

$Class* ResourceResolverSpi::load$($String* name, bool initialize) {
	$loadClass(ResourceResolverSpi, name, initialize, &_ResourceResolverSpi_ClassInfo_, allocate$ResourceResolverSpi);
	return class$;
}

$Class* ResourceResolverSpi::class$ = nullptr;

								} // resolver
							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com