#include <com/sun/org/apache/xml/internal/security/utils/IdResolver.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CompoundAttribute.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CompoundAttribute = ::java::lang::CompoundAttribute;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {
$CompoundAttribute _IdResolver_Annotations_[] = {
	{"Ljava/lang/Deprecated;", nullptr},
	{}
};


$MethodInfo _IdResolver_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(IdResolver::*)()>(&IdResolver::init$))},
	{"getElementById", "(Lorg/w3c/dom/Document;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Document*,$String*)>(&IdResolver::getElementById))},
	{"registerElementById", "(Lorg/w3c/dom/Element;Lorg/w3c/dom/Attr;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Element*,$Attr*)>(&IdResolver::registerElementById))},
	{}
};

$ClassInfo _IdResolver_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.IdResolver",
	"java.lang.Object",
	nullptr,
	nullptr,
	_IdResolver_MethodInfo_,
	nullptr,
	nullptr,
	nullptr,
	_IdResolver_Annotations_
};

$Object* allocate$IdResolver($Class* clazz) {
	return $of($alloc(IdResolver));
}

void IdResolver::init$() {
}

void IdResolver::registerElementById($Element* element, $Attr* id) {
	$nc(element)->setIdAttributeNode(id, true);
}

$Element* IdResolver::getElementById($Document* doc, $String* id) {
	return $nc(doc)->getElementById(id);
}

IdResolver::IdResolver() {
}

$Class* IdResolver::load$($String* name, bool initialize) {
	$loadClass(IdResolver, name, initialize, &_IdResolver_ClassInfo_, allocate$IdResolver);
	return class$;
}

$Class* IdResolver::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com