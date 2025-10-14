#include <com/sun/org/apache/xml/internal/security/signature/Reference$1.h>

#include <com/sun/org/apache/xml/internal/security/algorithms/Algorithm.h>
#include <com/sun/org/apache/xml/internal/security/signature/Reference.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/EnclosingMethodInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Document.h>
#include <jcpp.h>

#undef _TAG_DIGESTMETHOD

using $Algorithm = ::com::sun::org::apache::xml::internal::security::algorithms::Algorithm;
using $Reference = ::com::sun::org::apache::xml::internal::security::signature::Reference;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ClassInfo = ::java::lang::ClassInfo;
using $EnclosingMethodInfo = ::java::lang::EnclosingMethodInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Document = ::org::w3c::dom::Document;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

$FieldInfo _Reference$1_FieldInfo_[] = {
	{"this$0", "Lcom/sun/org/apache/xml/internal/security/signature/Reference;", nullptr, $FINAL | $SYNTHETIC, $field(Reference$1, this$0)},
	{}
};

$MethodInfo _Reference$1_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/Reference;Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(Reference$1::*)($Reference*,$Document*,$String*)>(&Reference$1::init$))},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBaseNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$EnclosingMethodInfo _Reference$1_EnclosingMethodInfo_ = {
	"com.sun.org.apache.xml.internal.security.signature.Reference",
	"<init>",
	"(Lorg/w3c/dom/Document;Ljava/lang/String;Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/signature/Manifest;Lcom/sun/org/apache/xml/internal/security/transforms/Transforms;Ljava/lang/String;)V"
};

$InnerClassInfo _Reference$1_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.signature.Reference$1", nullptr, nullptr, 0},
	{}
};

$ClassInfo _Reference$1_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.Reference$1",
	"com.sun.org.apache.xml.internal.security.algorithms.Algorithm",
	nullptr,
	_Reference$1_FieldInfo_,
	_Reference$1_MethodInfo_,
	nullptr,
	&_Reference$1_EnclosingMethodInfo_,
	_Reference$1_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.signature.Reference"
};

$Object* allocate$Reference$1($Class* clazz) {
	return $of($alloc(Reference$1));
}

void Reference$1::init$($Reference* this$0, $Document* doc, $String* algorithmURI) {
	$set(this, this$0, this$0);
	$Algorithm::init$(doc, algorithmURI);
}

$String* Reference$1::getBaseNamespace() {
	$init($Constants);
	return $Constants::SignatureSpecNS;
}

$String* Reference$1::getBaseLocalName() {
	$init($Constants);
	return $Constants::_TAG_DIGESTMETHOD;
}

Reference$1::Reference$1() {
}

$Class* Reference$1::load$($String* name, bool initialize) {
	$loadClass(Reference$1, name, initialize, &_Reference$1_ClassInfo_, allocate$Reference$1);
	return class$;
}

$Class* Reference$1::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com