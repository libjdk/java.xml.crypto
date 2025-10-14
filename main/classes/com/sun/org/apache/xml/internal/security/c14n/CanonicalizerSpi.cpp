#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizerSpi.h>

#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/ByteArrayInputStream.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Set.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ByteArrayInputStream = ::java::io::ByteArrayInputStream;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Set = ::java::util::Set;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {

$MethodInfo _CanonicalizerSpi_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CanonicalizerSpi::*)()>(&CanonicalizerSpi::init$))},
	{"engineCanonicalize", "([BLjava/io/OutputStream;Z)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.parser.XMLParserException,java.io.IOException,com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/lang/String;ZLjava/io/OutputStream;)V", nullptr, $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"engineCanonicalizeXPathNodeSet", "(Ljava/util/Set;Ljava/io/OutputStream;)V", "(Ljava/util/Set<Lorg/w3c/dom/Node;>;Ljava/io/OutputStream;)V", $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"engineCanonicalizeXPathNodeSet", "(Ljava/util/Set;Ljava/lang/String;Ljava/io/OutputStream;)V", "(Ljava/util/Set<Lorg/w3c/dom/Node;>;Ljava/lang/String;Ljava/io/OutputStream;)V", $PUBLIC | $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $ABSTRACT},
	{}
};

$ClassInfo _CanonicalizerSpi_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.c14n.CanonicalizerSpi",
	"java.lang.Object",
	nullptr,
	nullptr,
	_CanonicalizerSpi_MethodInfo_
};

$Object* allocate$CanonicalizerSpi($Class* clazz) {
	return $of($alloc(CanonicalizerSpi));
}

void CanonicalizerSpi::init$() {
}

void CanonicalizerSpi::engineCanonicalize($bytes* inputBytes, $OutputStream* writer, bool secureValidation) {
	$var($Document, document, nullptr);
	{
		$var($InputStream, bais, $new($ByteArrayInputStream, inputBytes));
		{
			$var($Throwable, var$0, nullptr);
			try {
				try {
					$assign(document, $XMLUtils::read(bais, secureValidation));
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						bais->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} /*finally*/ {
				bais->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
		}
	}
	this->engineCanonicalizeSubTree(document, writer);
}

CanonicalizerSpi::CanonicalizerSpi() {
}

$Class* CanonicalizerSpi::load$($String* name, bool initialize) {
	$loadClass(CanonicalizerSpi, name, initialize, &_CanonicalizerSpi_ClassInfo_, allocate$CanonicalizerSpi);
	return class$;
}

$Class* CanonicalizerSpi::class$ = nullptr;

							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com