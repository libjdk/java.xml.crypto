#include <com/sun/org/apache/xml/internal/security/utils/resolver/implementations/ResolverDirectHTTP.h>

#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverException.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverSpi.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/Integer.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/net/InetSocketAddress.h>
#include <java/net/Proxy$Type.h>
#include <java/net/Proxy.h>
#include <java/net/SocketAddress.h>
#include <java/net/URI.h>
#include <java/net/URISyntaxException.h>
#include <java/net/URL.h>
#include <java/net/URLConnection.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <jcpp.h>

#undef HTTP
#undef LOG

using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ResourceResolverContext = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverContext;
using $ResourceResolverException = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverException;
using $ResourceResolverSpi = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $Integer = ::java::lang::Integer;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $InetSocketAddress = ::java::net::InetSocketAddress;
using $Proxy = ::java::net::Proxy;
using $Proxy$Type = ::java::net::Proxy$Type;
using $SocketAddress = ::java::net::SocketAddress;
using $URI = ::java::net::URI;
using $URISyntaxException = ::java::net::URISyntaxException;
using $URL = ::java::net::URL;
using $URLConnection = ::java::net::URLConnection;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;

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

$FieldInfo _ResolverDirectHTTP_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResolverDirectHTTP, LOG)},
	{"properties", "[Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(ResolverDirectHTTP, properties)},
	{"HttpProxyHost", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResolverDirectHTTP, HttpProxyHost)},
	{"HttpProxyPort", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResolverDirectHTTP, HttpProxyPort)},
	{"HttpProxyUser", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResolverDirectHTTP, HttpProxyUser)},
	{"HttpProxyPass", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResolverDirectHTTP, HttpProxyPass)},
	{"HttpBasicUser", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResolverDirectHTTP, HttpBasicUser)},
	{"HttpBasicPass", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(ResolverDirectHTTP, HttpBasicPass)},
	{"resolverProperties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ResolverDirectHTTP, resolverProperties)},
	{}
};

$MethodInfo _ResolverDirectHTTP_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ResolverDirectHTTP::*)()>(&ResolverDirectHTTP::init$))},
	{"<init>", "(Ljava/util/Map;)V", "(Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(ResolverDirectHTTP::*)($Map*)>(&ResolverDirectHTTP::init$))},
	{"engineCanResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Z", nullptr, $PUBLIC},
	{"engineResolveURI", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverException"},
	{"getNewURI", "(Ljava/lang/String;Ljava/lang/String;)Ljava/net/URI;", nullptr, $PRIVATE | $STATIC, $method(static_cast<$URI*(*)($String*,$String*)>(&ResolverDirectHTTP::getNewURI)), "java.net.URISyntaxException"},
	{"getProperty", "(Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;Ljava/lang/String;)Ljava/lang/String;", nullptr, $PRIVATE, $method(static_cast<$String*(ResolverDirectHTTP::*)($ResourceResolverContext*,$String*)>(&ResolverDirectHTTP::getProperty))},
	{"openConnection", "(Ljava/net/URL;Lcom/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext;)Ljava/net/URLConnection;", nullptr, $PRIVATE, $method(static_cast<$URLConnection*(ResolverDirectHTTP::*)($URL*,$ResourceResolverContext*)>(&ResolverDirectHTTP::openConnection)), "java.io.IOException"},
	{}
};

$ClassInfo _ResolverDirectHTTP_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.resolver.implementations.ResolverDirectHTTP",
	"com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverSpi",
	nullptr,
	_ResolverDirectHTTP_FieldInfo_,
	_ResolverDirectHTTP_MethodInfo_
};

$Object* allocate$ResolverDirectHTTP($Class* clazz) {
	return $of($alloc(ResolverDirectHTTP));
}

$Logger* ResolverDirectHTTP::LOG = nullptr;

$StringArray* ResolverDirectHTTP::properties = nullptr;

void ResolverDirectHTTP::init$() {
	$ResourceResolverSpi::init$();
	$set(this, resolverProperties, $Collections::emptyMap());
}

void ResolverDirectHTTP::init$($Map* resolverProperties) {
	$ResourceResolverSpi::init$();
	$set(this, resolverProperties, $Collections::unmodifiableMap(resolverProperties != nullptr ? resolverProperties : $($Collections::emptyMap())));
}

