#include <com/sun/org/apache/xml/internal/security/transforms/params/InclusiveNamespaces.h>

#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/StringBuilder.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/Collection.h>
#include <java/util/Iterator.h>
#include <java/util/NavigableSet.h>
#include <java/util/Set.h>
#include <java/util/SortedSet.h>
#include <java/util/TreeSet.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Element.h>
#include <jcpp.h>

#undef _ATT_EC_PREFIXLIST
#undef _TAG_EC_INCLUSIVENAMESPACES

using $TransformParam = ::com::sun::org::apache::xml::internal::security::transforms::TransformParam;
using $ElementProxy = ::com::sun::org::apache::xml::internal::security::utils::ElementProxy;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $Collection = ::java::util::Collection;
using $Iterator = ::java::util::Iterator;
using $NavigableSet = ::java::util::NavigableSet;
using $Set = ::java::util::Set;
using $SortedSet = ::java::util::SortedSet;
using $TreeSet = ::java::util::TreeSet;
using $Document = ::org::w3c::dom::Document;
using $Element = ::org::w3c::dom::Element;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								namespace params {

$FieldInfo _InclusiveNamespaces_FieldInfo_[] = {
	{"_TAG_EC_INCLUSIVENAMESPACES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InclusiveNamespaces, _TAG_EC_INCLUSIVENAMESPACES)},
	{"_ATT_EC_PREFIXLIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InclusiveNamespaces, _ATT_EC_PREFIXLIST)},
	{"ExclusiveCanonicalizationNamespace", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(InclusiveNamespaces, ExclusiveCanonicalizationNamespace)},
	{}
};

$MethodInfo _InclusiveNamespaces_MethodInfo_[] = {
	{"*clone", "()Ljava/lang/Object;", nullptr, $PROTECTED | $NATIVE},
	{"*equals", "(Ljava/lang/Object;)Z", nullptr, $PUBLIC},
	{"*finalize", "()V", nullptr, $PROTECTED | $DEPRECATED},
	{"*hashCode", "()I", nullptr, $PUBLIC | $NATIVE},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InclusiveNamespaces::*)($Document*,$String*)>(&InclusiveNamespaces::init$))},
	{"<init>", "(Lorg/w3c/dom/Document;Ljava/util/Set;)V", "(Lorg/w3c/dom/Document;Ljava/util/Set<Ljava/lang/String;>;)V", $PUBLIC, $method(static_cast<void(InclusiveNamespaces::*)($Document*,$Set*)>(&InclusiveNamespaces::init$))},
	{"<init>", "(Lorg/w3c/dom/Element;Ljava/lang/String;)V", nullptr, $PUBLIC, $method(static_cast<void(InclusiveNamespaces::*)($Element*,$String*)>(&InclusiveNamespaces::init$)), "com.sun.org.apache.xml.internal.security.exceptions.XMLSecurityException"},
	{"getBaseLocalName", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getBaseNamespace", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"getInclusiveNamespaces", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{"prefixStr2Set", "(Ljava/lang/String;)Ljava/util/SortedSet;", "(Ljava/lang/String;)Ljava/util/SortedSet<Ljava/lang/String;>;", $PUBLIC | $STATIC, $method(static_cast<$SortedSet*(*)($String*)>(&InclusiveNamespaces::prefixStr2Set))},
	{"*toString", "()Ljava/lang/String;", nullptr, $PUBLIC},
	{}
};

$ClassInfo _InclusiveNamespaces_ClassInfo_ = {
	$PUBLIC | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.transforms.params.InclusiveNamespaces",
	"com.sun.org.apache.xml.internal.security.utils.ElementProxy",
	"com.sun.org.apache.xml.internal.security.transforms.TransformParam",
	_InclusiveNamespaces_FieldInfo_,
	_InclusiveNamespaces_MethodInfo_
};

$Object* allocate$InclusiveNamespaces($Class* clazz) {
	return $of($alloc(InclusiveNamespaces));
}

int32_t InclusiveNamespaces::hashCode() {
	 return this->$ElementProxy::hashCode();
}

bool InclusiveNamespaces::equals(Object$* arg0) {
	 return this->$ElementProxy::equals(arg0);
}

$Object* InclusiveNamespaces::clone() {
	 return this->$ElementProxy::clone();
}

$String* InclusiveNamespaces::toString() {
	 return this->$ElementProxy::toString();
}

void InclusiveNamespaces::finalize() {
	this->$ElementProxy::finalize();
}


$String* InclusiveNamespaces::_TAG_EC_INCLUSIVENAMESPACES = nullptr;

$String* InclusiveNamespaces::_ATT_EC_PREFIXLIST = nullptr;

$String* InclusiveNamespaces::ExclusiveCanonicalizationNamespace = nullptr;

void InclusiveNamespaces::init$($Document* doc, $String* prefixList) {
	InclusiveNamespaces::init$(doc, $(static_cast<$Set*>(InclusiveNamespaces::prefixStr2Set(prefixList))));
}

void InclusiveNamespaces::init$($Document* doc, $Set* prefixes) {
	$useLocalCurrentObjectStackCache();
	$ElementProxy::init$(doc);
	$var($SortedSet, prefixList, nullptr);
	if ($instanceOf($SortedSet, prefixes)) {
		$assign(prefixList, $cast($SortedSet, prefixes));
	} else {
		$assign(prefixList, $new($TreeSet, static_cast<$Collection*>(prefixes)));
	}
	$var($StringBuilder, sb, $new($StringBuilder));
	{
		$var($Iterator, i$, $nc(prefixList)->iterator());
		for (; $nc(i$)->hasNext();) {
			$var($String, prefix, $cast($String, i$->next()));
			{
				if ("xmlns"_s->equals(prefix)) {
					sb->append("#default "_s);
				} else {
					sb->append(prefix);
					sb->append(u' ');
				}
			}
		}
	}
	setLocalAttribute(InclusiveNamespaces::_ATT_EC_PREFIXLIST, $($nc($(sb->toString()))->trim()));
}

void InclusiveNamespaces::init$($Element* element, $String* baseURI) {
	$ElementProxy::init$(element, baseURI);
}

$String* InclusiveNamespaces::getInclusiveNamespaces() {
	return getLocalAttribute(InclusiveNamespaces::_ATT_EC_PREFIXLIST);
}

$SortedSet* InclusiveNamespaces::prefixStr2Set($String* inclusiveNamespaces) {
	$init(InclusiveNamespaces);
	$useLocalCurrentObjectStackCache();
	$var($SortedSet, prefixes, $new($TreeSet));
	if (inclusiveNamespaces == nullptr || $nc(inclusiveNamespaces)->length() == 0) {
		return prefixes;
	}
	$var($StringArray, tokens, $nc(inclusiveNamespaces)->split("\\s"_s));
	{
		$var($StringArray, arr$, tokens);
		int32_t len$ = arr$->length;
		int32_t i$ = 0;
		for (; i$ < len$; ++i$) {
			$var($String, prefix, arr$->get(i$));
			{
				if ("#default"_s->equals(prefix)) {
					prefixes->add("xmlns"_s);
				} else {
					prefixes->add(prefix);
				}
			}
		}
	}
	return prefixes;
}

$String* InclusiveNamespaces::getBaseNamespace() {
	return InclusiveNamespaces::ExclusiveCanonicalizationNamespace;
}

$String* InclusiveNamespaces::getBaseLocalName() {
	return InclusiveNamespaces::_TAG_EC_INCLUSIVENAMESPACES;
}

InclusiveNamespaces::InclusiveNamespaces() {
}

void clinit$InclusiveNamespaces($Class* class$) {
	$assignStatic(InclusiveNamespaces::_TAG_EC_INCLUSIVENAMESPACES, "InclusiveNamespaces"_s);
	$assignStatic(InclusiveNamespaces::_ATT_EC_PREFIXLIST, "PrefixList"_s);
	$assignStatic(InclusiveNamespaces::ExclusiveCanonicalizationNamespace, "http://www.w3.org/2001/10/xml-exc-c14n#"_s);
}

$Class* InclusiveNamespaces::load$($String* name, bool initialize) {
	$loadClass(InclusiveNamespaces, name, initialize, &_InclusiveNamespaces_ClassInfo_, clinit$InclusiveNamespaces, allocate$InclusiveNamespaces);
	return class$;
}

$Class* InclusiveNamespaces::class$ = nullptr;

								} // params
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com