#include <javax/xml/crypto/dsig/spec/ExcC14NParameterSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/Collection.h>
#include <java/util/Collections.h>
#include <java/util/List.h>
#include <jcpp.h>

#undef DEFAULT

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $C14NMethodParameterSpec = ::javax::xml::crypto::dsig::spec::C14NMethodParameterSpec;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$FieldInfo _ExcC14NParameterSpec_FieldInfo_[] = {
	{"prefixList", "Ljava/util/List;", "Ljava/util/List<Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(ExcC14NParameterSpec, prefixList)},
	{"DEFAULT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(ExcC14NParameterSpec, DEFAULT)},
	{}
};

$MethodInfo _ExcC14NParameterSpec_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(ExcC14NParameterSpec::*)()>(&ExcC14NParameterSpec::init$))},
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(ExcC14NParameterSpec::*)($List*)>(&ExcC14NParameterSpec::init$))},
	{"getPrefixList", "()Ljava/util/List;", "()Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $method(static_cast<$List*(ExcC14NParameterSpec::*)()>(&ExcC14NParameterSpec::getPrefixList))},
	{}
};

$ClassInfo _ExcC14NParameterSpec_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.xml.crypto.dsig.spec.ExcC14NParameterSpec",
	"java.lang.Object",
	"javax.xml.crypto.dsig.spec.C14NMethodParameterSpec",
	_ExcC14NParameterSpec_FieldInfo_,
	_ExcC14NParameterSpec_MethodInfo_
};

$Object* allocate$ExcC14NParameterSpec($Class* clazz) {
	return $of($alloc(ExcC14NParameterSpec));
}


$String* ExcC14NParameterSpec::DEFAULT = nullptr;

void ExcC14NParameterSpec::init$() {
	$set(this, prefixList, $Collections::emptyList());
}

void ExcC14NParameterSpec::init$($List* prefixList) {
	if (prefixList == nullptr) {
		$throwNew($NullPointerException, "prefixList cannot be null"_s);
	}
	$load($String);
	$var($List, tempList, $Collections::checkedList($$new($ArrayList), $String::class$));
	$nc(tempList)->addAll(prefixList);
	$set(this, prefixList, $Collections::unmodifiableList(tempList));
}

$List* ExcC14NParameterSpec::getPrefixList() {
	return this->prefixList;
}

ExcC14NParameterSpec::ExcC14NParameterSpec() {
}

void clinit$ExcC14NParameterSpec($Class* class$) {
	$assignStatic(ExcC14NParameterSpec::DEFAULT, "#default"_s);
}

$Class* ExcC14NParameterSpec::load$($String* name, bool initialize) {
	$loadClass(ExcC14NParameterSpec, name, initialize, &_ExcC14NParameterSpec_ClassInfo_, clinit$ExcC14NParameterSpec, allocate$ExcC14NParameterSpec);
	return class$;
}

$Class* ExcC14NParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax