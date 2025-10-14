#include <javax/xml/crypto/NodeSetData.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/Data.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $Iterable = ::java::lang::Iterable;
using $MethodInfo = ::java::lang::MethodInfo;
using $Data = ::javax::xml::crypto::Data;

namespace javax {
	namespace xml {
		namespace crypto {

$MethodInfo _NodeSetData_MethodInfo_[] = {
	{"iterator", "()Ljava/util/Iterator;", nullptr, $PUBLIC | $ABSTRACT},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{}
};

$ClassInfo _NodeSetData_ClassInfo_ = {
	$PUBLIC | $INTERFACE | $ABSTRACT,
	"javax.xml.crypto.NodeSetData",
	nullptr,
	"javax.xml.crypto.Data,java.lang.Iterable",
	nullptr,
	_NodeSetData_MethodInfo_,
	"<T:Ljava/lang/Object;>Ljava/lang/Object;Ljavax/xml/crypto/Data;Ljava/lang/Iterable<TT;>;"
};

$Object* allocate$NodeSetData($Class* clazz) {
	return $of($alloc(NodeSetData));
}

int32_t NodeSetData::hashCode() {
	 return this->$Data::hashCode();
}

bool NodeSetData::equals(Object$* arg0) {
	 return this->$Data::equals(arg0);
}

$Object* NodeSetData::clone() {
	 return this->$Data::clone();
}

$String* NodeSetData::toString() {
	 return this->$Data::toString();
}

void NodeSetData::finalize() {
	this->$Data::finalize();
}

$Class* NodeSetData::load$($String* name, bool initialize) {
	$loadClass(NodeSetData, name, initialize, &_NodeSetData_ClassInfo_, allocate$NodeSetData);
	return class$;
}

$Class* NodeSetData::class$ = nullptr;

		} // crypto
	} // xml
} // javax