#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInputDebugger.h>

#include <com/sun/org/apache/xml/internal/security/c14n/helper/AttrCompare.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureException.h>
#include <com/sun/org/apache/xml/internal/security/signature/XMLSignatureInput.h>
#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/io/IOException.h>
#include <java/io/StringWriter.h>
#include <java/io/Writer.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Arrays.h>
#include <java/util/Comparator.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/Comment.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/ProcessingInstruction.h>
#include <jcpp.h>

#undef ATTRIBUTE_NODE
#undef ATTR_COMPARE
#undef CDATA_SECTION_NODE
#undef COMMENT_NODE
#undef DOCUMENT_FRAGMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef ELEMENT_NODE
#undef ENTITY_NODE
#undef NODE_AFTER_DOCUMENT_ELEMENT
#undef NODE_BEFORE_DOCUMENT_ELEMENT
#undef NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT
#undef NOTATION_NODE
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE

using $AttrArray = $Array<::org::w3c::dom::Attr>;
using $AttrCompare = ::com::sun::org::apache::xml::internal::security::c14n::helper::AttrCompare;
using $XMLSignatureException = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureException;
using $XMLSignatureInput = ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput;
using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $IOException = ::java::io::IOException;
using $StringWriter = ::java::io::StringWriter;
using $Writer = ::java::io::Writer;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Arrays = ::java::util::Arrays;
using $Comparator = ::java::util::Comparator;
using $Iterator = ::java::util::Iterator;
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
							namespace signature {

$FieldInfo _XMLSignatureInputDebugger_FieldInfo_[] = {
	{"xpathNodeSet", "Ljava/util/Set;", "Ljava/util/Set<Lorg/w3c/dom/Node;>;", $PRIVATE, $field(XMLSignatureInputDebugger, xpathNodeSet)},
	{"inclusiveNamespaces", "Ljava/util/Set;", "Ljava/util/Set<Ljava/lang/String;>;", $PRIVATE, $field(XMLSignatureInputDebugger, inclusiveNamespaces)},
	{"writer", "Ljava/io/Writer;", nullptr, $PRIVATE, $field(XMLSignatureInputDebugger, writer)},
	{"HTMLPrefix", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLSignatureInputDebugger, HTMLPrefix)},
	{"HTMLSuffix", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLSignatureInputDebugger, HTMLSuffix)},
	{"HTMLExcludePrefix", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLSignatureInputDebugger, HTMLExcludePrefix)},
	{"HTMLIncludePrefix", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLSignatureInputDebugger, HTMLIncludePrefix)},
	{"HTMLIncludeOrExcludeSuffix", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLSignatureInputDebugger, HTMLIncludeOrExcludeSuffix)},
	{"HTMLIncludedInclusiveNamespacePrefix", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLSignatureInputDebugger, HTMLIncludedInclusiveNamespacePrefix)},
	{"HTMLExcludedInclusiveNamespacePrefix", "Ljava/lang/String;", nullptr, $STATIC | $FINAL, $staticField(XMLSignatureInputDebugger, HTMLExcludedInclusiveNamespacePrefix)},
	{"NODE_BEFORE_DOCUMENT_ELEMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSignatureInputDebugger, NODE_BEFORE_DOCUMENT_ELEMENT)},
	{"NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSignatureInputDebugger, NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT)},
	{"NODE_AFTER_DOCUMENT_ELEMENT", "I", nullptr, $PRIVATE | $STATIC | $FINAL, $constField(XMLSignatureInputDebugger, NODE_AFTER_DOCUMENT_ELEMENT)},
	{"ATTR_COMPARE", "Lcom/sun/org/apache/xml/internal/security/c14n/helper/AttrCompare;", nullptr, $STATIC | $FINAL, $staticField(XMLSignatureInputDebugger, ATTR_COMPARE)},
	{}
};

$MethodInfo _XMLSignatureInputDebugger_MethodInfo_[] = {
	{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLSignatureInputDebugger::*)($XMLSignatureInput*)>(&XMLSignatureInputDebugger::init$))},
	{"<init>", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/util/Set;)V", "(Lcom/sun/org/apache/xml/internal/security/signature/XMLSignatureInput;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(XMLSignatureInputDebugger::*)($XMLSignatureInput*,$Set*)>(&XMLSignatureInputDebugger::init$))},
	{"canonicalizeXPathNodeSet", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE, $method(static_cast<void(XMLSignatureInputDebugger::*)($Node*)>(&XMLSignatureInputDebugger::canonicalizeXPathNodeSet)), "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException,java.io.IOException"},
	{"getHTMLRepresentation", "()Ljava/lang/String;", nullptr, $PUBLIC, nullptr, "com.sun.org.apache.xml.internal.security.signature.XMLSignatureException"},
	{"getPositionRelativeToDocumentElement", "(Lorg/w3c/dom/Node;)I", nullptr, $PRIVATE, $method(static_cast<int32_t(XMLSignatureInputDebugger::*)($Node*)>(&XMLSignatureInputDebugger::getPositionRelativeToDocumentElement))},
	{"outputAttrToWriter", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(XMLSignatureInputDebugger::*)($String*,$String*)>(&XMLSignatureInputDebugger::outputAttrToWriter)), "java.io.IOException"},
	{"outputCommentToWriter", "(Lorg/w3c/dom/Comment;)V", nullptr, $PRIVATE, $method(static_cast<void(XMLSignatureInputDebugger::*)($Comment*)>(&XMLSignatureInputDebugger::outputCommentToWriter)), "java.io.IOException"},
	{"outputPItoWriter", "(Lorg/w3c/dom/ProcessingInstruction;)V", nullptr, $PRIVATE, $method(static_cast<void(XMLSignatureInputDebugger::*)($ProcessingInstruction*)>(&XMLSignatureInputDebugger::outputPItoWriter)), "java.io.IOException"},
	{"outputTextToWriter", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(XMLSignatureInputDebugger::*)($String*)>(&XMLSignatureInputDebugger::outputTextToWriter)), "java.io.IOException"},
	{}
};

$ClassInfo _XMLSignatureInputDebugger_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.signature.XMLSignatureInputDebugger",
	"java.lang.Object",
	nullptr,
	_XMLSignatureInputDebugger_FieldInfo_,
	_XMLSignatureInputDebugger_MethodInfo_
};

$Object* allocate$XMLSignatureInputDebugger($Class* clazz) {
	return $of($alloc(XMLSignatureInputDebugger));
}


$String* XMLSignatureInputDebugger::HTMLPrefix = nullptr;

$String* XMLSignatureInputDebugger::HTMLSuffix = nullptr;
$String* XMLSignatureInputDebugger::HTMLExcludePrefix = nullptr;
$String* XMLSignatureInputDebugger::HTMLIncludePrefix = nullptr;
$String* XMLSignatureInputDebugger::HTMLIncludeOrExcludeSuffix = nullptr;
$String* XMLSignatureInputDebugger::HTMLIncludedInclusiveNamespacePrefix = nullptr;
$String* XMLSignatureInputDebugger::HTMLExcludedInclusiveNamespacePrefix = nullptr;
$AttrCompare* XMLSignatureInputDebugger::ATTR_COMPARE = nullptr;

void XMLSignatureInputDebugger::init$($XMLSignatureInput* xmlSignatureInput) {
	if (!$nc(xmlSignatureInput)->isNodeSet()) {
		$set(this, xpathNodeSet, nullptr);
	} else {
		$set(this, xpathNodeSet, xmlSignatureInput->getInputNodeSet());
	}
}

void XMLSignatureInputDebugger::init$($XMLSignatureInput* xmlSignatureInput, $Set* inclusiveNamespace) {
	XMLSignatureInputDebugger::init$(xmlSignatureInput);
	$set(this, inclusiveNamespaces, inclusiveNamespace);
}

$String* XMLSignatureInputDebugger::getHTMLRepresentation() {
	$useLocalCurrentObjectStackCache();
	if (this->xpathNodeSet == nullptr || $nc(this->xpathNodeSet)->isEmpty()) {
		return $str({XMLSignatureInputDebugger::HTMLPrefix, "<blink>no node set, sorry</blink>"_s, XMLSignatureInputDebugger::HTMLSuffix});
	}
	$var($Node, n, $cast($Node, $nc($($nc(this->xpathNodeSet)->iterator()))->next()));
	$var($Document, doc, $XMLUtils::getOwnerDocument(n));
	{
		$var($Throwable, var$0, nullptr);
		$var($String, var$2, nullptr);
		bool return$1 = false;
		try {
			try {
				$set(this, writer, $new($StringWriter));
				this->canonicalizeXPathNodeSet(doc);
				$nc(this->writer)->close();
				$assign(var$2, $nc($of(this->writer))->toString());
				return$1 = true;
				goto $finally;
			} catch ($IOException&) {
				$var($IOException, ex, $catch());
				$throwNew($XMLSignatureException, static_cast<$Exception*>(ex));
			}
		} catch ($Throwable&) {
			$assign(var$0, $catch());
		} $finally: {
			$set(this, xpathNodeSet, nullptr);
			$set(this, writer, nullptr);
		}
		if (var$0 != nullptr) {
			$throw(var$0);
		}
		if (return$1) {
			return var$2;
		}
	}
	$shouldNotReachHere();
}

void XMLSignatureInputDebugger::canonicalizeXPathNodeSet($Node* currentNode) {
	$useLocalCurrentObjectStackCache();
	int32_t currentNodeType = $nc(currentNode)->getNodeType();
	{
		int32_t position = 0;
		$var($Element, currentElement, nullptr)
		$var($NamedNodeMap, attrs, nullptr)
		int32_t attrsLength = 0;
		$var($AttrArray, attrs2, nullptr)
		$var($ObjectArray, attrs3, nullptr)
		switch (currentNodeType) {
		case $Node::ENTITY_NODE:
			{}
		case $Node::NOTATION_NODE:
			{}
		case $Node::DOCUMENT_FRAGMENT_NODE:
			{}
		case $Node::ATTRIBUTE_NODE:
			{
				$throwNew($XMLSignatureException, "empty"_s, $$new($ObjectArray, {$of($$str({"An incorrect node was provided for c14n: "_s, $$str(currentNodeType)}))}));
			}
		case $Node::DOCUMENT_NODE:
			{
				$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLPrefix);
				{
					$var($Node, currentChild, currentNode->getFirstChild());
					for (; currentChild != nullptr; $assign(currentChild, $nc(currentChild)->getNextSibling())) {
						this->canonicalizeXPathNodeSet(currentChild);
					}
				}
				$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLSuffix);
				break;
			}
		case $Node::COMMENT_NODE:
			{
				if ($nc(this->xpathNodeSet)->contains(currentNode)) {
					$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludePrefix);
				} else {
					$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLExcludePrefix);
				}
				position = getPositionRelativeToDocumentElement(currentNode);
				if (position == XMLSignatureInputDebugger::NODE_AFTER_DOCUMENT_ELEMENT) {
					$nc(this->writer)->write("\n"_s);
				}
				this->outputCommentToWriter($cast($Comment, currentNode));
				if (position == XMLSignatureInputDebugger::NODE_BEFORE_DOCUMENT_ELEMENT) {
					$nc(this->writer)->write("\n"_s);
				}
				$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludeOrExcludeSuffix);
				break;
			}
		case $Node::PROCESSING_INSTRUCTION_NODE:
			{
				if ($nc(this->xpathNodeSet)->contains(currentNode)) {
					$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludePrefix);
				} else {
					$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLExcludePrefix);
				}
				position = getPositionRelativeToDocumentElement(currentNode);
				if (position == XMLSignatureInputDebugger::NODE_AFTER_DOCUMENT_ELEMENT) {
					$nc(this->writer)->write("\n"_s);
				}
				this->outputPItoWriter($cast($ProcessingInstruction, currentNode));
				if (position == XMLSignatureInputDebugger::NODE_BEFORE_DOCUMENT_ELEMENT) {
					$nc(this->writer)->write("\n"_s);
				}
				$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludeOrExcludeSuffix);
				break;
			}
		case $Node::TEXT_NODE:
			{}
		case $Node::CDATA_SECTION_NODE:
			{
				if ($nc(this->xpathNodeSet)->contains(currentNode)) {
					$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludePrefix);
				} else {
					$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLExcludePrefix);
				}
				outputTextToWriter($(currentNode->getNodeValue()));
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
							this->outputTextToWriter($(nextSibling->getNodeValue()));
						}
					}
				}
				$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludeOrExcludeSuffix);
				break;
			}
		case $Node::ELEMENT_NODE:
			{
				$assign(currentElement, $cast($Element, currentNode));
				if ($nc(this->xpathNodeSet)->contains(currentNode)) {
					$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludePrefix);
				} else {
					$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLExcludePrefix);
				}
				$nc(this->writer)->write("&lt;"_s);
				$nc(this->writer)->write($($nc(currentElement)->getTagName()));
				$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludeOrExcludeSuffix);
				$assign(attrs, $nc(currentElement)->getAttributes());
				attrsLength = $nc(attrs)->getLength();
				$assign(attrs2, $new($AttrArray, attrsLength));
				for (int32_t i = 0; i < attrsLength; ++i) {
					$nc(attrs2)->set(i, $cast($Attr, $(attrs->item(i))));
				}
				$Arrays::sort(attrs2, XMLSignatureInputDebugger::ATTR_COMPARE);
				$assign(attrs3, attrs2);
				for (int32_t i = 0; i < attrsLength; ++i) {
					$var($Attr, a, $cast($Attr, $nc(attrs3)->get(i)));
					bool included = $nc(this->xpathNodeSet)->contains(a);
					bool inclusive = $nc(this->inclusiveNamespaces)->contains($($nc(a)->getName()));
					if (included) {
						if (inclusive) {
							$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludedInclusiveNamespacePrefix);
						} else {
							$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludePrefix);
						}
					} else if (inclusive) {
						$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLExcludedInclusiveNamespacePrefix);
					} else {
						$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLExcludePrefix);
					}
					$var($String, var$2, $nc(a)->getNodeName());
					this->outputAttrToWriter(var$2, $(a->getNodeValue()));
					$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludeOrExcludeSuffix);
				}
				if ($nc(this->xpathNodeSet)->contains(currentNode)) {
					$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludePrefix);
				} else {
					$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLExcludePrefix);
				}
				$nc(this->writer)->write("&gt;"_s);
				$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludeOrExcludeSuffix);
				{
					$var($Node, currentChild, currentNode->getFirstChild());
					for (; currentChild != nullptr; $assign(currentChild, $nc(currentChild)->getNextSibling())) {
						this->canonicalizeXPathNodeSet(currentChild);
					}
				}
				if ($nc(this->xpathNodeSet)->contains(currentNode)) {
					$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludePrefix);
				} else {
					$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLExcludePrefix);
				}
				$nc(this->writer)->write("&lt;/"_s);
				$nc(this->writer)->write($(currentElement->getTagName()));
				$nc(this->writer)->write("&gt;"_s);
				$nc(this->writer)->write(XMLSignatureInputDebugger::HTMLIncludeOrExcludeSuffix);
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
}

int32_t XMLSignatureInputDebugger::getPositionRelativeToDocumentElement($Node* currentNode) {
	$useLocalCurrentObjectStackCache();
	if (currentNode == nullptr) {
		return XMLSignatureInputDebugger::NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT;
	}
	$var($Document, doc, $nc(currentNode)->getOwnerDocument());
	if (!$equals(currentNode->getParentNode(), doc)) {
		return XMLSignatureInputDebugger::NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT;
	}
	$var($Element, documentElement, $nc(doc)->getDocumentElement());
	if (documentElement == nullptr) {
		return XMLSignatureInputDebugger::NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT;
	}
	if ($equals(documentElement, currentNode)) {
		return XMLSignatureInputDebugger::NODE_NOT_BEFORE_OR_AFTER_DOCUMENT_ELEMENT;
	}
	{
		$var($Node, x, currentNode);
		for (; x != nullptr; $assign(x, x->getNextSibling())) {
			if ($equals(x, documentElement)) {
				return XMLSignatureInputDebugger::NODE_BEFORE_DOCUMENT_ELEMENT;
			}
		}
	}
	return XMLSignatureInputDebugger::NODE_AFTER_DOCUMENT_ELEMENT;
}

void XMLSignatureInputDebugger::outputAttrToWriter($String* name, $String* value) {
	$nc(this->writer)->write(" "_s);
	$nc(this->writer)->write(name);
	$nc(this->writer)->write("=\""_s);
	int32_t length = $nc(value)->length();
	for (int32_t i = 0; i < length; ++i) {
		char16_t c = value->charAt(i);
		switch (c) {
		case u'&':
			{
				$nc(this->writer)->write("&amp;amp;"_s);
				break;
			}
		case u'<':
			{
				$nc(this->writer)->write("&amp;lt;"_s);
				break;
			}
		case u'\"':
			{
				$nc(this->writer)->write("&amp;quot;"_s);
				break;
			}
		case 9:
			{
				$nc(this->writer)->write("&amp;#x9;"_s);
				break;
			}
		case 10:
			{
				$nc(this->writer)->write("&amp;#xA;"_s);
				break;
			}
		case 13:
			{
				$nc(this->writer)->write("&amp;#xD;"_s);
				break;
			}
		default:
			{
				$nc(this->writer)->write((int32_t)c);
				break;
			}
		}
	}
	$nc(this->writer)->write("\""_s);
}

void XMLSignatureInputDebugger::outputPItoWriter($ProcessingInstruction* currentPI) {
	$useLocalCurrentObjectStackCache();
	if (currentPI == nullptr) {
		return;
	}
	$nc(this->writer)->write("&lt;?"_s);
	$var($String, target, $nc(currentPI)->getTarget());
	int32_t length = $nc(target)->length();
	for (int32_t i = 0; i < length; ++i) {
		char16_t c = target->charAt(i);
		switch (c) {
		case 13:
			{
				$nc(this->writer)->write("&amp;#xD;"_s);
				break;
			}
		case u' ':
			{
				$nc(this->writer)->write("&middot;"_s);
				break;
			}
		case u'\n':
			{
				$nc(this->writer)->write("&para;\n"_s);
				break;
			}
		default:
			{
				$nc(this->writer)->write((int32_t)c);
				break;
			}
		}
	}
	$var($String, data, currentPI->getData());
	length = $nc(data)->length();
	if (length > 0) {
		$nc(this->writer)->write(" "_s);
		for (int32_t i = 0; i < length; ++i) {
			char16_t c = data->charAt(i);
			if (c == 13) {
				$nc(this->writer)->write("&amp;#xD;"_s);
			} else {
				$nc(this->writer)->write((int32_t)c);
			}
		}
	}
	$nc(this->writer)->write("?&gt;"_s);
}

void XMLSignatureInputDebugger::outputCommentToWriter($Comment* currentComment) {
	if (currentComment == nullptr) {
		return;
	}
	$nc(this->writer)->write("&lt;!--"_s);
	$var($String, data, $nc(currentComment)->getData());
	int32_t length = $nc(data)->length();
	for (int32_t i = 0; i < length; ++i) {
		char16_t c = data->charAt(i);
		switch (c) {
		case 13:
			{
				$nc(this->writer)->write("&amp;#xD;"_s);
				break;
			}
		case u' ':
			{
				$nc(this->writer)->write("&middot;"_s);
				break;
			}
		case u'\n':
			{
				$nc(this->writer)->write("&para;\n"_s);
				break;
			}
		default:
			{
				$nc(this->writer)->write((int32_t)c);
				break;
			}
		}
	}
	$nc(this->writer)->write("--&gt;"_s);
}

void XMLSignatureInputDebugger::outputTextToWriter($String* text) {
	if (text == nullptr) {
		return;
	}
	int32_t length = $nc(text)->length();
	for (int32_t i = 0; i < length; ++i) {
		char16_t c = text->charAt(i);
		switch (c) {
		case u'&':
			{
				$nc(this->writer)->write("&amp;amp;"_s);
				break;
			}
		case u'<':
			{
				$nc(this->writer)->write("&amp;lt;"_s);
				break;
			}
		case u'>':
			{
				$nc(this->writer)->write("&amp;gt;"_s);
				break;
			}
		case 13:
			{
				$nc(this->writer)->write("&amp;#xD;"_s);
				break;
			}
		case u' ':
			{
				$nc(this->writer)->write("&middot;"_s);
				break;
			}
		case u'\n':
			{
				$nc(this->writer)->write("&para;\n"_s);
				break;
			}
		default:
			{
				$nc(this->writer)->write((int32_t)c);
				break;
			}
		}
	}
}

void clinit$XMLSignatureInputDebugger($Class* class$) {
	$assignStatic(XMLSignatureInputDebugger::HTMLPrefix, "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.01 Transitional//EN\">\n<html>\n<head>\n<title>Canonical XML node set</title>\n<style type=\"text/css\">\n<!-- \n.INCLUDED { \n   color: #000000; \n   background-color: \n   #FFFFFF; \n   font-weight: bold; } \n.EXCLUDED { \n   color: #666666; \n   background-color: \n   #999999; } \n.INCLUDEDINCLUSIVENAMESPACE { \n   color: #0000FF; \n   background-color: #FFFFFF; \n   font-weight: bold; \n   font-style: italic; } \n.EXCLUDEDINCLUSIVENAMESPACE { \n   color: #0000FF; \n   background-color: #999999; \n   font-style: italic; } \n--> \n</style> \n</head>\n<body bgcolor=\"#999999\">\n<h1>Explanation of the output</h1>\n<p>The following text contains the nodeset of the given Reference before it is canonicalized. There exist four different styles to indicate how a given node is treated.</p>\n<ul>\n<li class=\"INCLUDED\">A node which is in the node set is labeled using the INCLUDED style.</li>\n<li class=\"EXCLUDED\">A node which is <em>NOT</em> in the node set is labeled EXCLUDED style.</li>\n<li class=\"INCLUDEDINC"
		"LUSIVENAMESPACE\">A namespace which is in the node set AND in the InclusiveNamespaces PrefixList is labeled using the INCLUDEDINCLUSIVENAMESPACE style.</li>\n<li class=\"EXCLUDEDINCLUSIVENAMESPACE\">A namespace which is in NOT the node set AND in the InclusiveNamespaces PrefixList is labeled using the INCLUDEDINCLUSIVENAMESPACE style.</li>\n</ul>\n<h1>Output</h1>\n<pre>\n"_s);
	$assignStatic(XMLSignatureInputDebugger::HTMLSuffix, "</pre></body></html>"_s);
	$assignStatic(XMLSignatureInputDebugger::HTMLExcludePrefix, "<span class=\"EXCLUDED\">"_s);
	$assignStatic(XMLSignatureInputDebugger::HTMLIncludePrefix, "<span class=\"INCLUDED\">"_s);
	$assignStatic(XMLSignatureInputDebugger::HTMLIncludeOrExcludeSuffix, "</span>"_s);
	$assignStatic(XMLSignatureInputDebugger::HTMLIncludedInclusiveNamespacePrefix, "<span class=\"INCLUDEDINCLUSIVENAMESPACE\">"_s);
	$assignStatic(XMLSignatureInputDebugger::HTMLExcludedInclusiveNamespacePrefix, "<span class=\"EXCLUDEDINCLUSIVENAMESPACE\">"_s);
	$assignStatic(XMLSignatureInputDebugger::ATTR_COMPARE, $new($AttrCompare));
}

XMLSignatureInputDebugger::XMLSignatureInputDebugger() {
}

$Class* XMLSignatureInputDebugger::load$($String* name, bool initialize) {
	$loadClass(XMLSignatureInputDebugger, name, initialize, &_XMLSignatureInputDebugger_ClassInfo_, clinit$XMLSignatureInputDebugger, allocate$XMLSignatureInputDebugger);
	return class$;
}

$Class* XMLSignatureInputDebugger::class$ = nullptr;

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com