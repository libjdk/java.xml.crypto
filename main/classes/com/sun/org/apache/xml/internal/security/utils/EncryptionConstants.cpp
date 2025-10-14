#include <com/sun/org/apache/xml/internal/security/utils/EncryptionConstants.h>

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ALGO_ID_AUTHENTICATION_XMLSIGNATURE
#undef ALGO_ID_BLOCKCIPHER_AES128
#undef ALGO_ID_BLOCKCIPHER_AES128_GCM
#undef ALGO_ID_BLOCKCIPHER_AES192
#undef ALGO_ID_BLOCKCIPHER_AES192_GCM
#undef ALGO_ID_BLOCKCIPHER_AES256
#undef ALGO_ID_BLOCKCIPHER_AES256_GCM
#undef ALGO_ID_BLOCKCIPHER_CAMELLIA128
#undef ALGO_ID_BLOCKCIPHER_CAMELLIA192
#undef ALGO_ID_BLOCKCIPHER_CAMELLIA256
#undef ALGO_ID_BLOCKCIPHER_SEED128
#undef ALGO_ID_BLOCKCIPHER_TRIPLEDES
#undef ALGO_ID_C14N_OMITCOMMENTS
#undef ALGO_ID_C14N_WITHCOMMENTS
#undef ALGO_ID_ENCODING_BASE64
#undef ALGO_ID_KEYAGREEMENT_DH
#undef ALGO_ID_KEYTRANSPORT_RSA15
#undef ALGO_ID_KEYTRANSPORT_RSAOAEP
#undef ALGO_ID_KEYTRANSPORT_RSAOAEP_11
#undef ALGO_ID_KEYWRAP_AES128
#undef ALGO_ID_KEYWRAP_AES192
#undef ALGO_ID_KEYWRAP_AES256
#undef ALGO_ID_KEYWRAP_CAMELLIA128
#undef ALGO_ID_KEYWRAP_CAMELLIA192
#undef ALGO_ID_KEYWRAP_CAMELLIA256
#undef ALGO_ID_KEYWRAP_SEED128
#undef ALGO_ID_KEYWRAP_TRIPLEDES
#undef ENCRYPTIONSPECIFICATION_URL
#undef MGF1_SHA1
#undef TYPE_CONTENT
#undef TYPE_ELEMENT
#undef TYPE_MEDIATYPE
#undef _ATT_ALGORITHM
#undef _ATT_ENCODING
#undef _ATT_ID
#undef _ATT_MIMETYPE
#undef _ATT_RECIPIENT
#undef _ATT_TARGET
#undef _ATT_TYPE
#undef _ATT_URI
#undef _TAG_AGREEMENTMETHOD
#undef _TAG_CARRIEDKEYNAME
#undef _TAG_CIPHERDATA
#undef _TAG_CIPHERREFERENCE
#undef _TAG_CIPHERVALUE
#undef _TAG_DATAREFERENCE
#undef _TAG_ENCRYPTEDDATA
#undef _TAG_ENCRYPTEDKEY
#undef _TAG_ENCRYPTIONMETHOD
#undef _TAG_ENCRYPTIONPROPERTIES
#undef _TAG_ENCRYPTIONPROPERTY
#undef _TAG_KA_NONCE
#undef _TAG_KEYREFERENCE
#undef _TAG_KEYSIZE
#undef _TAG_MGF
#undef _TAG_OAEPPARAMS
#undef _TAG_ORIGINATORKEYINFO
#undef _TAG_RECIPIENTKEYINFO
#undef _TAG_REFERENCELIST
#undef _TAG_TRANSFORMS

using $Constants = ::com::sun::org::apache::xml::internal::security::utils::Constants;
using $ClassInfo = ::java::lang::ClassInfo;
using $FieldInfo = ::java::lang::FieldInfo;
using $MethodInfo = ::java::lang::MethodInfo;

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