$XMLSignatureInput* ResolverDirectHTTP::engineResolveURI($ResourceResolverContext* context) {
	try {
		$var($URI, uriNew, getNewURI($nc(context)->uriToResolve, context->baseUri));
		$var($URL, url, $nc(uriNew)->toURL());
		$var($URLConnection, urlConnection, openConnection(url, context));
		$var($String, auth, $nc(urlConnection)->getHeaderField("WWW-Authenticate"_s));
		if (auth != nullptr && auth->startsWith("Basic"_s)) {
			$var($String, user, getProperty(context, $nc(ResolverDirectHTTP::properties)->get(ResolverDirectHTTP::HttpBasicUser)));
			$var($String, pass, getProperty(context, $nc(ResolverDirectHTTP::properties)->get(ResolverDirectHTTP::HttpBasicPass)));
			if (user != nullptr && pass != nullptr) {
				$assign(urlConnection, openConnection(url, context));
				$var($String, password, $str({user, ":"_s, pass}));
				$init($StandardCharsets);
				$var($String, encodedPassword, $XMLUtils::encodeToString($($nc(password)->getBytes($StandardCharsets::ISO_8859_1))));
				$nc(urlConnection)->setRequestProperty("Authorization"_s, $$str({"Basic "_s, encodedPassword}));
			}
		}
		$var($String, mimeType, urlConnection->getHeaderField("Content-Type"_s));
		{
			$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
			{
				$var($Throwable, var$0, nullptr);
				$var($XMLSignatureInput, var$2, nullptr);
				bool return$1 = false;
				try {
					try {
						$var($InputStream, inputStream, urlConnection->getInputStream());
						{
							$var($Throwable, var$3, nullptr);
							$var($XMLSignatureInput, var$5, nullptr);
							bool return$4 = false;
							try {
								try {
									$var($bytes, buf, $new($bytes, 4096));
									int32_t read = 0;
									int32_t summarized = 0;
									while ((read = $nc(inputStream)->read(buf)) >= 0) {
										baos->write(buf, 0, read);
										summarized += read;
									}
									$nc(ResolverDirectHTTP::LOG)->debug("Fetched {} bytes from URI {}"_s, $$new($ObjectArray, {
										$($of($Integer::valueOf(summarized))),
										$($of(uriNew->toString()))
									}));
									$var($XMLSignatureInput, result, $new($XMLSignatureInput, $(baos->toByteArray())));
									result->setSecureValidation($nc(context)->secureValidation);
									result->setSourceURI($(uriNew->toString()));
									result->setMIMEType(mimeType);
									$assign(var$5, result);
									return$4 = true;
									goto $finally1;
								} catch ($Throwable&) {
									$var($Throwable, t$, $catch());
									if (inputStream != nullptr) {
										try {
											inputStream->close();
										} catch ($Throwable&) {
											$var($Throwable, x2, $catch());
											t$->addSuppressed(x2);
										}
									}
									$throw(t$);
								}
							} catch ($Throwable&) {
								$assign(var$3, $catch());
							} $finally1: {
								if (inputStream != nullptr) {
									inputStream->close();
								}
							}
							if (var$3 != nullptr) {
								$throw(var$3);
							}
							if (return$4) {
								$assign(var$2, var$5);
								return$1 = true;
								goto $finally;
							}
						}
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							baos->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					baos->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return var$2;
				}
			}
		}
	} catch ($URISyntaxException&) {
		$var($Exception, ex, $catch());
		$throwNew($ResourceResolverException, ex, $nc(context)->uriToResolve, context->baseUri, "generic.EmptyMessage"_s);
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($ResourceResolverException, ex, $nc(context)->uriToResolve, context->baseUri, "generic.EmptyMessage"_s);
	} catch ($IllegalArgumentException&) {
		$var($Exception, ex, $catch());
		$throwNew($ResourceResolverException, ex, $nc(context)->uriToResolve, context->baseUri, "generic.EmptyMessage"_s);
	}
	$shouldNotReachHere();
}

$URLConnection* ResolverDirectHTTP::openConnection($URL* url, $ResourceResolverContext* context) {
	$var($String, proxyHostProp, getProperty(context, $nc(ResolverDirectHTTP::properties)->get(ResolverDirectHTTP::HttpProxyHost)));
	$var($String, proxyPortProp, getProperty(context, $nc(ResolverDirectHTTP::properties)->get(ResolverDirectHTTP::HttpProxyPort)));
	$var($String, proxyUser, getProperty(context, $nc(ResolverDirectHTTP::properties)->get(ResolverDirectHTTP::HttpProxyUser)));
	$var($String, proxyPass, getProperty(context, $nc(ResolverDirectHTTP::properties)->get(ResolverDirectHTTP::HttpProxyPass)));
	$var($Proxy, proxy, nullptr);
	if (proxyHostProp != nullptr && proxyPortProp != nullptr) {
		int32_t port = $Integer::parseInt(proxyPortProp);
		$init($Proxy$Type);
		$assign(proxy, $new($Proxy, $Proxy$Type::HTTP, $$new($InetSocketAddress, proxyHostProp, port)));
	}
	$var($URLConnection, urlConnection, nullptr);
	if (proxy != nullptr) {
		$assign(urlConnection, $nc(url)->openConnection(proxy));
		if (proxyUser != nullptr && proxyPass != nullptr) {
			$var($String, password, $str({proxyUser, ":"_s, proxyPass}));
			$init($StandardCharsets);
			$var($String, authString, $str({"Basic "_s, $($XMLUtils::encodeToString($($nc(password)->getBytes($StandardCharsets::ISO_8859_1))))}));
			$nc(urlConnection)->setRequestProperty("Proxy-Authorization"_s, authString);
		}
	} else {
		$assign(urlConnection, $nc(url)->openConnection());
	}
	return urlConnection;
}

bool ResolverDirectHTTP::engineCanResolveURI($ResourceResolverContext* context) {
	if ($nc(context)->uriToResolve == nullptr) {
		$nc(ResolverDirectHTTP::LOG)->debug("quick fail, uri == null"_s);
		return false;
	}
	bool var$0 = $nc($nc(context)->uriToResolve)->isEmpty();
	if (var$0 || $nc($nc(context)->uriToResolve)->charAt(0) == u'#') {
		$nc(ResolverDirectHTTP::LOG)->debug("quick fail for empty URIs and local ones"_s);
		return false;
	}
	$nc(ResolverDirectHTTP::LOG)->debug("I was asked whether I can resolve {}"_s, $$new($ObjectArray, {$of($nc(context)->uriToResolve)}));
	bool var$1 = $nc($nc(context)->uriToResolve)->startsWith("http:"_s);
	if (var$1 || $nc(context)->baseUri != nullptr && $nc(context->baseUri)->startsWith("http:"_s)) {
		$nc(ResolverDirectHTTP::LOG)->debug("I state that I can resolve {}"_s, $$new($ObjectArray, {$of(context->uriToResolve)}));
		return true;
	}
	$nc(ResolverDirectHTTP::LOG)->debug("I state that I can\'t resolve {}"_s, $$new($ObjectArray, {$of($nc(context)->uriToResolve)}));
	return false;
}

$URI* ResolverDirectHTTP::getNewURI($String* uri, $String* baseURI) {
	$init(ResolverDirectHTTP);
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

$String* ResolverDirectHTTP::getProperty($ResourceResolverContext* context, $String* propertyName) {
	if ($nc(this->resolverProperties)->containsKey(propertyName)) {
		return $cast($String, $nc(this->resolverProperties)->get(propertyName));
	}
	return $cast($String, $nc($($nc(context)->getProperties()))->get(propertyName));
}

void clinit$ResolverDirectHTTP($Class* class$) {
	$assignStatic(ResolverDirectHTTP::LOG, $LoggerFactory::getLogger(ResolverDirectHTTP::class$));
	$assignStatic(ResolverDirectHTTP::properties, $new($StringArray, {
		"http.proxy.host"_s,
		"http.proxy.port"_s,
		"http.proxy.username"_s,
		"http.proxy.password"_s,
		"http.basic.username"_s,
		"http.basic.password"_s
	}));
}

ResolverDirectHTTP::ResolverDirectHTTP() {
}

$Class* ResolverDirectHTTP::load$($String* name, bool initialize) {
	$loadClass(ResolverDirectHTTP, name, initialize, &_ResolverDirectHTTP_ClassInfo_, clinit$ResolverDirectHTTP, allocate$ResolverDirectHTTP);
	return class$;
}

$Class* ResolverDirectHTTP::class$ = nullptr;

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