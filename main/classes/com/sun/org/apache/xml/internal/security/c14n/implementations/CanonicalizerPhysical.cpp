#include <com/sun/org/apache/xml/internal/security/c14n/implementations/CanonicalizerPhysical.h>

#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/helper/AttrCompare.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/CanonicalizerBase.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <java/io/OutputStream.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Map.h>
#include <java/util/NavigableSet.h>
#include <java/util/Set.h>
#include <java/util/SortedSet.h>
#include <java/util/TreeSet.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <jcpp.h>

#undef ALGO_ID_C14N_PHYSICAL
#undef COMPARE
#undef NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT

using $CanonicalizationException = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizationException;
using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $AttrCompare = ::com::sun::org::apache::xml::internal::security::c14n::helper::AttrCompare;
using $CanonicalizerBase = ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerBase;
using $NameSpaceSymbTable = ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
using $Map = ::java::util::Map;
using $NavigableSet = ::java::util::NavigableSet;
using $Set = ::java::util::Set;
using $SortedSet = ::java::util::SortedSet;
using $TreeSet = ::java::util::TreeSet;
using $Attr = ::org::w3c::dom::Attr;
using $Comment = ::org::w3c::dom::Comment;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $ProcessingInstruction = ::org::w3c::dom::ProcessingInstruction;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {

$MethodInfo _CanonicalizerPhysical_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(CanonicalizerPhysical::*)()>(&CanonicalizerPhysical::init$))},
	{"circumventBugIfNeeded", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.parser.XMLParserException,java.io.IOException"},
	{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/lang/String;ZLjava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"engineCanonicalizeXPathNodeSet", "(Ljava/util/Set;Ljava/lang/String;Ljava/io/OutputStream;)V", "(Ljava/util/Set<Lorg/w3c/dom/Node;>;Ljava/lang/String;Ljava/io/OutputStream;)V", $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"engineGetURI", "()Ljava/lang/String;", nullptr, $PUBLIC | $FINAL},
	{"handleParent", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;)V", nullptr, $PROTECTED},
	{"outputAttributes", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map;Ljava/io/OutputStream;)V", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map<Ljava/lang/String;[B>;Ljava/io/OutputStream;)V", $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,org.w3c.dom.DOMException,java.io.IOException"},
	{"outputAttributesSubtree", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map;Ljava/io/OutputStream;)V", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map<Ljava/lang/String;[B>;Ljava/io/OutputStream;)V", $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,org.w3c.dom.DOMException,java.io.IOException"},
	{"outputCommentToWriter", "(Lorg/w3c/dom/Comment;Ljava/io/OutputStream;I)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"outputPItoWriter", "(Lorg/w3c/dom/ProcessingInstruction;Ljava/io/OutputStream;I)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{}
};

$ClassInfo _CanonicalizerPhysical_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.implementations.CanonicalizerPhysical",
	"com.sun.org.apache.xml.internal.security.c14n.implementations.CanonicalizerBase",
	nullptr,
	nullptr,
	_CanonicalizerPhysical_MethodInfo_
};

$Object* allocate$CanonicalizerPhysical($Class* clazz) {
	return $of($alloc(CanonicalizerPhysical));
}

void CanonicalizerPhysical::init$() {
	$CanonicalizerBase::init$(true);
}

void CanonicalizerPhysical::engineCanonicalizeXPathNodeSet($Set* xpathNodeSet, $String* inclusiveNamespaces, $OutputStream* writer) {
	$throwNew($CanonicalizationException, "c14n.Canonicalizer.UnsupportedOperation"_s);
}

void CanonicalizerPhysical::engineCanonicalizeSubTree($Node* rootNode, $String* inclusiveNamespaces, $OutputStream* writer) {
	$throwNew($CanonicalizationException, "c14n.Canonicalizer.UnsupportedOperation"_s);
}

void CanonicalizerPhysical::engineCanonicalizeSubTree($Node* rootNode, $String* inclusiveNamespaces, bool propagateDefaultNamespace, $OutputStream* writer) {
	$throwNew($CanonicalizationException, "c14n.Canonicalizer.UnsupportedOperation"_s);
}

void CanonicalizerPhysical::outputAttributesSubtree($Element* element, $NameSpaceSymbTable* ns, $Map* cache, $OutputStream* writer) {
	if ($nc(element)->hasAttributes()) {
		$init($CanonicalizerBase);
		$var($SortedSet, result, $new($TreeSet, static_cast<$Comparator*>($CanonicalizerBase::COMPARE)));
		$var($NamedNodeMap, attrs, element->getAttributes());
		int32_t attrsLength = $nc(attrs)->getLength();
		for (int32_t i = 0; i < attrsLength; ++i) {
			$var($Attr, attribute, $cast($Attr, attrs->item(i)));
			result->add(attribute);
		}
		{
			$var($Iterator, i$, result->iterator());
			for (; $nc(i$)->hasNext();) {
				$var($Attr, attr, $cast($Attr, i$->next()));
				{
					$var($String, var$0, $nc(attr)->getNodeName());
					outputAttrToWriter(var$0, $(attr->getNodeValue()), writer, cache);
				}
			}
		}
	}
}

void CanonicalizerPhysical::outputAttributes($Element* element, $NameSpaceSymbTable* ns, $Map* cache, $OutputStream* writer) {
	$throwNew($CanonicalizationException, "c14n.Canonicalizer.UnsupportedOperation"_s);
}

void CanonicalizerPhysical::circumventBugIfNeeded($XMLSignatureInput* input) {
}

void CanonicalizerPhysical::handleParent($Element* e, $NameSpaceSymbTable* ns) {
}

$String* CanonicalizerPhysical::engineGetURI() {
	$init($Canonicalizer);
	return $Canonicalizer::ALGO_ID_C14N_PHYSICAL;
}

void CanonicalizerPhysical::outputPItoWriter($ProcessingInstruction* currentPI, $OutputStream* writer, int32_t position) {
	$CanonicalizerBase::outputPItoWriter(currentPI, writer, $CanonicalizerBase::NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT);
}

void CanonicalizerPhysical::outputCommentToWriter($Comment* currentComment, $OutputStream* writer, int32_t position) {
	$CanonicalizerBase::outputCommentToWriter(currentComment, writer, $CanonicalizerBase::NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT);
}

CanonicalizerPhysical::CanonicalizerPhysical() {
}

$Class* CanonicalizerPhysical::load$($String* name, bool initialize) {
	$loadClass(CanonicalizerPhysical, name, initialize, &_CanonicalizerPhysical_ClassInfo_, allocate$CanonicalizerPhysical);
	return class$;
}

$Class* CanonicalizerPhysical::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com