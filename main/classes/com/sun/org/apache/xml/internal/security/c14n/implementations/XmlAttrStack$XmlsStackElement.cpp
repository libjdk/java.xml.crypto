#include <com/sun/org/apache/xml/internal/security/c14n/implementations/XmlAttrStack$XmlsStackElement.h>

#include <com/sun/org/apache/xml/internal/security/c14n/implementations/XmlAttrStack.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $XmlAttrStack = ::com::sun::org::apache::xml::internal::security::c14n::implementations::XmlAttrStack;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {

$FieldInfo _XmlAttrStack$XmlsStackElement_FieldInfo_[] = {
	{"level", "I", nullptr, 0, $field(XmlAttrStack$XmlsStackElement, level)},
	{"rendered", "Z", nullptr, 0, $field(XmlAttrStack$XmlsStackElement, rendered)},
	{"nodes", "Ljava/util/List;", "Ljava/util/List<Lorg/w3c/dom/Attr;>;", $FINAL, $field(XmlAttrStack$XmlsStackElement, nodes)},
	{}
};

$MethodInfo _XmlAttrStack$XmlsStackElement_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XmlAttrStack$XmlsStackElement::*)()>(&XmlAttrStack$XmlsStackElement::init$))},
	{}
};

$InnerClassInfo _XmlAttrStack$XmlsStackElement_InnerClassesInfo_[] = {
	{"com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack$XmlsStackElement", "com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack", "XmlsStackElement", $PRIVATE | $STATIC},
	{}
};

$ClassInfo _XmlAttrStack$XmlsStackElement_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack$XmlsStackElement",
	"java.lang.Object",
	nullptr,
	_XmlAttrStack$XmlsStackElement_FieldInfo_,
	_XmlAttrStack$XmlsStackElement_MethodInfo_,
	nullptr,
	nullptr,
	_XmlAttrStack$XmlsStackElement_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack"
};

$Object* allocate$XmlAttrStack$XmlsStackElement($Class* clazz) {
	return $of($alloc(XmlAttrStack$XmlsStackElement));
}

void XmlAttrStack$XmlsStackElement::init$() {
	this->rendered = false;
	$set(this, nodes, $new($ArrayList));
}

XmlAttrStack$XmlsStackElement::XmlAttrStack$XmlsStackElement() {
}

$Class* XmlAttrStack$XmlsStackElement::load$($String* name, bool initialize) {
	$loadClass(XmlAttrStack$XmlsStackElement, name, initialize, &_XmlAttrStack$XmlsStackElement_ClassInfo_, allocate$XmlAttrStack$XmlsStackElement);
	return class$;
}

$Class* XmlAttrStack$XmlsStackElement::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com