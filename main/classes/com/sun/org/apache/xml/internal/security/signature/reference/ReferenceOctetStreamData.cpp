#include <com/sun/org/apache/xml/internal/security/signature/reference/ReferenceOctetStreamData.h>

#include <java/io/InputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

using $ReferenceData = ::com::sun::org::apache::xml::internal::security::signature::reference::ReferenceData;
using $InputStream = ::java::io::InputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								namespace reference {

$FieldInfo _ReferenceOctetStreamData_FieldInfo_[] = {
	{"octetStream", "Ljava/io/InputStream;", nullptr, $PRIVATE, $field(ReferenceOctetStreamData, octetStream)},
	{"uri", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ReferenceOctetStreamData, uri)},
	{"mimeType", "Ljava/lang/String;", nullptr, $PRIVATE, $field(ReferenceOctetStreamData, mimeType)},
	{}
};

$MethodInfo _ReferenceOctetStreamData_MethodInfo_[] = {
	{"<init>", "(Ljava/io/InputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceOctetStreamData::*)($InputStream*)>(&ReferenceOctetStreamData::init$))},
	{"<init>", "(Ljava/io/InputStream;Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(ReferenceOctetStreamData::*)($InputStream*,$String*,$String*)>(&ReferenceOctetStreamData::init$))},
	{"getMimeType", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getOctetStream", "()Ljava/io/InputStream;", nullptr, $PUBLIC},
	{"getURI", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _ReferenceOctetStreamData_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceOctetStreamData",
	"java.lang.Object",
	"com.sun.org.apache.xml.internal.security.signature.reference.ReferenceData",
	_ReferenceOctetStreamData_FieldInfo_,
	_ReferenceOctetStreamData_MethodInfo_
};

$Object* allocate$ReferenceOctetStreamData($Class* clazz) {
	return $of($alloc(ReferenceOctetStreamData));
}

void ReferenceOctetStreamData::init$($InputStream* octetStream) {
	if (octetStream == nullptr) {
		$throwNew($NullPointerException, "octetStream is null"_s);
	}
	$set(this, octetStream, octetStream);
}

void ReferenceOctetStreamData::init$($InputStream* octetStream, $String* uri, $String* mimeType) {
	if (octetStream == nullptr) {
		$throwNew($NullPointerException, "octetStream is null"_s);
	}
	$set(this, octetStream, octetStream);
	$set(this, uri, uri);
	$set(this, mimeType, mimeType);
}

$InputStream* ReferenceOctetStreamData::getOctetStream() {
	return this->octetStream;
}

$String* ReferenceOctetStreamData::getURI() {
	return this->uri;
}

$String* ReferenceOctetStreamData::getMimeType() {
	return this->mimeType;
}

ReferenceOctetStreamData::ReferenceOctetStreamData() {
}

$Class* ReferenceOctetStreamData::load$($String* name, bool initialize) {
	$loadClass(ReferenceOctetStreamData, name, initialize, &_ReferenceOctetStreamData_ClassInfo_, allocate$ReferenceOctetStreamData);
	return class$;
}

$Class* ReferenceOctetStreamData::class$ = nullptr;

								} // reference
							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com