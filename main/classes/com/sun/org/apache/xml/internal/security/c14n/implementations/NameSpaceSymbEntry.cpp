#include <com/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Attr.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Attr = ::org::w3c::dom::Attr;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {

$FieldInfo _NameSpaceSymbEntry_FieldInfo_[] = {
	{"prefix", "Ljava/lang/String;", nullptr, $FINAL, $field(NameSpaceSymbEntry, prefix)},
	{"uri", "Ljava/lang/String;", nullptr, $FINAL, $field(NameSpaceSymbEntry, uri)},
	{"n", "Lorg/w3c/dom/Attr;", nullptr, $FINAL, $field(NameSpaceSymbEntry, n)},
	{"lastrendered", "Ljava/lang/String;", nullptr, 0, $field(NameSpaceSymbEntry, lastrendered)},
	{"rendered", "Z", nullptr, 0, $field(NameSpaceSymbEntry, rendered)},
	{}
};

$MethodInfo _NameSpaceSymbEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Lorg/w3c/dom/Attr;ZLjava/lang/String;)V", nullptr, 0, $method(static_cast<void(NameSpaceSymbEntry::*)($String*,$Attr*,bool,$String*)>(&NameSpaceSymbEntry::init$))},
	{"clone", "()Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbEntry;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NameSpaceSymbEntry_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.implementations.NameSpaceSymbEntry",
	"java.lang.Object",
	"java.lang.Cloneable",
	_NameSpaceSymbEntry_FieldInfo_,
	_NameSpaceSymbEntry_MethodInfo_
};

$Object* allocate$NameSpaceSymbEntry($Class* clazz) {
	return $of($alloc(NameSpaceSymbEntry));
}

void NameSpaceSymbEntry::init$($String* name, $Attr* n, bool rendered, $String* prefix) {
	$set(this, lastrendered, nullptr);
	this->rendered = false;
	$set(this, uri, name);
	this->rendered = rendered;
	$set(this, n, n);
	$set(this, prefix, prefix);
}

NameSpaceSymbEntry* NameSpaceSymbEntry::clone() {
	try {
		return $cast(NameSpaceSymbEntry, $Cloneable::clone());
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		return nullptr;
	}
	$shouldNotReachHere();
}

NameSpaceSymbEntry::NameSpaceSymbEntry() {
}

$Class* NameSpaceSymbEntry::load$($String* name, bool initialize) {
	$loadClass(NameSpaceSymbEntry, name, initialize, &_NameSpaceSymbEntry_ClassInfo_, allocate$NameSpaceSymbEntry);
	return class$;
}

$Class* NameSpaceSymbEntry::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com