#include <com/sun/org/apache/xml/internal/security/utils/DOMNamespaceContext.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Iterator.h>
#include <java/util/Objects.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Iterator = ::java::util::Iterator;
using $Objects = ::java::util::Objects;
using $NamespaceContext = ::javax::xml::namespace$::NamespaceContext;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$FieldInfo _DOMNamespaceContext_FieldInfo_[] = {
	{"context", "Lorg/w3c/dom/Node;", nullptr, $PRIVATE, $field(DOMNamespaceContext, context)},
	{}
};

$MethodInfo _DOMNamespaceContext_MethodInfo_[] = {
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMNamespaceContext::*)($Node*)>(&DOMNamespaceContext::init$))},
	{"getNamespaceURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrefix", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"getPrefixes", "(Ljava/lang/String;)Ljava/util/Iterator;", "(Ljava/lang/String;)Ljava/util/Iterator<Ljava/lang/String;>;", $PUBLIC},
	{"setContext", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMNamespaceContext_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.DOMNamespaceContext",
	"java.lang.Object",
	"javax.xml.namespace.NamespaceContext",
	_DOMNamespaceContext_FieldInfo_,
	_DOMNamespaceContext_MethodInfo_
};

$Object* allocate$DOMNamespaceContext($Class* clazz) {
	return $of($alloc(DOMNamespaceContext));
}

void DOMNamespaceContext::init$($Node* context) {
	setContext(context);
}

void DOMNamespaceContext::setContext($Node* context) {
	$set(this, context, context);
}

$String* DOMNamespaceContext::getNamespaceURI($String* prefix$renamed) {
	$var($String, prefix, prefix$renamed);
	if (prefix == nullptr) {
		$throwNew($IllegalArgumentException, "prefix is null"_s);
	}
	if ($nc(prefix)->equals(""_s)) {
		$assign(prefix, nullptr);
	}
	if (this->context != nullptr) {
		$var($String, namespaceURI, $nc(this->context)->lookupNamespaceURI(prefix));
		if (namespaceURI != nullptr) {
			return namespaceURI;
		}
	}
	if (prefix == nullptr) {
		return ""_s;
	} else if ($nc(prefix)->equals("xml"_s)) {
		return "http://www.w3.org/XML/1998/namespace"_s;
	} else if (prefix->equals("xmlns"_s)) {
		return "http://www.w3.org/2000/xmlns/"_s;
	}
	return ""_s;
}

$String* DOMNamespaceContext::getPrefix($String* namespaceURI$renamed) {
	$var($String, namespaceURI, namespaceURI$renamed);
	if (namespaceURI == nullptr) {
		$throwNew($IllegalArgumentException, "namespace URI is null"_s);
	}
	if ($nc(namespaceURI)->equals(""_s)) {
		$assign(namespaceURI, nullptr);
	}
	if (this->context != nullptr) {
		$var($String, prefix, $nc(this->context)->lookupPrefix(namespaceURI));
		if (prefix != nullptr) {
			return prefix;
		} else if ($Objects::equals($($nc(this->context)->lookupNamespaceURI(nullptr)), namespaceURI)) {
			return ""_s;
		}
	}
	if (namespaceURI == nullptr) {
		return $nc(this->context)->lookupNamespaceURI(nullptr) != nullptr ? ($String*)nullptr : ""_s;
	} else if ($nc(namespaceURI)->equals("http://www.w3.org/XML/1998/namespace"_s)) {
		return "xml"_s;
	} else if (namespaceURI->equals("http://www.w3.org/2000/xmlns/"_s)) {
		return "xmlns"_s;
	}
	return nullptr;
}

$Iterator* DOMNamespaceContext::getPrefixes($String* namespaceURI) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

DOMNamespaceContext::DOMNamespaceContext() {
}

$Class* DOMNamespaceContext::load$($String* name, bool initialize) {
	$loadClass(DOMNamespaceContext, name, initialize, &_DOMNamespaceContext_ClassInfo_, allocate$DOMNamespaceContext);
	return class$;
}

$Class* DOMNamespaceContext::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com