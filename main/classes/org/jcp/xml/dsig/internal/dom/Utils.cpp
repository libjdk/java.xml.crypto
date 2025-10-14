#include <org/jcp/xml/dsig/internal/dom/Utils.h>

#include <java/io/ByteArrayOutputStream.h>
#include <java/io/InputStream.h>
#include <java/lang/Array.h>
#include <java/lang/Boolean.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/util/AbstractSet.h>
#include <java/util/HashSet.h>
#include <java/util/Iterator.h>
#include <java/util/Set.h>
#include <javax/xml/crypto/XMLCryptoContext.h>
#include <org/w3c/dom/NamedNodeMap.h>
#include <org/w3c/dom/Node.h>
#include <jcpp.h>

#undef ELEMENT_NODE

using $ByteArrayOutputStream = ::java::io::ByteArrayOutputStream;
using $InputStream = ::java::io::InputStream;
using $Boolean = ::java::lang::Boolean;
using $ClassInfo = ::java::lang::ClassInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $AbstractSet = ::java::util::AbstractSet;
using $HashSet = ::java::util::HashSet;
using $Iterator = ::java::util::Iterator;
using $Set = ::java::util::Set;
using $XMLCryptoContext = ::javax::xml::crypto::XMLCryptoContext;
using $NamedNodeMap = ::org::w3c::dom::NamedNodeMap;
using $Node = ::org::w3c::dom::Node;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$MethodInfo _Utils_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Utils::*)()>(&Utils::init$))},
	{"getBoolean", "(Ljavax/xml/crypto/XMLCryptoContext;Ljava/lang/String;)Z", nullptr, $PRIVATE | $STATIC, $method(static_cast<bool(*)($XMLCryptoContext*,$String*)>(&Utils::getBoolean))},
	{"parseIdFromSameDocumentURI", "(Ljava/lang/String;)Ljava/lang/String;", nullptr, $PUBLIC | $STATIC, $method(static_cast<$String*(*)($String*)>(&Utils::parseIdFromSameDocumentURI))},
	{"readBytesFromStream", "(Ljava/io/InputStream;)[B", nullptr, $PUBLIC | $STATIC, $method(static_cast<$bytes*(*)($InputStream*)>(&Utils::readBytesFromStream)), "java.io.IOException"},
	{"sameDocumentURI", "(Ljava/lang/String;)Z", nullptr, $PUBLIC | $STATIC, $method(static_cast<bool(*)($String*)>(&Utils::sameDocumentURI))},
	{"secureValidation", "(Ljavax/xml/crypto/XMLCryptoContext;)Z", nullptr, $STATIC, $method(static_cast<bool(*)($XMLCryptoContext*)>(&Utils::secureValidation))},
	{"toNodeSet", "(Ljava/util/Iterator;)Ljava/util/Set;", "(Ljava/util/Iterator<*>;)Ljava/util/Set<Lorg/w3c/dom/Node;>;", $STATIC, $method(static_cast<$Set*(*)($Iterator*)>(&Utils::toNodeSet))},
	{}
};

$ClassInfo _Utils_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.Utils",
	"java.lang.Object",
	nullptr,
	nullptr,
	_Utils_MethodInfo_
};

$Object* allocate$Utils($Class* clazz) {
	return $of($alloc(Utils));
}

void Utils::init$() {
}

$bytes* Utils::readBytesFromStream($InputStream* is) {
	{
		$var($ByteArrayOutputStream, baos, $new($ByteArrayOutputStream));
		{
			$var($Throwable, var$0, nullptr);
			$var($bytes, var$2, nullptr);
			bool return$1 = false;
			try {
				try {
					$var($bytes, buf, $new($bytes, 1024));
					while (true) {
						int32_t read = $nc(is)->read(buf);
						if (read == -1) {
							break;
						}
						baos->write(buf, 0, read);
						if (read < 1024) {
							break;
						}
					}
					$assign(var$2, baos->toByteArray());
					return$1 = true;
					goto $finally;
				} catch ($Throwable&) {
					$var($Throwable, t$, $catch());
					try {
						baos->close();
					} catch ($Throwable&) {
						$var($Throwable, x2, $catch());
						t$->addSuppressed(x2);
					}
					$throw(t$);
				}
			} catch ($Throwable&) {
				$assign(var$0, $catch());
			} $finally: {
				baos->close();
			}
			if (var$0 != nullptr) {
				$throw(var$0);
			}
			if (return$1) {
				return var$2;
			}
		}
	}
	$shouldNotReachHere();
}

$Set* Utils::toNodeSet($Iterator* i) {
	$var($Set, nodeSet, $new($HashSet));
	while ($nc(i)->hasNext()) {
		$var($Node, n, $cast($Node, i->next()));
		nodeSet->add(n);
		if ($nc(n)->getNodeType() == $Node::ELEMENT_NODE) {
			$var($NamedNodeMap, nnm, n->getAttributes());
			{
				int32_t j = 0;
				int32_t length = $nc(nnm)->getLength();
				for (; j < length; ++j) {
					nodeSet->add($(nnm->item(j)));
				}
			}
		}
	}
	return nodeSet;
}

$String* Utils::parseIdFromSameDocumentURI($String* uri) {
	if ($nc(uri)->length() == 0) {
		return nullptr;
	}
	$var($String, id, $nc(uri)->substring(1));
	if (id->startsWith("xpointer(id("_s)) {
		int32_t i1 = id->indexOf((int32_t)u'\'');
		int32_t i2 = id->indexOf((int32_t)u'\'', i1 + 1);
		$assign(id, id->substring(i1 + 1, i2));
	}
	return id;
}

bool Utils::sameDocumentURI($String* uri) {
	bool var$0 = uri != nullptr;
	if (var$0) {
		bool var$1 = uri->length() == 0;
		var$0 = (var$1 || uri->charAt(0) == u'#');
	}
	return var$0;
}

bool Utils::secureValidation($XMLCryptoContext* xc) {
	if (xc == nullptr) {
		return false;
	}
	return getBoolean(xc, "org.jcp.xml.dsig.secureValidation"_s);
}

bool Utils::getBoolean($XMLCryptoContext* xc, $String* name) {
	$var($Boolean, value, $cast($Boolean, $nc(xc)->getProperty(name)));
	return value != nullptr && value->booleanValue();
}

Utils::Utils() {
}

$Class* Utils::load$($String* name, bool initialize) {
	$loadClass(Utils, name, initialize, &_Utils_ClassInfo_, allocate$Utils);
	return class$;
}

$Class* Utils::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org