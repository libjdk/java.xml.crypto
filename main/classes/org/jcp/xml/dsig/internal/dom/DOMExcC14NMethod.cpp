#include <org/jcp/xml/dsig/internal/dom/DOMExcC14NMethod.h>

#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/InvalidCanonicalizerException.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/security/InvalidAlgorithmParameterException.h>
#include <java/security/spec/AlgorithmParameterSpec.h>
#include <java/util/AbstractList.h>
#include <java/util/ArrayList.h>
#include <java/util/List.h>
#include <javax/xml/crypto/Data.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <javax/xml/crypto/XMLStructure.h>
#include <javax/xml/crypto/dsig/CanonicalizationMethod.h>
#include <javax/xml/crypto/dsig/TransformException.h>
#include <javax/xml/crypto/dsig/spec/C14NMethodParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/ExcC14NParameterSpec.h>
#include <javax/xml/crypto/dsig/spec/TransformParameterSpec.h>
#include <org/jcp/xml/dsig/internal/dom/ApacheCanonicalizer.h>
#include <org/jcp/xml/dsig/internal/dom/DOMSubTreeData.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef EXCLUSIVE

using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $InvalidCanonicalizerException = ::com::sun::org::apache::xml::internal::security::c14n::InvalidCanonicalizerException;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $MethodInfo = ::java::lang::MethodInfo;
using $InvalidAlgorithmParameterException = ::java::security::InvalidAlgorithmParameterException;
using $AlgorithmParameterSpec = ::java::security::spec::AlgorithmParameterSpec;
using $AbstractList = ::java::util::AbstractList;
using $ArrayList = ::java::util::ArrayList;
using $List = ::java::util::List;
using $Data = ::javax::xml::crypto::Data;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $XMLStructure = ::javax::xml::crypto::XMLStructure;
using $CanonicalizationMethod = ::javax::xml::crypto::dsig::CanonicalizationMethod;
using $TransformException = ::javax::xml::crypto::dsig::TransformException;
using $C14NMethodParameterSpec = ::javax::xml::crypto::dsig::spec::C14NMethodParameterSpec;
using $ExcC14NParameterSpec = ::javax::xml::crypto::dsig::spec::ExcC14NParameterSpec;
using $TransformParameterSpec = ::javax::xml::crypto::dsig::spec::TransformParameterSpec;
using $ApacheCanonicalizer = ::org::jcp::xml::dsig::internal::dom::ApacheCanonicalizer;
using $DOMSubTreeData = ::org::jcp::xml::dsig::internal::dom::DOMSubTreeData;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _DOMExcC14NMethod_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(DOMExcC14NMethod::*)()>(&DOMExcC14NMethod::init$))},
	{"getParameterSpecPrefixList", "(Ljavax/xml/crypto/dsig/spec/ExcC14NParameterSpec;)Ljava/util/List;", "(Ljavax/xml/crypto/dsig/spec/ExcC14NParameterSpec;)Ljava/util/List<Ljava/lang/String;>;", $PUBLIC, $method(static_cast<$List*(DOMExcC14NMethod::*)($ExcC14NParameterSpec*)>(&DOMExcC14NMethod::getParameterSpecPrefixList))},
	{"getParamsNSURI", "()Ljava/lang/String;", nullptr, $PUBLIC, $method(static_cast<$String*(DOMExcC14NMethod::*)()>(&DOMExcC14NMethod::getParamsNSURI))},
	{"init", "(Ljavax/xml/crypto/dsig/spec/TransformParameterSpec;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"init", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC, nullptr, "java.security.InvalidAlgorithmParameterException"},
	{"marshalParams", "(Ljavax/xml/crypto/XMLStructure;Ljavax/xml/crypto/XMLCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{"transform", "(Ljavax/xml/crypto/Data;Ljavax/xml/crypto/XMLCryptoContext;)Ljavax/xml/crypto/Data;", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.dsig.TransformException"},
	{"unmarshalParams", "(Lorg/w3c/dom/Element;)V", nullptr, $PRIVATE, $method(static_cast<void(DOMExcC14NMethod::*)($Element*)>(&DOMExcC14NMethod::unmarshalParams))},
	{}
};

$ClassInfo _DOMExcC14NMethod_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMExcC14NMethod",
	"org.jcp.xml.dsig.internal.dom.ApacheCanonicalizer",
	nullptr,
	nullptr,
	_DOMExcC14NMethod_MethodInfo_
};

$Object* allocate$DOMExcC14NMethod($Class* clazz) {
	return $of($alloc(DOMExcC14NMethod));
}

void DOMExcC14NMethod::init$() {
	$ApacheCanonicalizer::init$();
}

void DOMExcC14NMethod::init($TransformParameterSpec* params) {
	if (params != nullptr) {
		if (!($instanceOf($ExcC14NParameterSpec, params))) {
			$throwNew($InvalidAlgorithmParameterException, "params must be of type ExcC14NParameterSpec"_s);
		}
		$set(this, params, $cast($C14NMethodParameterSpec, params));
	}
}

