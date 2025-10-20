#include <javax/xml/crypto/dsig/TransformService$MechanismMapEntry.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/InnerClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/UnsupportedOperationException.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Map$Entry.h>
#include <javax/xml/crypto/dsig/TransformService.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $InnerClassInfo = ::java::lang::InnerClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $UnsupportedOperationException = ::java::lang::UnsupportedOperationException;
using $Map$Entry = ::java::util::Map$Entry;
using $TransformService = ::javax::xml::crypto::dsig::TransformService;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {

$FieldInfo _TransformService$MechanismMapEntry_FieldInfo_[] = {
	{"mechanism", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TransformService$MechanismMapEntry, mechanism)},
	{"algorithm", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TransformService$MechanismMapEntry, algorithm)},
	{"key", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(TransformService$MechanismMapEntry, key)},
	{}
};

$MethodInfo _TransformService$MechanismMapEntry_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, 0, $method(static_cast<void(TransformService$MechanismMapEntry::*)($String*,$String*)>(&TransformService$MechanismMapEntry::init$))},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"getKey", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getValue", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC},
	{"setValue", "(Ljava/lang/Object;)Ljava/lang/Object;", nullptr, $PUBLIC | $VOLATILE | $SYNTHETIC},
	{}
};

$InnerClassInfo _TransformService$MechanismMapEntry_InnerClassesInfo_[] = {
	{"javax.xml.crypto.dsig.TransformService$MechanismMapEntry", "javax.xml.crypto.dsig.TransformService", "MechanismMapEntry", $PRIVATE | $STATIC},
	{"java.util.Map$Entry", "java.util.Map", "Entry", $PUBLIC | $STATIC | $INTERFACE | $ABSTRACT},
	{}
};

$ClassInfo _TransformService$MechanismMapEntry_ClassInfo_ = {
	$ACC_SUPER,
	"javax.xml.crypto.dsig.TransformService$MechanismMapEntry",
	"java.lang.Object",
	"java.util.Map$Entry",
	_TransformService$MechanismMapEntry_FieldInfo_,
	_TransformService$MechanismMapEntry_MethodInfo_,
	"Ljava/lang/Object;Ljava/util/Map$Entry<Ljava/lang/String;Ljava/lang/String;>;",
	nullptr,
	_TransformService$MechanismMapEntry_InnerClassesInfo_,
	nullptr,
	nullptr,
	nullptr,
	"javax.xml.crypto.dsig.TransformService"
};

$Object* allocate$TransformService$MechanismMapEntry($Class* clazz) {
	return $of($alloc(TransformService$MechanismMapEntry));
}

void TransformService$MechanismMapEntry::init$($String* algorithm, $String* mechanism) {
	$set(this, algorithm, algorithm);
	$set(this, mechanism, mechanism);
	$set(this, key, $str({"TransformService."_s, algorithm, " MechanismType"_s}));
}

bool TransformService$MechanismMapEntry::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if (!($instanceOf($Map$Entry, o))) {
		return false;
	}
	$var($Map$Entry, e, $cast($Map$Entry, o));
	bool var$0 = ($cast($String, getKey()) == nullptr ? $nc(e)->getKey() == nullptr : $nc($($cast($String, getKey())))->equals($(e->getKey())));
	return var$0 && ($cast($String, getValue()) == nullptr ? e->getValue() == nullptr : $nc($($cast($String, getValue())))->equals($(e->getValue())));
}

$Object* TransformService$MechanismMapEntry::getKey() {
	return $of(this->key);
}

$Object* TransformService$MechanismMapEntry::getValue() {
	return $of(this->mechanism);
}

$String* TransformService$MechanismMapEntry::setValue($String* value) {
	$throwNew($UnsupportedOperationException);
	$shouldNotReachHere();
}

int32_t TransformService$MechanismMapEntry::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t var$0 = ($cast($String, getKey()) == nullptr ? 0 : $nc($($cast($String, getKey())))->hashCode());
	return var$0 ^ ($cast($String, getValue()) == nullptr ? 0 : $nc($($cast($String, getValue())))->hashCode());
}

$Object* TransformService$MechanismMapEntry::setValue(Object$* value) {
	return $of(this->setValue($cast($String, value)));
}

TransformService$MechanismMapEntry::TransformService$MechanismMapEntry() {
}

$Class* TransformService$MechanismMapEntry::load$($String* name, bool initialize) {
	$loadClass(TransformService$MechanismMapEntry, name, initialize, &_TransformService$MechanismMapEntry_ClassInfo_, allocate$TransformService$MechanismMapEntry);
	return class$;
}

$Class* TransformService$MechanismMapEntry::class$ = nullptr;

			} // dsig
		} // crypto
	} // xml
} // javax