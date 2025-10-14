#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>

#include <java/lang/Class.h>
#include <java/lang/ClassInfo.h>
#include <java/lang/FieldInfo.h>
#include <java/lang/MethodInfo.h>
#include <java/lang/String.h>
#include <java/lang/reflect/Constructor.h>
#include <java/lang/reflect/Method.h>
#include <jcpp.h>

#undef ALGO_ID_DIGEST_SHA1
#undef ALGO_ID_SIGNATURE_ECDSA_CERTICOM
#undef SIGNATURESPECIFICATION_URL
#undef _ATT_ALGORITHM
#undef _ATT_ENCODING
#undef _ATT_ID
#undef _ATT_MIMETYPE
#undef _ATT_TARGET
#undef _ATT_TYPE
#undef _ATT_URI
#undef _TAG_CANONICALIZATIONMETHOD
#undef _TAG_DERENCODEDKEYVALUE
#undef _TAG_DIGESTMETHOD
#undef _TAG_DIGESTVALUE
#undef _TAG_DSAKEYVALUE
#undef _TAG_ECKEYVALUE
#undef _TAG_EXPONENT
#undef _TAG_G
#undef _TAG_HMACOUTPUTLENGTH
#undef _TAG_J
#undef _TAG_KEYINFO
#undef _TAG_KEYINFOREFERENCE
#undef _TAG_KEYNAME
#undef _TAG_KEYVALUE
#undef _TAG_MANIFEST
#undef _TAG_METHODS
#undef _TAG_MGF
#undef _TAG_MGMTDATA
#undef _TAG_MODULUS
#undef _TAG_OBJECT
#undef _TAG_P
#undef _TAG_PGENCOUNTER
#undef _TAG_PGPDATA
#undef _TAG_PGPKEYID
#undef _TAG_PGPKEYPACKET
#undef _TAG_Q
#undef _TAG_RAWX509CERTIFICATE
#undef _TAG_REFERENCE
#undef _TAG_RETRIEVALMETHOD
#undef _TAG_RSAKEYVALUE
#undef _TAG_RSAPSSPARAMS
#undef _TAG_SALTLENGTH
#undef _TAG_SEED
#undef _TAG_SIGNATURE
#undef _TAG_SIGNATUREMETHOD
#undef _TAG_SIGNATUREPROPERTIES
#undef _TAG_SIGNATUREPROPERTY
#undef _TAG_SIGNATUREVALUE
#undef _TAG_SIGNEDINFO
#undef _TAG_SPKIDATA
#undef _TAG_SPKISEXP
#undef _TAG_TRAILERFIELD
#undef _TAG_TRANSFORM
#undef _TAG_TRANSFORMS
#undef _TAG_X509CERTIFICATE
#undef _TAG_X509CRL
#undef _TAG_X509DATA
#undef _TAG_X509DIGEST
#undef _TAG_X509ISSUERNAME
#undef _TAG_X509ISSUERSERIAL
#undef _TAG_X509SERIALNUMBER
#undef _TAG_X509SKI
#undef _TAG_X509SUBJECTNAME
#undef _TAG_XPATH
#undef _TAG_Y

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

