#include <com/sun/org/apache/xml/internal/security/c14n/Canonicalizer.h>

#include <com/sun/org/apache/xml/internal/security/c14n/CanonicalizerSpi.h>
#include <com/sun/org/apache/xml/internal/security/c14n/ClassLoaderUtils.h>
#include <com/sun/org/apache/xml/internal/security/c14n/InvalidCanonicalizerException.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer11_OmitComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer11_WithComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315ExclOmitComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315ExclWithComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315OmitComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/Canonicalizer20010315WithComments.h>
#include <com/sun/org/apache/xml/internal/security/c14n/implementations/CanonicalizerPhysical.h>
#include <com/sun/org/apache/xml/internal/security/exceptions/AlgorithmAlreadyRegisteredException.h>
#include <com/sun/org/apache/xml/internal/security/utils/JavaUtils.h>
#include <java/io/OutputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/nio/charset/Charset.h>
#include <java/nio/charset/StandardCharsets.h>
#include <java/util/AbstractMap.h>
#include <java/util/Map.h>
#include <java/util/Set.h>
#include <java/util/concurrent/ConcurrentHashMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ALGO_ID_C14N_EXCL_OMIT_COMMENTS
#undef ALGO_ID_C14N_EXCL_WITH_COMMENTS
#undef ALGO_ID_C14N_OMIT_COMMENTS
#undef ALGO_ID_C14N_PHYSICAL
#undef ALGO_ID_C14N_WITH_COMMENTS
#undef ENCODING
#undef UTF_8
#undef XPATH_C14N_WITH_COMMENTS_SINGLE_NODE

