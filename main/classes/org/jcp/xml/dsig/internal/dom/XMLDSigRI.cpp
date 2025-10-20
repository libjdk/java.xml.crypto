#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI$1.h>
#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI$2.h>
#include <jcpp.h>

#undef INFO
#undef VER

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $XMLDSigRI$1 = ::org::jcp::xml::dsig::internal::dom::XMLDSigRI$1;
using $XMLDSigRI$2 = ::org::jcp::xml::dsig::internal::dom::XMLDSigRI$2;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _XMLDSigRI_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $STATIC | $FINAL, $constField(XMLDSigRI, serialVersionUID)},
	{"INFO", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDSigRI, INFO)},
	{"VER", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLDSigRI, VER)},
	{}
};

$MethodInfo _XMLDSigRI_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLDSigRI::*)()>(&XMLDSigRI::init$))},
	{"access$000", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(XMLDSigRI*,$Provider$Service*)>(&XMLDSigRI::access$000))},
	{"access$100", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(XMLDSigRI*,$Provider$Service*)>(&XMLDSigRI::access$100))},
	{"access$1000", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(XMLDSigRI*,$Provider$Service*)>(&XMLDSigRI::access$1000))},
	{"access$1100", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(XMLDSigRI*,$Provider$Service*)>(&XMLDSigRI::access$1100))},
	{"access$1200", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(XMLDSigRI*,$Provider$Service*)>(&XMLDSigRI::access$1200))},
	{"access$200", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(XMLDSigRI*,$Provider$Service*)>(&XMLDSigRI::access$200))},
	{"access$300", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(XMLDSigRI*,$Provider$Service*)>(&XMLDSigRI::access$300))},
	{"access$400", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(XMLDSigRI*,$Provider$Service*)>(&XMLDSigRI::access$400))},
	{"access$500", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(XMLDSigRI*,$Provider$Service*)>(&XMLDSigRI::access$500))},
	{"access$600", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(XMLDSigRI*,$Provider$Service*)>(&XMLDSigRI::access$600))},
	{"access$700", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(XMLDSigRI*,$Provider$Service*)>(&XMLDSigRI::access$700))},
	{"access$800", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(XMLDSigRI*,$Provider$Service*)>(&XMLDSigRI::access$800))},
	{"access$900", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider$Service;)V", nullptr, $STATIC | $SYNTHETIC, $method(static_cast<void(*)(XMLDSigRI*,$Provider$Service*)>(&XMLDSigRI::access$900))},
	{}
};

$InnerClassInfo _XMLDSigRI_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.XMLDSigRI$ProviderService", "org.jcp.xml.dsig.internal.dom.XMLDSigRI", "ProviderService", $PRIVATE | $STATIC | $FINAL},
	{"org.jcp.xml.dsig.internal.dom.XMLDSigRI$2", nullptr, nullptr, 0},
	{"org.jcp.xml.dsig.internal.dom.XMLDSigRI$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLDSigRI_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.XMLDSigRI",
	"java.security.Provider",
	nullptr,
	_XMLDSigRI_FieldInfo_,
	_XMLDSigRI_MethodInfo_,
	nullptr,
	nullptr,
	_XMLDSigRI_InnerClassesInfo_,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.XMLDSigRI$ProviderService,org.jcp.xml.dsig.internal.dom.XMLDSigRI$2,org.jcp.xml.dsig.internal.dom.XMLDSigRI$1"
};

$Object* allocate$XMLDSigRI($Class* clazz) {
	return $of($alloc(XMLDSigRI));
}

$String* XMLDSigRI::INFO = nullptr;
$String* XMLDSigRI::VER = nullptr;

void XMLDSigRI::access$1200(XMLDSigRI* x0, $Provider$Service* x1) {
	$init(XMLDSigRI);
	$nc(x0)->putService(x1);
}

void XMLDSigRI::access$1100(XMLDSigRI* x0, $Provider$Service* x1) {
	$init(XMLDSigRI);
	$nc(x0)->putService(x1);
}

void XMLDSigRI::access$1000(XMLDSigRI* x0, $Provider$Service* x1) {
	$init(XMLDSigRI);
	$nc(x0)->putService(x1);
}

void XMLDSigRI::access$900(XMLDSigRI* x0, $Provider$Service* x1) {
	$init(XMLDSigRI);
	$nc(x0)->putService(x1);
}

void XMLDSigRI::access$800(XMLDSigRI* x0, $Provider$Service* x1) {
	$init(XMLDSigRI);
	$nc(x0)->putService(x1);
}

void XMLDSigRI::access$700(XMLDSigRI* x0, $Provider$Service* x1) {
	$init(XMLDSigRI);
	$nc(x0)->putService(x1);
}

void XMLDSigRI::access$600(XMLDSigRI* x0, $Provider$Service* x1) {
	$init(XMLDSigRI);
	$nc(x0)->putService(x1);
}

void XMLDSigRI::access$500(XMLDSigRI* x0, $Provider$Service* x1) {
	$init(XMLDSigRI);
	$nc(x0)->putService(x1);
}

void XMLDSigRI::access$400(XMLDSigRI* x0, $Provider$Service* x1) {
	$init(XMLDSigRI);
	$nc(x0)->putService(x1);
}

void XMLDSigRI::access$300(XMLDSigRI* x0, $Provider$Service* x1) {
	$init(XMLDSigRI);
	$nc(x0)->putService(x1);
}

void XMLDSigRI::access$200(XMLDSigRI* x0, $Provider$Service* x1) {
	$init(XMLDSigRI);
	$nc(x0)->putService(x1);
}

void XMLDSigRI::access$100(XMLDSigRI* x0, $Provider$Service* x1) {
	$init(XMLDSigRI);
	$nc(x0)->putService(x1);
}

void XMLDSigRI::access$000(XMLDSigRI* x0, $Provider$Service* x1) {
	$init(XMLDSigRI);
	$nc(x0)->putService(x1);
}

void XMLDSigRI::init$() {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	$Provider::init$("XMLDSig"_s, XMLDSigRI::VER, XMLDSigRI::INFO);
	$var($Provider, p, this);
	$AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($XMLDSigRI$2, this, p)));
}

void clinit$XMLDSigRI($Class* class$) {
	$assignStatic(XMLDSigRI::INFO, "XMLDSig (DOM XMLSignatureFactory; DOM KeyInfoFactory; C14N 1.0, C14N 1.1, Exclusive C14N, Base64, Enveloped, XPath, XPath2, XSLT TransformServices)"_s);
	$beforeCallerSensitive();
	$assignStatic(XMLDSigRI::VER, $cast($String, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new($XMLDSigRI$1)))));
}

XMLDSigRI::XMLDSigRI() {
}

$Class* XMLDSigRI::load$($String* name, bool initialize) {
	$loadClass(XMLDSigRI, name, initialize, &_XMLDSigRI_ClassInfo_, clinit$XMLDSigRI, allocate$XMLDSigRI);
	return class$;
}

$Class* XMLDSigRI::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org