void DOMExcC14NMethod::init($XMLStructure* parent, $XMLCryptoContext* context) {
	$ApacheCanonicalizer::init(parent, context);
	$var($Element, paramsElem, $DOMUtils::getFirstChildElement(this->transformElem));
	if (paramsElem == nullptr) {
		$set(this, params, nullptr);
		$set(this, inclusiveNamespaces, nullptr);
		return;
	}
	unmarshalParams(paramsElem);
}

void DOMExcC14NMethod::unmarshalParams($Element* paramsElem) {
	$useLocalCurrentObjectStackCache();
	$var($String, prefixListAttr, $nc(paramsElem)->getAttributeNS(nullptr, "PrefixList"_s));
	$set(this, inclusiveNamespaces, prefixListAttr);
	int32_t begin = 0;
	int32_t end = $nc(prefixListAttr)->indexOf((int32_t)u' ');
	$var($List, prefixList, $new($ArrayList));
	while (end != -1) {
		prefixList->add($(prefixListAttr->substring(begin, end)));
		begin = end + 1;
		end = prefixListAttr->indexOf((int32_t)u' ', begin);
	}
	if (begin <= prefixListAttr->length()) {
		prefixList->add($(prefixListAttr->substring(begin)));
	}
	$set(this, params, $new($ExcC14NParameterSpec, prefixList));
}

$List* DOMExcC14NMethod::getParameterSpecPrefixList($ExcC14NParameterSpec* paramSpec) {
	return $nc(paramSpec)->getPrefixList();
}

void DOMExcC14NMethod::marshalParams($XMLStructure* parent, $XMLCryptoContext* context) {
	$useLocalCurrentObjectStackCache();
	$ApacheCanonicalizer::marshalParams(parent, context);
	$var($AlgorithmParameterSpec, spec, getParameterSpec());
	if (spec == nullptr) {
		return;
	}
	$init($CanonicalizationMethod);
	$var($String, prefix, $DOMUtils::getNSPrefix(context, $CanonicalizationMethod::EXCLUSIVE));
	$var($Element, eElem, $DOMUtils::createElement(this->ownerDoc, "InclusiveNamespaces"_s, $CanonicalizationMethod::EXCLUSIVE, prefix));
	if (prefix == nullptr || $nc(prefix)->length() == 0) {
		$nc(eElem)->setAttributeNS("http://www.w3.org/2000/xmlns/"_s, "xmlns"_s, $CanonicalizationMethod::EXCLUSIVE);
	} else {
		$nc(eElem)->setAttributeNS("http://www.w3.org/2000/xmlns/"_s, $$str({"xmlns:"_s, prefix}), $CanonicalizationMethod::EXCLUSIVE);
	}
	$var($ExcC14NParameterSpec, params, $cast($ExcC14NParameterSpec, spec));
	$var($StringBuilder, prefixListAttr, $new($StringBuilder, ""_s));
	$var($List, prefixList, getParameterSpecPrefixList(params));
	{
		int32_t i = 0;
		int32_t size = $nc(prefixList)->size();
		for (; i < size; ++i) {
			prefixListAttr->append($cast($String, $(prefixList->get(i))));
			if (i < size - 1) {
				prefixListAttr->append(u' ');
			}
		}
	}
	$DOMUtils::setAttribute(eElem, "PrefixList"_s, $(prefixListAttr->toString()));
	$set(this, inclusiveNamespaces, prefixListAttr->toString());
	$nc(this->transformElem)->appendChild(eElem);
}

$String* DOMExcC14NMethod::getParamsNSURI() {
	$init($CanonicalizationMethod);
	return $CanonicalizationMethod::EXCLUSIVE;
}

$Data* DOMExcC14NMethod::transform($Data* data, $XMLCryptoContext* xc) {
	$useLocalCurrentObjectStackCache();
	if ($instanceOf($DOMSubTreeData, data)) {
		$var($DOMSubTreeData, subTree, $cast($DOMSubTreeData, data));
		if ($nc(subTree)->excludeComments()) {
			try {
				$init($CanonicalizationMethod);
				$set(this, canonicalizer, $Canonicalizer::getInstance($CanonicalizationMethod::EXCLUSIVE));
			} catch ($InvalidCanonicalizerException&) {
				$var($InvalidCanonicalizerException, ice, $catch());
				$init($CanonicalizationMethod);
				$throwNew($TransformException, $$str({"Couldn\'t find Canonicalizer for: "_s, $CanonicalizationMethod::EXCLUSIVE, ": "_s, $(ice->getMessage())}), ice);
			}
		}
	}
	return canonicalize(data, xc);
}

DOMExcC14NMethod::DOMExcC14NMethod() {
}

$Class* DOMExcC14NMethod::load$($String* name, bool initialize) {
	$loadClass(DOMExcC14NMethod, name, initialize, &_DOMExcC14NMethod_ClassInfo_, allocate$DOMExcC14NMethod);
	return class$;
}

$Class* DOMExcC14NMethod::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org