using $CanonicalizerSpi = ::com::sun::org::apache::xml::internal::security::c14n::CanonicalizerSpi;
using $ClassLoaderUtils = ::com::sun::org::apache::xml::internal::security::c14n::ClassLoaderUtils;
using $InvalidCanonicalizerException = ::com::sun::org::apache::xml::internal::security::c14n::InvalidCanonicalizerException;
using $Canonicalizer11_OmitComments = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer11_OmitComments;
using $Canonicalizer11_WithComments = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer11_WithComments;
using $Canonicalizer20010315ExclOmitComments = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315ExclOmitComments;
using $Canonicalizer20010315ExclWithComments = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315ExclWithComments;
using $Canonicalizer20010315OmitComments = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315OmitComments;
using $Canonicalizer20010315WithComments = ::com::sun::org::apache::xml::internal::security::c14n::implementations::Canonicalizer20010315WithComments;
using $CanonicalizerPhysical = ::com::sun::org::apache::xml::internal::security::c14n::implementations::CanonicalizerPhysical;
using $AlgorithmAlreadyRegisteredException = ::com::sun::org::apache::xml::internal::security::exceptions::AlgorithmAlreadyRegisteredException;
using $JavaUtils = ::com::sun::org::apache::xml::internal::security::utils::JavaUtils;
using $OutputStream = ::java::io::OutputStream;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Charset = ::java::nio::charset::Charset;
using $StandardCharsets = ::java::nio::charset::StandardCharsets;
using $AbstractMap = ::java::util::AbstractMap;
using $Map = ::java::util::Map;
using $Set = ::java::util::Set;
using $ConcurrentHashMap = ::java::util::concurrent::ConcurrentHashMap;
using $Node = ::org::w3c::dom::Node;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {

$FieldInfo _Canonicalizer_FieldInfo_[] = {
	{"ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Canonicalizer, ENCODING)},
	{"XPATH_C14N_WITH_COMMENTS_SINGLE_NODE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Canonicalizer, XPATH_C14N_WITH_COMMENTS_SINGLE_NODE)},
	{"ALGO_ID_C14N_OMIT_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Canonicalizer, ALGO_ID_C14N_OMIT_COMMENTS)},
	{"ALGO_ID_C14N_WITH_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Canonicalizer, ALGO_ID_C14N_WITH_COMMENTS)},
	{"ALGO_ID_C14N_EXCL_OMIT_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Canonicalizer, ALGO_ID_C14N_EXCL_OMIT_COMMENTS)},
	{"ALGO_ID_C14N_EXCL_WITH_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Canonicalizer, ALGO_ID_C14N_EXCL_WITH_COMMENTS)},
	{"ALGO_ID_C14N11_OMIT_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Canonicalizer, ALGO_ID_C14N11_OMIT_COMMENTS)},
	{"ALGO_ID_C14N11_WITH_COMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Canonicalizer, ALGO_ID_C14N11_WITH_COMMENTS)},
	{"ALGO_ID_C14N_PHYSICAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Canonicalizer, ALGO_ID_C14N_PHYSICAL)},
	{"canonicalizerHash", "Ljava/util/Map;", "Ljava/util/Map<Ljava/lang/String;Ljava/lang/Class<+Lcom/sun/org/apache/xml/internal/security/c14n/CanonicalizerSpi;>;>;", $PRIVATE | $STATIC, $staticField(Canonicalizer, canonicalizerHash)},
	{"canonicalizerSpi", "Lcom/sun/org/apache/xml/internal/security/c14n/CanonicalizerSpi;", nullptr, $PRIVATE | $FINAL, $field(Canonicalizer, canonicalizerSpi)},
	{}
};

$MethodInfo _Canonicalizer_MethodInfo_[] = {
	{"<init>", "(Ljava/lang/String;)V", nullptr, $PRIVATE, $method(static_cast<void(Canonicalizer::*)($String*)>(&Canonicalizer::init$)), "com.sun.org.apache.xml.internal.security.c14n.InvalidCanonicalizerException"},
	{"canonicalize", "([BLjava/io/OutputStream;Z)V", nullptr, $PUBLIC, $method(static_cast<void(Canonicalizer::*)($bytes*,$OutputStream*,bool)>(&Canonicalizer::canonicalize)), "com.sun.org.apache.xml.internal.security.parser.XMLParserException,java.io.IOException,com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"canonicalizeSubtree", "(Lorg/w3c/dom/Node;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(Canonicalizer::*)($Node*,$OutputStream*)>(&Canonicalizer::canonicalizeSubtree)), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"canonicalizeSubtree", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(Canonicalizer::*)($Node*,$String*,$OutputStream*)>(&Canonicalizer::canonicalizeSubtree)), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"canonicalizeSubtree", "(Lorg/w3c/dom/Node;Ljava/lang/String;ZLjava/io/OutputStream;)V", nullptr, $PUBLIC, $method(static_cast<void(Canonicalizer::*)($Node*,$String*,bool,$OutputStream*)>(&Canonicalizer::canonicalizeSubtree)), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"canonicalizeXPathNodeSet", "(Ljava/util/Set;Ljava/io/OutputStream;)V", "(Ljava/util/Set<Lorg/w3c/dom/Node;>;Ljava/io/OutputStream;)V", $PUBLIC, $method(static_cast<void(Canonicalizer::*)($Set*,$OutputStream*)>(&Canonicalizer::canonicalizeXPathNodeSet)), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"canonicalizeXPathNodeSet", "(Ljava/util/Set;Ljava/lang/String;Ljava/io/OutputStream;)V", "(Ljava/util/Set<Lorg/w3c/dom/Node;>;Ljava/lang/String;Ljava/io/OutputStream;)V", $PUBLIC, $method(static_cast<void(Canonicalizer::*)($Set*,$String*,$OutputStream*)>(&Canonicalizer::canonicalizeXPathNodeSet)), "com.sun.org.apache.xml.internal.security.c14n.CanonicalizationException"},
	{"getInstance", "(Ljava/lang/String;)Lcom/sun/org/apache/xml/internal/security/c14n/Canonicalizer;", nullptr, $PUBLIC | $STATIC | $FINAL, $method(static_cast<Canonicalizer*(*)($String*)>(&Canonicalizer::getInstance)), "com.sun.org.apache.xml.internal.security.c14n.InvalidCanonicalizerException"},
	{"register", "(Ljava/lang/String;Ljava/lang/String;)V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$String*)>(&Canonicalizer::register$)), "com.sun.org.apache.xml.internal.security.exceptions.AlgorithmAlreadyRegisteredException,java.lang.ClassNotFoundException"},
	{"register", "(Ljava/lang/String;Ljava/lang/Class;)V", "(Ljava/lang/String;Ljava/lang/Class<+Lcom/sun/org/apache/xml/internal/security/c14n/CanonicalizerSpi;>;)V", $PUBLIC | $STATIC, $method(static_cast<void(*)($String*,$Class*)>(&Canonicalizer::register$)), "com.sun.org.apache.xml.internal.security.exceptions.AlgorithmAlreadyRegisteredException,java.lang.ClassNotFoundException"},
	{"registerDefaultAlgorithms", "()V", nullptr, $PUBLIC | $STATIC, $method(static_cast<void(*)()>(&Canonicalizer::registerDefaultAlgorithms))},
	{}
};

$ClassInfo _Canonicalizer_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.c14n.Canonicalizer",
	"java.lang.Object",
	nullptr,
	_Canonicalizer_FieldInfo_,
	_Canonicalizer_MethodInfo_
};

$Object* allocate$Canonicalizer($Class* clazz) {
	return $of($alloc(Canonicalizer));
}


$String* Canonicalizer::ENCODING = nullptr;

$String* Canonicalizer::XPATH_C14N_WITH_COMMENTS_SINGLE_NODE = nullptr;

$String* Canonicalizer::ALGO_ID_C14N_OMIT_COMMENTS = nullptr;

$String* Canonicalizer::ALGO_ID_C14N_WITH_COMMENTS = nullptr;

$String* Canonicalizer::ALGO_ID_C14N_EXCL_OMIT_COMMENTS = nullptr;

$String* Canonicalizer::ALGO_ID_C14N_EXCL_WITH_COMMENTS = nullptr;

$String* Canonicalizer::ALGO_ID_C14N11_OMIT_COMMENTS = nullptr;

$String* Canonicalizer::ALGO_ID_C14N11_WITH_COMMENTS = nullptr;

$String* Canonicalizer::ALGO_ID_C14N_PHYSICAL = nullptr;
$Map* Canonicalizer::canonicalizerHash = nullptr;

void Canonicalizer::init$($String* algorithmURI) {
	$useLocalCurrentObjectStackCache();
	try {
		$Class* implementingClass = $cast($Class, $nc(Canonicalizer::canonicalizerHash)->get(algorithmURI));
		$set(this, canonicalizerSpi, $cast($CanonicalizerSpi, $JavaUtils::newInstanceWithEmptyConstructor(implementingClass)));
	} catch ($Exception&) {
		$var($Exception, e, $catch());
		$var($ObjectArray, exArgs, $new($ObjectArray, {$of(algorithmURI)}));
		$throwNew($InvalidCanonicalizerException, e, "signature.Canonicalizer.UnknownCanonicalizer"_s, exArgs);
	}
}

Canonicalizer* Canonicalizer::getInstance($String* algorithmURI) {
	$init(Canonicalizer);
	return $new(Canonicalizer, algorithmURI);
}

void Canonicalizer::register$($String* algorithmURI, $String* implementingClass) {
	$init(Canonicalizer);
	$JavaUtils::checkRegisterPermission();
	$Class* registeredClass = $cast($Class, $nc(Canonicalizer::canonicalizerHash)->get(algorithmURI));
	if (registeredClass != nullptr) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmURI),
			$of(registeredClass)
		}));
		$throwNew($AlgorithmAlreadyRegisteredException, "algorithm.alreadyRegistered"_s, exArgs);
	}
	$nc(Canonicalizer::canonicalizerHash)->put(algorithmURI, $ClassLoaderUtils::loadClass(implementingClass, Canonicalizer::class$));
}

void Canonicalizer::register$($String* algorithmURI, $Class* implementingClass) {
	$init(Canonicalizer);
	$JavaUtils::checkRegisterPermission();
	$Class* registeredClass = $cast($Class, $nc(Canonicalizer::canonicalizerHash)->get(algorithmURI));
	if (registeredClass != nullptr) {
		$var($ObjectArray, exArgs, $new($ObjectArray, {
			$of(algorithmURI),
			$of(registeredClass)
		}));
		$throwNew($AlgorithmAlreadyRegisteredException, "algorithm.alreadyRegistered"_s, exArgs);
	}
	$nc(Canonicalizer::canonicalizerHash)->put(algorithmURI, implementingClass);
}

void Canonicalizer::registerDefaultAlgorithms() {
	$init(Canonicalizer);
	$load($Canonicalizer20010315OmitComments);
	$nc(Canonicalizer::canonicalizerHash)->put(Canonicalizer::ALGO_ID_C14N_OMIT_COMMENTS, $Canonicalizer20010315OmitComments::class$);
	$load($Canonicalizer20010315WithComments);
	$nc(Canonicalizer::canonicalizerHash)->put(Canonicalizer::ALGO_ID_C14N_WITH_COMMENTS, $Canonicalizer20010315WithComments::class$);
	$load($Canonicalizer20010315ExclOmitComments);
	$nc(Canonicalizer::canonicalizerHash)->put(Canonicalizer::ALGO_ID_C14N_EXCL_OMIT_COMMENTS, $Canonicalizer20010315ExclOmitComments::class$);
	$load($Canonicalizer20010315ExclWithComments);
	$nc(Canonicalizer::canonicalizerHash)->put(Canonicalizer::ALGO_ID_C14N_EXCL_WITH_COMMENTS, $Canonicalizer20010315ExclWithComments::class$);
	$load($Canonicalizer11_OmitComments);
	$nc(Canonicalizer::canonicalizerHash)->put(Canonicalizer::ALGO_ID_C14N11_OMIT_COMMENTS, $Canonicalizer11_OmitComments::class$);
	$load($Canonicalizer11_WithComments);
	$nc(Canonicalizer::canonicalizerHash)->put(Canonicalizer::ALGO_ID_C14N11_WITH_COMMENTS, $Canonicalizer11_WithComments::class$);
	$load($CanonicalizerPhysical);
	$nc(Canonicalizer::canonicalizerHash)->put(Canonicalizer::ALGO_ID_C14N_PHYSICAL, $CanonicalizerPhysical::class$);
}

void Canonicalizer::canonicalize($bytes* inputBytes, $OutputStream* writer, bool secureValidation) {
	$nc(this->canonicalizerSpi)->engineCanonicalize(inputBytes, writer, secureValidation);
}

void Canonicalizer::canonicalizeSubtree($Node* node, $OutputStream* writer) {
	$nc(this->canonicalizerSpi)->engineCanonicalizeSubTree(node, writer);
}

void Canonicalizer::canonicalizeSubtree($Node* node, $String* inclusiveNamespaces, $OutputStream* writer) {
	$nc(this->canonicalizerSpi)->engineCanonicalizeSubTree(node, inclusiveNamespaces, writer);
}

void Canonicalizer::canonicalizeSubtree($Node* node, $String* inclusiveNamespaces, bool propagateDefaultNamespace, $OutputStream* writer) {
	$nc(this->canonicalizerSpi)->engineCanonicalizeSubTree(node, inclusiveNamespaces, propagateDefaultNamespace, writer);
}

void Canonicalizer::canonicalizeXPathNodeSet($Set* xpathNodeSet, $OutputStream* writer) {
	$nc(this->canonicalizerSpi)->engineCanonicalizeXPathNodeSet(xpathNodeSet, writer);
}

void Canonicalizer::canonicalizeXPathNodeSet($Set* xpathNodeSet, $String* inclusiveNamespaces, $OutputStream* writer) {
	$nc(this->canonicalizerSpi)->engineCanonicalizeXPathNodeSet(xpathNodeSet, inclusiveNamespaces, writer);
}

void clinit$Canonicalizer($Class* class$) {
	$assignStatic(Canonicalizer::XPATH_C14N_WITH_COMMENTS_SINGLE_NODE, "(.//. | .//@* | .//namespace::*)"_s);
	$assignStatic(Canonicalizer::ALGO_ID_C14N_OMIT_COMMENTS, "http://www.w3.org/TR/2001/REC-xml-c14n-20010315"_s);
	$assignStatic(Canonicalizer::ALGO_ID_C14N_WITH_COMMENTS, $str({Canonicalizer::ALGO_ID_C14N_OMIT_COMMENTS, "#WithComments"_s}));
	$assignStatic(Canonicalizer::ALGO_ID_C14N_EXCL_OMIT_COMMENTS, "http://www.w3.org/2001/10/xml-exc-c14n#"_s);
	$assignStatic(Canonicalizer::ALGO_ID_C14N_EXCL_WITH_COMMENTS, $str({Canonicalizer::ALGO_ID_C14N_EXCL_OMIT_COMMENTS, "WithComments"_s}));
	$assignStatic(Canonicalizer::ALGO_ID_C14N11_OMIT_COMMENTS, "http://www.w3.org/2006/12/xml-c14n11"_s);
	$assignStatic(Canonicalizer::ALGO_ID_C14N11_WITH_COMMENTS, $str({Canonicalizer::ALGO_ID_C14N11_OMIT_COMMENTS, "#WithComments"_s}));
	$assignStatic(Canonicalizer::ALGO_ID_C14N_PHYSICAL, "http://santuario.apache.org/c14n/physical"_s);
	$init($StandardCharsets);
	$assignStatic(Canonicalizer::ENCODING, $nc($StandardCharsets::UTF_8)->name());
	$assignStatic(Canonicalizer::canonicalizerHash, static_cast<$Map*>(static_cast<$AbstractMap*>($new($ConcurrentHashMap))));
}

Canonicalizer::Canonicalizer() {
}

$Class* Canonicalizer::load$($String* name, bool initialize) {
	$loadClass(Canonicalizer, name, initialize, &_Canonicalizer_ClassInfo_, clinit$Canonicalizer, allocate$Canonicalizer);
	return class$;
}

$Class* Canonicalizer::class$ = nullptr;

							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com