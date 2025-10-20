#include <org/jcp/xml/dsig/internal/dom/DOMCanonicalizationMethod.h>

#include <java/io/OutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/Provider.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/AbstractSet.h>
#include <java/util/Collections.h>
#include <java/util/HashSet.h>
#include <java/util/Set.h>
#include <javax/xml/crypto/AlgorithmMethod.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <javax/xml/crypto/dsig/TransformService.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheCanonicalizer.h>
#include <org/jcp/xml/dsig/internal/dom/DOMCanonicalXMLC14N11Method.h>
#include <org/jcp/xml/dsig/internal/dom/DOMTransform.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef C14N_ALGORITHMS
#undef EXCLUSIVE
#undef EXCLUSIVE_WITH_COMMENTS
#undef INCLUSIVE
#undef INCLUSIVE_WITH_COMMENTS

using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $Provider = ::java::security::Provider;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractSet = ::java::util::AbstractSet;
using $Collections = ::java::util::Collections;
using $HashSet = ::java::util::HashSet;
using $Set = ::java::util::Set;
using $AlgorithmMethod = ::javax::xml::crypto::AlgorithmMethod;
using $Data = ::javax::xml::crypto::Data;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $CanonicalizationMethod = ::javax::xml::crypto::dsig::CanonicalizationMethod;
using $TransformService = ::javax::xml::crypto::dsig::TransformService;
using $ApacheCanonicalizer = ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer;
using $DOMCanonicalXMLC14N11Method = ::org::jcp::xml::dsig::internal::dom::DOMCanonicalXMLC14N11Method;
using $DOMTransform = ::org::jcp::xml::dsig::internal::dom::DOMTransform;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Element = ::org::w3c::dom::Element;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMCanonicalizationMethod_FieldInfo_[] = {
	{"C14N_ALGORITHMS", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE | $STATIC | $FINAL, $staticField(DOMCanonicalizationMethod, C14N_ALGORITHMS)},
	{}
};

$MethodInfo _DOMCanonicalizationMethod_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*getAlgorithm", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"*getParameterSpec", "()Ljava/security/spec/AlgorithmParameterSpec;", nullptr, $PUBLIC | $FINAL},
	{"<init>", "(Ljavax/xml/crypto/dsig/TransformService;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMCanonicalizationMethod::*)($TransformService*)>(&DOMCanonicalizationMethod::init$)), "java.security.InvalidAlgorithmParameterException"},
	{"<init>", "(Lorg/w3c/dom/Element;Ljavax/xml/crypto/XMLCryptoContext;Ljava/security/Provider;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMCanonicalizationMethod::*)($Element*,$XMLCryptoContext*,$Provider*)>(&DOMCanonicalizationMethod::init$)), "javax.xml.crypto.MarshalException"},
	{"canonicalize", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.dsig.TransformException"},
	{"canonicalize", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;Ljava/io/OutputStream;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.dsig.TransformException"},
	{"equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"hashCode", "()I", nullptr, $PUBLIC},
	{"isC14Nalg", "(Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($String*)>(&DOMCanonicalizationMethod::isC14Nalg))},
	{"*transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC},
	{"*transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;Ljava/io/OutputStream;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC},
	{"*isFeatureSupported", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $FINAL},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _DOMCanonicalizationMethod_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMCanonicalizationMethod",
	"org.jcp.xml.dsig.internal.dom.DOMTransform",
	"javax.xml.crypto.dsig.CanonicalizationMethod",
	_DOMCanonicalizationMethod_FieldInfo_,
	_DOMCanonicalizationMethod_MethodInfo_
};

$Object* allocate$DOMCanonicalizationMethod($Class* clazz) {
	return $of($alloc(DOMCanonicalizationMethod));
}

$AlgorithmParameterSpec* DOMCanonicalizationMethod::getParameterSpec() {
	 return this->$DOMTransform::getParameterSpec();
}

$String* DOMCanonicalizationMethod::getAlgorithm() {
	 return this->$DOMTransform::getAlgorithm();
}

$Data* DOMCanonicalizationMethod::transform($Data* data, $XMLCryptoContext* xc) {
	 return this->$DOMTransform::transform(data, xc);
}

$Data* DOMCanonicalizationMethod::transform($Data* data, $XMLCryptoContext* xc, $OutputStream* os) {
	 return this->$DOMTransform::transform(data, xc, os);
}

bool DOMCanonicalizationMethod::isFeatureSupported($String* feature) {
	 return this->$DOMTransform::isFeatureSupported(feature);
}

$Object* DOMCanonicalizationMethod::clone() {
	 return this->$DOMTransform::clone();
}

$String* DOMCanonicalizationMethod::toString() {
	 return this->$DOMTransform::toString();
}

void DOMCanonicalizationMethod::finalize() {
	this->$DOMTransform::finalize();
}

$Set* DOMCanonicalizationMethod::C14N_ALGORITHMS = nullptr;

void DOMCanonicalizationMethod::init$($TransformService* spi) {
	$DOMTransform::init$(spi);
	if (!($instanceOf($ApacheCanonicalizer, spi)) && !isC14Nalg($($nc(spi)->getAlgorithm()))) {
		$throwNew($InvalidAlgorithmParameterException, "Illegal CanonicalizationMethod"_s);
	}
}

void DOMCanonicalizationMethod::init$($Element* cmElem, $XMLCryptoContext* context, $Provider* provider) {
	$DOMTransform::init$(cmElem, context, provider);
	if (!($instanceOf($ApacheCanonicalizer, this->spi)) && !isC14Nalg($($nc(this->spi)->getAlgorithm()))) {
		$throwNew($MarshalException, "Illegal CanonicalizationMethod"_s);
	}
}

$Data* DOMCanonicalizationMethod::canonicalize($Data* data, $XMLCryptoContext* xc) {
	return transform(data, xc);
}

$Data* DOMCanonicalizationMethod::canonicalize($Data* data, $XMLCryptoContext* xc, $OutputStream* os) {
	return transform(data, xc, os);
}

bool DOMCanonicalizationMethod::equals(Object$* o) {
	$useLocalCurrentObjectStackCache();
	if ($equals(this, o)) {
		return true;
	}
	if (!($instanceOf($CanonicalizationMethod, o))) {
		return false;
	}
	$var($CanonicalizationMethod, ocm, $cast($CanonicalizationMethod, o));
	bool var$0 = $nc($(getAlgorithm()))->equals($($nc(ocm)->getAlgorithm()));
	if (var$0) {
		$var($AlgorithmParameterSpec, var$1, getParameterSpec());
		var$0 = $DOMUtils::paramsEqual(var$1, $($nc(ocm)->getParameterSpec()));
	}
	return var$0;
}

int32_t DOMCanonicalizationMethod::hashCode() {
	$useLocalCurrentObjectStackCache();
	int32_t result = 17;
	result = 31 * result + $nc($(getAlgorithm()))->hashCode();
	$var($AlgorithmParameterSpec, spec, getParameterSpec());
	if (spec != nullptr) {
		result = 31 * result + $of(spec)->hashCode();
	}
	return result;
}

bool DOMCanonicalizationMethod::isC14Nalg($String* alg) {
	$init(DOMCanonicalizationMethod);
	return alg != nullptr && $nc(DOMCanonicalizationMethod::C14N_ALGORITHMS)->contains(alg);
}

void clinit$DOMCanonicalizationMethod($Class* class$) {
	{
		$var($Set, algorithms, $new($HashSet));
		$init($CanonicalizationMethod);
		algorithms->add($CanonicalizationMethod::INCLUSIVE);
		algorithms->add($CanonicalizationMethod::INCLUSIVE_WITH_COMMENTS);
		algorithms->add($CanonicalizationMethod::EXCLUSIVE);
		algorithms->add($CanonicalizationMethod::EXCLUSIVE_WITH_COMMENTS);
		$init($DOMCanonicalXMLC14N11Method);
		algorithms->add($DOMCanonicalXMLC14N11Method::C14N_11);
		algorithms->add($DOMCanonicalXMLC14N11Method::C14N_11_WITH_COMMENTS);
		$assignStatic(DOMCanonicalizationMethod::C14N_ALGORITHMS, $Collections::unmodifiableSet(algorithms));
	}
}

DOMCanonicalizationMethod::DOMCanonicalizationMethod() {
}

$Class* DOMCanonicalizationMethod::load$($String* name, bool initialize) {
	$loadClass(DOMCanonicalizationMethod, name, initialize, &_DOMCanonicalizationMethod_ClassInfo_, clinit$DOMCanonicalizationMethod, allocate$DOMCanonicalizationMethod);
	return class$;
}

$Class* DOMCanonicalizationMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org