#include <org/jcp/xml/dsig/internal/dom/DOMCryptoBinary.h>

#include <com/sun/org/apache/xml/internal/security/utils/XMLUtils.h>
#include <java/lang/Array.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/Exception.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/NullPointerException.h>
#include <java/lang/String.h>
#include <java/lang/Throwable.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <java/math/BigInteger.h>
#include <javax/xml/crypto/MarshalException.h>
#include <javax/xml/crypto/dom/DOMCryptoContext.h>
#include <org/jcp/xml/dsig/internal/dom/DOMStructure.h>
#include <org/jcp/xml/dsig/internal/dom/DOMUtils.h>
#include <org/w3c/dom/CharacterData.h>
#include <org/w3c/dom/Document.h>
#include <org/w3c/dom/Node.h>
#include <org/w3c/dom/Text.h>
#include <jcpp.h>

using $XMLUtils = ::com::sun::org::apache::xml::internal::security::utils::XMLUtils;
using $ClassInfo = ::java::lang::ClassInfo;
using $Exception = ::java::lang::Exception;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;
using $NullPointerException = ::java::lang::NullPointerException;
using $BigInteger = ::java::math::BigInteger;
using $MarshalException = ::javax::xml::crypto::MarshalException;
using $DOMCryptoContext = ::javax::xml::crypto::dom::DOMCryptoContext;
using $DOMStructure = ::org::jcp::xml::dsig::internal::dom::DOMStructure;
using $DOMUtils = ::org::jcp::xml::dsig::internal::dom::DOMUtils;
using $CharacterData = ::org::w3c::dom::CharacterData;
using $Document = ::org::w3c::dom::Document;
using $Node = ::org::w3c::dom::Node;
using $Text = ::org::w3c::dom::Text;

namespace org {
	namespace jcp {
		namespace xml {
			namespace dsig {
				namespace internal {
					namespace dom {

$FieldInfo _DOMCryptoBinary_FieldInfo_[] = {
	{"bigNum", "Ljava/math/BigInteger;", nullptr, $PRIVATE | $FINAL, $field(DOMCryptoBinary, bigNum)},
	{"value", "Ljava/lang/String;", nullptr, $PRIVATE | $FINAL, $field(DOMCryptoBinary, value)},
	{}
};

$MethodInfo _DOMCryptoBinary_MethodInfo_[] = {
	{"<init>", "(Ljava/math/BigInteger;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMCryptoBinary::*)($BigInteger*)>(&DOMCryptoBinary::init$))},
	{"<init>", "(Lorg/w3c/dom/Node;)V", nullptr, $PUBLIC, $method(static_cast<void(DOMCryptoBinary::*)($Node*)>(&DOMCryptoBinary::init$)), "javax.xml.crypto.MarshalException"},
	{"getBigNum", "()Ljava/math/BigInteger;", nullptr, $PUBLIC, $method(static_cast<$BigInteger*(DOMCryptoBinary::*)()>(&DOMCryptoBinary::getBigNum))},
	{"marshal", "(Lorg/w3c/dom/Node;Ljava/lang/String;Ljavax/xml/crypto/dom/DOMCryptoContext;)V", nullptr, $PUBLIC, nullptr, "javax.xml.crypto.MarshalException"},
	{}
};

$ClassInfo _DOMCryptoBinary_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"org.jcp.xml.dsig.internal.dom.DOMCryptoBinary",
	"org.jcp.xml.dsig.internal.dom.DOMStructure",
	nullptr,
	_DOMCryptoBinary_FieldInfo_,
	_DOMCryptoBinary_MethodInfo_
};

$Object* allocate$DOMCryptoBinary($Class* clazz) {
	return $of($alloc(DOMCryptoBinary));
}

void DOMCryptoBinary::init$($BigInteger* bigNum) {
	$DOMStructure::init$();
	if (bigNum == nullptr) {
		$throwNew($NullPointerException, "bigNum is null"_s);
	}
	$set(this, bigNum, bigNum);
	$var($bytes, bytes, $XMLUtils::getBytes(bigNum, $nc(bigNum)->bitLength()));
	$set(this, value, $XMLUtils::encodeToString(bytes));
}

void DOMCryptoBinary::init$($Node* cbNode) {
	$DOMStructure::init$();
	$set(this, value, $nc(cbNode)->getNodeValue());
	try {
		$set(this, bigNum, $new($BigInteger, 1, $($XMLUtils::decode($($nc(($cast($Text, cbNode)))->getData())))));
	} catch ($Exception&) {
		$var($Exception, ex, $catch());
		$throwNew($MarshalException, static_cast<$Throwable*>(ex));
	}
}

$BigInteger* DOMCryptoBinary::getBigNum() {
	return this->bigNum;
}

void DOMCryptoBinary::marshal($Node* parent, $String* prefix, $DOMCryptoContext* context) {
	$nc(parent)->appendChild($($nc($($DOMUtils::getOwnerDocument(parent)))->createTextNode(this->value)));
}

DOMCryptoBinary::DOMCryptoBinary() {
}

$Class* DOMCryptoBinary::load$($String* name, bool initialize) {
	$loadClass(DOMCryptoBinary, name, initialize, &_DOMCryptoBinary_ClassInfo_, allocate$DOMCryptoBinary);
	return class$;
}

$Class* DOMCryptoBinary::class$ = nullptr;

					} // dom
				} // internal
			} // dsig
		} // xml
	} // jcp
} // org