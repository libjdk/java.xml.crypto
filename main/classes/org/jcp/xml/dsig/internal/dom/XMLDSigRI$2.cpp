#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI$2.h>

#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/Provider$Service.h>
#include <java/security/Provider.h>
#include <java/util/AbstractMap.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <javax/xml/crypto/dsig/Transform.h>
#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI$ProviderService.h>
#include <org/jcp/xml/dsig/internal/dom/XMLDSigRI.h>
#include <jcpp.h>

#undef BASE64
#undef ENVELOPED
#undef EXCLUSIVE
#undef EXCLUSIVE_WITH_COMMENTS
#undef INCLUSIVE
#undef INCLUSIVE_WITH_COMMENTS
#undef MECH_TYPE
#undef XPATH
#undef XPATH2
#undef XSLT

using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $Provider = ::java::security::Provider;
using $Provider$Service = ::java::security::Provider$Service;
using $AbstractMap = ::java::util::AbstractMap;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $CanonicalizationMethod = ::javax::xml::crypto::dsig::CanonicalizationMethod;
using $Transform = ::javax::xml::crypto::dsig::Transform;
using $XMLDSigRI = ::org::jcp::xml::dsig::internal::dom::XMLDSigRI;
using $XMLDSigRI$ProviderService = ::org::jcp::xml::dsig::internal::dom::XMLDSigRI$ProviderService;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _XMLDSigRI$2_FieldInfo_[] = {
	{"this$0", "Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;", nullptr, $FINAL | $SYNTHETIC, $field(XMLDSigRI$2, this$0)},
	{"val$p", "Ljava/security/Provider;", nullptr, $FINAL | $SYNTHETIC, $field(XMLDSigRI$2, val$p)},
	{}
};

