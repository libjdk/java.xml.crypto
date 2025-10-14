#include <com/sun/org/apache/xml/internal/security/transforms/implementations/TransformC14NExclusive.h>

#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315Excl.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315ExclOmitComments.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/transforms/TransformSpi.h>
#include <com/sun/org/apache/xml/internal/security/transforms/Transforms.h>
#include <com/sun/org/apache/xml/internal/security/transforms/params/InclusiveNamespaces.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/ByteArrayOutputStream.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef TRANSFORM_C14N_EXCL_OMIT_COMMENTS
#undef _TAG_EC_INCLUSIVENAMESPACES

using $CanonicalizationException = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizationException;
using $Canonicalizer20010315Excl = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315Excl;
using $Canonicalizer20010315ExclOmitComments = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315ExclOmitComments;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $TransformSpi = ::com::sun::org::apache::xml::internal::security::transforms::TransformSpi;
using $Transforms = ::com::sun::org::apache::xml::internal::security::transforms::Transforms;
using $InclusiveNamespaces = ::com::sun::org::apache::xml::internal::security::transforms::params::InclusiveNamespaces;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								namespace implementations {

$MethodInfo _TransformC14NExclusive_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(TransformC14NExclusive::*)()>(&TransformC14NExclusive::init$))},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PROTECTED},
	{"enginePerformTransform", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/io/OutputStream;Lorg/w3c/dom/Element;Ljava/lang/String;Z)Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"getCanonicalizer", "()Lcom/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315Excl;", nullptr, $PROTECTED},
	{"length", "(Lorg/w3c/dom/Element;Ljava/lang/String;Ljava/lang/String;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(TransformC14NExclusive::*)($Element*,$String*,$String*)>(&TransformC14NExclusive::length))},
	{}
};

$ClassInfo _TransformC14NExclusive_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.TransformC14NExclusive",
	"com.sun.org.apache.xml.internal.security.transforms.TransformSpi",
	nullptr,
	nullptr,
	_TransformC14NExclusive_MethodInfo_
};

$Object* allocate$TransformC14NExclusive($Class* clazz) {
	return $of($alloc(TransformC14NExclusive));
}

void TransformC14NExclusive::init$() {
	$TransformSpi::init$();
}

$String* TransformC14NExclusive::engineGetURI() {
	$init($Transforms);
	return $Transforms::TRANSFORM_C14N_EXCL_OMIT_COMMENTS;
}

$XMLSignatureInput* TransformC14NExclusive::enginePerformTransform($XMLSignatureInput* input, $OutputStream* os, $Element* transformElement, $String* baseURI, bool secureValidation) {
	try {
		$var($String, inclusiveNamespaces, nullptr);
		$init($InclusiveNamespaces);
		if (length(transformElement, $InclusiveNamespaces::ExclusiveCanonicalizationNamespace, $InclusiveNamespaces::_TAG_EC_INCLUSIVENAMESPACES) == 1) {
			$var($Element, inclusiveElement, $XMLUtils::selectNode($($nc(transformElement)->getFirstChild()), $InclusiveNamespaces::ExclusiveCanonicalizationNamespace, $InclusiveNamespaces::_TAG_EC_INCLUSIVENAMESPACES, 0));
			$assign(inclusiveNamespaces, $$new($InclusiveNamespaces, inclusiveElement, baseURI)->getInclusiveNamespaces());
		}
		$var($Canonicalizer20010315Excl, c14n, getCanonicalizer());
		if (os == nullptr) {
			try {
				$var($ByteArrayOutputStream, writer, $new($ByteArrayOutputStream));
				{
					$var($Throwable, var$0, nullptr);
					$var($XMLSignatureInput, var$2, nullptr);
					bool return$1 = false;
					try {
						try {
							$nc(c14n)->engineCanonicalize(input, inclusiveNamespaces, writer, secureValidation);
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
			$nc(c14n)->engineCanonicalize(input, inclusiveNamespaces, os, secureValidation);
			$var($XMLSignatureInput, output, $new($XMLSignatureInput, ($bytes*)nullptr));
			output->setSecureValidation(secureValidation);
			output->setOutputStream(os);
			return output;
		}
	} catch ($XMLSecurityException&) {
		$var($XMLSecurityException, ex, $catch());
		$throwNew($CanonicalizationException, static_cast<$Exception*>(ex));
	}
	$shouldNotReachHere();
}

$Canonicalizer20010315Excl* TransformC14NExclusive::getCanonicalizer() {
	return $new($Canonicalizer20010315ExclOmitComments);
}

int32_t TransformC14NExclusive::length($Element* element, $String* namespace$, $String* localname) {
	int32_t number = 0;
	$var($Node, sibling, $nc(element)->getFirstChild());
	while (sibling != nullptr) {
		bool var$0 = $nc(localname)->equals($(sibling->getLocalName()));
		if (var$0 && $nc(namespace$)->equals($(sibling->getNamespaceURI()))) {
			++number;
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return number;
}

TransformC14NExclusive::TransformC14NExclusive() {
}

$Class* TransformC14NExclusive::load$($String* name, bool initialize) {
	$loadClass(TransformC14NExclusive, name, initialize, &_TransformC14NExclusive_ClassInfo_, allocate$TransformC14NExclusive);
	return class$;
}

$Class* TransformC14NExclusive::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com