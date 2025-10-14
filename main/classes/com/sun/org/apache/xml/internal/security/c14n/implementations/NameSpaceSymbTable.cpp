#include <com/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable.h>

#include <com/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbEntry.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/SymbMap.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/CloneNotSupportedException.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef LOG
#undef XMLNS

using $NameSpaceSymbEntry = ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbEntry;
using $SymbMap = ::com::sun::org::apache::xml::internal::security::c14n::implementations::SymbMap;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $ClassInfo = ::java::lang::ClassInfo;
using $CloneNotSupportedException = ::java::lang::CloneNotSupportedException;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
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
								namespace implementations {

$FieldInfo _NameSpaceSymbTable_FieldInfo_[] = {
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NameSpaceSymbTable, LOG)},
	{"XMLNS", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NameSpaceSymbTable, XMLNS)},
	{"initialMap", "Lcom/sun/org/apache/xml/internal/security/c14n/implementations/SymbMap;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(NameSpaceSymbTable, initialMap)},
	{"symb", "Lcom/sun/org/apache/xml/internal/security/c14n/implementations/SymbMap;", nullptr, $PRIVATE, $field(NameSpaceSymbTable, symb)},
	{"level", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/c14n/implementations/SymbMap;>;", $PRIVATE | $FINAL, $field(NameSpaceSymbTable, level)},
	{"cloned", "Z", nullptr, $PRIVATE, $field(NameSpaceSymbTable, cloned)},
	{}
};

$MethodInfo _NameSpaceSymbTable_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(NameSpaceSymbTable::*)()>(&NameSpaceSymbTable::init$))},
	{"addMapping", "(Ljava/lang/String;Ljava/lang/String;Lorg/w3c/dom/Attr;)Z", nullptr, $PUBLIC},
	{"addMappingAndRender", "(Ljava/lang/String;Ljava/lang/String;Lorg/w3c/dom/Attr;)Lorg/w3c/dom/Node;", nullptr, $PUBLIC},
	{"getLevel", "()I", nullptr, $PUBLIC},
	{"getMapping", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC},
	{"getMappingWithoutRendered", "(Ljava/lang/String;)Lorg/w3c/dom/Attr;", nullptr, $PUBLIC},
	{"getUnrenderedNodes", "(Ljava/util/Collection;)V", "(Ljava/util/Collection<Lorg/w3c/dom/Attr;>;)V", $PUBLIC},
	{"needsClone", "()V", nullptr, $FINAL, $method(static_cast<void(NameSpaceSymbTable::*)()>(&NameSpaceSymbTable::needsClone))},
	{"outputNodePop", "()V", nullptr, $PUBLIC},
	{"outputNodePush", "()V", nullptr, $PUBLIC},
	{"pop", "()V", nullptr, $PUBLIC},
	{"push", "()V", nullptr, $PUBLIC},
	{"removeMapping", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"removeMappingIfNotRender", "(Ljava/lang/String;)V", nullptr, $PUBLIC},
	{"removeMappingIfRender", "(Ljava/lang/String;)Z", nullptr, $PUBLIC},
	{}
};

$ClassInfo _NameSpaceSymbTable_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.implementations.NameSpaceSymbTable",
	"java.lang.Object",
	nullptr,
	_NameSpaceSymbTable_FieldInfo_,
	_NameSpaceSymbTable_MethodInfo_
};

$Object* allocate$NameSpaceSymbTable($Class* clazz) {
	return $of($alloc(NameSpaceSymbTable));
}

$Logger* NameSpaceSymbTable::LOG = nullptr;
$String* NameSpaceSymbTable::XMLNS = nullptr;
$SymbMap* NameSpaceSymbTable::initialMap = nullptr;

void NameSpaceSymbTable::init$() {
	$set(this, level, $new($ArrayList));
	this->cloned = true;
	try {
		$set(this, symb, $nc(NameSpaceSymbTable::initialMap)->clone());
	} catch ($CloneNotSupportedException&) {
		$var($CloneNotSupportedException, e, $catch());
		$nc(NameSpaceSymbTable::LOG)->error("Error cloning the initial map"_s);
	}
}

void NameSpaceSymbTable::getUnrenderedNodes($Collection* result) {
	$var($Iterator, it, $nc($($nc(this->symb)->entrySet()))->iterator());
	while ($nc(it)->hasNext()) {
		$var($NameSpaceSymbEntry, n, $cast($NameSpaceSymbEntry, it->next()));
		if (!$nc(n)->rendered && n->n != nullptr) {
			$assign(n, n->clone());
			needsClone();
			$nc(this->symb)->put($nc(n)->prefix, n);
			$set($nc(n), lastrendered, n->uri);
			n->rendered = true;
			$nc(result)->add(n->n);
		}
	}
}

void NameSpaceSymbTable::outputNodePush() {
	push();
}

void NameSpaceSymbTable::outputNodePop() {
	pop();
}

void NameSpaceSymbTable::push() {
	$nc(this->level)->add(nullptr);
	this->cloned = false;
}

void NameSpaceSymbTable::pop() {
	int32_t size = $nc(this->level)->size() - 1;
	$var($Object, ob, $nc(this->level)->remove(size));
	if (ob != nullptr) {
		$set(this, symb, $cast($SymbMap, ob));
		if (size == 0) {
			this->cloned = false;
		} else {
			this->cloned = !$equals($nc(this->level)->get(size - 1), this->symb);
		}
	} else {
		this->cloned = false;
	}
}

