#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverAnonymous.h>

#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverException.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <jcpp.h>

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $ResourceResolverContext = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext;
using $ResourceResolverException = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverException;
using $ResourceResolverSpi = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Files = ::java::nio::file::Files;
using $OpenOption = ::java::nio::file::OpenOption;
using $Path = ::java::nio::file::Path;
using $Paths = ::java::nio::file::Paths;

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

$FieldInfo _ResolverAnonymous_FieldInfo_[] = {
	{"resourcePath", "Ljava/nio/file/Path;", nullptr, $PRIVATE | $FINAL, $field(ResolverAnonymous, resourcePath)},
	{}
};

$MethodInfo _ResolverAnonymous_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ResolverAnonymous::*)($String*)>(&ResolverAnonymous::init$)), "java.io.IOException"},
	{"<init>", "(Ljava/nio/file/Path;)V", nullptr, $PUBLIC, $method(static_cast<void(ResolverAnonymous::*)($Path*)>(&ResolverAnonymous::init$))},
	{"engineCanResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Z", nullptr, $PUBLIC},
	{"engineResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException"},
	{}
};

$ClassInfo _ResolverAnonymous_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverAnonymous",
	"com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi",
	nullptr,
	_ResolverAnonymous_FieldInfo_,
	_ResolverAnonymous_MethodInfo_
};

$Object* allocate$ResolverAnonymous($Class* clazz) {
	return $of($alloc(ResolverAnonymous));
}

void ResolverAnonymous::init$($String* filename) {
	$useLocalCurrentObjectStackCache();
	ResolverAnonymous::init$($($Paths::get(filename, $$new($StringArray, 0))));
}

void ResolverAnonymous::init$($Path* resourcePath) {
	$ResourceResolverSpi::init$();
	$set(this, resourcePath, resourcePath);
}

$XMLSignatureInput* ResolverAnonymous::engineResolveURI($ResourceResolverContext* context) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($XMLSignatureInput, input, $new($XMLSignatureInput, $($Files::newInputStream(this->resourcePath, $$new($OpenOptionArray, 0)))));
		input->setSecureValidation($nc(context)->secureValidation);
		return input;
	} catch ($IOException&) {
		$var($IOException, e, $catch());
		$throwNew($ResourceResolverException, static_cast<$Exception*>(e), $nc(context)->uriToResolve, context->baseUri, "generic.EmptyMessage"_s);
	}
	$shouldNotReachHere();
}

bool ResolverAnonymous::engineCanResolveURI($ResourceResolverContext* context) {
	return $nc(context)->uriToResolve == nullptr;
}

ResolverAnonymous::ResolverAnonymous() {
}

$Class* ResolverAnonymous::load$($String* name, bool initialize) {
	$loadClass(ResolverAnonymous, name, initialize, &_ResolverAnonymous_ClassInfo_, allocate$ResolverAnonymous);
	return class$;
}

$Class* ResolverAnonymous::class$ = nullptr;

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