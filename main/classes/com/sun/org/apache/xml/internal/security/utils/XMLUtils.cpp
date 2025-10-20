#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>

#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizationException.h>
#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>
#include <com/sun/org/apache/xml/internal/security/c14n/InvalidCanonicalizerException.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/XMLSecurityException.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParser.h>
#include <com/sun/org/apache/xml/internal/security/parser/XMLParserImpl.h>
#include <com/sun/org/apache/xml/internal/security/utils/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/EncryptionConstants.h>
#include <com/sun/org/apache/xml/internal/security/utils/HelperNodeList.h>
#include <com/sun/org/apache/xml/internal/security/utils/I18n.h>
#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <com/sun/org/slf4j/internal/Logger.h>
#include <com/sun/org/slf4j/internal/LoggerFactory.h>
#include <java/io/IOException.h>
#include <java/io/InputStream.h>
#include <java/io/OutputStream.h>
#include <java/io/Serializable.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/ClassNotFoundException.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/IllegalAccessException.h>
#include <java/lang/IllegalArgumentException.h>
#include <java/lang/InstantiationException.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/ReflectiveOperationException.h>
#include <java/lang/RuntimeException.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/System.h>
#include <java/lang/Throwable.h>
#include <java/lang/invoke/CallSite.h>
#include <java/lang/invoke/LambdaMetafactory.h>
#include <java/lang/invoke/MethodHandle.h>
#include <java/lang/invoke/MethodHandles$Lookup.h>
#include <java/lang/invoke/MethodType.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/InvocationTargetException.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/security/AccessController.h>
#include <java/security/PrivilegedAction.h>
#include <java/util/AbstractList.h>
#include <java/util/AbstractSet.h>
#include <java/util/ArrayList.h>
#include <java/util/Base64$Decoder.h>
#include <java/util/Base64$Encoder.h>
#include <java/util/Base64.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/List.h>
#include <java/util/Set.h>
#include <java/util/function/Predicate.h>
#include <java/util/stream/Collector.h>
#include <java/util/stream/Collectors.h>
#include <java/util/stream/Stream.h>
#include <org/w3c/dom/Attr.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/NodeList.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

#undef ALGO_ID_C14N_PHYSICAL
#undef ALGO_ID_C14N_WITH_COMMENTS
#undef ATTRIBUTE_NODE
#undef COMMENT_NODE
#undef DOCUMENT_NODE
#undef DOCUMENT_TYPE_NODE
#undef ELEMENT_NODE
#undef ENTITY_REFERENCE_NODE
#undef LOG
#undef PROCESSING_INSTRUCTION_NODE
#undef TEXT_NODE
#undef UTF_8

using $ElementArray = $Array<::org::w3c::dom::Element>;
using $CanonicalizationException = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizationException;
using $Canonicalizer = ::com::sun::org::apache::xml::internal::security::c14n::Canonicalizer;
using $InvalidCanonicalizerException = ::com::sun::org::apache::xml::internal::security::c14n::InvalidCanonicalizerException;
using $XMLSecurityException = ::com::sun::org::apache::xml::internal::security::exceptions::XMLSecurityException;
using $XMLParser = ::com::sun::org::apache::xml::internal::security::parser::XMLParser;
using $XMLParserImpl = ::com::sun::org::apache::xml::internal::security::parser::XMLParserImpl;
using $ClassLoaderUtils = ::com::sun::org::apache::xml::internal::security::utils::ClassLoaderUtils;
using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $EncryptionConstants = ::com::sun::org::apache::xml::internal::security::utils::EncryptionConstants;
using $HelperNodeList = ::com::sun::org::apache::xml::internal::security::utils::HelperNodeList;
using $I18n = ::com::sun::org::apache::xml::internal::security::utils::I18n;
using $JavaUtils = ::com::sun::org::apache::xml::internal::security::utils::JavaUtils;
using $Logger = ::com::sun::org::slf4j::internal::Logger;
using $LoggerFactory = ::com::sun::org::slf4j::internal::LoggerFactory;
using $IOException = ::java::io::IOException;
using $InputStream = ::java::io::InputStream;
using $OutputStream = ::java::io::OutputStream;
using $Serializable = ::java::io::Serializable;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $ClassNotFoundException = ::java::lang::ClassNotFoundException;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $IllegalAccessException = ::java::lang::IllegalAccessException;
using $IllegalArgumentException = ::java::lang::IllegalArgumentException;
using $InstantiationException = ::java::lang::InstantiationException;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $ReflectiveOperationException = ::java::lang::ReflectiveOperationException;
using $RuntimeException = ::java::lang::RuntimeException;
using $CallSite = ::java::lang::invoke::CallSite;
using $LambdaMetafactory = ::java::lang::invoke::LambdaMetafactory;
using $MethodHandle = ::java::lang::invoke::MethodHandle;
using $MethodHandles$Lookup = ::java::lang::invoke::MethodHandles$Lookup;
using $MethodType = ::java::lang::invoke::MethodType;
using $InvocationTargetException = ::java::lang::reflect::InvocationTargetException;
using $BigInteger = ::java::math::BigInteger;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $AccessController = ::java::security::AccessController;
using $PrivilegedAction = ::java::security::PrivilegedAction;
using $AbstractList = ::java::util::AbstractList;
using $AbstractSet = ::java::util::AbstractSet;
using $ArrayList = ::java::util::ArrayList;
using $Base64 = ::java::util::Base64;
using $Base64$Decoder = ::java::util::Base64$Decoder;
using $Base64$Encoder = ::java::util::Base64$Encoder;
using $Collection = ::java::util::Collection;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $List = ::java::util::List;
using $Set = ::java::util::Set;
using $Predicate = ::java::util::function::Predicate;
using $Collector = ::java::util::stream::Collector;
using $Collectors = ::java::util::stream::Collectors;
using $Stream = ::java::util::stream::Stream;
using $Attr = ::org::w3c::dom::Attr;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;
using $NodeList = ::org::w3c::dom::NodeList;
using $Text = ::org::w3c::dom::Text;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

class XMLUtils$$Lambda$lambda$static$0 : public $PrivilegedAction {
	$class(XMLUtils$$Lambda$lambda$static$0, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(XMLUtils::lambda$static$0());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XMLUtils$$Lambda$lambda$static$0>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo XMLUtils$$Lambda$lambda$static$0::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLUtils$$Lambda$lambda$static$0::*)()>(&XMLUtils$$Lambda$lambda$static$0::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XMLUtils$$Lambda$lambda$static$0::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xml.internal.security.utils.XMLUtils$$Lambda$lambda$static$0",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* XMLUtils$$Lambda$lambda$static$0::load$($String* name, bool initialize) {
	$loadClass(XMLUtils$$Lambda$lambda$static$0, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XMLUtils$$Lambda$lambda$static$0::class$ = nullptr;

class XMLUtils$$Lambda$lambda$static$1$1 : public $PrivilegedAction {
	$class(XMLUtils$$Lambda$lambda$static$1$1, $NO_CLASS_INIT, $PrivilegedAction)
public:
	void init$() {
	}
	virtual $Object* run() override {
		 return $of(XMLUtils::lambda$static$1());
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XMLUtils$$Lambda$lambda$static$1$1>());
	}
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$MethodInfo XMLUtils$$Lambda$lambda$static$1$1::methodInfos[3] = {
	{"<init>", "()V", nullptr, $PUBLIC, $method(static_cast<void(XMLUtils$$Lambda$lambda$static$1$1::*)()>(&XMLUtils$$Lambda$lambda$static$1$1::init$))},
	{"run", "()Ljava/lang/Object;", nullptr, $PUBLIC},
	{}
};
$ClassInfo XMLUtils$$Lambda$lambda$static$1$1::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xml.internal.security.utils.XMLUtils$$Lambda$lambda$static$1$1",
	"java.lang.Object",
	"java.security.PrivilegedAction",
	nullptr,
	methodInfos
};
$Class* XMLUtils$$Lambda$lambda$static$1$1::load$($String* name, bool initialize) {
	$loadClass(XMLUtils$$Lambda$lambda$static$1$1, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XMLUtils$$Lambda$lambda$static$1$1::class$ = nullptr;

class XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2 : public $Predicate {
	$class(XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2, $NO_CLASS_INIT, $Predicate)
public:
	void init$($Node* signatureElement) {
		$set(this, signatureElement, signatureElement);
	}
	virtual bool test(Object$* inputNode) override {
		 return XMLUtils::lambda$excludeNodeFromSet$2(signatureElement, $cast($Node, inputNode));
	}
	static $Object* allocate$($Class* clazz) {
		return $of($alloc<XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2>());
	}
	$Node* signatureElement = nullptr;
	static $FieldInfo fieldInfos[2];
	static $MethodInfo methodInfos[3];
	static $ClassInfo classInfo$;
};
$FieldInfo XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2::fieldInfos[2] = {
	{"signatureElement", "Lorg/w3c/dom/Node;", nullptr, $PUBLIC, $field(XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2, signatureElement)},
	{}
};
$MethodInfo XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2::methodInfos[3] = {
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(static_cast<void(XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2::*)($Node*)>(&XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2::init$))},
	{"test", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{}
};
$ClassInfo XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2::classInfo$ = {
	$PUBLIC | $FINAL,
	"com.sun.org.apache.xml.internal.security.utils.XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2",
	"java.lang.Object",
	"java.util.function.Predicate",
	fieldInfos,
	methodInfos
};
$Class* XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2::load$($String* name, bool initialize) {
	$loadClass(XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2, name, initialize, &classInfo$, allocate$);
	return class$;
}
$Class* XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2::class$ = nullptr;

$FieldInfo _XMLUtils_FieldInfo_[] = {
	{"ignoreLineBreaks", "Z", nullptr, $PRIVATE | $STATIC, $staticField(XMLUtils, ignoreLineBreaks$)},
	{"LOG", "Lcom/sun/org/slf4j/internal/Logger;", nullptr, $PRIVATE | $STATIC | $FINAL, $staticField(XMLUtils, LOG)},
	{"xmlParserImpl", "Lcom/sun/org/apache/xml/internal/security/parser/XMLParser;", nullptr, $PRIVATE | $STATIC, $staticField(XMLUtils, xmlParserImpl)},
	{"dsPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(XMLUtils, dsPrefix)},
	{"ds11Prefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(XMLUtils, ds11Prefix)},
	{"xencPrefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(XMLUtils, xencPrefix)},
	{"xenc11Prefix", "Ljava/lang/String;", nullptr, $PRIVATE | $STATIC | $VOLATILE, $staticField(XMLUtils, xenc11Prefix)},
	{}
};

$MethodInfo _XMLUtils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(XMLUtils::*)()>(&XMLUtils::init$))},
	{"addReturnBeforeChild", "(Lorg/w3c/dom/Element;Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Element*,$Node*)>(&XMLUtils::addReturnBeforeChild))},
	{"addReturnToElement", "(Lorg/w3c/dom/Element;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Element*)>(&XMLUtils::addReturnToElement))},
	{"addReturnToElement", "(Lorg/w3c/dom/Document;Lcom/sun/org/apache/xml/internal/security/utils/HelperNodeList;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Document*,$HelperNodeList*)>(&XMLUtils::addReturnToElement))},
	{"circumventBug2650", "(Lorg/w3c/dom/Document;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Document*)>(&XMLUtils::circumventBug2650))},
	{"circumventBug2650internal", "(Lorg/w3c/dom/Node;)V", nullptr, $PRIVATE | $STATIC, $method(static_cast<void(*)($Node*)>(&XMLUtils::circumventBug2650internal))},
	{"convertNodelistToSet", "(Lorg/w3c/dom/NodeList;)Ljava/util/Set;", "(Lorg/w3c/dom/NodeList;)Ljava/util/Set<Lorg/w3c/dom/Node;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)($NodeList*)>(&XMLUtils::convertNodelistToSet))},
	{"createElementInEncryption11Space", "(Lorg/w3c/dom/Document;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Document*,$String*)>(&XMLUtils::createElementInEncryption11Space))},
	{"createElementInEncryptionSpace", "(Lorg/w3c/dom/Document;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Document*,$String*)>(&XMLUtils::createElementInEncryptionSpace))},
	{"createElementInSignature11Space", "(Lorg/w3c/dom/Document;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Document*,$String*)>(&XMLUtils::createElementInSignature11Space))},
	{"createElementInSignatureSpace", "(Lorg/w3c/dom/Document;Ljava/lang/String;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Document*,$String*)>(&XMLUtils::createElementInSignatureSpace))},
	{"decode", "(Ljava/lang/String;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($String*)>(&XMLUtils::decode))},
	{"decode", "([B)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($bytes*)>(&XMLUtils::decode))},
	{"elementIsInEncryption11Space", "(Lorg/w3c/dom/Element;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Element*,$String*)>(&XMLUtils::elementIsInEncryption11Space))},
	{"elementIsInEncryptionSpace", "(Lorg/w3c/dom/Element;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Element*,$String*)>(&XMLUtils::elementIsInEncryptionSpace))},
	{"elementIsInSignature11Space", "(Lorg/w3c/dom/Element;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Element*,$String*)>(&XMLUtils::elementIsInSignature11Space))},
	{"elementIsInSignatureSpace", "(Lorg/w3c/dom/Element;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Element*,$String*)>(&XMLUtils::elementIsInSignatureSpace))},
	{"encodeToString", "([B)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($bytes*)>(&XMLUtils::encodeToString))},
	{"excludeNodeFromSet", "(Lorg/w3c/dom/Node;Ljava/util/Set;)Ljava/util/Set;", "(Lorg/w3c/dom/Node;Ljava/util/Set<Lorg/w3c/dom/Node;>;)Ljava/util/Set<Lorg/w3c/dom/Node;>;", $PUBLIC | $STATIC, $method(static_cast<$Set*(*)($Node*,$Set*)>(&XMLUtils::excludeNodeFromSet))},
	{"getBytes", "(Ljava/math/BigInteger;I)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($BigInteger*,int32_t)>(&XMLUtils::getBytes))},
	{"getFullTextChildrenFromNode", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Node*)>(&XMLUtils::getFullTextChildrenFromNode))},
	{"getNextElement", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Node*)>(&XMLUtils::getNextElement))},
	{"getOwnerDocument", "(Lorg/w3c/dom/Node;)Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Document*(*)($Node*)>(&XMLUtils::getOwnerDocument))},
	{"getOwnerDocument", "(Ljava/util/Set;)Lorg/w3c/dom/Document;", "(Ljava/util/Set<Lorg/w3c/dom/Node;>;)Lorg/w3c/dom/Document;", $PUBLIC | $STATIC, $method(static_cast<$Document*(*)($Set*)>(&XMLUtils::getOwnerDocument))},
	{"getSet", "(Lorg/w3c/dom/Node;Ljava/util/Set;Lorg/w3c/dom/Node;Z)V", "(Lorg/w3c/dom/Node;Ljava/util/Set<Lorg/w3c/dom/Node;>;Lorg/w3c/dom/Node;Z)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($Node*,$Set*,$Node*,bool)>(&XMLUtils::getSet))},
	{"getSetRec", "(Lorg/w3c/dom/Node;Ljava/util/Set;Lorg/w3c/dom/Node;Z)V", "(Lorg/w3c/dom/Node;Ljava/util/Set<Lorg/w3c/dom/Node;>;Lorg/w3c/dom/Node;Z)V", $PRIVATE | $STATIC, $method(static_cast<void(*)($Node*,$Set*,$Node*,bool)>(&XMLUtils::getSetRec))},
	{"getStrFromNode", "(Lorg/w3c/dom/Node;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($Node*)>(&XMLUtils::getStrFromNode))},
	{"ignoreLineBreaks", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&XMLUtils::ignoreLineBreaks))},
	{"isDescendantOrSelf", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Node*,$Node*)>(&XMLUtils::isDescendantOrSelf))},
	{"isIgnoreLineBreaks", "()Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)()>(&XMLUtils::isIgnoreLineBreaks))},
	{"lambda$excludeNodeFromSet$2", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Node;)Z", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<bool(*)($Node*,$Node*)>(&XMLUtils::lambda$excludeNodeFromSet$2))},
	{"lambda$static$0", "()Ljava/lang/Boolean;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$Boolean*(*)()>(&XMLUtils::lambda$static$0))},
	{"lambda$static$1", "()Lcom/sun/org/apache/xml/internal/security/parser/XMLParser;", nullptr, $PRIVATE | $STATIC | $SYNTHETIC, $method(static_cast<$XMLParser*(*)()>(&XMLUtils::lambda$static$1))},
	{"outputDOM", "(Lorg/w3c/dom/Node;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Node*,$OutputStream*)>(&XMLUtils::outputDOM))},
	{"outputDOM", "(Lorg/w3c/dom/Node;Ljava/io/OutputStream;Z)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Node*,$OutputStream*,bool)>(&XMLUtils::outputDOM))},
	{"outputDOMc14nWithComments", "(Lorg/w3c/dom/Node;Ljava/io/OutputStream;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($Node*,$OutputStream*)>(&XMLUtils::outputDOMc14nWithComments))},
	{"protectAgainstWrappingAttack", "(Lorg/w3c/dom/Node;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Node*,$String*)>(&XMLUtils::protectAgainstWrappingAttack))},
	{"protectAgainstWrappingAttack", "(Lorg/w3c/dom/Node;Lorg/w3c/dom/Element;Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($Node*,$Element*,$String*)>(&XMLUtils::protectAgainstWrappingAttack))},
	{"read", "(Ljava/io/InputStream;Z)Lorg/w3c/dom/Document;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Document*(*)($InputStream*,bool)>(&XMLUtils::read)), "com.sun.org.apache.xml.internal.security.parser.XMLParserException"},
	{"selectDs11Node", "(Lorg/w3c/dom/Node;Ljava/lang/String;I)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Node*,$String*,int32_t)>(&XMLUtils::selectDs11Node))},
	{"selectDs11Nodes", "(Lorg/w3c/dom/Node;Ljava/lang/String;)[Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ElementArray*(*)($Node*,$String*)>(&XMLUtils::selectDs11Nodes))},
	{"selectDsNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;I)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Node*,$String*,int32_t)>(&XMLUtils::selectDsNode))},
	{"selectDsNodes", "(Lorg/w3c/dom/Node;Ljava/lang/String;)[Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ElementArray*(*)($Node*,$String*)>(&XMLUtils::selectDsNodes))},
	{"selectNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;I)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Node*,$String*,$String*,int32_t)>(&XMLUtils::selectNode))},
	{"selectNodes", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/lang/String;)[Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$ElementArray*(*)($Node*,$String*,$String*)>(&XMLUtils::selectNodes))},
	{"selectXencNode", "(Lorg/w3c/dom/Node;Ljava/lang/String;I)Lorg/w3c/dom/Element;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$Element*(*)($Node*,$String*,int32_t)>(&XMLUtils::selectXencNode))},
	{"setDs11Prefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&XMLUtils::setDs11Prefix))},
	{"setDsPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&XMLUtils::setDsPrefix))},
	{"setXenc11Prefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&XMLUtils::setXenc11Prefix))},
	{"setXencPrefix", "(Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*)>(&XMLUtils::setXencPrefix))},
	{}
};

$ClassInfo _XMLUtils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.XMLUtils",
	"java.lang.Object",
	nullptr,
	_XMLUtils_FieldInfo_,
	_XMLUtils_MethodInfo_
};

$Object* allocate$XMLUtils($Class* clazz) {
	return $of($alloc(XMLUtils));
}

bool XMLUtils::ignoreLineBreaks$ = false;
$Logger* XMLUtils::LOG = nullptr;
$XMLParser* XMLUtils::xmlParserImpl = nullptr;
$volatile($String*) XMLUtils::dsPrefix = nullptr;
$volatile($String*) XMLUtils::ds11Prefix = nullptr;
$volatile($String*) XMLUtils::xencPrefix = nullptr;
$volatile($String*) XMLUtils::xenc11Prefix = nullptr;

void XMLUtils::init$() {
}

void XMLUtils::setDsPrefix($String* prefix) {
	$init(XMLUtils);
	$JavaUtils::checkRegisterPermission();
	$assignStatic(XMLUtils::dsPrefix, prefix);
}

void XMLUtils::setDs11Prefix($String* prefix) {
	$init(XMLUtils);
	$JavaUtils::checkRegisterPermission();
	$assignStatic(XMLUtils::ds11Prefix, prefix);
}

void XMLUtils::setXencPrefix($String* prefix) {
	$init(XMLUtils);
	$JavaUtils::checkRegisterPermission();
	$assignStatic(XMLUtils::xencPrefix, prefix);
}

void XMLUtils::setXenc11Prefix($String* prefix) {
	$init(XMLUtils);
	$JavaUtils::checkRegisterPermission();
	$assignStatic(XMLUtils::xenc11Prefix, prefix);
}

$Element* XMLUtils::getNextElement($Node* el) {
	$init(XMLUtils);
	$var($Node, node, el);
	while (node != nullptr && node->getNodeType() != $Node::ELEMENT_NODE) {
		$assign(node, node->getNextSibling());
	}
	return $cast($Element, node);
}

void XMLUtils::getSet($Node* rootNode, $Set* result, $Node* exclude, bool com) {
	$init(XMLUtils);
	if (exclude != nullptr && isDescendantOrSelf(exclude, rootNode)) {
		return;
	}
	getSetRec(rootNode, result, exclude, com);
}

void XMLUtils::getSetRec($Node* rootNode, $Set* result, $Node* exclude, bool com) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	if (rootNode == exclude) {
		return;
	}
	{
		$var($Element, el, nullptr)
		switch ($nc(rootNode)->getNodeType()) {
		case $Node::ELEMENT_NODE:
			{
				$nc(result)->add(rootNode);
				$assign(el, $cast($Element, rootNode));
				if ($nc(el)->hasAttributes()) {
					$var($NamedNodeMap, nl, el->getAttributes());
					int32_t length = $nc(nl)->getLength();
					for (int32_t i = 0; i < length; ++i) {
						$nc(result)->add($(nl->item(i)));
					}
				}
			}
		case $Node::DOCUMENT_NODE:
			{
				{
					$var($Node, r, rootNode->getFirstChild());
					for (; r != nullptr; $assign(r, $nc(r)->getNextSibling())) {
						if (r->getNodeType() == $Node::TEXT_NODE) {
							$nc(result)->add(r);
							while (r != nullptr && r->getNodeType() == $Node::TEXT_NODE) {
								$assign(r, r->getNextSibling());
							}
							if (r == nullptr) {
								return;
							}
						}
						getSetRec(r, result, exclude, com);
					}
				}
				break;
			}
		case $Node::COMMENT_NODE:
			{
				if (com) {
					$nc(result)->add(rootNode);
				}
				break;
			}
		case $Node::DOCUMENT_TYPE_NODE:
			{
				break;
			}
		default:
			{
				$nc(result)->add(rootNode);
			}
		}
	}
}

void XMLUtils::outputDOM($Node* contextNode, $OutputStream* os) {
	$init(XMLUtils);
	XMLUtils::outputDOM(contextNode, os, false);
}

void XMLUtils::outputDOM($Node* contextNode, $OutputStream* os, bool addPreamble) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	try {
		if (addPreamble) {
			$init($StandardCharsets);
			$nc(os)->write($("<?xml version=\"1.0\" encoding=\"UTF-8\"?>\n"_s->getBytes($StandardCharsets::UTF_8)));
		}
		$init($Canonicalizer);
		$nc($($Canonicalizer::getInstance($Canonicalizer::ALGO_ID_C14N_PHYSICAL)))->canonicalizeSubtree(contextNode, os);
	} catch ($IOException&) {
		$var($Exception, ex, $catch());
		$nc(XMLUtils::LOG)->debug($(ex->getMessage()), static_cast<$Throwable*>(ex));
	} catch ($InvalidCanonicalizerException&) {
		$var($Exception, ex, $catch());
		$nc(XMLUtils::LOG)->debug($(ex->getMessage()), static_cast<$Throwable*>(ex));
	} catch ($CanonicalizationException&) {
		$var($Exception, ex, $catch());
		$nc(XMLUtils::LOG)->debug($(ex->getMessage()), static_cast<$Throwable*>(ex));
	}
}

void XMLUtils::outputDOMc14nWithComments($Node* contextNode, $OutputStream* os) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	try {
		$init($Canonicalizer);
		$nc($($Canonicalizer::getInstance($Canonicalizer::ALGO_ID_C14N_WITH_COMMENTS)))->canonicalizeSubtree(contextNode, os);
	} catch ($InvalidCanonicalizerException&) {
		$var($XMLSecurityException, ex, $catch());
		$nc(XMLUtils::LOG)->debug($(ex->getMessage()), static_cast<$Throwable*>(ex));
	} catch ($CanonicalizationException&) {
		$var($XMLSecurityException, ex, $catch());
		$nc(XMLUtils::LOG)->debug($(ex->getMessage()), static_cast<$Throwable*>(ex));
	}
}

$String* XMLUtils::getFullTextChildrenFromNode($Node* node) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	$var($StringBuilder, sb, $new($StringBuilder));
	$var($Node, child, $nc(node)->getFirstChild());
	while (child != nullptr) {
		if (child->getNodeType() == $Node::TEXT_NODE) {
			sb->append($($nc(($cast($Text, child)))->getData()));
		}
		$assign(child, child->getNextSibling());
	}
	return sb->toString();
}

$Element* XMLUtils::createElementInSignatureSpace($Document* doc, $String* elementName) {
	$init(XMLUtils);
	if (doc == nullptr) {
		$throwNew($RuntimeException, "Document is null"_s);
	}
	if (XMLUtils::dsPrefix == nullptr || $nc(XMLUtils::dsPrefix)->length() == 0) {
		$init($Constants);
		return $nc(doc)->createElementNS($Constants::SignatureSpecNS, elementName);
	}
	$init($Constants);
	return $nc(doc)->createElementNS($Constants::SignatureSpecNS, $$str({XMLUtils::dsPrefix, ":"_s, elementName}));
}

$Element* XMLUtils::createElementInSignature11Space($Document* doc, $String* elementName) {
	$init(XMLUtils);
	if (doc == nullptr) {
		$throwNew($RuntimeException, "Document is null"_s);
	}
	if (XMLUtils::ds11Prefix == nullptr || $nc(XMLUtils::ds11Prefix)->length() == 0) {
		$init($Constants);
		return $nc(doc)->createElementNS($Constants::SignatureSpec11NS, elementName);
	}
	$init($Constants);
	return $nc(doc)->createElementNS($Constants::SignatureSpec11NS, $$str({XMLUtils::ds11Prefix, ":"_s, elementName}));
}

$Element* XMLUtils::createElementInEncryptionSpace($Document* doc, $String* elementName) {
	$init(XMLUtils);
	if (doc == nullptr) {
		$throwNew($RuntimeException, "Document is null"_s);
	}
	if (XMLUtils::xencPrefix == nullptr || $nc(XMLUtils::xencPrefix)->length() == 0) {
		$init($EncryptionConstants);
		return $nc(doc)->createElementNS($EncryptionConstants::EncryptionSpecNS, elementName);
	}
	$init($EncryptionConstants);
	return $nc(doc)->createElementNS($EncryptionConstants::EncryptionSpecNS, $$str({XMLUtils::xencPrefix, ":"_s, elementName}));
}

$Element* XMLUtils::createElementInEncryption11Space($Document* doc, $String* elementName) {
	$init(XMLUtils);
	if (doc == nullptr) {
		$throwNew($RuntimeException, "Document is null"_s);
	}
	if (XMLUtils::xenc11Prefix == nullptr || $nc(XMLUtils::xenc11Prefix)->length() == 0) {
		$init($EncryptionConstants);
		return $nc(doc)->createElementNS($EncryptionConstants::EncryptionSpec11NS, elementName);
	}
	$init($EncryptionConstants);
	return $nc(doc)->createElementNS($EncryptionConstants::EncryptionSpec11NS, $$str({XMLUtils::xenc11Prefix, ":"_s, elementName}));
}

bool XMLUtils::elementIsInSignatureSpace($Element* element, $String* localName) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	if (element == nullptr) {
		return false;
	}
	$init($Constants);
	bool var$0 = $nc($Constants::SignatureSpecNS)->equals($($nc(element)->getNamespaceURI()));
	return var$0 && $nc($($nc(element)->getLocalName()))->equals(localName);
}

bool XMLUtils::elementIsInSignature11Space($Element* element, $String* localName) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	if (element == nullptr) {
		return false;
	}
	$init($Constants);
	bool var$0 = $nc($Constants::SignatureSpec11NS)->equals($($nc(element)->getNamespaceURI()));
	return var$0 && $nc($($nc(element)->getLocalName()))->equals(localName);
}

bool XMLUtils::elementIsInEncryptionSpace($Element* element, $String* localName) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	if (element == nullptr) {
		return false;
	}
	$init($EncryptionConstants);
	bool var$0 = $nc($EncryptionConstants::EncryptionSpecNS)->equals($($nc(element)->getNamespaceURI()));
	return var$0 && $nc($($nc(element)->getLocalName()))->equals(localName);
}

bool XMLUtils::elementIsInEncryption11Space($Element* element, $String* localName) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	if (element == nullptr) {
		return false;
	}
	$init($EncryptionConstants);
	bool var$0 = $nc($EncryptionConstants::EncryptionSpec11NS)->equals($($nc(element)->getNamespaceURI()));
	return var$0 && $nc($($nc(element)->getLocalName()))->equals(localName);
}

$Document* XMLUtils::getOwnerDocument($Node* node) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	if ($nc(node)->getNodeType() == $Node::DOCUMENT_NODE) {
		return $cast($Document, node);
	}
	try {
		return $nc(node)->getOwnerDocument();
	} catch ($NullPointerException&) {
		$var($NullPointerException, npe, $catch());
		$var($String, var$1, $$str({$($I18n::translate("endorsed.jdk1.4.0"_s)), " Original message was \""_s}));
		$var($String, var$0, $$concat(var$1, $(npe->getMessage())));
		$throwNew($NullPointerException, $$concat(var$0, "\""));
	}
	$shouldNotReachHere();
}

$Document* XMLUtils::getOwnerDocument($Set* xpathNodeSet) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	$var($NullPointerException, npe, nullptr);
	{
		$var($Iterator, i$, $nc(xpathNodeSet)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($Node, node, $cast($Node, i$->next()));
			{
				int32_t nodeType = $nc(node)->getNodeType();
				if (nodeType == $Node::DOCUMENT_NODE) {
					return $cast($Document, node);
				}
				try {
					if (nodeType == $Node::ATTRIBUTE_NODE) {
						return $nc($($nc(($cast($Attr, node)))->getOwnerElement()))->getOwnerDocument();
					}
					return node->getOwnerDocument();
				} catch ($NullPointerException&) {
					$var($NullPointerException, e, $catch());
					$assign(npe, e);
				}
			}
		}
	}
	$var($String, var$1, $$str({$($I18n::translate("endorsed.jdk1.4.0"_s)), " Original message was \""_s}));
	$var($String, var$0, $$concat(var$1, (npe == nullptr ? ""_s : $($nc(npe)->getMessage()))));
	$throwNew($NullPointerException, $$concat(var$0, "\""));
	$shouldNotReachHere();
}

void XMLUtils::addReturnToElement($Element* e) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	if (!XMLUtils::ignoreLineBreaks$) {
		$var($Document, doc, $nc(e)->getOwnerDocument());
		e->appendChild($($nc(doc)->createTextNode("\n"_s)));
	}
}

void XMLUtils::addReturnToElement($Document* doc, $HelperNodeList* nl) {
	$init(XMLUtils);
	if (!XMLUtils::ignoreLineBreaks$) {
		$nc(nl)->appendChild($($nc(doc)->createTextNode("\n"_s)));
	}
}

void XMLUtils::addReturnBeforeChild($Element* e, $Node* child) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	if (!XMLUtils::ignoreLineBreaks$) {
		$var($Document, doc, $nc(e)->getOwnerDocument());
		e->insertBefore($($nc(doc)->createTextNode("\n"_s)), child);
	}
}

$String* XMLUtils::encodeToString($bytes* bytes) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	if (XMLUtils::ignoreLineBreaks$) {
		return $nc($($Base64::getEncoder()))->encodeToString(bytes);
	}
	return $nc($($Base64::getMimeEncoder()))->encodeToString(bytes);
}

$bytes* XMLUtils::decode($String* encodedString) {
	$init(XMLUtils);
	return $nc($($Base64::getMimeDecoder()))->decode(encodedString);
}

$bytes* XMLUtils::decode($bytes* encodedBytes) {
	$init(XMLUtils);
	return $nc($($Base64::getMimeDecoder()))->decode(encodedBytes);
}

bool XMLUtils::isIgnoreLineBreaks() {
	$init(XMLUtils);
	return XMLUtils::ignoreLineBreaks$;
}

$Set* XMLUtils::convertNodelistToSet($NodeList* xpathNodeSet) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	if (xpathNodeSet == nullptr) {
		return $new($HashSet);
	}
	int32_t length = $nc(xpathNodeSet)->getLength();
	$var($Set, set, $new($HashSet, length));
	for (int32_t i = 0; i < length; ++i) {
		set->add($(xpathNodeSet->item(i)));
	}
	return set;
}

void XMLUtils::circumventBug2650($Document* doc) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	$var($Element, documentElement, $nc(doc)->getDocumentElement());
	$init($Constants);
	$var($Attr, xmlnsAttr, $nc(documentElement)->getAttributeNodeNS($Constants::NamespaceSpecNS, "xmlns"_s));
	if (xmlnsAttr == nullptr) {
		documentElement->setAttributeNS($Constants::NamespaceSpecNS, "xmlns"_s, ""_s);
	}
	XMLUtils::circumventBug2650internal(doc);
}

void XMLUtils::circumventBug2650internal($Node* node$renamed) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	$var($Node, node, node$renamed);
	$var($Node, parent, nullptr);
	$var($Node, sibling, nullptr);
	$init($Constants);
	$var($String, namespaceNs, $Constants::NamespaceSpecNS);
	do {
		{
			$var($Element, element, nullptr)
			switch ($nc(node)->getNodeType()) {
			case $Node::ELEMENT_NODE:
				{
					$assign(element, $cast($Element, node));
					if (!$nc(element)->hasChildNodes()) {
						break;
					}
					if ($nc(element)->hasAttributes()) {
						$var($NamedNodeMap, attributes, element->getAttributes());
						int32_t attributesLength = $nc(attributes)->getLength();
						{
							$var($Node, child, element->getFirstChild());
							for (; child != nullptr; $assign(child, $nc(child)->getNextSibling())) {
								if (child->getNodeType() != $Node::ELEMENT_NODE) {
									continue;
								}
								$var($Element, childElement, $cast($Element, child));
								for (int32_t i = 0; i < attributesLength; ++i) {
									$var($Attr, currentAttr, $cast($Attr, attributes->item(i)));
									if (!$nc(namespaceNs)->equals($($nc(currentAttr)->getNamespaceURI()))) {
										continue;
									}
									if (childElement->hasAttributeNS(namespaceNs, $($nc(currentAttr)->getLocalName()))) {
										continue;
									}
									$var($String, var$0, namespaceNs);
									$var($String, var$1, $nc(currentAttr)->getName());
									childElement->setAttributeNS(var$0, var$1, $(currentAttr->getNodeValue()));
								}
							}
						}
					}
				}
			case $Node::ENTITY_REFERENCE_NODE:
				{}
			case $Node::DOCUMENT_NODE:
				{
					$assign(parent, node);
					$assign(sibling, node->getFirstChild());
					break;
				}
			}
		}
		while (sibling == nullptr && parent != nullptr) {
			$assign(sibling, parent->getNextSibling());
			$assign(parent, parent->getParentNode());
		}
		if (sibling == nullptr) {
			return;
		}
		$assign(node, sibling);
		$assign(sibling, node->getNextSibling());
	} while (true);
}

$Element* XMLUtils::selectDsNode($Node* sibling$renamed, $String* nodeName, int32_t number) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	$var($Node, sibling, sibling$renamed);
	while (sibling != nullptr) {
		$init($Constants);
		bool var$0 = $nc($Constants::SignatureSpecNS)->equals($(sibling->getNamespaceURI()));
		if (var$0 && $nc($(sibling->getLocalName()))->equals(nodeName)) {
			if (number == 0) {
				return $cast($Element, sibling);
			}
			--number;
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return nullptr;
}

$Element* XMLUtils::selectDs11Node($Node* sibling$renamed, $String* nodeName, int32_t number) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	$var($Node, sibling, sibling$renamed);
	while (sibling != nullptr) {
		$init($Constants);
		bool var$0 = $nc($Constants::SignatureSpec11NS)->equals($(sibling->getNamespaceURI()));
		if (var$0 && $nc($(sibling->getLocalName()))->equals(nodeName)) {
			if (number == 0) {
				return $cast($Element, sibling);
			}
			--number;
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return nullptr;
}

$Element* XMLUtils::selectXencNode($Node* sibling$renamed, $String* nodeName, int32_t number) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	$var($Node, sibling, sibling$renamed);
	while (sibling != nullptr) {
		$init($EncryptionConstants);
		bool var$0 = $nc($EncryptionConstants::EncryptionSpecNS)->equals($(sibling->getNamespaceURI()));
		if (var$0 && $nc($(sibling->getLocalName()))->equals(nodeName)) {
			if (number == 0) {
				return $cast($Element, sibling);
			}
			--number;
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return nullptr;
}

$Element* XMLUtils::selectNode($Node* sibling$renamed, $String* uri, $String* nodeName, int32_t number) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	$var($Node, sibling, sibling$renamed);
	while (sibling != nullptr) {
		bool var$1 = sibling->getNamespaceURI() != nullptr;
		bool var$0 = var$1 && $nc($(sibling->getNamespaceURI()))->equals(uri);
		if (var$0 && $nc($(sibling->getLocalName()))->equals(nodeName)) {
			if (number == 0) {
				return $cast($Element, sibling);
			}
			--number;
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return nullptr;
}

$ElementArray* XMLUtils::selectDsNodes($Node* sibling, $String* nodeName) {
	$init(XMLUtils);
	$init($Constants);
	return selectNodes(sibling, $Constants::SignatureSpecNS, nodeName);
}

$ElementArray* XMLUtils::selectDs11Nodes($Node* sibling, $String* nodeName) {
	$init(XMLUtils);
	$init($Constants);
	return selectNodes(sibling, $Constants::SignatureSpec11NS, nodeName);
}

$ElementArray* XMLUtils::selectNodes($Node* sibling$renamed, $String* uri, $String* nodeName) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	$var($Node, sibling, sibling$renamed);
	$var($List, list, $new($ArrayList));
	while (sibling != nullptr) {
		bool var$1 = sibling->getNamespaceURI() != nullptr;
		bool var$0 = var$1 && $nc($(sibling->getNamespaceURI()))->equals(uri);
		if (var$0 && $nc($(sibling->getLocalName()))->equals(nodeName)) {
			list->add($cast($Element, sibling));
		}
		$assign(sibling, sibling->getNextSibling());
	}
	return $fcast($ElementArray, list->toArray($$new($ElementArray, list->size())));
}

$Set* XMLUtils::excludeNodeFromSet($Node* signatureElement, $Set* inputSet) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	return $cast($Set, $nc($($nc($($nc(inputSet)->stream()))->filter(static_cast<$Predicate*>($$new(XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2, signatureElement)))))->collect($($Collectors::toSet())));
}

$String* XMLUtils::getStrFromNode($Node* xpathnode) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	if ($nc(xpathnode)->getNodeType() == $Node::TEXT_NODE) {
		$var($StringBuilder, sb, $new($StringBuilder));
		{
			$var($Node, currentSibling, $nc($(xpathnode->getParentNode()))->getFirstChild());
			for (; currentSibling != nullptr; $assign(currentSibling, $nc(currentSibling)->getNextSibling())) {
				if (currentSibling->getNodeType() == $Node::TEXT_NODE) {
					sb->append($($nc(($cast($Text, currentSibling)))->getData()));
				}
			}
		}
		return sb->toString();
	} else if (xpathnode->getNodeType() == $Node::ATTRIBUTE_NODE) {
		return xpathnode->getNodeValue();
	} else if (xpathnode->getNodeType() == $Node::PROCESSING_INSTRUCTION_NODE) {
		return xpathnode->getNodeValue();
	}
	return nullptr;
}

bool XMLUtils::isDescendantOrSelf($Node* ctx, $Node* descendantOrSelf) {
	$init(XMLUtils);
	if (ctx == descendantOrSelf) {
		return true;
	}
	$var($Node, parent, descendantOrSelf);
	while (true) {
		if (parent == nullptr) {
			return false;
		}
		if (parent == ctx) {
			return true;
		}
		if ($nc(parent)->getNodeType() == $Node::ATTRIBUTE_NODE) {
			$assign(parent, $nc(($cast($Attr, parent)))->getOwnerElement());
		} else {
			$assign(parent, parent->getParentNode());
		}
	}
}

bool XMLUtils::ignoreLineBreaks() {
	$init(XMLUtils);
	return XMLUtils::ignoreLineBreaks$;
}

bool XMLUtils::protectAgainstWrappingAttack($Node* startNode$renamed, $String* value) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	$var($Node, startNode, startNode$renamed);
	$var($String, id, $nc(value)->trim());
	bool var$0 = !id->isEmpty();
	if (var$0 && id->charAt(0) == u'#') {
		$assign(id, id->substring(1));
	}
	$var($Node, startParent, nullptr);
	$var($Node, processedNode, nullptr);
	$var($Element, foundElement, nullptr);
	if (startNode != nullptr) {
		$assign(startParent, startNode->getParentNode());
	}
	while (startNode != nullptr) {
		if (startNode->getNodeType() == $Node::ELEMENT_NODE) {
			$var($Element, se, $cast($Element, startNode));
			$var($NamedNodeMap, attributes, se->getAttributes());
			if (attributes != nullptr) {
				int32_t length = attributes->getLength();
				for (int32_t i = 0; i < length; ++i) {
					$var($Attr, attr, $cast($Attr, attributes->item(i)));
					bool var$1 = $nc(attr)->isId();
					if (var$1 && id->equals($(attr->getValue()))) {
						if (foundElement == nullptr) {
							$assign(foundElement, attr->getOwnerElement());
						} else {
							$nc(XMLUtils::LOG)->debug("Multiple elements with the same \'Id\' attribute value!"_s);
							return false;
						}
					}
				}
			}
		}
		$assign(processedNode, startNode);
		$assign(startNode, startNode->getFirstChild());
		if (startNode == nullptr) {
			$assign(startNode, processedNode->getNextSibling());
		}
		while (startNode == nullptr) {
			$assign(processedNode, $nc(processedNode)->getParentNode());
			if (processedNode == startParent) {
				return true;
			}
			$assign(startNode, processedNode->getNextSibling());
		}
	}
	return true;
}

bool XMLUtils::protectAgainstWrappingAttack($Node* startNode$renamed, $Element* knownElement, $String* value) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	$var($Node, startNode, startNode$renamed);
	$var($String, id, $nc(value)->trim());
	bool var$0 = !id->isEmpty();
	if (var$0 && id->charAt(0) == u'#') {
		$assign(id, id->substring(1));
	}
	$var($Node, startParent, nullptr);
	$var($Node, processedNode, nullptr);
	if (startNode != nullptr) {
		$assign(startParent, startNode->getParentNode());
	}
	while (startNode != nullptr) {
		if (startNode->getNodeType() == $Node::ELEMENT_NODE) {
			$var($Element, se, $cast($Element, startNode));
			$var($NamedNodeMap, attributes, se->getAttributes());
			if (attributes != nullptr) {
				int32_t length = attributes->getLength();
				for (int32_t i = 0; i < length; ++i) {
					$var($Attr, attr, $cast($Attr, attributes->item(i)));
					bool var$1 = $nc(attr)->isId();
					if (var$1 && id->equals($(attr->getValue())) && se != knownElement) {
						$nc(XMLUtils::LOG)->debug("Multiple elements with the same \'Id\' attribute value!"_s);
						return false;
					}
				}
			}
		}
		$assign(processedNode, startNode);
		$assign(startNode, startNode->getFirstChild());
		if (startNode == nullptr) {
			$assign(startNode, processedNode->getNextSibling());
		}
		while (startNode == nullptr) {
			$assign(processedNode, $nc(processedNode)->getParentNode());
			if (processedNode == startParent) {
				return true;
			}
			$assign(startNode, processedNode->getNextSibling());
		}
	}
	return true;
}

$Document* XMLUtils::read($InputStream* inputStream, bool disallowDocTypeDeclarations) {
	$init(XMLUtils);
	return $nc(XMLUtils::xmlParserImpl)->parse(inputStream, disallowDocTypeDeclarations);
}

$bytes* XMLUtils::getBytes($BigInteger* big, int32_t bitlen) {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	bitlen = ((bitlen + 7) >> 3) << 3;
	if (bitlen < $nc(big)->bitLength()) {
		$throwNew($IllegalArgumentException, $($I18n::translate("utils.Base64.IllegalBitlength"_s)));
	}
	$var($bytes, bigBytes, $nc(big)->toByteArray());
	bool var$0 = big->bitLength() % 8 != 0;
	if (var$0 && big->bitLength() / 8 + 1 == bitlen / 8) {
		return bigBytes;
	}
	int32_t startSrc = 0;
	int32_t bigLen = $nc(bigBytes)->length;
	if (big->bitLength() % 8 == 0) {
		startSrc = 1;
		--bigLen;
	}
	int32_t startDst = bitlen / 8 - bigLen;
	$var($bytes, resizedBytes, $new($bytes, bitlen / 8));
	$System::arraycopy(bigBytes, startSrc, resizedBytes, startDst, bigLen);
	return resizedBytes;
}

bool XMLUtils::lambda$excludeNodeFromSet$2($Node* signatureElement, $Node* inputNode) {
	$init(XMLUtils);
	return !XMLUtils::isDescendantOrSelf(signatureElement, inputNode);
}

$XMLParser* XMLUtils::lambda$static$1() {
	$init(XMLUtils);
	$useLocalCurrentObjectStackCache();
	$var($String, xmlParserClass, $System::getProperty("com.sun.org.apache.xml.internal.security.XMLParser"_s));
	if (xmlParserClass != nullptr) {
		try {
			return $cast($XMLParser, $JavaUtils::newInstanceWithEmptyConstructor($ClassLoaderUtils::loadClass(xmlParserClass, XMLUtils::class$)));
		} catch ($ClassNotFoundException&) {
			$var($ReflectiveOperationException, e, $catch());
			$nc(XMLUtils::LOG)->error("Error instantiating XMLParser. Falling back to XMLParserImpl"_s);
		} catch ($IllegalAccessException&) {
			$var($ReflectiveOperationException, e, $catch());
			$nc(XMLUtils::LOG)->error("Error instantiating XMLParser. Falling back to XMLParserImpl"_s);
		} catch ($InstantiationException&) {
			$var($ReflectiveOperationException, e, $catch());
			$nc(XMLUtils::LOG)->error("Error instantiating XMLParser. Falling back to XMLParserImpl"_s);
		} catch ($InvocationTargetException&) {
			$var($ReflectiveOperationException, e, $catch());
			$nc(XMLUtils::LOG)->error("Error instantiating XMLParser. Falling back to XMLParserImpl"_s);
		}
	}
	return $new($XMLParserImpl);
}

$Boolean* XMLUtils::lambda$static$0() {
	$init(XMLUtils);
	return $Boolean::valueOf($Boolean::getBoolean("com.sun.org.apache.xml.internal.security.ignoreLineBreaks"_s));
}

void clinit$XMLUtils($Class* class$) {
	$useLocalCurrentObjectStackCache();
	$beforeCallerSensitive();
	XMLUtils::ignoreLineBreaks$ = $nc(($cast($Boolean, $($AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(XMLUtils$$Lambda$lambda$static$0)))))))->booleanValue();
	$assignStatic(XMLUtils::LOG, $LoggerFactory::getLogger(XMLUtils::class$));
	$assignStatic(XMLUtils::xmlParserImpl, $cast($XMLParser, $AccessController::doPrivileged(static_cast<$PrivilegedAction*>($$new(XMLUtils$$Lambda$lambda$static$1$1)))));
	$assignStatic(XMLUtils::dsPrefix, "ds"_s);
	$assignStatic(XMLUtils::ds11Prefix, "dsig11"_s);
	$assignStatic(XMLUtils::xencPrefix, "xenc"_s);
	$assignStatic(XMLUtils::xenc11Prefix, "xenc11"_s);
}

XMLUtils::XMLUtils() {
}

$Class* XMLUtils::load$($String* name, bool initialize) {
	if (name != nullptr) {
		if (name->equals(XMLUtils$$Lambda$lambda$static$0::classInfo$.name)) {
			return XMLUtils$$Lambda$lambda$static$0::load$(name, initialize);
		}
		if (name->equals(XMLUtils$$Lambda$lambda$static$1$1::classInfo$.name)) {
			return XMLUtils$$Lambda$lambda$static$1$1::load$(name, initialize);
		}
		if (name->equals(XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2::classInfo$.name)) {
			return XMLUtils$$Lambda$lambda$excludeNodeFromSet$2$2::load$(name, initialize);
		}
	}
	$loadClass(XMLUtils, name, initialize, &_XMLUtils_ClassInfo_, clinit$XMLUtils, allocate$XMLUtils);
	return class$;
}

$Class* XMLUtils::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com