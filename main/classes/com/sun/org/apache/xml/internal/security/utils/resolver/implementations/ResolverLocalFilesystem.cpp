#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverLocalFilesystem.h>

#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverException.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/URI.h>
#include <java/nio/file/Files.h>
#include <java/nio/file/OpenOption.h>
#include <java/nio/file/Path.h>
#include <java/nio/file/Paths.h>
#include <jcpp.h>

#undef FILE_URI_LENGTH
#undef LOG

using $OpenOptionArray = $Array<::java::nio::file::OpenOption>;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $ResourceResolverContext = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext;
using $ResourceResolverException = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverException;
using $ResourceResolverSpi = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $URI = ::java::net::URI;
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

$FieldInfo _ResolverLocalFilesystem_FieldInfo_[] = {
	{"FILE_URI_LENGTH", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResolverLocalFilesystem, FILE_URI_LENGTH)},
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResolverLocalFilesystem, LOG)},
	{}
};

$MethodInfo _ResolverLocalFilesystem_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResolverLocalFilesystem::*)()>(&ResolverLocalFilesystem::init$))},
	{"engineCanResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Z", nullptr, $PUBLIC},
	{"engineResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException"},
	{"getNewURI", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URI;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URI*(*)($String*,$String*)>(&ResolverLocalFilesystem::getNewURI)), "java.net.URISyntaxException"},
	{"translateUriToFilename", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$String*(*)($String*)>(&ResolverLocalFilesystem::translateUriToFilename))},
	{}
};

$ClassInfo _ResolverLocalFilesystem_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverLocalFilesystem",
	"com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi",
	nullptr,
	_ResolverLocalFilesystem_FieldInfo_,
	_ResolverLocalFilesystem_MethodInfo_
};

$Object* allocate$ResolverLocalFilesystem($Class* clazz) {
	return $of($alloc(ResolverLocalFilesystem));
}

int32_t ResolverLocalFilesystem::FILE_URI_LENGTH = 0;
$Logger* ResolverLocalFilesystem::LOG = nullptr;

void ResolverLocalFilesystem::init$() {
	$ResourceResolverSpi::init$();
}

$XMLSignatureInput* ResolverLocalFilesystem::engineResolveURI($ResourceResolverContext* context) {
	try {
		$var($URI, uriNew, getNewURI($nc(context)->uriToResolve, context->baseUri));
		$var($String, fileName, ResolverLocalFilesystem::translateUriToFilename($($nc(uriNew)->toString())));
		$var($InputStream, inputStream, $Files::newInputStream($($Paths::get(fileName, $$new($StringArray, 0))), $$new($OpenOptionArray, 0)));
		$var($XMLSignatureInput, result, $new($XMLSignatureInput, inputStream));
		result->setSecureValidation($nc(context)->secureValidation);
		result->setSourceURI($($nc(uriNew)->toString()));
		return result;
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$throwNew($ResourceResolverException, e, $nc(context)->uriToResolve, context->baseUri, "generic.EmptyMessage"_s);
	}
	$shouldNotReachHere();
}

$String* ResolverLocalFilesystem::translateUriToFilename($String* uri) {
	$init(ResolverLocalFilesystem);
	$var($String, subStr, $nc(uri)->substring(ResolverLocalFilesystem::FILE_URI_LENGTH));
	if (subStr->indexOf("%20"_s) > -1) {
		int32_t offset = 0;
		int32_t index = 0;
		$var($StringBuilder, temp, $new($StringBuilder, subStr->length()));
		do {
			index = subStr->indexOf("%20"_s, offset);
			if (index == -1) {
				temp->append($(subStr->substring(offset)));
			} else {
				temp->append($(subStr->substring(offset, index)));
				temp->append(u' ');
				offset = index + 3;
			}
		} while (index != -1);
		$assign(subStr, temp->toString());
	}
	if (subStr->charAt(1) == u':') {
		return subStr;
	}
	return $str({"/"_s, subStr});
}

bool ResolverLocalFilesystem::engineCanResolveURI($ResourceResolverContext* context) {
	if ($nc(context)->uriToResolve == nullptr) {
		return false;
	}
	bool var$1 = $nc($nc(context)->uriToResolve)->isEmpty();
	bool var$0 = var$1 || $nc($nc(context)->uriToResolve)->charAt(0) == u'#';
	if (var$0 || $nc($nc(context)->uriToResolve)->startsWith("http:"_s)) {
		return false;
	}
	try {
		$nc(ResolverLocalFilesystem::LOG)->debug("I was asked whether I can resolve {}"_s, $$new($ObjectArray, {$of($nc(context)->uriToResolve)}));
		bool var$2 = $nc($nc(context)->uriToResolve)->startsWith("file:"_s);
		if (var$2 || $nc($nc(context)->baseUri)->startsWith("file:"_s)) {
			$nc(ResolverLocalFilesystem::LOG)->debug("I state that I can resolve {}"_s, $$new($ObjectArray, {$of(context->uriToResolve)}));
			return true;
		}
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$nc(ResolverLocalFilesystem::LOG)->debug($(e->getMessage()), static_cast<$Throwable*>(e));
	}
	$nc(ResolverLocalFilesystem::LOG)->debug("But I can\'t"_s);
	return false;
}

$URI* ResolverLocalFilesystem::getNewURI($String* uri, $String* baseURI) {
	$init(ResolverLocalFilesystem);
	$var($URI, newUri, nullptr);
	if (baseURI == nullptr || ""_s->equals(baseURI)) {
		$assign(newUri, $new($URI, uri));
	} else {
		$assign(newUri, $$new($URI, baseURI)->resolve(uri));
	}
	if ($nc(newUri)->getFragment() != nullptr) {
		$var($String, var$0, newUri->getScheme());
		return $new($URI, var$0, $(newUri->getSchemeSpecificPart()), nullptr);
	}
	return newUri;
}

void clinit$ResolverLocalFilesystem($Class* class$) {
	ResolverLocalFilesystem::FILE_URI_LENGTH = "file:/"_s->length();
	$assignStatic(ResolverLocalFilesystem::LOG, $LoggerFactory::getLogger(ResolverLocalFilesystem::class$));
}

ResolverLocalFilesystem::ResolverLocalFilesystem() {
}

$Class* ResolverLocalFilesystem::load$($String* name, bool initialize) {
	$loadClass(ResolverLocalFilesystem, name, initialize, &_ResolverLocalFilesystem_ClassInfo_, clinit$ResolverLocalFilesystem, allocate$ResolverLocalFilesystem);
	return class$;
}

$Class* ResolverLocalFilesystem::class$ = nullptr;

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