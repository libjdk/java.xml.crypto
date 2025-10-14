#include <com/sun/org/apache/xml/internal/security/transforms/implementations/FuncHere.h>

#include <com/sun/org/apache/xml/internal/dtm/DTM.h>
#include <com/sun/org/apache/xml/internal/dtm/DTMManager.h>
#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <com/sun/org/apache/xpath/internal/NodeSetDTM.h>
#include <com/sun/org/apache/xpath/internal/XPathContext.h>
#include <com/sun/org/apache/xpath/internal/axes/NodeSequence.h>
#include <com/sun/org/apache/xpath/internal/functions/Function.h>
#include <com/sun/org/apache/xpath/internal/objects/XNodeSet.h>
#include <com/sun/org/apache/xpath/internal/objects/XObject.h>
#include <com/sun/org/apache/xpath/internal/res/XPATHErrorResources.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/List.h>
#include <javax/xml/transform/TransformerException.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef ER_CONTEXT_HAS_NO_OWNERDOC
#undef NULL
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE

using $DTM = ::com::sun::org::apache::xml::internal::dtm::DTM;
using $DTMManager = ::com::sun::org::apache::xml::internal::dtm::DTMManager;
using $I18n = ::com::sun::org::apache::xml::internal::security::utils::I18n;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $Expression = ::com::sun::org::apache::xpath::internal::Expression;
using $NodeSetDTM = ::com::sun::org::apache::xpath::internal::NodeSetDTM;
using $XPathContext = ::com::sun::org::apache::xpath::internal::XPathContext;
using $NodeSequence = ::com::sun::org::apache::xpath::internal::axes::NodeSequence;
using $Function = ::com::sun::org::apache::xpath::internal::functions::Function;
using $XNodeSet = ::com::sun::org::apache::xpath::internal::objects::XNodeSet;
using $XObject = ::com::sun::org::apache::xpath::internal::objects::XObject;
using $XPATHErrorResources = ::com::sun::org::apache::xpath::internal::res::XPATHErrorResources;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $List = ::java::util::List;
using $TransformerException = ::javax::xml::transform::TransformerException;
using $Document = ::org::w3c::dom::Document;
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

$FieldInfo _FuncHere_FieldInfo_[] = {
	{"serialVersionUID", "J", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(FuncHere, serialVersionUID)},
	{}
};

$MethodInfo _FuncHere_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(FuncHere::*)()>(&FuncHere::init$))},
	{"execute", "(Lcom/sun/org/apache/xpath/internal/XPathContext;)Lcom/sun/org/apache/xpath/internal/objects/XObject;", nullptr, $PUBLIC, nullptr, "javax.xml.transform.TransformerException"},
	{"fixupVariables", "(Ljava/util/List;I)V", "(Ljava/util/List<Lcom/sun/org/apache/xml/internal/utils/QName;>;I)V", $PUBLIC},
	{}
};

$ClassInfo _FuncHere_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.implementations.FuncHere",
	"com.sun.org.apache.xpath.internal.functions.Function",
	nullptr,
	_FuncHere_FieldInfo_,
	_FuncHere_MethodInfo_
};

$Object* allocate$FuncHere($Class* clazz) {
	return $of($alloc(FuncHere));
}

void FuncHere::init$() {
	$Function::init$();
}

$XObject* FuncHere::execute($XPathContext* xctxt) {
	$var($Node, xpathOwnerNode, $cast($Node, $nc(xctxt)->getOwnerObject()));
	if (xpathOwnerNode == nullptr) {
		return nullptr;
	}
	int32_t xpathOwnerNodeDTM = xctxt->getDTMHandleFromNode(xpathOwnerNode);
	int32_t currentNode = xctxt->getCurrentNode();
	$var($DTM, dtm, xctxt->getDTM(currentNode));
	int32_t docContext = $nc(dtm)->getDocument();
	if ($DTM::NULL == docContext) {
		$init($XPATHErrorResources);
		error(xctxt, $XPATHErrorResources::ER_CONTEXT_HAS_NO_OWNERDOC, nullptr);
	}
	{
		$var($Document, currentDoc, $XMLUtils::getOwnerDocument($(dtm->getNode(currentNode))));
		$var($Document, xpathOwnerDoc, $XMLUtils::getOwnerDocument(xpathOwnerNode));
		if (currentDoc != xpathOwnerDoc) {
			$throwNew($TransformerException, $($I18n::translate("xpath.funcHere.documentsDiffer"_s)));
		}
	}
	$var($XNodeSet, nodes, $new($XNodeSet, $(xctxt->getDTMManager())));
	$var($NodeSetDTM, nodeSet, nodes->mutableNodeset());
	{
		int32_t hereNode = $DTM::NULL;
		switch (dtm->getNodeType(xpathOwnerNodeDTM)) {
		case $Node::ATTRIBUTE_NODE:
			{}
		case $Node::PROCESSING_INSTRUCTION_NODE:
			{
				{
					hereNode = xpathOwnerNodeDTM;
					$nc(nodeSet)->addNode(hereNode);
					break;
				}
			}
		case $Node::TEXT_NODE:
			{
				{
					hereNode = dtm->getParent(xpathOwnerNodeDTM);
					$nc(nodeSet)->addNode(hereNode);
					break;
				}
			}
		default:
			{
				break;
			}
		}
	}
	$nc(nodeSet)->detach();
	return nodes;
}

void FuncHere::fixupVariables($List* vars, int32_t globalsSize) {
}

FuncHere::FuncHere() {
}

$Class* FuncHere::load$($String* name, bool initialize) {
	$loadClass(FuncHere, name, initialize, &_FuncHere_ClassInfo_, allocate$FuncHere);
	return class$;
}

$Class* FuncHere::class$ = nullptr;

								} // implementations
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com