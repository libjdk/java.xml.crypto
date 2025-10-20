#include <org/jcp/xml/dsig/internal/dom/ApacheOctetStreamData.h>

#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <javax/xml/crypto/OctetStreamData.h>
#include <jcpp.h>

using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $OctetStreamData = ::javax::xml::crypto::OctetStreamData;
using $ApacheData = ::org::jcp::xml::dsig::internal::dom::ApacheData;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _ApacheOctetStreamData_FieldInfo_[] = {
	{"xi", "Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PRIVATE, $field(ApacheOctetStreamData, xi)},
	{}
};

$MethodInfo _ApacheOctetStreamData_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;)V", nullptr, $PUBLIC, $method(static_cast<void(ApacheOctetStreamData::*)($XMLSignatureInput*)>(&ApacheOctetStreamData::init$)), "java.io.IOException"},
	{"getXMLSignatureInput", "()Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PUBLIC},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ApacheOctetStreamData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.ApacheOctetStreamData",
	"javax.xml.crypto.OctetStreamData",
	"org.jcp.xml.dsig.internal.dom.ApacheData",
	_ApacheOctetStreamData_FieldInfo_,
	_ApacheOctetStreamData_MethodInfo_
};

$Object* allocate$ApacheOctetStreamData($Class* clazz) {
	return $of($alloc(ApacheOctetStreamData));
}

int32_t ApacheOctetStreamData::hashCode() {
	 return this->$OctetStreamData::hashCode();
}

bool ApacheOctetStreamData::equals(Object$* arg0) {
	 return this->$OctetStreamData::equals(arg0);
}

$Object* ApacheOctetStreamData::clone() {
	 return this->$OctetStreamData::clone();
}

$String* ApacheOctetStreamData::toString() {
	 return this->$OctetStreamData::toString();
}

void ApacheOctetStreamData::finalize() {
	this->$OctetStreamData::finalize();
}

void ApacheOctetStreamData::init$($XMLSignatureInput* xi) {
	$useLocalCurrentObjectStackCache();
	$var($InputStream, var$0, $nc(xi)->getOctetStream());
	$var($String, var$1, xi->getSourceURI());
	$OctetStreamData::init$(var$0, var$1, $(xi->getMIMEType()));
	$set(this, xi, xi);
}

$XMLSignatureInput* ApacheOctetStreamData::getXMLSignatureInput() {
	return this->xi;
}

ApacheOctetStreamData::ApacheOctetStreamData() {
}

$Class* ApacheOctetStreamData::load$($String* name, bool initialize) {
	$loadClass(ApacheOctetStreamData, name, initialize, &_ApacheOctetStreamData_ClassInfo_, allocate$ApacheOctetStreamData);
	return class$;
}

$Class* ApacheOctetStreamData::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org