$FieldInfo _Constants_FieldInfo_[] = {
	{"configurationFile", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, configurationFile)},
	{"configurationFileNew", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, configurationFileNew)},
	{"exceptionMessagesResourceBundleDir", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, exceptionMessagesResourceBundleDir)},
	{"exceptionMessagesResourceBundleBase", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, exceptionMessagesResourceBundleBase)},
	{"SIGNATURESPECIFICATION_URL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SIGNATURESPECIFICATION_URL)},
	{"SignatureSpecNS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SignatureSpecNS)},
	{"SignatureSpec11NS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, SignatureSpec11NS)},
	{"MoreAlgorithmsSpecNS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, MoreAlgorithmsSpecNS)},
	{"XML_DSIG_NS_MORE_07_05", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XML_DSIG_NS_MORE_07_05)},
	{"XML_LANG_SPACE_SpecNS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, XML_LANG_SPACE_SpecNS)},
	{"NamespaceSpecNS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, NamespaceSpecNS)},
	{"_ATT_ALGORITHM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _ATT_ALGORITHM)},
	{"_ATT_URI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _ATT_URI)},
	{"_ATT_TYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _ATT_TYPE)},
	{"_ATT_ID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _ATT_ID)},
	{"_ATT_MIMETYPE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _ATT_MIMETYPE)},
	{"_ATT_ENCODING", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _ATT_ENCODING)},
	{"_ATT_TARGET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _ATT_TARGET)},
	{"_TAG_CANONICALIZATIONMETHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_CANONICALIZATIONMETHOD)},
	{"_TAG_DIGESTMETHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_DIGESTMETHOD)},
	{"_TAG_DIGESTVALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_DIGESTVALUE)},
	{"_TAG_MANIFEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_MANIFEST)},
	{"_TAG_METHODS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_METHODS)},
	{"_TAG_OBJECT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_OBJECT)},
	{"_TAG_REFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_REFERENCE)},
	{"_TAG_SIGNATURE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_SIGNATURE)},
	{"_TAG_SIGNATUREMETHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_SIGNATUREMETHOD)},
	{"_TAG_HMACOUTPUTLENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_HMACOUTPUTLENGTH)},
	{"_TAG_RSAPSSPARAMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_RSAPSSPARAMS)},
	{"_TAG_MGF", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_MGF)},
	{"_TAG_SALTLENGTH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_SALTLENGTH)},
	{"_TAG_TRAILERFIELD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_TRAILERFIELD)},
	{"_TAG_SIGNATUREPROPERTIES", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_SIGNATUREPROPERTIES)},
	{"_TAG_SIGNATUREPROPERTY", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_SIGNATUREPROPERTY)},
	{"_TAG_SIGNATUREVALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_SIGNATUREVALUE)},
	{"_TAG_SIGNEDINFO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_SIGNEDINFO)},
	{"_TAG_TRANSFORM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_TRANSFORM)},
	{"_TAG_TRANSFORMS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_TRANSFORMS)},
	{"_TAG_XPATH", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_XPATH)},
	{"_TAG_KEYINFO", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_KEYINFO)},
	{"_TAG_KEYNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_KEYNAME)},
	{"_TAG_KEYVALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_KEYVALUE)},
	{"_TAG_RETRIEVALMETHOD", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_RETRIEVALMETHOD)},
	{"_TAG_X509DATA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_X509DATA)},
	{"_TAG_PGPDATA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_PGPDATA)},
	{"_TAG_SPKIDATA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_SPKIDATA)},
	{"_TAG_MGMTDATA", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_MGMTDATA)},
	{"_TAG_RSAKEYVALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_RSAKEYVALUE)},
	{"_TAG_EXPONENT", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_EXPONENT)},
	{"_TAG_MODULUS", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_MODULUS)},
	{"_TAG_DSAKEYVALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_DSAKEYVALUE)},
	{"_TAG_P", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_P)},
	{"_TAG_Q", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_Q)},
	{"_TAG_G", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_G)},
	{"_TAG_Y", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_Y)},
	{"_TAG_J", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_J)},
	{"_TAG_ECKEYVALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_ECKEYVALUE)},
	{"_TAG_SEED", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_SEED)},
	{"_TAG_PGENCOUNTER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_PGENCOUNTER)},
	{"_TAG_RAWX509CERTIFICATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_RAWX509CERTIFICATE)},
	{"_TAG_X509ISSUERSERIAL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_X509ISSUERSERIAL)},
	{"_TAG_X509SKI", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_X509SKI)},
	{"_TAG_X509SUBJECTNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_X509SUBJECTNAME)},
	{"_TAG_X509CERTIFICATE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_X509CERTIFICATE)},
	{"_TAG_X509CRL", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_X509CRL)},
	{"_TAG_X509ISSUERNAME", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_X509ISSUERNAME)},
	{"_TAG_X509SERIALNUMBER", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_X509SERIALNUMBER)},
	{"_TAG_PGPKEYID", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_PGPKEYID)},
	{"_TAG_PGPKEYPACKET", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_PGPKEYPACKET)},
	{"_TAG_DERENCODEDKEYVALUE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_DERENCODEDKEYVALUE)},
	{"_TAG_KEYINFOREFERENCE", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_KEYINFOREFERENCE)},
	{"_TAG_X509DIGEST", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_X509DIGEST)},
	{"_TAG_SPKISEXP", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, _TAG_SPKISEXP)},
	{"ALGO_ID_DIGEST_SHA1", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ALGO_ID_DIGEST_SHA1)},
	{"ALGO_ID_SIGNATURE_ECDSA_CERTICOM", "Ljava/lang/String;", nullptr, $PUBLIC | $STATIC | $FINAL, $staticField(Constants, ALGO_ID_SIGNATURE_ECDSA_CERTICOM)},
	{}
};

$MethodInfo _Constants_MethodInfo_[] = {
	{"<init>", "()V", nullptr, $PRIVATE, $method(static_cast<void(Constants::*)()>(&Constants::init$))},
	{}
};

$ClassInfo _Constants_ClassInfo_ = {
	$PUBLIC | $FINAL | $ACC_SUPER,
	"com.sun.org.apache.xml.internal.security.utils.Constants",
	"java.lang.Object",
	nullptr,
	_Constants_FieldInfo_,
	_Constants_MethodInfo_
};

$Object* allocate$Constants($Class* clazz) {
	return $of($alloc(Constants));
}


$String* Constants::configurationFile = nullptr;

$String* Constants::configurationFileNew = nullptr;

$String* Constants::exceptionMessagesResourceBundleDir = nullptr;

$String* Constants::exceptionMessagesResourceBundleBase = nullptr;

$String* Constants::SIGNATURESPECIFICATION_URL = nullptr;

$String* Constants::SignatureSpecNS = nullptr;

$String* Constants::SignatureSpec11NS = nullptr;

$String* Constants::MoreAlgorithmsSpecNS = nullptr;

$String* Constants::XML_DSIG_NS_MORE_07_05 = nullptr;

$String* Constants::XML_LANG_SPACE_SpecNS = nullptr;

$String* Constants::NamespaceSpecNS = nullptr;

$String* Constants::_ATT_ALGORITHM = nullptr;

$String* Constants::_ATT_URI = nullptr;

$String* Constants::_ATT_TYPE = nullptr;

$String* Constants::_ATT_ID = nullptr;

$String* Constants::_ATT_MIMETYPE = nullptr;

$String* Constants::_ATT_ENCODING = nullptr;

$String* Constants::_ATT_TARGET = nullptr;

$String* Constants::_TAG_CANONICALIZATIONMETHOD = nullptr;

$String* Constants::_TAG_DIGESTMETHOD = nullptr;

$String* Constants::_TAG_DIGESTVALUE = nullptr;

$String* Constants::_TAG_MANIFEST = nullptr;

$String* Constants::_TAG_METHODS = nullptr;

$String* Constants::_TAG_OBJECT = nullptr;

$String* Constants::_TAG_REFERENCE = nullptr;

$String* Constants::_TAG_SIGNATURE = nullptr;

$String* Constants::_TAG_SIGNATUREMETHOD = nullptr;

$String* Constants::_TAG_HMACOUTPUTLENGTH = nullptr;

$String* Constants::_TAG_RSAPSSPARAMS = nullptr;

$String* Constants::_TAG_MGF = nullptr;

$String* Constants::_TAG_SALTLENGTH = nullptr;

$String* Constants::_TAG_TRAILERFIELD = nullptr;

$String* Constants::_TAG_SIGNATUREPROPERTIES = nullptr;

$String* Constants::_TAG_SIGNATUREPROPERTY = nullptr;

$String* Constants::_TAG_SIGNATUREVALUE = nullptr;

$String* Constants::_TAG_SIGNEDINFO = nullptr;

$String* Constants::_TAG_TRANSFORM = nullptr;

$String* Constants::_TAG_TRANSFORMS = nullptr;

$String* Constants::_TAG_XPATH = nullptr;

$String* Constants::_TAG_KEYINFO = nullptr;

$String* Constants::_TAG_KEYNAME = nullptr;

$String* Constants::_TAG_KEYVALUE = nullptr;

$String* Constants::_TAG_RETRIEVALMETHOD = nullptr;

$String* Constants::_TAG_X509DATA = nullptr;

$String* Constants::_TAG_PGPDATA = nullptr;

$String* Constants::_TAG_SPKIDATA = nullptr;

$String* Constants::_TAG_MGMTDATA = nullptr;

$String* Constants::_TAG_RSAKEYVALUE = nullptr;

$String* Constants::_TAG_EXPONENT = nullptr;

$String* Constants::_TAG_MODULUS = nullptr;

$String* Constants::_TAG_DSAKEYVALUE = nullptr;

$String* Constants::_TAG_P = nullptr;

$String* Constants::_TAG_Q = nullptr;

$String* Constants::_TAG_G = nullptr;

$String* Constants::_TAG_Y = nullptr;

$String* Constants::_TAG_J = nullptr;

$String* Constants::_TAG_ECKEYVALUE = nullptr;

$String* Constants::_TAG_SEED = nullptr;

$String* Constants::_TAG_PGENCOUNTER = nullptr;

$String* Constants::_TAG_RAWX509CERTIFICATE = nullptr;

$String* Constants::_TAG_X509ISSUERSERIAL = nullptr;

$String* Constants::_TAG_X509SKI = nullptr;

$String* Constants::_TAG_X509SUBJECTNAME = nullptr;

$String* Constants::_TAG_X509CERTIFICATE = nullptr;

$String* Constants::_TAG_X509CRL = nullptr;

$String* Constants::_TAG_X509ISSUERNAME = nullptr;

$String* Constants::_TAG_X509SERIALNUMBER = nullptr;

$String* Constants::_TAG_PGPKEYID = nullptr;

$String* Constants::_TAG_PGPKEYPACKET = nullptr;

$String* Constants::_TAG_DERENCODEDKEYVALUE = nullptr;

$String* Constants::_TAG_KEYINFOREFERENCE = nullptr;

$String* Constants::_TAG_X509DIGEST = nullptr;

$String* Constants::_TAG_SPKISEXP = nullptr;

$String* Constants::ALGO_ID_DIGEST_SHA1 = nullptr;

$String* Constants::ALGO_ID_SIGNATURE_ECDSA_CERTICOM = nullptr;

void Constants::init$() {
}

Constants::Constants() {
}

void clinit$Constants($Class* class$) {
	$assignStatic(Constants::configurationFile, "data/websig.conf"_s);
	$assignStatic(Constants::configurationFileNew, ".xmlsecurityconfig"_s);
	$assignStatic(Constants::exceptionMessagesResourceBundleDir, "com.sun.org.apache.xml.internal.security/resource"_s);
	$assignStatic(Constants::exceptionMessagesResourceBundleBase, $str({Constants::exceptionMessagesResourceBundleDir, "/xmlsecurity"_s}));
	$assignStatic(Constants::SIGNATURESPECIFICATION_URL, "http://www.w3.org/TR/2001/CR-xmldsig-core-20010419/"_s);
	$assignStatic(Constants::SignatureSpecNS, "http://www.w3.org/2000/09/xmldsig#"_s);
	$assignStatic(Constants::SignatureSpec11NS, "http://www.w3.org/2009/xmldsig11#"_s);
	$assignStatic(Constants::MoreAlgorithmsSpecNS, "http://www.w3.org/2001/04/xmldsig-more#"_s);
	$assignStatic(Constants::XML_DSIG_NS_MORE_07_05, "http://www.w3.org/2007/05/xmldsig-more#"_s);
	$assignStatic(Constants::XML_LANG_SPACE_SpecNS, "http://www.w3.org/XML/1998/namespace"_s);
	$assignStatic(Constants::NamespaceSpecNS, "http://www.w3.org/2000/xmlns/"_s);
	$assignStatic(Constants::_ATT_ALGORITHM, "Algorithm"_s);
	$assignStatic(Constants::_ATT_URI, "URI"_s);
	$assignStatic(Constants::_ATT_TYPE, "Type"_s);
	$assignStatic(Constants::_ATT_ID, "Id"_s);
	$assignStatic(Constants::_ATT_MIMETYPE, "MimeType"_s);
	$assignStatic(Constants::_ATT_ENCODING, "Encoding"_s);
	$assignStatic(Constants::_ATT_TARGET, "Target"_s);
	$assignStatic(Constants::_TAG_CANONICALIZATIONMETHOD, "CanonicalizationMethod"_s);
	$assignStatic(Constants::_TAG_DIGESTMETHOD, "DigestMethod"_s);
	$assignStatic(Constants::_TAG_DIGESTVALUE, "DigestValue"_s);
	$assignStatic(Constants::_TAG_MANIFEST, "Manifest"_s);
	$assignStatic(Constants::_TAG_METHODS, "Methods"_s);
	$assignStatic(Constants::_TAG_OBJECT, "Object"_s);
	$assignStatic(Constants::_TAG_REFERENCE, "Reference"_s);
	$assignStatic(Constants::_TAG_SIGNATURE, "Signature"_s);
	$assignStatic(Constants::_TAG_SIGNATUREMETHOD, "SignatureMethod"_s);
	$assignStatic(Constants::_TAG_HMACOUTPUTLENGTH, "HMACOutputLength"_s);
	$assignStatic(Constants::_TAG_RSAPSSPARAMS, "RSAPSSParams"_s);
	$assignStatic(Constants::_TAG_MGF, "MaskGenerationFunction"_s);
	$assignStatic(Constants::_TAG_SALTLENGTH, "SaltLength"_s);
	$assignStatic(Constants::_TAG_TRAILERFIELD, "TrailerField"_s);
	$assignStatic(Constants::_TAG_SIGNATUREPROPERTIES, "SignatureProperties"_s);
	$assignStatic(Constants::_TAG_SIGNATUREPROPERTY, "SignatureProperty"_s);
	$assignStatic(Constants::_TAG_SIGNATUREVALUE, "SignatureValue"_s);
	$assignStatic(Constants::_TAG_SIGNEDINFO, "SignedInfo"_s);
	$assignStatic(Constants::_TAG_TRANSFORM, "Transform"_s);
	$assignStatic(Constants::_TAG_TRANSFORMS, "Transforms"_s);
	$assignStatic(Constants::_TAG_XPATH, "XPath"_s);
	$assignStatic(Constants::_TAG_KEYINFO, "KeyInfo"_s);
	$assignStatic(Constants::_TAG_KEYNAME, "KeyName"_s);
	$assignStatic(Constants::_TAG_KEYVALUE, "KeyValue"_s);
	$assignStatic(Constants::_TAG_RETRIEVALMETHOD, "RetrievalMethod"_s);
	$assignStatic(Constants::_TAG_X509DATA, "X509Data"_s);
	$assignStatic(Constants::_TAG_PGPDATA, "PGPData"_s);
	$assignStatic(Constants::_TAG_SPKIDATA, "SPKIData"_s);
	$assignStatic(Constants::_TAG_MGMTDATA, "MgmtData"_s);
	$assignStatic(Constants::_TAG_RSAKEYVALUE, "RSAKeyValue"_s);
	$assignStatic(Constants::_TAG_EXPONENT, "Exponent"_s);
	$assignStatic(Constants::_TAG_MODULUS, "Modulus"_s);
	$assignStatic(Constants::_TAG_DSAKEYVALUE, "DSAKeyValue"_s);
	$assignStatic(Constants::_TAG_P, "P"_s);
	$assignStatic(Constants::_TAG_Q, "Q"_s);
	$assignStatic(Constants::_TAG_G, "G"_s);
	$assignStatic(Constants::_TAG_Y, "Y"_s);
	$assignStatic(Constants::_TAG_J, "J"_s);
	$assignStatic(Constants::_TAG_ECKEYVALUE, "ECKeyValue"_s);
	$assignStatic(Constants::_TAG_SEED, "Seed"_s);
	$assignStatic(Constants::_TAG_PGENCOUNTER, "PgenCounter"_s);
	$assignStatic(Constants::_TAG_RAWX509CERTIFICATE, "rawX509Certificate"_s);
	$assignStatic(Constants::_TAG_X509ISSUERSERIAL, "X509IssuerSerial"_s);
	$assignStatic(Constants::_TAG_X509SKI, "X509SKI"_s);
	$assignStatic(Constants::_TAG_X509SUBJECTNAME, "X509SubjectName"_s);
	$assignStatic(Constants::_TAG_X509CERTIFICATE, "X509Certificate"_s);
	$assignStatic(Constants::_TAG_X509CRL, "X509CRL"_s);
	$assignStatic(Constants::_TAG_X509ISSUERNAME, "X509IssuerName"_s);
	$assignStatic(Constants::_TAG_X509SERIALNUMBER, "X509SerialNumber"_s);
	$assignStatic(Constants::_TAG_PGPKEYID, "PGPKeyID"_s);
	$assignStatic(Constants::_TAG_PGPKEYPACKET, "PGPKeyPacket"_s);
	$assignStatic(Constants::_TAG_DERENCODEDKEYVALUE, "DEREncodedKeyValue"_s);
	$assignStatic(Constants::_TAG_KEYINFOREFERENCE, "KeyInfoReference"_s);
	$assignStatic(Constants::_TAG_X509DIGEST, "X509Digest"_s);
	$assignStatic(Constants::_TAG_SPKISEXP, "SPKISexp"_s);
	$assignStatic(Constants::ALGO_ID_DIGEST_SHA1, $str({Constants::SignatureSpecNS, "sha1"_s}));
	$assignStatic(Constants::ALGO_ID_SIGNATURE_ECDSA_CERTICOM, "http://www.certicom.com/2000/11/xmlecdsig#ecdsa-sha1"_s);
}

$Class* Constants::load$($String* name, bool initialize) {
	$loadClass(Constants, name, initialize, &_Constants_ClassInfo_, clinit$Constants, allocate$Constants);
	return class$;
}

$Class* Constants::class$ = nullptr;

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com