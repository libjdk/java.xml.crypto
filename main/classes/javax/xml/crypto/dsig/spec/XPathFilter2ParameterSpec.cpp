#include <javax/xml/crypto/dsig/spec/XPathFilter2ParameterSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalArgumentException.h>
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
#include <javax/xml/crypto/dsig/spec/XPathType.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $Collection = ::java::util::Collection;
using $Collections = ::java::util::Collections;
using $List = ::java::util::List;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;
using $XPathType = ::javax::xml::crypto::dsig::spec::XPathType;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$FieldInfo _XPathFilter2ParameterSpec_FieldInfo_[] = {
	{"xPathList", "Ljava/util/List;", "Ljava/util/List<Ljavax/xml/crypto/dsig/spec/XPathType;>;", $PRIVATE | $FINAL, $field(XPathFilter2ParameterSpec, xPathList)},
	{}
};

$MethodInfo _XPathFilter2ParameterSpec_MethodInfo_[] = {
	{"<init>", "(Ljava/util/List;)V", "(Ljava/util/List<Ljavax/xml/crypto/dsig/spec/XPathType;>;)V", $PUBLIC, $method(static_cast<void(XPathFilter2ParameterSpec::*)($List*)>(&XPathFilter2ParameterSpec::init$))},
	{"getXPathList", "()Ljava/util/List;", "()Ljava/util/List<Ljavax/xml/crypto/dsig/spec/XPathType;>;", $PUBLIC, $method(static_cast<$List*(XPathFilter2ParameterSpec::*)()>(&XPathFilter2ParameterSpec::getXPathList))},
	{}
};

$ClassInfo _XPathFilter2ParameterSpec_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.xml.crypto.dsig.spec.XPathFilter2ParameterSpec",
	"java.lang.Object",
	"javax.xml.crypto.dsig.spec.TransformParameterSpec",
	_XPathFilter2ParameterSpec_FieldInfo_,
	_XPathFilter2ParameterSpec_MethodInfo_
};

$Object* allocate$XPathFilter2ParameterSpec($Class* clazz) {
	return $of($alloc(XPathFilter2ParameterSpec));
}

void XPathFilter2ParameterSpec::init$($List* xPathList) {
	if (xPathList == nullptr) {
		$throwNew($NullPointerException, "xPathList cannot be null"_s);
	}
	$load($XPathType);
	$var($List, tempList, $Collections::checkedList($$new($ArrayList), $XPathType::class$));
	$nc(tempList)->addAll(xPathList);
	if (tempList->isEmpty()) {
		$throwNew($IllegalArgumentException, "xPathList cannot be empty"_s);
	}
	$set(this, xPathList, $Collections::unmodifiableList(tempList));
}

$List* XPathFilter2ParameterSpec::getXPathList() {
	return this->xPathList;
}

XPathFilter2ParameterSpec::XPathFilter2ParameterSpec() {
}

$Class* XPathFilter2ParameterSpec::load$($String* name, bool initialize) {
	$loadClass(XPathFilter2ParameterSpec, name, initialize, &_XPathFilter2ParameterSpec_ClassInfo_, allocate$XPathFilter2ParameterSpec);
	return class$;
}

$Class* XPathFilter2ParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax