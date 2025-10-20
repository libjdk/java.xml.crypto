#include <com/sun/org/apache/xml/internal/security/c14n/implementations/SymbMap.h>

#include <com/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbEntry.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Cloneable.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/System.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <jcpp.h>

using $NameSpaceSymbEntryArray = $Array<::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbEntry>;
using $NameSpaceSymbEntry = ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbEntry;
using $ClassInfo = ::java::lang::ClassInfo;
using $Cloneable = ::java::lang::Cloneable;
using $FieldInfo = ::java::lang::FieldInfo;
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

$FieldInfo _SymbMap_FieldInfo_[] = {
	{"free", "I", nullptr, 0, $field(SymbMap, free)},
	{"entries", "[Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbEntry;", nullptr, 0, $field(SymbMap, entries)},
	{"keys", "[Ljava/lang/String;", nullptr, 0, $field(SymbMap, keys)},
	{}
};

$MethodInfo _SymbMap_MethodInfo_[] = {
	{"<init>", "()V", nullptr, 0, $method(static_cast<void(SymbMap::*)()>(&SymbMap::init$))},
	{"clone", "()Lcom/sun/org/apache/xml/internal/security/c14n/implementations/SymbMap;", nullptr, $PUBLIC, nullptr, "java.lang.CloneNotSupportedException"},
	{"entrySet", "()Ljava/util/List;", "()Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbEntry;>;", 0},
	{"get", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbEntry;", nullptr, 0},
	{"index", "(Ljava/lang/Object;)I", nullptr, $PROTECTED},
	{"put", "(Ljava/lang/String;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbEntry;)V", nullptr, 0},
	{"rehash", "(I)V", nullptr, $PROTECTED},
	{}
};

$ClassInfo _SymbMap_ClassInfo_ = {
	$ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.implementations.SymbMap",
	"java.lang.Object",
	"java.lang.Cloneable",
	_SymbMap_FieldInfo_,
	_SymbMap_MethodInfo_
};

$Object* allocate$SymbMap($Class* clazz) {
	return $of($alloc(SymbMap));
}

void SymbMap::init$() {
	this->free = 23;
	$set(this, entries, $new($NameSpaceSymbEntryArray, this->free));
	$set(this, keys, $new($StringArray, this->free));
}

void SymbMap::put($String* key, $NameSpaceSymbEntry* value) {
	int32_t index = this->index(key);
	$var($Object0, oldKey, $nc(this->keys)->get(index));
	$nc(this->keys)->set(index, key);
	$nc(this->entries)->set(index, value);
	if ((oldKey == nullptr || !$nc($of(oldKey))->equals(key)) && --this->free == 0) {
		this->free = $nc(this->entries)->length;
		int32_t newCapacity = this->free << 2;
		rehash(newCapacity);
	}
}

$List* SymbMap::entrySet() {
	$var($List, a, $new($ArrayList));
	for (int32_t i = 0; i < $nc(this->entries)->length; ++i) {
		if ($nc(this->entries)->get(i) != nullptr && !""_s->equals($nc($nc(this->entries)->get(i))->uri)) {
			a->add($nc(this->entries)->get(i));
		}
	}
	return a;
}

int32_t SymbMap::index(Object$* obj) {
	$useLocalCurrentObjectStackCache();
	$var($ObjectArray, set, this->keys);
	int32_t length = $nc(set)->length;
	int32_t index = $mod(((int32_t)($nc($of(obj))->hashCode() & (uint32_t)0x7FFFFFFF)), length);
	$var($Object, cur, set->get(index));
	if (cur == nullptr || $nc($of(cur))->equals(obj)) {
		return index;
	}
	--length;
	do {
		index = index == length ? 0 : ++index;
		$assign(cur, set->get(index));
	} while (cur != nullptr && !$of(cur)->equals(obj));
	return index;
}

void SymbMap::rehash(int32_t newCapacity) {
	$useLocalCurrentObjectStackCache();
	int32_t oldCapacity = $nc(this->keys)->length;
	$var($StringArray, oldKeys, this->keys);
	$var($NameSpaceSymbEntryArray, oldVals, this->entries);
	$set(this, keys, $new($StringArray, newCapacity));
	$set(this, entries, $new($NameSpaceSymbEntryArray, newCapacity));
	for (int32_t i = oldCapacity; i-- > 0;) {
		if ($nc(oldKeys)->get(i) != nullptr) {
			$var($String, o, oldKeys->get(i));
			int32_t index = this->index(o);
			$nc(this->keys)->set(index, o);
			$nc(this->entries)->set(index, $nc(oldVals)->get(i));
		}
	}
}

$NameSpaceSymbEntry* SymbMap::get($String* key) {
	return $nc(this->entries)->get(index(key));
}

SymbMap* SymbMap::clone() {
	$var(SymbMap, copy, $cast(SymbMap, $Cloneable::clone()));
	$set($nc(copy), entries, $new($NameSpaceSymbEntryArray, $nc(this->entries)->length));
	$System::arraycopy(this->entries, 0, copy->entries, 0, $nc(this->entries)->length);
	$set(copy, keys, $new($StringArray, $nc(this->keys)->length));
	$System::arraycopy(this->keys, 0, copy->keys, 0, $nc(this->keys)->length);
	return copy;
}

SymbMap::SymbMap() {
}

$Class* SymbMap::load$($String* name, bool initialize) {
	$loadClass(SymbMap, name, initialize, &_SymbMap_ClassInfo_, allocate$SymbMap);
	return class$;
}

$Class* SymbMap::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com