$FieldInfo _EncryptionConstants_FieldInfo_[] = {
	{"_ATT_ALGORITHM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _ATT_ALGORITHM)},
	{"_ATT_ID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _ATT_ID)},
	{"_ATT_TARGET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _ATT_TARGET)},
	{"_ATT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _ATT_TYPE)},
	{"_ATT_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _ATT_URI)},
	{"_ATT_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _ATT_ENCODING)},
	{"_ATT_RECIPIENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _ATT_RECIPIENT)},
	{"_ATT_MIMETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _ATT_MIMETYPE)},
	{"_TAG_CARRIEDKEYNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_CARRIEDKEYNAME)},
	{"_TAG_CIPHERDATA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_CIPHERDATA)},
	{"_TAG_CIPHERREFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_CIPHERREFERENCE)},
	{"_TAG_CIPHERVALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_CIPHERVALUE)},
	{"_TAG_DATAREFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_DATAREFERENCE)},
	{"_TAG_ENCRYPTEDDATA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_ENCRYPTEDDATA)},
	{"_TAG_ENCRYPTEDKEY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_ENCRYPTEDKEY)},
	{"_TAG_ENCRYPTIONMETHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_ENCRYPTIONMETHOD)},
	{"_TAG_ENCRYPTIONPROPERTIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_ENCRYPTIONPROPERTIES)},
	{"_TAG_ENCRYPTIONPROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_ENCRYPTIONPROPERTY)},
	{"_TAG_KEYREFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_KEYREFERENCE)},
	{"_TAG_KEYSIZE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_KEYSIZE)},
	{"_TAG_OAEPPARAMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_OAEPPARAMS)},
	{"_TAG_MGF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_MGF)},
	{"_TAG_REFERENCELIST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_REFERENCELIST)},
	{"_TAG_TRANSFORMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_TRANSFORMS)},
	{"_TAG_AGREEMENTMETHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_AGREEMENTMETHOD)},
	{"_TAG_KA_NONCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_KA_NONCE)},
	{"_TAG_ORIGINATORKEYINFO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_ORIGINATORKEYINFO)},
	{"_TAG_RECIPIENTKEYINFO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, _TAG_RECIPIENTKEYINFO)},
	{"ENCRYPTIONSPECIFICATION_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ENCRYPTIONSPECIFICATION_URL)},
	{"EncryptionSpecNS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, EncryptionSpecNS)},
	{"EncryptionSpec11NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, EncryptionSpec11NS)},
	{"TYPE_CONTENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, TYPE_CONTENT)},
	{"TYPE_ELEMENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, TYPE_ELEMENT)},
	{"TYPE_MEDIATYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, TYPE_MEDIATYPE)},
	{"ALGO_ID_BLOCKCIPHER_TRIPLEDES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_BLOCKCIPHER_TRIPLEDES)},
	{"ALGO_ID_BLOCKCIPHER_AES128", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_BLOCKCIPHER_AES128)},
	{"ALGO_ID_BLOCKCIPHER_AES256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_BLOCKCIPHER_AES256)},
	{"ALGO_ID_BLOCKCIPHER_AES192", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_BLOCKCIPHER_AES192)},
	{"ALGO_ID_BLOCKCIPHER_AES128_GCM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_BLOCKCIPHER_AES128_GCM)},
	{"ALGO_ID_BLOCKCIPHER_AES192_GCM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_BLOCKCIPHER_AES192_GCM)},
	{"ALGO_ID_BLOCKCIPHER_AES256_GCM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_BLOCKCIPHER_AES256_GCM)},
	{"ALGO_ID_BLOCKCIPHER_SEED128", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_BLOCKCIPHER_SEED128)},
	{"ALGO_ID_BLOCKCIPHER_CAMELLIA128", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_BLOCKCIPHER_CAMELLIA128)},
	{"ALGO_ID_BLOCKCIPHER_CAMELLIA192", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_BLOCKCIPHER_CAMELLIA192)},
	{"ALGO_ID_BLOCKCIPHER_CAMELLIA256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_BLOCKCIPHER_CAMELLIA256)},
	{"ALGO_ID_KEYTRANSPORT_RSA15", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_KEYTRANSPORT_RSA15)},
	{"ALGO_ID_KEYTRANSPORT_RSAOAEP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_KEYTRANSPORT_RSAOAEP)},
	{"ALGO_ID_KEYTRANSPORT_RSAOAEP_11", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_KEYTRANSPORT_RSAOAEP_11)},
	{"ALGO_ID_KEYAGREEMENT_DH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_KEYAGREEMENT_DH)},
	{"ALGO_ID_KEYWRAP_TRIPLEDES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_KEYWRAP_TRIPLEDES)},
	{"ALGO_ID_KEYWRAP_AES128", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_KEYWRAP_AES128)},
	{"ALGO_ID_KEYWRAP_AES256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_KEYWRAP_AES256)},
	{"ALGO_ID_KEYWRAP_AES192", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_KEYWRAP_AES192)},
	{"ALGO_ID_KEYWRAP_CAMELLIA128", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_KEYWRAP_CAMELLIA128)},
	{"ALGO_ID_KEYWRAP_CAMELLIA192", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_KEYWRAP_CAMELLIA192)},
	{"ALGO_ID_KEYWRAP_CAMELLIA256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_KEYWRAP_CAMELLIA256)},
	{"ALGO_ID_KEYWRAP_SEED128", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_KEYWRAP_SEED128)},
	{"ALGO_ID_AUTHENTICATION_XMLSIGNATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_AUTHENTICATION_XMLSIGNATURE)},
	{"ALGO_ID_C14N_WITHCOMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_C14N_WITHCOMMENTS)},
	{"ALGO_ID_C14N_OMITCOMMENTS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_C14N_OMITCOMMENTS)},
	{"ALGO_ID_ENCODING_BASE64", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, ALGO_ID_ENCODING_BASE64)},
	{"MGF1_SHA1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, MGF1_SHA1)},
	{"MGF1_SHA224", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, MGF1_SHA224)},
	{"MGF1_SHA256", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, MGF1_SHA256)},
	{"MGF1_SHA384", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, MGF1_SHA384)},
	{"MGF1_SHA512", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(EncryptionConstants, MGF1_SHA512)},
	{}
};

$MethodInfo _EncryptionConstants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(EncryptionConstants::*)()>(&EncryptionConstants::init$))},
	{}
};

$ClassInfo _EncryptionConstants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.EncryptionConstants",
	"java.lang.Object",
	nullptr,
	_EncryptionConstants_FieldInfo_,
	_EncryptionConstants_MethodInfo_
};

$Object* allocate$EncryptionConstants($Class* clazz) {
	return $of($alloc(EncryptionConstants));
}


$String* EncryptionConstants::_ATT_ALGORITHM = nullptr;

$String* EncryptionConstants::_ATT_ID = nullptr;

$String* EncryptionConstants::_ATT_TARGET = nullptr;

$String* EncryptionConstants::_ATT_TYPE = nullptr;

$String* EncryptionConstants::_ATT_URI = nullptr;

$String* EncryptionConstants::_ATT_ENCODING = nullptr;

$String* EncryptionConstants::_ATT_RECIPIENT = nullptr;

$String* EncryptionConstants::_ATT_MIMETYPE = nullptr;

$String* EncryptionConstants::_TAG_CARRIEDKEYNAME = nullptr;

$String* EncryptionConstants::_TAG_CIPHERDATA = nullptr;

$String* EncryptionConstants::_TAG_CIPHERREFERENCE = nullptr;

$String* EncryptionConstants::_TAG_CIPHERVALUE = nullptr;

$String* EncryptionConstants::_TAG_DATAREFERENCE = nullptr;

$String* EncryptionConstants::_TAG_ENCRYPTEDDATA = nullptr;

$String* EncryptionConstants::_TAG_ENCRYPTEDKEY = nullptr;

$String* EncryptionConstants::_TAG_ENCRYPTIONMETHOD = nullptr;

$String* EncryptionConstants::_TAG_ENCRYPTIONPROPERTIES = nullptr;

$String* EncryptionConstants::_TAG_ENCRYPTIONPROPERTY = nullptr;

$String* EncryptionConstants::_TAG_KEYREFERENCE = nullptr;

$String* EncryptionConstants::_TAG_KEYSIZE = nullptr;

$String* EncryptionConstants::_TAG_OAEPPARAMS = nullptr;

$String* EncryptionConstants::_TAG_MGF = nullptr;

$String* EncryptionConstants::_TAG_REFERENCELIST = nullptr;

$String* EncryptionConstants::_TAG_TRANSFORMS = nullptr;

$String* EncryptionConstants::_TAG_AGREEMENTMETHOD = nullptr;

$String* EncryptionConstants::_TAG_KA_NONCE = nullptr;

$String* EncryptionConstants::_TAG_ORIGINATORKEYINFO = nullptr;

$String* EncryptionConstants::_TAG_RECIPIENTKEYINFO = nullptr;

$String* EncryptionConstants::ENCRYPTIONSPECIFICATION_URL = nullptr;

$String* EncryptionConstants::EncryptionSpecNS = nullptr;

$String* EncryptionConstants::EncryptionSpec11NS = nullptr;

$String* EncryptionConstants::TYPE_CONTENT = nullptr;

$String* EncryptionConstants::TYPE_ELEMENT = nullptr;

$String* EncryptionConstants::TYPE_MEDIATYPE = nullptr;

$String* EncryptionConstants::ALGO_ID_BLOCKCIPHER_TRIPLEDES = nullptr;

$String* EncryptionConstants::ALGO_ID_BLOCKCIPHER_AES128 = nullptr;

$String* EncryptionConstants::ALGO_ID_BLOCKCIPHER_AES256 = nullptr;

$String* EncryptionConstants::ALGO_ID_BLOCKCIPHER_AES192 = nullptr;

$String* EncryptionConstants::ALGO_ID_BLOCKCIPHER_AES128_GCM = nullptr;

$String* EncryptionConstants::ALGO_ID_BLOCKCIPHER_AES192_GCM = nullptr;

$String* EncryptionConstants::ALGO_ID_BLOCKCIPHER_AES256_GCM = nullptr;

$String* EncryptionConstants::ALGO_ID_BLOCKCIPHER_SEED128 = nullptr;

$String* EncryptionConstants::ALGO_ID_BLOCKCIPHER_CAMELLIA128 = nullptr;

$String* EncryptionConstants::ALGO_ID_BLOCKCIPHER_CAMELLIA192 = nullptr;

$String* EncryptionConstants::ALGO_ID_BLOCKCIPHER_CAMELLIA256 = nullptr;

$String* EncryptionConstants::ALGO_ID_KEYTRANSPORT_RSA15 = nullptr;

$String* EncryptionConstants::ALGO_ID_KEYTRANSPORT_RSAOAEP = nullptr;

$String* EncryptionConstants::ALGO_ID_KEYTRANSPORT_RSAOAEP_11 = nullptr;

$String* EncryptionConstants::ALGO_ID_KEYAGREEMENT_DH = nullptr;

$String* EncryptionConstants::ALGO_ID_KEYWRAP_TRIPLEDES = nullptr;

$String* EncryptionConstants::ALGO_ID_KEYWRAP_AES128 = nullptr;

$String* EncryptionConstants::ALGO_ID_KEYWRAP_AES256 = nullptr;

$String* EncryptionConstants::ALGO_ID_KEYWRAP_AES192 = nullptr;

$String* EncryptionConstants::ALGO_ID_KEYWRAP_CAMELLIA128 = nullptr;

$String* EncryptionConstants::ALGO_ID_KEYWRAP_CAMELLIA192 = nullptr;

$String* EncryptionConstants::ALGO_ID_KEYWRAP_CAMELLIA256 = nullptr;

$String* EncryptionConstants::ALGO_ID_KEYWRAP_SEED128 = nullptr;

$String* EncryptionConstants::ALGO_ID_AUTHENTICATION_XMLSIGNATURE = nullptr;

$String* EncryptionConstants::ALGO_ID_C14N_WITHCOMMENTS = nullptr;

$String* EncryptionConstants::ALGO_ID_C14N_OMITCOMMENTS = nullptr;

$String* EncryptionConstants::ALGO_ID_ENCODING_BASE64 = nullptr;

$String* EncryptionConstants::MGF1_SHA1 = nullptr;

$String* EncryptionConstants::MGF1_SHA224 = nullptr;

$String* EncryptionConstants::MGF1_SHA256 = nullptr;

$String* EncryptionConstants::MGF1_SHA384 = nullptr;

$String* EncryptionConstants::MGF1_SHA512 = nullptr;

void EncryptionConstants::init$() {
}

EncryptionConstants::EncryptionConstants() {
}

void clinit$EncryptionConstants($Class* class$) {
	$init($Constants);
	$assignStatic(EncryptionConstants::_ATT_ALGORITHM, $Constants::_ATT_ALGORITHM);
	$assignStatic(EncryptionConstants::_ATT_ID, $Constants::_ATT_ID);
	$assignStatic(EncryptionConstants::_ATT_TARGET, $Constants::_ATT_TARGET);
	$assignStatic(EncryptionConstants::_ATT_TYPE, $Constants::_ATT_TYPE);
	$assignStatic(EncryptionConstants::_ATT_URI, $Constants::_ATT_URI);
	$assignStatic(EncryptionConstants::_ATT_ENCODING, "Encoding"_s);
	$assignStatic(EncryptionConstants::_ATT_RECIPIENT, "Recipient"_s);
	$assignStatic(EncryptionConstants::_ATT_MIMETYPE, "MimeType"_s);
	$assignStatic(EncryptionConstants::_TAG_CARRIEDKEYNAME, "CarriedKeyName"_s);
	$assignStatic(EncryptionConstants::_TAG_CIPHERDATA, "CipherData"_s);
	$assignStatic(EncryptionConstants::_TAG_CIPHERREFERENCE, "CipherReference"_s);
	$assignStatic(EncryptionConstants::_TAG_CIPHERVALUE, "CipherValue"_s);
	$assignStatic(EncryptionConstants::_TAG_DATAREFERENCE, "DataReference"_s);
	$assignStatic(EncryptionConstants::_TAG_ENCRYPTEDDATA, "EncryptedData"_s);
	$assignStatic(EncryptionConstants::_TAG_ENCRYPTEDKEY, "EncryptedKey"_s);
	$assignStatic(EncryptionConstants::_TAG_ENCRYPTIONMETHOD, "EncryptionMethod"_s);
	$assignStatic(EncryptionConstants::_TAG_ENCRYPTIONPROPERTIES, "EncryptionProperties"_s);
	$assignStatic(EncryptionConstants::_TAG_ENCRYPTIONPROPERTY, "EncryptionProperty"_s);
	$assignStatic(EncryptionConstants::_TAG_KEYREFERENCE, "KeyReference"_s);
	$assignStatic(EncryptionConstants::_TAG_KEYSIZE, "KeySize"_s);
	$assignStatic(EncryptionConstants::_TAG_OAEPPARAMS, "OAEPparams"_s);
	$assignStatic(EncryptionConstants::_TAG_MGF, "MGF"_s);
	$assignStatic(EncryptionConstants::_TAG_REFERENCELIST, "ReferenceList"_s);
	$assignStatic(EncryptionConstants::_TAG_TRANSFORMS, "Transforms"_s);
	$assignStatic(EncryptionConstants::_TAG_AGREEMENTMETHOD, "AgreementMethod"_s);
	$assignStatic(EncryptionConstants::_TAG_KA_NONCE, "KA-Nonce"_s);
	$assignStatic(EncryptionConstants::_TAG_ORIGINATORKEYINFO, "OriginatorKeyInfo"_s);
	$assignStatic(EncryptionConstants::_TAG_RECIPIENTKEYINFO, "RecipientKeyInfo"_s);
	$assignStatic(EncryptionConstants::ENCRYPTIONSPECIFICATION_URL, "http://www.w3.org/TR/2001/WD-xmlenc-core-20010626/"_s);
	$assignStatic(EncryptionConstants::EncryptionSpecNS, "http://www.w3.org/2001/04/xmlenc#"_s);
	$assignStatic(EncryptionConstants::EncryptionSpec11NS, "http://www.w3.org/2009/xmlenc11#"_s);
	$assignStatic(EncryptionConstants::TYPE_CONTENT, $str({EncryptionConstants::EncryptionSpecNS, "Content"_s}));
	$assignStatic(EncryptionConstants::TYPE_ELEMENT, $str({EncryptionConstants::EncryptionSpecNS, "Element"_s}));
	$assignStatic(EncryptionConstants::TYPE_MEDIATYPE, "http://www.isi.edu/in-notes/iana/assignments/media-types/"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_BLOCKCIPHER_TRIPLEDES, $str({EncryptionConstants::EncryptionSpecNS, "tripledes-cbc"_s}));
	$assignStatic(EncryptionConstants::ALGO_ID_BLOCKCIPHER_AES128, $str({EncryptionConstants::EncryptionSpecNS, "aes128-cbc"_s}));
	$assignStatic(EncryptionConstants::ALGO_ID_BLOCKCIPHER_AES256, $str({EncryptionConstants::EncryptionSpecNS, "aes256-cbc"_s}));
	$assignStatic(EncryptionConstants::ALGO_ID_BLOCKCIPHER_AES192, $str({EncryptionConstants::EncryptionSpecNS, "aes192-cbc"_s}));
	$assignStatic(EncryptionConstants::ALGO_ID_BLOCKCIPHER_AES128_GCM, "http://www.w3.org/2009/xmlenc11#aes128-gcm"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_BLOCKCIPHER_AES192_GCM, "http://www.w3.org/2009/xmlenc11#aes192-gcm"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_BLOCKCIPHER_AES256_GCM, "http://www.w3.org/2009/xmlenc11#aes256-gcm"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_BLOCKCIPHER_SEED128, "http://www.w3.org/2007/05/xmldsig-more#seed128-cbc"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_BLOCKCIPHER_CAMELLIA128, "http://www.w3.org/2001/04/xmldsig-more#camellia128-cbc"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_BLOCKCIPHER_CAMELLIA192, "http://www.w3.org/2001/04/xmldsig-more#camellia192-cbc"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_BLOCKCIPHER_CAMELLIA256, "http://www.w3.org/2001/04/xmldsig-more#camellia256-cbc"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_KEYTRANSPORT_RSA15, $str({EncryptionConstants::EncryptionSpecNS, "rsa-1_5"_s}));
	$assignStatic(EncryptionConstants::ALGO_ID_KEYTRANSPORT_RSAOAEP, $str({EncryptionConstants::EncryptionSpecNS, "rsa-oaep-mgf1p"_s}));
	$assignStatic(EncryptionConstants::ALGO_ID_KEYTRANSPORT_RSAOAEP_11, $str({EncryptionConstants::EncryptionSpec11NS, "rsa-oaep"_s}));
	$assignStatic(EncryptionConstants::ALGO_ID_KEYAGREEMENT_DH, $str({EncryptionConstants::EncryptionSpecNS, "dh"_s}));
	$assignStatic(EncryptionConstants::ALGO_ID_KEYWRAP_TRIPLEDES, $str({EncryptionConstants::EncryptionSpecNS, "kw-tripledes"_s}));
	$assignStatic(EncryptionConstants::ALGO_ID_KEYWRAP_AES128, $str({EncryptionConstants::EncryptionSpecNS, "kw-aes128"_s}));
	$assignStatic(EncryptionConstants::ALGO_ID_KEYWRAP_AES256, $str({EncryptionConstants::EncryptionSpecNS, "kw-aes256"_s}));
	$assignStatic(EncryptionConstants::ALGO_ID_KEYWRAP_AES192, $str({EncryptionConstants::EncryptionSpecNS, "kw-aes192"_s}));
	$assignStatic(EncryptionConstants::ALGO_ID_KEYWRAP_CAMELLIA128, "http://www.w3.org/2001/04/xmldsig-more#kw-camellia128"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_KEYWRAP_CAMELLIA192, "http://www.w3.org/2001/04/xmldsig-more#kw-camellia192"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_KEYWRAP_CAMELLIA256, "http://www.w3.org/2001/04/xmldsig-more#kw-camellia256"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_KEYWRAP_SEED128, "http://www.w3.org/2007/05/xmldsig-more#kw-seed128"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_AUTHENTICATION_XMLSIGNATURE, "http://www.w3.org/TR/2001/CR-xmldsig-core-20010419/"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_C14N_WITHCOMMENTS, "http://www.w3.org/TR/2001/REC-xml-c14n-20010315#WithComments"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_C14N_OMITCOMMENTS, "http://www.w3.org/TR/2001/REC-xml-c14n-20010315"_s);
	$assignStatic(EncryptionConstants::ALGO_ID_ENCODING_BASE64, "http://www.w3.org/2000/09/xmldsig#base64"_s);
	$assignStatic(EncryptionConstants::MGF1_SHA1, $str({EncryptionConstants::EncryptionSpec11NS, "mgf1sha1"_s}));
	$assignStatic(EncryptionConstants::MGF1_SHA224, $str({EncryptionConstants::EncryptionSpec11NS, "mgf1sha224"_s}));
	$assignStatic(EncryptionConstants::MGF1_SHA256, $str({EncryptionConstants::EncryptionSpec11NS, "mgf1sha256"_s}));
	$assignStatic(EncryptionConstants::MGF1_SHA384, $str({EncryptionConstants::EncryptionSpec11NS, "mgf1sha384"_s}));
	$assignStatic(EncryptionConstants::MGF1_SHA512, $str({EncryptionConstants::EncryptionSpec11NS, "mgf1sha512"_s}));
}

$Class* EncryptionConstants::load$($String* name, bool initialize) {
	$loadClass(EncryptionConstants, name, initialize, &_EncryptionConstants_ClassInfo_, clinit$EncryptionConstants, allocate$EncryptionConstants);
	return class$;
}

$Class* EncryptionConstants::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com