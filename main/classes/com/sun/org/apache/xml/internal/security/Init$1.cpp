#include <com/sun/org/apache/xml/internal/security/Init$1.h>

#include <com/sun/org/apache/xml/internal/security/Init.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/JCEMapper.h>
#include <com/sun/org/apache/xml/internal/security/algorithms/SignatureAlgorithm.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolver.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transform.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <com/sun/org/apache/xml/internal/security/utils/resolver/ResourceResolver.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $Init = ::com::sun::org::apache::xml::internal::security::Init;
using $JCEMapper = ::com::sun::org::apache::xml::internal::security::algorithms::JCEMapper;
using $SignatureAlgorithm = ::com::sun::org::apache::xml::internal::security::algorithms::SignatureAlgorithm;
using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $KeyResolver = ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolver;
using $Transform = ::com::sun::org::apache::xml::internal::security::transforms::Transform;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $ResourceResolver = ::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolver;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedExceptionAction = ::java::security::PrivilegedExceptionAction;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {

$MethodInfo _Init$1_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(Init$1::*)()>(&Init$1::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{}
};

$EnclosingMethodInfo _Init$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xml.internal.security.Init",
	"dynamicInit",
	"()V"
};

$InnerClassInfo _Init$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.Init$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Init$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.Init$1",
	"java.lang.Object",
	"java.security.PrivilegedExceptionAction",
	nullptr,
	_Init$1_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedExceptionAction<Ljava/lang/Void;>;",
	&_Init$1_EnclosingMethodInfo_,
	_Init$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.Init"
};

$Object* allocate$Init$1($Class* clazz) {
	return $of($alloc(Init$1));
}

void Init$1::init$() {
}

$Object* Init$1::run() {
	$ElementProxy::registerDefaultPrefixes();
	$Transform::registerDefaultAlgorithms();
	$SignatureAlgorithm::registerDefaultAlgorithms();
	$JCEMapper::registerDefaultAlgorithms();
	$Canonicalizer::registerDefaultAlgorithms();
	$ResourceResolver::registerDefaultResolvers();
	$KeyResolver::registerDefaultResolvers();
	return $of(nullptr);
}

Init$1::Init$1() {
}

$Class* Init$1::load$($String* name, bool initialize) {
	$loadClass(Init$1, name, initialize, &_Init$1_ClassInfo_, allocate$Init$1);
	return class$;
}

$Class* Init$1::class$ = nullptr;

						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com