void NameSpaceSymbTable::needsClone() {
	if (!this->cloned) {
		$nc(this->level)->set($nc(this->level)->size() - 1, this->symb);
		try {
			$set(this, symb, $nc(this->symb)->clone());
		} catch ($CloneNotSupportedException&) {
			$var($CloneNotSupportedException, e, $catch());
			$nc(NameSpaceSymbTable::LOG)->error("Error cloning the symbol map"_s);
		}
		this->cloned = true;
	}
}

$Attr* NameSpaceSymbTable::getMapping($String* prefix) {
	$var($NameSpaceSymbEntry, entry, $nc(this->symb)->get(prefix));
	if (entry == nullptr) {
		return nullptr;
	}
	if ($nc(entry)->rendered) {
		return nullptr;
	}
	$assign(entry, $nc(entry)->clone());
	needsClone();
	$nc(this->symb)->put(prefix, entry);
	entry->rendered = true;
	$set(entry, lastrendered, entry->uri);
	return entry->n;
}

$Attr* NameSpaceSymbTable::getMappingWithoutRendered($String* prefix) {
	$var($NameSpaceSymbEntry, entry, $nc(this->symb)->get(prefix));
	if (entry == nullptr) {
		return nullptr;
	}
	if ($nc(entry)->rendered) {
		return nullptr;
	}
	return $nc(entry)->n;
}

bool NameSpaceSymbTable::addMapping($String* prefix, $String* uri, $Attr* n) {
	$var($NameSpaceSymbEntry, ob, $nc(this->symb)->get(prefix));
	if (ob != nullptr && $nc(uri)->equals(ob->uri)) {
		return false;
	}
	$var($NameSpaceSymbEntry, ne, $new($NameSpaceSymbEntry, uri, n, false, prefix));
	needsClone();
	$nc(this->symb)->put(prefix, ne);
	if (ob != nullptr) {
		$set(ne, lastrendered, ob->lastrendered);
		if (ob->lastrendered != nullptr && $nc(ob->lastrendered)->equals(uri)) {
			ne->rendered = true;
		}
	}
	return true;
}

$Node* NameSpaceSymbTable::addMappingAndRender($String* prefix, $String* uri, $Attr* n) {
	$var($NameSpaceSymbEntry, ob, $nc(this->symb)->get(prefix));
	if (ob != nullptr && $nc(uri)->equals(ob->uri)) {
		if (!ob->rendered) {
			$assign(ob, ob->clone());
			needsClone();
			$nc(this->symb)->put(prefix, ob);
			$set($nc(ob), lastrendered, uri);
			ob->rendered = true;
			return ob->n;
		}
		return nullptr;
	}
	$var($NameSpaceSymbEntry, ne, $new($NameSpaceSymbEntry, uri, n, true, prefix));
	$set(ne, lastrendered, uri);
	needsClone();
	$nc(this->symb)->put(prefix, ne);
	if (ob != nullptr && ob->lastrendered != nullptr && $nc(ob->lastrendered)->equals(uri)) {
		ne->rendered = true;
		return nullptr;
	}
	return ne->n;
}

int32_t NameSpaceSymbTable::getLevel() {
	return $nc(this->level)->size();
}

void NameSpaceSymbTable::removeMapping($String* prefix) {
	$var($NameSpaceSymbEntry, ob, $nc(this->symb)->get(prefix));
	if (ob != nullptr) {
		needsClone();
		$nc(this->symb)->put(prefix, nullptr);
	}
}

void NameSpaceSymbTable::removeMappingIfNotRender($String* prefix) {
	$var($NameSpaceSymbEntry, ob, $nc(this->symb)->get(prefix));
	if (ob != nullptr && !ob->rendered) {
		needsClone();
		$nc(this->symb)->put(prefix, nullptr);
	}
}

bool NameSpaceSymbTable::removeMappingIfRender($String* prefix) {
	$var($NameSpaceSymbEntry, ob, $nc(this->symb)->get(prefix));
	if (ob != nullptr && ob->rendered) {
		needsClone();
		$nc(this->symb)->put(prefix, nullptr);
	}
	return false;
}

void clinit$NameSpaceSymbTable($Class* class$) {
	$assignStatic(NameSpaceSymbTable::XMLNS, "xmlns"_s);
	$assignStatic(NameSpaceSymbTable::LOG, $LoggerFactory::getLogger(NameSpaceSymbTable::class$));
	$assignStatic(NameSpaceSymbTable::initialMap, $new($SymbMap));
	{
		$var($NameSpaceSymbEntry, ne, $new($NameSpaceSymbEntry, ""_s, nullptr, true, NameSpaceSymbTable::XMLNS));
		$set(ne, lastrendered, ""_s);
		$nc(NameSpaceSymbTable::initialMap)->put(NameSpaceSymbTable::XMLNS, ne);
	}
}

NameSpaceSymbTable::NameSpaceSymbTable() {
}

$Class* NameSpaceSymbTable::load$($String* name, bool initialize) {
	$loadClass(NameSpaceSymbTable, name, initialize, &_NameSpaceSymbTable_ClassInfo_, clinit$NameSpaceSymbTable, allocate$NameSpaceSymbTable);
	return class$;
}

$Class* NameSpaceSymbTable::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com