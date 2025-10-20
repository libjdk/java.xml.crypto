#include <com/sun/org/apache/xml/internal/security/c14n/implementations/CanonicalizerBase.h>

#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizerSpi.h>
#include <com/sun/org/apache/xml/internal/security/c14n/helper/AttrCompare.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/UtfHelpper.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParserException.h>
#include <com/sun/org/apache/xml/internal/security/signature/NodeFilter.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/IOException.h>
#include <java/io/OutputStream.h>
#include <java/io/UnsupportedEncodingException.h>
#include <java/lang/Array.h>
#include <java/lang/Character.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractMap.h>
#include <java/util/ArrayList.h>
#include <java/util/HashMap.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/ListIterator.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <jcpp.h>

#undef AMP
#undef ATTRIBUTE_NODE
#undef BEGIN_COMM
#undef BEGIN_PI
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef COMPARE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef ELEMENT_NODE
#undef END_COMM
#undef END_PI
#undef END_TAG
#undef ENTITY_NODE
#undef EQUALS_STR
#undef GT
#undef LT
#undef NODE_AFTER_DOCUMENT_ELEMENT
#undef NODE_BEFORE_DOCUMENT_ELEMENT
#undef NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT
#undef NOTATION_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef QUOT
#undef TEXT_NODE
#undef XA
#undef XD
#undef XML
#undef XMLNS
#undef XMLNS_URI
#undef XML_LANG_URI

using $CanonicalizationException = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizationException;
using $CanonicalizerSpi = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizerSpi;
using $AttrCompare = ::com::sun::org::apache::xml::internal::security::c14n::helper::AttrCompare;
using $NameSpaceSymbTable = ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbTable;
using $UtfHelpper = ::com::sun::org::apache::xml::internal::security::c14n::implementations::UtfHelpper;
using $XMLParserException = ::com::sun::org::apache::xml::internal::security::parser::XMLParserException;
using $NodeFilter = ::com::sun::org::apache::xml::internal::security::signature::NodeFilter;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $IOException = ::java::io::IOException;
using $OutputStream = ::java::io::OutputStream;
using $UnsupportedEncodingException = ::java::io::UnsupportedEncodingException;
using $Character = ::java::lang::Character;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $RuntimeException = ::java::lang::RuntimeException;
using $AbstractList = ::java::util::AbstractList;
using $AbstractMap = ::java::util::AbstractMap;
using $ArrayList = ::java::util::ArrayList;
using $HashMap = ::java::util::HashMap;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $ListIterator = ::java::util::ListIterator;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $Attr = ::org::w3c::dom::Attr;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Comment = ::org::w3c::dom::Comment;
using $Document = ::org::w3c::dom::Document;
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

$FieldInfo _CanonicalizerBase_FieldInfo_[] = {
	{"XML", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CanonicalizerBase, XML)},
	{"XMLNS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CanonicalizerBase, XMLNS)},
	{"XMLNS_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CanonicalizerBase, XMLNS_URI)},
	{"XML_LANG_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(CanonicalizerBase, XML_LANG_URI)},
	{"COMPARE", "Lcom/sun/org/apache/xml/internal/security/c14n/helper/AttrCompare;", nullptr, $PROTECTED | $STATIC | $FINAL, $staticField(CanonicalizerBase, COMPARE)},
	{"NODE_BEFORE_DOCUMENT_ELEMENT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(CanonicalizerBase, NODE_BEFORE_DOCUMENT_ELEMENT)},
	{"NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(CanonicalizerBase, NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT)},
	{"NODE_AFTER_DOCUMENT_ELEMENT", "I", nullptr, $PROTECTED | $STATIC | $FINAL, $constField(CanonicalizerBase, NODE_AFTER_DOCUMENT_ELEMENT)},
	{"END_PI", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CanonicalizerBase, END_PI)},
	{"BEGIN_PI", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CanonicalizerBase, BEGIN_PI)},
	{"END_COMM", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CanonicalizerBase, END_COMM)},
	{"BEGIN_COMM", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CanonicalizerBase, BEGIN_COMM)},
	{"XA", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CanonicalizerBase, XA)},
	{"X9", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CanonicalizerBase, X9)},
	{"QUOT", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CanonicalizerBase, QUOT)},
	{"XD", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CanonicalizerBase, XD)},
	{"GT", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CanonicalizerBase, GT)},
	{"LT", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CanonicalizerBase, LT)},
	{"END_TAG", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CanonicalizerBase, END_TAG)},
	{"AMP", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CanonicalizerBase, AMP)},
	{"EQUALS_STR", "[B", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(CanonicalizerBase, EQUALS_STR)},
	{"includeComments", "Z", nullptr, $PRIVATE, $field(CanonicalizerBase, includeComments)},
	{"nodeFilter", "Ljava/util/List;", "Ljava/util/List<Lcom/sun/org/apache/xml/internal/security/signature/NodeFilter;>;", $PRIVATE, $field(CanonicalizerBase, nodeFilter)},
	{"xpathNodeSet", "Ljava/util/Set;", "Ljava/util/Set<Lorg/w3c/dom/Node;>;", $PRIVATE, $field(CanonicalizerBase, xpathNodeSet)},
	{"nullNode", "Lorg/w3c/dom/Attr;", nullptr, $PRIVATE, $field(CanonicalizerBase, nullNode)},
	{}
};

$MethodInfo _CanonicalizerBase_MethodInfo_[] = {
	{"<init>", "(Z)V", nullptr, $PROTECTED, $method(static_cast<void(CanonicalizerBase::*)(bool)>(&CanonicalizerBase::init$))},
	{"canonicalizeSubTree", "(Lorg/w3c/dom/Node;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Lorg/w3c/dom/Node;ILorg/w3c/dom/Node;Ljava/io/OutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CanonicalizerBase::*)($Node*,$NameSpaceSymbTable*,$Node*,int32_t,$Node*,$OutputStream*)>(&CanonicalizerBase::canonicalizeSubTree)), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,java.io.IOException"},
	{"canonicalizeXPathNodeSet", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/io/OutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CanonicalizerBase::*)($Node*,$Node*,$OutputStream*)>(&CanonicalizerBase::canonicalizeXPathNodeSet)), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,java.io.IOException"},
	{"circumventBugIfNeeded", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;)V", nullptr, $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.parser.XMLParserException,java.io.IOException"},
	{"engineCanonicalize", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/io/OutputStream;Z)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"engineCanonicalizeSubTree", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;Ljava/io/OutputStream;)V", nullptr, $PROTECTED, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"engineCanonicalizeXPathNodeSet", "(Ljava/util/Set;Ljava/io/OutputStream;)V", "(Ljava/util/Set<Lorg/w3c/dom/Node;>;Ljava/io/OutputStream;)V", $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"engineCanonicalizeXPathNodeSetInternal", "(Lorg/w3c/dom/Node;Ljava/io/OutputStream;)V", nullptr, $PRIVATE, $method(static_cast<void(CanonicalizerBase::*)($Node*,$OutputStream*)>(&CanonicalizerBase::engineCanonicalizeXPathNodeSetInternal)), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"getNullNode", "(Lorg/w3c/dom/Document;)Lorg/w3c/dom/Attr;", nullptr, $PROTECTED},
	{"getParentNameSpaces", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;)V", nullptr, $PRIVATE, $method(static_cast<void(CanonicalizerBase::*)($Element*,$NameSpaceSymbTable*)>(&CanonicalizerBase::getParentNameSpaces))},
	{"handleParent", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;)V", nullptr, $PROTECTED},
	{"isVisible", "(Lorg/w3c/dom/Node;)Z", nullptr, $PROTECTED},
	{"isVisibleDO", "(Lorg/w3c/dom/Node;I)I", nullptr, $PROTECTED},
	{"isVisibleInt", "(Lorg/w3c/dom/Node;)I", nullptr, $PROTECTED},
	{"outputAttrToWriter", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/OutputStream;Ljava/util/Map;)V", "(Ljava/lang/String;Ljava/lang/String;Ljava/io/OutputStream;Ljava/util/Map<Ljava/lang/String;[B>;)V", $PROTECTED | $STATIC | $FINAL, $method(static_cast<void(*)($String*,$String*,$OutputStream*,$Map*)>(&CanonicalizerBase::outputAttrToWriter)), "java.io.IOException"},
	{"outputAttributes", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map;Ljava/io/OutputStream;)V", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map<Ljava/lang/String;[B>;Ljava/io/OutputStream;)V", $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,org.w3c.dom.DOMException,java.io.IOException"},
	{"outputAttributesSubtree", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map;Ljava/io/OutputStream;)V", "(Lorg/w3c/dom/Element;Lcom/sun/org/apache/xml/internal/security/c14n/implementations/NameSpaceSymbTable;Ljava/util/Map<Ljava/lang/String;[B>;Ljava/io/OutputStream;)V", $ABSTRACT, nullptr, "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException,org.w3c.dom.DOMException,java.io.IOException"},
	{"outputCommentToWriter", "(Lorg/w3c/dom/Comment;Ljava/io/OutputStream;I)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"outputPItoWriter", "(Lorg/w3c/dom/ProcessingInstruction;Ljava/io/OutputStream;I)V", nullptr, $PROTECTED, nullptr, "java.io.IOException"},
	{"outputTextToWriter", "(Ljava/lang/String;Ljava/io/OutputStream;)V", nullptr, $PRIVATE | $STATIC | $FINAL, $method(static_cast<void(*)($String*,$OutputStream*)>(&CanonicalizerBase::outputTextToWriter)), "java.io.IOException"},
	{}
};

$ClassInfo _CanonicalizerBase_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER | $ABSTRACT,
	"com.sun.org.apache.xml.internal.security.c14n.implementations.CanonicalizerBase",
	"com.sun.org.apache.xml.internal.security.c14n.CanonicalizerSpi",
	nullptr,
	_CanonicalizerBase_FieldInfo_,
	_CanonicalizerBase_MethodInfo_
};

$Object* allocate$CanonicalizerBase($Class* clazz) {
	return $of($alloc(CanonicalizerBase));
}

$String* CanonicalizerBase::XML = nullptr;
$String* CanonicalizerBase::XMLNS = nullptr;
$String* CanonicalizerBase::XMLNS_URI = nullptr;
$String* CanonicalizerBase::XML_LANG_URI = nullptr;
$AttrCompare* CanonicalizerBase::COMPARE = nullptr;
$bytes* CanonicalizerBase::END_PI = nullptr;
$bytes* CanonicalizerBase::BEGIN_PI = nullptr;
$bytes* CanonicalizerBase::END_COMM = nullptr;
$bytes* CanonicalizerBase::BEGIN_COMM = nullptr;
$bytes* CanonicalizerBase::XA = nullptr;
$bytes* CanonicalizerBase::X9 = nullptr;
$bytes* CanonicalizerBase::QUOT = nullptr;
$bytes* CanonicalizerBase::XD = nullptr;
$bytes* CanonicalizerBase::GT = nullptr;
$bytes* CanonicalizerBase::LT = nullptr;
$bytes* CanonicalizerBase::END_TAG = nullptr;
$bytes* CanonicalizerBase::AMP = nullptr;
$bytes* CanonicalizerBase::EQUALS_STR = nullptr;

void CanonicalizerBase::init$(bool includeComments) {
	$CanonicalizerSpi::init$();
	this->includeComments = includeComments;
}

void CanonicalizerBase::engineCanonicalizeSubTree($Node* rootNode, $OutputStream* writer) {
	engineCanonicalizeSubTree(rootNode, ($Node*)nullptr, writer);
}

void CanonicalizerBase::engineCanonicalizeXPathNodeSet($Set* xpathNodeSet, $OutputStream* writer) {
	$set(this, xpathNodeSet, xpathNodeSet);
	engineCanonicalizeXPathNodeSetInternal($($XMLUtils::getOwnerDocument(this->xpathNodeSet)), writer);
}

void CanonicalizerBase::engineCanonicalize($XMLSignatureInput* input, $OutputStream* writer, bool secureValidation) {
	$useLocalCurrentObjectStackCache();
	try {
		if ($nc(input)->isExcludeComments()) {
			this->includeComments = false;
		}
		if ($nc(input)->isOctetStream()) {
			engineCanonicalize($(input->getBytes()), writer, secureValidation);
		} else if (input->isElement()) {
			$var($Node, var$0, input->getSubNode());
			engineCanonicalizeSubTree(var$0, $(input->getExcludeNode()), writer);
		} else if (input->isNodeSet()) {
			$set(this, nodeFilter, input->getNodeFilters());
			circumventBugIfNeeded(input);
			if (input->getSubNode() != nullptr) {
				engineCanonicalizeXPathNodeSetInternal($(input->getSubNode()), writer);
			} else {
				engineCanonicalizeXPathNodeSet($(input->getNodeSet()), writer);
			}
		}
	} catch ($XMLParserException&) {
		$var($Exception, ex, $catch());
		$throwNew($CanonicalizationException, ex);
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$throwNew($CanonicalizationException, ex);
	}
}

void CanonicalizerBase::engineCanonicalizeSubTree($Node* rootNode, $Node* excludeNode, $OutputStream* writer) {
	$useLocalCurrentObjectStackCache();
	try {
		$var($NameSpaceSymbTable, ns, $new($NameSpaceSymbTable));
		int32_t nodeLevel = CanonicalizerBase::NODE_BEFORE_DOCUMENT_ELEMENT;
		if (rootNode != nullptr && $Node::ELEMENT_NODE == rootNode->getNodeType()) {
			getParentNameSpaces($cast($Element, rootNode), ns);
			nodeLevel = CanonicalizerBase::NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT;
		}
		this->canonicalizeSubTree(rootNode, ns, rootNode, nodeLevel, excludeNode, writer);
		$nc(writer)->flush();
	} catch ($UnsupportedEncodingException&) {
		$var($UnsupportedEncodingException, ex, $catch());
		$throwNew($CanonicalizationException, static_cast<$Exception*>(ex));
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		$throwNew($CanonicalizationException, static_cast<$Exception*>(ex));
	}
}

void CanonicalizerBase::canonicalizeSubTree($Node* currentNode$renamed, $NameSpaceSymbTable* ns, $Node* endnode, int32_t documentLevel, $Node* excludeNode, $OutputStream* writer) {
	$useLocalCurrentObjectStackCache();
	$var($Node, currentNode, currentNode$renamed);
	if (currentNode == nullptr || isVisibleInt(currentNode) == -1) {
		return;
	}
	$var($Node, sibling, nullptr);
	$var($Node, parentNode, nullptr);
	$var($Map, cache, $new($HashMap));
	do {
		{
			$var($Element, currentElement, nullptr)
			$var($String, name, nullptr)
			switch ($nc(currentNode)->getNodeType()) {
			case $Node::ENTITY_NODE:
				{}
			case $Node::NOTATION_NODE:
				{}
			case $Node::ATTRIBUTE_NODE:
				{
					$throwNew($CanonicalizationException, "empty"_s, $$new($ObjectArray, {$of("illegal node type during traversal"_s)}));
				}
			case $Node::DOCUMENT_FRAGMENT_NODE:
				{}
			case $Node::DOCUMENT_NODE:
				{
					$nc(ns)->outputNodePush();
					$assign(sibling, currentNode->getFirstChild());
					break;
				}
			case $Node::COMMENT_NODE:
				{
					if (this->includeComments) {
						outputCommentToWriter($cast($Comment, currentNode), writer, documentLevel);
					}
					break;
				}
			case $Node::PROCESSING_INSTRUCTION_NODE:
				{
					outputPItoWriter($cast($ProcessingInstruction, currentNode), writer, documentLevel);
					break;
				}
			case $Node::TEXT_NODE:
				{}
			case $Node::CDATA_SECTION_NODE:
				{
					outputTextToWriter($(currentNode->getNodeValue()), writer);
					break;
				}
			case $Node::ELEMENT_NODE:
				{
					documentLevel = CanonicalizerBase::NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT;
					if (currentNode == excludeNode) {
						break;
					}
					$assign(currentElement, $cast($Element, currentNode));
					$nc(ns)->outputNodePush();
					$nc(writer)->write((int32_t)u'<');
					$assign(name, $nc(currentElement)->getTagName());
					$UtfHelpper::writeByte(name, writer, cache);
					outputAttributesSubtree(currentElement, ns, cache, writer);
					$nc(writer)->write((int32_t)u'>');
					$assign(sibling, currentNode->getFirstChild());
					if (sibling == nullptr) {
						$nc(writer)->write($cast($bytes, $($nc(CanonicalizerBase::END_TAG)->clone())));
						$UtfHelpper::writeStringToUtf8(name, writer);
						writer->write((int32_t)u'>');
						$nc(ns)->outputNodePop();
						if (parentNode != nullptr) {
							$assign(sibling, currentNode->getNextSibling());
						}
					} else {
						$assign(parentNode, currentElement);
					}
					break;
				}
			case $Node::DOCUMENT_TYPE_NODE:
				{}
			default:
				{
					break;
				}
			}
		}
		while (sibling == nullptr && parentNode != nullptr) {
			$nc(writer)->write($cast($bytes, $($nc(CanonicalizerBase::END_TAG)->clone())));
			$UtfHelpper::writeByte($($nc(($cast($Element, parentNode)))->getTagName()), writer, cache);
			writer->write((int32_t)u'>');
			$nc(ns)->outputNodePop();
			if (parentNode == endnode) {
				return;
			}
			$assign(sibling, parentNode->getNextSibling());
			$assign(parentNode, parentNode->getParentNode());
			if (parentNode == nullptr || $Node::ELEMENT_NODE != $nc(parentNode)->getNodeType()) {
				documentLevel = CanonicalizerBase::NODE_AFTER_DOCUMENT_ELEMENT;
				$assign(parentNode, nullptr);
			}
		}
		if (sibling == nullptr) {
			return;
		}
		$assign(currentNode, sibling);
		$assign(sibling, currentNode->getNextSibling());
	} while (true);
}

void CanonicalizerBase::engineCanonicalizeXPathNodeSetInternal($Node* doc, $OutputStream* writer) {
	try {
		this->canonicalizeXPathNodeSet(doc, doc, writer);
		$nc(writer)->flush();
	} catch ($IOException&) {
		$var($IOException, ex, $catch());
		$throwNew($CanonicalizationException, static_cast<$Exception*>(ex));
	}
}

void CanonicalizerBase::canonicalizeXPathNodeSet($Node* currentNode$renamed, $Node* endnode, $OutputStream* writer) {
	$useLocalCurrentObjectStackCache();
	$var($Node, currentNode, currentNode$renamed);
	if (isVisibleInt(currentNode) == -1) {
		return;
	}
	bool currentNodeIsVisible = false;
	$var($NameSpaceSymbTable, ns, $new($NameSpaceSymbTable));
	if (currentNode != nullptr && $Node::ELEMENT_NODE == currentNode->getNodeType()) {
		getParentNameSpaces($cast($Element, currentNode), ns);
	}
	if (currentNode == nullptr) {
		return;
	}
	$var($Node, sibling, nullptr);
	$var($Node, parentNode, nullptr);
	int32_t documentLevel = CanonicalizerBase::NODE_BEFORE_DOCUMENT_ELEMENT;
	$var($Map, cache, $new($HashMap));
	do {
		{
			$var($Element, currentElement, nullptr)
			$var($String, name, nullptr)
			int32_t i = 0;
			switch ($nc(currentNode)->getNodeType()) {
			case $Node::ENTITY_NODE:
				{}
			case $Node::NOTATION_NODE:
				{}
			case $Node::ATTRIBUTE_NODE:
				{
					$throwNew($CanonicalizationException, "empty"_s, $$new($ObjectArray, {$of("illegal node type during traversal"_s)}));
				}
			case $Node::DOCUMENT_FRAGMENT_NODE:
				{}
			case $Node::DOCUMENT_NODE:
				{
					ns->outputNodePush();
					$assign(sibling, currentNode->getFirstChild());
					break;
				}
			case $Node::COMMENT_NODE:
				{
					if (this->includeComments && isVisibleDO(currentNode, ns->getLevel()) == 1) {
						outputCommentToWriter($cast($Comment, currentNode), writer, documentLevel);
					}
					break;
				}
			case $Node::PROCESSING_INSTRUCTION_NODE:
				{
					if (isVisible(currentNode)) {
						outputPItoWriter($cast($ProcessingInstruction, currentNode), writer, documentLevel);
					}
					break;
				}
			case $Node::TEXT_NODE:
				{}
			case $Node::CDATA_SECTION_NODE:
				{
					if (isVisible(currentNode)) {
						outputTextToWriter($(currentNode->getNodeValue()), writer);
						{
							$var($Node, nextSibling, currentNode->getNextSibling());
							for (;; $assign(nextSibling, $nc(nextSibling)->getNextSibling())) {
								bool var$0 = nextSibling != nullptr;
								if (var$0) {
									bool var$1 = nextSibling->getNodeType() == $Node::TEXT_NODE;
									var$0 = (var$1 || nextSibling->getNodeType() == $Node::CDATA_SECTION_NODE);
								}
								if (!(var$0)) {
									break;
								}
								{
									outputTextToWriter($(nextSibling->getNodeValue()), writer);
									$assign(currentNode, nextSibling);
									$assign(sibling, currentNode->getNextSibling());
								}
							}
						}
					}
					break;
				}
			case $Node::ELEMENT_NODE:
				{
					documentLevel = CanonicalizerBase::NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT;
					$assign(currentElement, $cast($Element, currentNode));
					$assign(name, nullptr);
					i = isVisibleDO(currentNode, ns->getLevel());
					if (i == -1) {
						$assign(sibling, currentNode->getNextSibling());
						break;
					}
					currentNodeIsVisible = i == 1;
					if (currentNodeIsVisible) {
						ns->outputNodePush();
						$nc(writer)->write((int32_t)u'<');
						$assign(name, $nc(currentElement)->getTagName());
						$UtfHelpper::writeByte(name, writer, cache);
					} else {
						ns->push();
					}
					outputAttributes(currentElement, ns, cache, writer);
					if (currentNodeIsVisible) {
						$nc(writer)->write((int32_t)u'>');
					}
					$assign(sibling, currentNode->getFirstChild());
					if (sibling == nullptr) {
						if (currentNodeIsVisible) {
							$nc(writer)->write($cast($bytes, $($nc(CanonicalizerBase::END_TAG)->clone())));
							$UtfHelpper::writeByte(name, writer, cache);
							writer->write((int32_t)u'>');
							ns->outputNodePop();
						} else {
							ns->pop();
						}
						if (parentNode != nullptr) {
							$assign(sibling, currentNode->getNextSibling());
						}
					} else {
						$assign(parentNode, currentElement);
					}
					break;
				}
			case $Node::DOCUMENT_TYPE_NODE:
				{}
			default:
				{
					break;
				}
			}
		}
		while (sibling == nullptr && parentNode != nullptr) {
			if (isVisible(parentNode)) {
				$nc(writer)->write($cast($bytes, $($nc(CanonicalizerBase::END_TAG)->clone())));
				$UtfHelpper::writeByte($($nc(($cast($Element, parentNode)))->getTagName()), writer, cache);
				writer->write((int32_t)u'>');
				ns->outputNodePop();
			} else {
				ns->pop();
			}
			if (parentNode == endnode) {
				return;
			}
			$assign(sibling, parentNode->getNextSibling());
			$assign(parentNode, parentNode->getParentNode());
			if (parentNode == nullptr || $Node::ELEMENT_NODE != $nc(parentNode)->getNodeType()) {
				$assign(parentNode, nullptr);
				documentLevel = CanonicalizerBase::NODE_AFTER_DOCUMENT_ELEMENT;
			}
		}
		if (sibling == nullptr) {
			return;
		}
		$assign(currentNode, sibling);
		$assign(sibling, currentNode->getNextSibling());
	} while (true);
}

int32_t CanonicalizerBase::isVisibleDO($Node* currentNode, int32_t level) {
	$useLocalCurrentObjectStackCache();
	if (this->nodeFilter != nullptr) {
		$var($Iterator, it, $nc(this->nodeFilter)->iterator());
		while ($nc(it)->hasNext()) {
			int32_t i = $nc(($cast($NodeFilter, $(it->next()))))->isNodeIncludeDO(currentNode, level);
			if (i != 1) {
				return i;
			}
		}
	}
	if (this->xpathNodeSet != nullptr && !$nc(this->xpathNodeSet)->contains(currentNode)) {
		return 0;
	}
	return 1;
}

int32_t CanonicalizerBase::isVisibleInt($Node* currentNode) {
	$useLocalCurrentObjectStackCache();
	if (this->nodeFilter != nullptr) {
		$var($Iterator, it, $nc(this->nodeFilter)->iterator());
		while ($nc(it)->hasNext()) {
			int32_t i = $nc(($cast($NodeFilter, $(it->next()))))->isNodeInclude(currentNode);
			if (i != 1) {
				return i;
			}
		}
	}
	if (this->xpathNodeSet != nullptr && !$nc(this->xpathNodeSet)->contains(currentNode)) {
		return 0;
	}
	return 1;
}

bool CanonicalizerBase::isVisible($Node* currentNode) {
	$useLocalCurrentObjectStackCache();
	if (this->nodeFilter != nullptr) {
		$var($Iterator, it, $nc(this->nodeFilter)->iterator());
		while ($nc(it)->hasNext()) {
			if ($nc(($cast($NodeFilter, $(it->next()))))->isNodeInclude(currentNode) != 1) {
				return false;
			}
		}
	}
	return this->xpathNodeSet == nullptr || $nc(this->xpathNodeSet)->contains(currentNode);
}

void CanonicalizerBase::handleParent($Element* e, $NameSpaceSymbTable* ns) {
	$useLocalCurrentObjectStackCache();
	bool var$0 = !$nc(e)->hasAttributes();
	if (var$0 && e->getNamespaceURI() == nullptr) {
		return;
	}
	$var($NamedNodeMap, attrs, $nc(e)->getAttributes());
	int32_t attrsLength = $nc(attrs)->getLength();
	for (int32_t i = 0; i < attrsLength; ++i) {
		$var($Attr, attribute, $cast($Attr, attrs->item(i)));
		$var($String, NName, $nc(attribute)->getLocalName());
		$var($String, NValue, attribute->getNodeValue());
		$init($Constants);
		bool var$1 = $nc($Constants::NamespaceSpecNS)->equals($(attribute->getNamespaceURI()));
		if (var$1) {
			bool var$2 = !$nc(CanonicalizerBase::XML)->equals(NName);
			var$1 = (var$2 || !$nc($Constants::XML_LANG_SPACE_SpecNS)->equals(NValue));
		}
		if (var$1) {
			$nc(ns)->addMapping(NName, NValue, attribute);
		}
	}
	if (e->getNamespaceURI() != nullptr) {
		$var($String, NName, e->getPrefix());
		$var($String, NValue, e->getNamespaceURI());
		$var($String, Name, nullptr);
		if (NName == nullptr || $nc(NName)->isEmpty()) {
			$assign(NName, CanonicalizerBase::XMLNS);
			$assign(Name, CanonicalizerBase::XMLNS);
		} else {
			$assign(Name, $str({CanonicalizerBase::XMLNS, ":"_s, NName}));
		}
		$var($Attr, n, $nc($(e->getOwnerDocument()))->createAttributeNS("http://www.w3.org/2000/xmlns/"_s, Name));
		$nc(n)->setValue(NValue);
		$nc(ns)->addMapping(NName, NValue, n);
	}
}

void CanonicalizerBase::getParentNameSpaces($Element* el, $NameSpaceSymbTable* ns) {
	$useLocalCurrentObjectStackCache();
	$var($Node, n1, $nc(el)->getParentNode());
	if (n1 == nullptr || $Node::ELEMENT_NODE != $nc(n1)->getNodeType()) {
		return;
	}
	$var($List, parents, $new($ArrayList));
	$var($Node, parent, n1);
	while (parent != nullptr && $Node::ELEMENT_NODE == parent->getNodeType()) {
		parents->add($cast($Element, parent));
		$assign(parent, parent->getParentNode());
	}
	$var($ListIterator, it, parents->listIterator(parents->size()));
	while ($nc(it)->hasPrevious()) {
		$var($Element, ele, $cast($Element, it->previous()));
		handleParent(ele, ns);
	}
	parents->clear();
	$var($Attr, nsprefix, $nc(ns)->getMappingWithoutRendered(CanonicalizerBase::XMLNS));
	if (nsprefix != nullptr && ""_s->equals($(nsprefix->getValue()))) {
		ns->addMappingAndRender(CanonicalizerBase::XMLNS, ""_s, $(getNullNode($(nsprefix->getOwnerDocument()))));
	}
}

void CanonicalizerBase::outputAttrToWriter($String* name, $String* value, $OutputStream* writer, $Map* cache) {
	$init(CanonicalizerBase);
	$useLocalCurrentObjectStackCache();
	$nc(writer)->write((int32_t)u' ');
	$UtfHelpper::writeByte(name, writer, cache);
	writer->write($cast($bytes, $($nc(CanonicalizerBase::EQUALS_STR)->clone())));
	$var($bytes, toWrite, nullptr);
	int32_t length = $nc(value)->length();
	int32_t i = 0;
	while (i < length) {
		int32_t c = value->codePointAt(i);
		i += $Character::charCount(c);
		switch (c) {
		case u'&':
			{
				$assign(toWrite, $cast($bytes, $nc(CanonicalizerBase::AMP)->clone()));
				break;
			}
		case u'<':
			{
				$assign(toWrite, $cast($bytes, $nc(CanonicalizerBase::LT)->clone()));
				break;
			}
		case u'\"':
			{
				$assign(toWrite, $cast($bytes, $nc(CanonicalizerBase::QUOT)->clone()));
				break;
			}
		case 9:
			{
				$assign(toWrite, $cast($bytes, $nc(CanonicalizerBase::X9)->clone()));
				break;
			}
		case 10:
			{
				$assign(toWrite, $cast($bytes, $nc(CanonicalizerBase::XA)->clone()));
				break;
			}
		case 13:
			{
				$assign(toWrite, $cast($bytes, $nc(CanonicalizerBase::XD)->clone()));
				break;
			}
		default:
			{
				if (c < 128) {
					writer->write(c);
				} else {
					$UtfHelpper::writeCodePointToUtf8(c, writer);
				}
				continue;
			}
		}
		writer->write(toWrite);
	}
	writer->write((int32_t)u'\"');
}

void CanonicalizerBase::outputPItoWriter($ProcessingInstruction* currentPI, $OutputStream* writer, int32_t position) {
	$useLocalCurrentObjectStackCache();
	if (position == CanonicalizerBase::NODE_AFTER_DOCUMENT_ELEMENT) {
		$nc(writer)->write((int32_t)u'\n');
	}
	$nc(writer)->write($cast($bytes, $($nc(CanonicalizerBase::BEGIN_PI)->clone())));
	$var($String, target, $nc(currentPI)->getTarget());
	int32_t length = $nc(target)->length();
	for (int32_t i = 0; i < length;) {
		int32_t c = target->codePointAt(i);
		i += $Character::charCount(c);
		if (c == 13) {
			writer->write($cast($bytes, $($nc(CanonicalizerBase::XD)->clone())));
		} else if (c < 128) {
			writer->write(c);
		} else {
			$UtfHelpper::writeCodePointToUtf8(c, writer);
		}
	}
	$var($String, data, currentPI->getData());
	length = $nc(data)->length();
	if (length > 0) {
		writer->write((int32_t)u' ');
		for (int32_t i = 0; i < length;) {
			int32_t c = data->codePointAt(i);
			i += $Character::charCount(c);
			if (c == 13) {
				writer->write($cast($bytes, $($nc(CanonicalizerBase::XD)->clone())));
			} else {
				$UtfHelpper::writeCodePointToUtf8(c, writer);
			}
		}
	}
	writer->write($cast($bytes, $($nc(CanonicalizerBase::END_PI)->clone())));
	if (position == CanonicalizerBase::NODE_BEFORE_DOCUMENT_ELEMENT) {
		writer->write((int32_t)u'\n');
	}
}

void CanonicalizerBase::outputCommentToWriter($Comment* currentComment, $OutputStream* writer, int32_t position) {
	$useLocalCurrentObjectStackCache();
	if (position == CanonicalizerBase::NODE_AFTER_DOCUMENT_ELEMENT) {
		$nc(writer)->write((int32_t)u'\n');
	}
	$nc(writer)->write($cast($bytes, $($nc(CanonicalizerBase::BEGIN_COMM)->clone())));
	$var($String, data, $nc(currentComment)->getData());
	int32_t length = $nc(data)->length();
	for (int32_t i = 0; i < length;) {
		int32_t c = data->codePointAt(i);
		i += $Character::charCount(c);
		if (c == 13) {
			writer->write($cast($bytes, $($nc(CanonicalizerBase::XD)->clone())));
		} else if (c < 128) {
			writer->write(c);
		} else {
			$UtfHelpper::writeCodePointToUtf8(c, writer);
		}
	}
	writer->write($cast($bytes, $($nc(CanonicalizerBase::END_COMM)->clone())));
	if (position == CanonicalizerBase::NODE_BEFORE_DOCUMENT_ELEMENT) {
		writer->write((int32_t)u'\n');
	}
}

void CanonicalizerBase::outputTextToWriter($String* text, $OutputStream* writer) {
	$init(CanonicalizerBase);
	int32_t length = $nc(text)->length();
	$var($bytes, toWrite, nullptr);
	for (int32_t i = 0; i < length;) {
		int32_t c = text->codePointAt(i);
		i += $Character::charCount(c);
		switch (c) {
		case u'&':
			{
				$assign(toWrite, $cast($bytes, $nc(CanonicalizerBase::AMP)->clone()));
				break;
			}
		case u'<':
			{
				$assign(toWrite, $cast($bytes, $nc(CanonicalizerBase::LT)->clone()));
				break;
			}
		case u'>':
			{
				$assign(toWrite, $cast($bytes, $nc(CanonicalizerBase::GT)->clone()));
				break;
			}
		case 13:
			{
				$assign(toWrite, $cast($bytes, $nc(CanonicalizerBase::XD)->clone()));
				break;
			}
		default:
			{
				if (c < 128) {
					$nc(writer)->write(c);
				} else {
					$UtfHelpper::writeCodePointToUtf8(c, writer);
				}
				continue;
			}
		}
		$nc(writer)->write(toWrite);
	}
}

$Attr* CanonicalizerBase::getNullNode($Document* ownerDocument) {
	$useLocalCurrentObjectStackCache();
	if (this->nullNode == nullptr) {
		try {
			$init($Constants);
			$set(this, nullNode, $nc(ownerDocument)->createAttributeNS($Constants::NamespaceSpecNS, CanonicalizerBase::XMLNS));
			$nc(this->nullNode)->setValue(""_s);
		} catch ($Exception&) {
			$var($Exception, e, $catch());
			$throwNew($RuntimeException, $$str({"Unable to create nullNode: "_s, e}));
		}
	}
	return this->nullNode;
}

void clinit$CanonicalizerBase($Class* class$) {
	$assignStatic(CanonicalizerBase::XML, "xml"_s);
	$assignStatic(CanonicalizerBase::XMLNS, "xmlns"_s);
	$init($Constants);
	$assignStatic(CanonicalizerBase::XMLNS_URI, $Constants::NamespaceSpecNS);
	$assignStatic(CanonicalizerBase::XML_LANG_URI, $Constants::XML_LANG_SPACE_SpecNS);
	$assignStatic(CanonicalizerBase::COMPARE, $new($AttrCompare));
	$assignStatic(CanonicalizerBase::END_PI, $new($bytes, {
		(int8_t)u'?',
		(int8_t)u'>'
	}));
	$assignStatic(CanonicalizerBase::BEGIN_PI, $new($bytes, {
		(int8_t)u'<',
		(int8_t)u'?'
	}));
	$assignStatic(CanonicalizerBase::END_COMM, $new($bytes, {
		(int8_t)u'-',
		(int8_t)u'-',
		(int8_t)u'>'
	}));
	$assignStatic(CanonicalizerBase::BEGIN_COMM, $new($bytes, {
		(int8_t)u'<',
		(int8_t)u'!',
		(int8_t)u'-',
		(int8_t)u'-'
	}));
	$assignStatic(CanonicalizerBase::XA, $new($bytes, {
		(int8_t)u'&',
		(int8_t)u'#',
		(int8_t)u'x',
		(int8_t)u'A',
		(int8_t)u';'
	}));
	$assignStatic(CanonicalizerBase::X9, $new($bytes, {
		(int8_t)u'&',
		(int8_t)u'#',
		(int8_t)u'x',
		(int8_t)u'9',
		(int8_t)u';'
	}));
	$assignStatic(CanonicalizerBase::QUOT, $new($bytes, {
		(int8_t)u'&',
		(int8_t)u'q',
		(int8_t)u'u',
		(int8_t)u'o',
		(int8_t)u't',
		(int8_t)u';'
	}));
	$assignStatic(CanonicalizerBase::XD, $new($bytes, {
		(int8_t)u'&',
		(int8_t)u'#',
		(int8_t)u'x',
		(int8_t)u'D',
		(int8_t)u';'
	}));
	$assignStatic(CanonicalizerBase::GT, $new($bytes, {
		(int8_t)u'&',
		(int8_t)u'g',
		(int8_t)u't',
		(int8_t)u';'
	}));
	$assignStatic(CanonicalizerBase::LT, $new($bytes, {
		(int8_t)u'&',
		(int8_t)u'l',
		(int8_t)u't',
		(int8_t)u';'
	}));
	$assignStatic(CanonicalizerBase::END_TAG, $new($bytes, {
		(int8_t)u'<',
		(int8_t)u'/'
	}));
	$assignStatic(CanonicalizerBase::AMP, $new($bytes, {
		(int8_t)u'&',
		(int8_t)u'a',
		(int8_t)u'm',
		(int8_t)u'p',
		(int8_t)u';'
	}));
	$assignStatic(CanonicalizerBase::EQUALS_STR, $new($bytes, {
		(int8_t)u'=',
		(int8_t)u'\"'
	}));
}

CanonicalizerBase::CanonicalizerBase() {
}

$Class* CanonicalizerBase::load$($String* name, bool initialize) {
	$loadClass(CanonicalizerBase, name, initialize, &_CanonicalizerBase_ClassInfo_, clinit$CanonicalizerBase, allocate$CanonicalizerBase);
	return class$;
}

$Class* CanonicalizerBase::class$ = nullptr;

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com