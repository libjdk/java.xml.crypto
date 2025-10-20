#include <javax/xml/crypto/dsig/spec/XPathFilterParameterSpec.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractMap.h>
#include <java/util/Collections.h>
#include <java/util/HashMap.h>
#include <java/util/Map.h>
#include <jcpp.h>

using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractMap = ::java::util::AbstractMap;
using $Collections = ::java::util::Collections;
using $HashMap = ::java::util::HashMap;
using $Map = ::java::util::Map;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;

namespace javax {
	namespace xml {
		namespace crypto {
			namespace dsig {
				namespace spec {

$FieldInfo _XPathFilterParameterSpec_FieldInfo_[] = {
	{"xPath", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(XPathFilterParameterSpec, xPath)},
	{"nsMap", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PRIVATE | $FINAL, $field(XPathFilterParameterSpec, nsMap)},
	{}
};

$MethodInfo _XPathFilterParameterSpec_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(XPathFilterParameterSpec::*)($String*)>(&XPathFilterParameterSpec::init$))},
	{"<init>", "(Ljava/lang/String;Ljava/util/Map;)V", "(Ljava/lang/String;Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(XPathFilterParameterSpec::*)($String*,$Map*)>(&XPathFilterParameterSpec::init$))},
	{"getNamespaceMap", "()Ljava/util/Map;", "()Ljava/util/Map<Ljava/lang/String;Ljava/lang/String;>;", $PUBLIC, $method(static_cast<$Map*(XPathFilterParameterSpec::*)()>(&XPathFilterParameterSpec::getNamespaceMap))},
	{"getXPath", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(XPathFilterParameterSpec::*)()>(&XPathFilterParameterSpec::getXPath))},
	{}
};

$ClassInfo _XPathFilterParameterSpec_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"javax.xml.crypto.dsig.spec.XPathFilterParameterSpec",
	"java.lang.Object",
	"javax.xml.crypto.dsig.spec.TransformParameterSpec",
	_XPathFilterParameterSpec_FieldInfo_,
	_XPathFilterParameterSpec_MethodInfo_
};

$Object* allocate$XPathFilterParameterSpec($Class* clazz) {
	return $of($alloc(XPathFilterParameterSpec));
}

void XPathFilterParameterSpec::init$($String* xPath) {
	if (xPath == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, xPath, xPath);
	$set(this, nsMap, $Collections::emptyMap());
}

void XPathFilterParameterSpec::init$($String* xPath, $Map* namespaceMap) {
	$useLocalCurrentObjectStackCache();
	if (xPath == nullptr || namespaceMap == nullptr) {
		$throwNew($NullPointerException);
	}
	$set(this, xPath, xPath);
	$load($String);
	$var($Map, tempMap, $Collections::checkedMap($$new($HashMap), $String::class$, $String::class$));
	$nc(tempMap)->putAll(namespaceMap);
	$set(this, nsMap, $Collections::unmodifiableMap(tempMap));
}

$String* XPathFilterParameterSpec::getXPath() {
	return this->xPath;
}

$Map* XPathFilterParameterSpec::getNamespaceMap() {
	return this->nsMap;
}

XPathFilterParameterSpec::XPathFilterParameterSpec() {
}

$Class* XPathFilterParameterSpec::load$($String* name, bool initialize) {
	$loadClass(XPathFilterParameterSpec, name, initialize, &_XPathFilterParameterSpec_ClassInfo_, allocate$XPathFilterParameterSpec);
	return class$;
}

$Class* XPathFilterParameterSpec::class$ = nullptr;

				} // spec
			} // dsig
		} // crypto
	} // xml
} // javax