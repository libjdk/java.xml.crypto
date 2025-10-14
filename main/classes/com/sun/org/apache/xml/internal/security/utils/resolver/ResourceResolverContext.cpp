#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolverContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collections.h>
#include <java/util/Map.h>
#include <org/w3c/dom/Attr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collections = ::java::util::Collections;
using $Map = ::java::util::Map;
using $Attr = ::org::w3c::dom::Attr;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {
								namespace resolver {

$FieldInfo _ResourceResolverContext_FieldInfo_[] = {
	{"properties", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ResourceResolverContext, properties)},
	{"uriToResolve", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(ResourceResolverContext, uriToResolve)},
	{"secureValidation", "Z", nullptr, $PUBLIC | $FINAL, $field(ResourceResolverContext, secureValidation)},
	{"baseUri", "Ljava/lang/String;", nullptr, $PUBLIC | $FINAL, $field(ResourceResolverContext, baseUri)},
	{"attr", "Lorg/w3c/dom/Attr;", nullptr, $PUBLIC | $FINAL, $field(ResourceResolverContext, attr)},
	{}
};

$MethodInfo _ResourceResolverContext_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Attr;Ljava/lang/String;Z)V", nullptr, $PUBLIC, $method(static_cast<void(ResourceResolverContext::*)($Attr*,$String*,bool)>(&ResourceResolverContext::init$))},
	{"<init>", "(Lorg/w3c/dom/Attr;Ljava/lang/String;ZLjava/util/Map;)V", "(Lorg/w3c/dom/Attr;Ljava/lang/String;ZLjava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(ResourceResolverContext::*)($Attr*,$String*,bool,$Map*)>(&ResourceResolverContext::init$))},
	{"getProperties", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC},
	{}
};

$ClassInfo _ResourceResolverContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.resolver.ResourceResolverContext",
	"java.lang.Object",
	nullptr,
	_ResourceResolverContext_FieldInfo_,
	_ResourceResolverContext_MethodInfo_
};

$Object* allocate$ResourceResolverContext($Class* clazz) {
	return $of($alloc(ResourceResolverContext));
}

void ResourceResolverContext::init$($Attr* attr, $String* baseUri, bool secureValidation) {
	ResourceResolverContext::init$(attr, baseUri, secureValidation, $($Collections::emptyMap()));
}

void ResourceResolverContext::init$($Attr* attr, $String* baseUri, bool secureValidation, $Map* properties) {
	$set(this, attr, attr);
	$set(this, baseUri, baseUri);
	this->secureValidation = secureValidation;
	$set(this, uriToResolve, attr != nullptr ? $nc(attr)->getValue() : ($String*)nullptr);
	$set(this, properties, $Collections::unmodifiableMap(properties != nullptr ? properties : $($Collections::emptyMap())));
}

$Map* ResourceResolverContext::getProperties() {
	return this->properties;
}

ResourceResolverContext::ResourceResolverContext() {
}

$Class* ResourceResolverContext::load$($String* name, bool initialize) {
	$loadClass(ResourceResolverContext, name, initialize, &_ResourceResolverContext_ClassInfo_, allocate$ResourceResolverContext);
	return class$;
}

$Class* ResourceResolverContext::class$ = nullptr;

								} // resolver
							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com