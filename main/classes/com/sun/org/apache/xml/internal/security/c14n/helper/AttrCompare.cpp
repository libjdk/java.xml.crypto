#include <com/sun/org/apache/xml/internal/security/c14n/helper/AttrCompare.h>

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <org/w3c/dom/Attr.h>
#include <jcpp.h>

#undef ATTR0_BEFORE_ATTR1
#undef ATTR1_BEFORE_ATTR0
#undef XMLNS

using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $Serializable = ::java::io::Serializable;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Attr = ::org::w3c::dom::Attr;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace helper {

$FieldInfo _AttrCompare_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttrCompare, serialVersionUID)},
	{"ATTR0_BEFORE_ATTR1", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttrCompare, ATTR0_BEFORE_ATTR1)},
	{"ATTR1_BEFORE_ATTR0", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(AttrCompare, ATTR1_BEFORE_ATTR0)},
	{"XMLNS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(AttrCompare, XMLNS)},
	{}
};

$MethodInfo _AttrCompare_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC | $ABSTRACT},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(AttrCompare::*)()>(&AttrCompare::init$))},
	{"compare", "(Lorg/w3c/dom/Attr;Lorg/w3c/dom/Attr;)I", nullptr, $PUBLIC},
	{"compare", "(Ljava/lang/Object;Ljava/lang/Object;)I", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _AttrCompare_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.helper.AttrCompare",
	"java.lang.Object",
	"java.util.Comparator,java.io.Serializable",
	_AttrCompare_FieldInfo_,
	_AttrCompare_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Comparator<Lorg/w3c/dom/Attr;>;Ljava/io/Serializable;"
};

$Object* allocate$AttrCompare($Class* clazz) {
	return $of($alloc(AttrCompare));
}

bool AttrCompare::equals(Object$* arg0) {
	 return this->$Comparator::equals(arg0);
}

int32_t AttrCompare::hashCode() {
	 return this->$Comparator::hashCode();
}

$Object* AttrCompare::clone() {
	 return this->$Comparator::clone();
}

$String* AttrCompare::toString() {
	 return this->$Comparator::toString();
}

void AttrCompare::finalize() {
	this->$Comparator::finalize();
}

$String* AttrCompare::XMLNS = nullptr;

void AttrCompare::init$() {
}

int32_t AttrCompare::compare($Attr* attr0, $Attr* attr1) {
	$var($String, namespaceURI0, $nc(attr0)->getNamespaceURI());
	$var($String, namespaceURI1, $nc(attr1)->getNamespaceURI());
	bool isNamespaceAttr0 = $nc(AttrCompare::XMLNS)->equals(namespaceURI0);
	bool isNamespaceAttr1 = $nc(AttrCompare::XMLNS)->equals(namespaceURI1);
	if (isNamespaceAttr0) {
		if (isNamespaceAttr1) {
			$var($String, localname0, attr0->getLocalName());
			$var($String, localname1, attr1->getLocalName());
			if ("xmlns"_s->equals(localname0)) {
				$assign(localname0, ""_s);
			}
			if ("xmlns"_s->equals(localname1)) {
				$assign(localname1, ""_s);
			}
			return $nc(localname0)->compareTo(localname1);
		}
		return AttrCompare::ATTR0_BEFORE_ATTR1;
	} else if (isNamespaceAttr1) {
		return AttrCompare::ATTR1_BEFORE_ATTR0;
	}
	if (namespaceURI0 == nullptr) {
		if (namespaceURI1 == nullptr) {
			$var($String, name0, attr0->getName());
			$var($String, name1, attr1->getName());
			return $nc(name0)->compareTo(name1);
		}
		return AttrCompare::ATTR0_BEFORE_ATTR1;
	} else if (namespaceURI1 == nullptr) {
		return AttrCompare::ATTR1_BEFORE_ATTR0;
	}
	int32_t a = $nc(namespaceURI0)->compareTo(namespaceURI1);
	if (a != 0) {
		return a;
	}
	return $nc($(attr0->getLocalName()))->compareTo($(attr1->getLocalName()));
}

int32_t AttrCompare::compare(Object$* attr0, Object$* attr1) {
	return this->compare($cast($Attr, attr0), $cast($Attr, attr1));
}

AttrCompare::AttrCompare() {
}

void clinit$AttrCompare($Class* class$) {
	$init($Constants);
	$assignStatic(AttrCompare::XMLNS, $Constants::NamespaceSpecNS);
}

$Class* AttrCompare::load$($String* name, bool initialize) {
	$loadClass(AttrCompare, name, initialize, &_AttrCompare_ClassInfo_, clinit$AttrCompare, allocate$AttrCompare);
	return class$;
}

$Class* AttrCompare::class$ = nullptr;

								} // helper
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com