$MethodInfo _XMLDSigRI$2_MethodInfo_[] = {
	{"<init>", "(Lorg/jcp/xml/dsig/internal/dom/XMLDSigRI;Ljava/security/Provider;)V", "()V", 0, $method(static_cast<void(XMLDSigRI$2::*)($XMLDSigRI*,$Provider*)>(&XMLDSigRI$2::init$))},
	{"run", "()Ljava/lang/Void;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _XMLDSigRI$2_EnclosingMethodInfo_ = {
	"org.jcp.xml.dsig.internal.dom.XMLDSigRI",
	"<init>",
	"()V"
};

$InnerClassInfo _XMLDSigRI$2_InnerClassesInfo_[] = {
	{"org.jcp.xml.dsig.internal.dom.XMLDSigRI$2", nullptr, nullptr, 0},
	{}
};

$ClassInfo _XMLDSigRI$2_ClassInfo_ = {
	$ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.XMLDSigRI$2",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	_XMLDSigRI$2_FieldInfo_,
	_XMLDSigRI$2_MethodInfo_,
	"Ljava/lang/Object;Ljava/security/PrivilegedAction<Ljava/lang/Void;>;",
	&_XMLDSigRI$2_EnclosingMethodInfo_,
	_XMLDSigRI$2_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"org.jcp.xml.dsig.internal.dom.XMLDSigRI"
};

$Object* allocate$XMLDSigRI$2($Class* clazz) {
	return $of($alloc(XMLDSigRI$2));
}

void XMLDSigRI$2::init$($XMLDSigRI* this$0, $Provider* val$p) {
	$set(this, this$0, this$0);
	$set(this, val$p, val$p);
}

$Object* XMLDSigRI$2::run() {
	$useLocalCurrentObjectStackCache();
	$var($Map, MECH_TYPE, $new($HashMap));
	MECH_TYPE->put("MechanismType"_s, "DOM"_s);
	$XMLDSigRI::access$000(this->this$0, $$new($XMLDSigRI$ProviderService, this->val$p, "XMLSignatureFactory"_s, "DOM"_s, "org.jcp.xml.dsig.internal.dom.DOMXMLSignatureFactory"_s));
	$XMLDSigRI::access$100(this->this$0, $$new($XMLDSigRI$ProviderService, this->val$p, "KeyInfoFactory"_s, "DOM"_s, "org.jcp.xml.dsig.internal.dom.DOMKeyInfoFactory"_s));
	$init($CanonicalizationMethod);
	$XMLDSigRI::access$200(this->this$0, $$new($XMLDSigRI$ProviderService, this->val$p, "TransformService"_s, $CanonicalizationMethod::INCLUSIVE, "org.jcp.xml.dsig.internal.dom.DOMCanonicalXMLC14NMethod"_s, $$new($StringArray, {"INCLUSIVE"_s}), MECH_TYPE));
	$XMLDSigRI::access$300(this->this$0, $$new($XMLDSigRI$ProviderService, this->val$p, "TransformService"_s, $CanonicalizationMethod::INCLUSIVE_WITH_COMMENTS, "org.jcp.xml.dsig.internal.dom.DOMCanonicalXMLC14NMethod"_s, $$new($StringArray, {"INCLUSIVE_WITH_COMMENTS"_s}), MECH_TYPE));
	$XMLDSigRI::access$400(this->this$0, $$new($XMLDSigRI$ProviderService, this->val$p, "TransformService"_s, "http://www.w3.org/2006/12/xml-c14n11"_s, "org.jcp.xml.dsig.internal.dom.DOMCanonicalXMLC14N11Method"_s, nullptr, MECH_TYPE));
	$XMLDSigRI::access$500(this->this$0, $$new($XMLDSigRI$ProviderService, this->val$p, "TransformService"_s, "http://www.w3.org/2006/12/xml-c14n11#WithComments"_s, "org.jcp.xml.dsig.internal.dom.DOMCanonicalXMLC14N11Method"_s, nullptr, MECH_TYPE));
	$XMLDSigRI::access$600(this->this$0, $$new($XMLDSigRI$ProviderService, this->val$p, "TransformService"_s, $CanonicalizationMethod::EXCLUSIVE, "org.jcp.xml.dsig.internal.dom.DOMExcC14NMethod"_s, $$new($StringArray, {"EXCLUSIVE"_s}), MECH_TYPE));
	$XMLDSigRI::access$700(this->this$0, $$new($XMLDSigRI$ProviderService, this->val$p, "TransformService"_s, $CanonicalizationMethod::EXCLUSIVE_WITH_COMMENTS, "org.jcp.xml.dsig.internal.dom.DOMExcC14NMethod"_s, $$new($StringArray, {"EXCLUSIVE_WITH_COMMENTS"_s}), MECH_TYPE));
	$init($Transform);
	$XMLDSigRI::access$800(this->this$0, $$new($XMLDSigRI$ProviderService, this->val$p, "TransformService"_s, $Transform::BASE64, "org.jcp.xml.dsig.internal.dom.DOMBase64Transform"_s, $$new($StringArray, {"BASE64"_s}), MECH_TYPE));
	$XMLDSigRI::access$900(this->this$0, $$new($XMLDSigRI$ProviderService, this->val$p, "TransformService"_s, $Transform::ENVELOPED, "org.jcp.xml.dsig.internal.dom.DOMEnvelopedTransform"_s, $$new($StringArray, {"ENVELOPED"_s}), MECH_TYPE));
	$XMLDSigRI::access$1000(this->this$0, $$new($XMLDSigRI$ProviderService, this->val$p, "TransformService"_s, $Transform::XPATH2, "org.jcp.xml.dsig.internal.dom.DOMXPathFilter2Transform"_s, $$new($StringArray, {"XPATH2"_s}), MECH_TYPE));
	$XMLDSigRI::access$1100(this->this$0, $$new($XMLDSigRI$ProviderService, this->val$p, "TransformService"_s, $Transform::XPATH, "org.jcp.xml.dsig.internal.dom.DOMXPathTransform"_s, $$new($StringArray, {"XPATH"_s}), MECH_TYPE));
	$XMLDSigRI::access$1200(this->this$0, $$new($XMLDSigRI$ProviderService, this->val$p, "TransformService"_s, $Transform::XSLT, "org.jcp.xml.dsig.internal.dom.DOMXSLTTransform"_s, $$new($StringArray, {"XSLT"_s}), MECH_TYPE));
	return $of(nullptr);
}

XMLDSigRI$2::XMLDSigRI$2() {
}

$Class* XMLDSigRI$2::load$($String* name, bool initialize) {
	$loadClass(XMLDSigRI$2, name, initialize, &_XMLDSigRI$2_ClassInfo_, allocate$XMLDSigRI$2);
	return class$;
}

$Class* XMLDSigRI$2::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org