#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14N.h>

#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315OmitComments.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
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
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef TRANSFORM_C14N_OMIT_COMMENTS

using $CanonicalizationException = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizationException;
using $Canonicalizer20010315 = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315;
using $Canonicalizer20010315OmitComments = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315OmitComments;
using $CanonicalizerBase = ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $TransformSpi = ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								namespace implementations {

$MethodInfo _TransformC14N_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransformC14N::*)()>(&TransformC14N::init$))},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"enginePerformTransform", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/io/OutputStream;Lorg/w3c/dom/Element;Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"getCanonicalizer", "()Lcom/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315;", nullptr, $PROTECTED},
	{}
};

$ClassInfo _TransformC14N_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14N",
	"com.sun.org.apache.xml.internal.security.transforms.TransformSpi",
	nullptr,
	nullptr,
	_TransformC14N_MethodInfo_
};

$Object* allocate$TransformC14N($Class* clazz) {
	return $of($alloc(TransformC14N));
}

void TransformC14N::init$() {
	$TransformSpi::init$();
}

$String* TransformC14N::engineGetURI() {
	$init($Transforms);
	return $Transforms::TRANSFORM_C14N_OMIT_COMMENTS;
}

$XMLSignatureInput* TransformC14N::enginePerformTransform($XMLSignatureInput* input, $OutputStream* os, $Element* transformElement, $String* baseURI, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	$var($Canonicalizer20010315, c14n, getCanonicalizer());
	if (os == nullptr) {
		try {
			$var($ByteArrayOutputStream, writer, $new($ByteArrayOutputStream));
			{
				$var($Throwable, var$0, nullptr);
				$var($XMLSignatureInput, var$2, nullptr);
				bool return$1 = false;
				try {
					try {
						$nc(c14n)->engineCanonicalize(input, static_cast<$OutputStream*>(writer), secureValidation);
						writer->flush();
						$var($XMLSignatureInput, output, $new($XMLSignatureInput, $(writer->toByteArray())));
						output->setSecureValidation(secureValidation);
						$assign(var$2, output);
						return$1 = true;
						goto $finally;
					} catch ($Throwable&) {
						$var($Throwable, t$, $catch());
						try {
							writer->close();
						} catch ($Throwable&) {
							$var($Throwable, x2, $catch());
							t$->addSuppressed(x2);
						}
						$throw(t$);
					}
				} catch ($Throwable&) {
					$assign(var$0, $catch());
				} $finally: {
					writer->close();
				}
				if (var$0 != nullptr) {
					$throw(var$0);
				}
				if (return$1) {
					return var$2;
				}
			}
		} catch ($IOException&) {
			$var($IOException, ex, $catch());
			$throwNew($CanonicalizationException, "empty"_s, $$new($ObjectArray, {$($of(ex->getMessage()))}));
		}
	} else {
		$nc(c14n)->engineCanonicalize(input, os, secureValidation);
		$var($XMLSignatureInput, output, $new($XMLSignatureInput, ($bytes*)nullptr));
		output->setSecureValidation(secureValidation);
		output->setOutputStream(os);
		return output;
	}
}

$Canonicalizer20010315* TransformC14N::getCanonicalizer() {
	return $new($Canonicalizer20010315OmitComments);
}

TransformC14N::TransformC14N() {
}

$Class* TransformC14N::load$($String* name, bool initialize) {
	$loadClass(TransformC14N, name, initialize, &_TransformC14N_ClassInfo_, allocate$TransformC14N);
	return class$;
}

$Class* TransformC14N::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com