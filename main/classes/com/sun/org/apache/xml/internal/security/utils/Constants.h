#ifndef _com_sun_org_apache_xml_internal_security_utils_Constants_h_
#define _com_sun_org_apache_xml_internal_security_utils_Constants_h_
//$ class com.sun.org.apache.xml.internal.security.utils.Constants
//$ extends java.lang.Object

#include <java/lang/Object.h>

#pragma push_macro("ALGO_ID_DIGEST_SHA1")
#undef ALGO_ID_DIGEST_SHA1
#pragma push_macro("ALGO_ID_SIGNATURE_ECDSA_CERTICOM")
#undef ALGO_ID_SIGNATURE_ECDSA_CERTICOM
#pragma push_macro("SIGNATURESPECIFICATION_URL")
#undef SIGNATURESPECIFICATION_URL
#pragma push_macro("_ATT_ALGORITHM")
#undef _ATT_ALGORITHM
#pragma push_macro("_ATT_ENCODING")
#undef _ATT_ENCODING
#pragma push_macro("_ATT_ID")
#undef _ATT_ID
#pragma push_macro("_ATT_MIMETYPE")
#undef _ATT_MIMETYPE
#pragma push_macro("_ATT_TARGET")
#undef _ATT_TARGET
#pragma push_macro("_ATT_TYPE")
#undef _ATT_TYPE
#pragma push_macro("_ATT_URI")
#undef _ATT_URI
#pragma push_macro("_TAG_CANONICALIZATIONMETHOD")
#undef _TAG_CANONICALIZATIONMETHOD
#pragma push_macro("_TAG_DERENCODEDKEYVALUE")
#undef _TAG_DERENCODEDKEYVALUE
#pragma push_macro("_TAG_DIGESTMETHOD")
#undef _TAG_DIGESTMETHOD
#pragma push_macro("_TAG_DIGESTVALUE")
#undef _TAG_DIGESTVALUE
#pragma push_macro("_TAG_DSAKEYVALUE")
#undef _TAG_DSAKEYVALUE
#pragma push_macro("_TAG_ECKEYVALUE")
#undef _TAG_ECKEYVALUE
#pragma push_macro("_TAG_EXPONENT")
#undef _TAG_EXPONENT
#pragma push_macro("_TAG_G")
#undef _TAG_G
#pragma push_macro("_TAG_HMACOUTPUTLENGTH")
#undef _TAG_HMACOUTPUTLENGTH
#pragma push_macro("_TAG_J")
#undef _TAG_J
#pragma push_macro("_TAG_KEYINFO")
#undef _TAG_KEYINFO
#pragma push_macro("_TAG_KEYINFOREFERENCE")
#undef _TAG_KEYINFOREFERENCE
#pragma push_macro("_TAG_KEYNAME")
#undef _TAG_KEYNAME
#pragma push_macro("_TAG_KEYVALUE")
#undef _TAG_KEYVALUE
#pragma push_macro("_TAG_MANIFEST")
#undef _TAG_MANIFEST
#pragma push_macro("_TAG_METHODS")
#undef _TAG_METHODS
#pragma push_macro("_TAG_MGF")
#undef _TAG_MGF
#pragma push_macro("_TAG_MGMTDATA")
#undef _TAG_MGMTDATA
#pragma push_macro("_TAG_MODULUS")
#undef _TAG_MODULUS
#pragma push_macro("_TAG_OBJECT")
#undef _TAG_OBJECT
#pragma push_macro("_TAG_P")
#undef _TAG_P
#pragma push_macro("_TAG_PGENCOUNTER")
#undef _TAG_PGENCOUNTER
#pragma push_macro("_TAG_PGPDATA")
#undef _TAG_PGPDATA
#pragma push_macro("_TAG_PGPKEYID")
#undef _TAG_PGPKEYID
#pragma push_macro("_TAG_PGPKEYPACKET")
#undef _TAG_PGPKEYPACKET
#pragma push_macro("_TAG_Q")
#undef _TAG_Q
#pragma push_macro("_TAG_RAWX509CERTIFICATE")
#undef _TAG_RAWX509CERTIFICATE
#pragma push_macro("_TAG_REFERENCE")
#undef _TAG_REFERENCE
#pragma push_macro("_TAG_RETRIEVALMETHOD")
#undef _TAG_RETRIEVALMETHOD
#pragma push_macro("_TAG_RSAKEYVALUE")
#undef _TAG_RSAKEYVALUE
#pragma push_macro("_TAG_RSAPSSPARAMS")
#undef _TAG_RSAPSSPARAMS
#pragma push_macro("_TAG_SALTLENGTH")
#undef _TAG_SALTLENGTH
#pragma push_macro("_TAG_SEED")
#undef _TAG_SEED
#pragma push_macro("_TAG_SIGNATURE")
#undef _TAG_SIGNATURE
#pragma push_macro("_TAG_SIGNATUREMETHOD")
#undef _TAG_SIGNATUREMETHOD
#pragma push_macro("_TAG_SIGNATUREPROPERTIES")
#undef _TAG_SIGNATUREPROPERTIES
#pragma push_macro("_TAG_SIGNATUREPROPERTY")
#undef _TAG_SIGNATUREPROPERTY
#pragma push_macro("_TAG_SIGNATUREVALUE")
#undef _TAG_SIGNATUREVALUE
#pragma push_macro("_TAG_SIGNEDINFO")
#undef _TAG_SIGNEDINFO
#pragma push_macro("_TAG_SPKIDATA")
#undef _TAG_SPKIDATA
#pragma push_macro("_TAG_SPKISEXP")
#undef _TAG_SPKISEXP
#pragma push_macro("_TAG_TRAILERFIELD")
#undef _TAG_TRAILERFIELD
#pragma push_macro("_TAG_TRANSFORM")
#undef _TAG_TRANSFORM
#pragma push_macro("_TAG_TRANSFORMS")
#undef _TAG_TRANSFORMS
#pragma push_macro("_TAG_X509CERTIFICATE")
#undef _TAG_X509CERTIFICATE
#pragma push_macro("_TAG_X509CRL")
#undef _TAG_X509CRL
#pragma push_macro("_TAG_X509DATA")
#undef _TAG_X509DATA
#pragma push_macro("_TAG_X509DIGEST")
#undef _TAG_X509DIGEST
#pragma push_macro("_TAG_X509ISSUERNAME")
#undef _TAG_X509ISSUERNAME
#pragma push_macro("_TAG_X509ISSUERSERIAL")
#undef _TAG_X509ISSUERSERIAL
#pragma push_macro("_TAG_X509SERIALNUMBER")
#undef _TAG_X509SERIALNUMBER
#pragma push_macro("_TAG_X509SKI")
#undef _TAG_X509SKI
#pragma push_macro("_TAG_X509SUBJECTNAME")
#undef _TAG_X509SUBJECTNAME
#pragma push_macro("_TAG_XPATH")
#undef _TAG_XPATH
#pragma push_macro("_TAG_Y")
#undef _TAG_Y

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {

class Constants : public ::java::lang::Object {
	$class(Constants, 0, ::java::lang::Object)
public:
	Constants();
	void init$();
	static $String* configurationFile;
	static $String* configurationFileNew;
	static $String* exceptionMessagesResourceBundleDir;
	static $String* exceptionMessagesResourceBundleBase;
	static $String* SIGNATURESPECIFICATION_URL;
	static $String* SignatureSpecNS;
	static $String* SignatureSpec11NS;
	static $String* MoreAlgorithmsSpecNS;
	static $String* XML_DSIG_NS_MORE_07_05;
	static $String* XML_LANG_SPACE_SpecNS;
	static $String* NamespaceSpecNS;
	static $String* _ATT_ALGORITHM;
	static $String* _ATT_URI;
	static $String* _ATT_TYPE;
	static $String* _ATT_ID;
	static $String* _ATT_MIMETYPE;
	static $String* _ATT_ENCODING;
	static $String* _ATT_TARGET;
	static $String* _TAG_CANONICALIZATIONMETHOD;
	static $String* _TAG_DIGESTMETHOD;
	static $String* _TAG_DIGESTVALUE;
	static $String* _TAG_MANIFEST;
	static $String* _TAG_METHODS;
	static $String* _TAG_OBJECT;
	static $String* _TAG_REFERENCE;
	static $String* _TAG_SIGNATURE;
	static $String* _TAG_SIGNATUREMETHOD;
	static $String* _TAG_HMACOUTPUTLENGTH;
	static $String* _TAG_RSAPSSPARAMS;
	static $String* _TAG_MGF;
	static $String* _TAG_SALTLENGTH;
	static $String* _TAG_TRAILERFIELD;
	static $String* _TAG_SIGNATUREPROPERTIES;
	static $String* _TAG_SIGNATUREPROPERTY;
	static $String* _TAG_SIGNATUREVALUE;
	static $String* _TAG_SIGNEDINFO;
	static $String* _TAG_TRANSFORM;
	static $String* _TAG_TRANSFORMS;
	static $String* _TAG_XPATH;
	static $String* _TAG_KEYINFO;
	static $String* _TAG_KEYNAME;
	static $String* _TAG_KEYVALUE;
	static $String* _TAG_RETRIEVALMETHOD;
	static $String* _TAG_X509DATA;
	static $String* _TAG_PGPDATA;
	static $String* _TAG_SPKIDATA;
	static $String* _TAG_MGMTDATA;
	static $String* _TAG_RSAKEYVALUE;
	static $String* _TAG_EXPONENT;
	static $String* _TAG_MODULUS;
	static $String* _TAG_DSAKEYVALUE;
	static $String* _TAG_P;
	static $String* _TAG_Q;
	static $String* _TAG_G;
	static $String* _TAG_Y;
	static $String* _TAG_J;
	static $String* _TAG_ECKEYVALUE;
	static $String* _TAG_SEED;
	static $String* _TAG_PGENCOUNTER;
	static $String* _TAG_RAWX509CERTIFICATE;
	static $String* _TAG_X509ISSUERSERIAL;
	static $String* _TAG_X509SKI;
	static $String* _TAG_X509SUBJECTNAME;
	static $String* _TAG_X509CERTIFICATE;
	static $String* _TAG_X509CRL;
	static $String* _TAG_X509ISSUERNAME;
	static $String* _TAG_X509SERIALNUMBER;
	static $String* _TAG_PGPKEYID;
	static $String* _TAG_PGPKEYPACKET;
	static $String* _TAG_DERENCODEDKEYVALUE;
	static $String* _TAG_KEYINFOREFERENCE;
	static $String* _TAG_X509DIGEST;
	static $String* _TAG_SPKISEXP;
	static $String* ALGO_ID_DIGEST_SHA1;
	static $String* ALGO_ID_SIGNATURE_ECDSA_CERTICOM;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALGO_ID_DIGEST_SHA1")
#pragma pop_macro("ALGO_ID_SIGNATURE_ECDSA_CERTICOM")
#pragma pop_macro("SIGNATURESPECIFICATION_URL")
#pragma pop_macro("_ATT_ALGORITHM")
#pragma pop_macro("_ATT_ENCODING")
#pragma pop_macro("_ATT_ID")
#pragma pop_macro("_ATT_MIMETYPE")
#pragma pop_macro("_ATT_TARGET")
#pragma pop_macro("_ATT_TYPE")
#pragma pop_macro("_ATT_URI")
#pragma pop_macro("_TAG_CANONICALIZATIONMETHOD")
#pragma pop_macro("_TAG_DERENCODEDKEYVALUE")
#pragma pop_macro("_TAG_DIGESTMETHOD")
#pragma pop_macro("_TAG_DIGESTVALUE")
#pragma pop_macro("_TAG_DSAKEYVALUE")
#pragma pop_macro("_TAG_ECKEYVALUE")
#pragma pop_macro("_TAG_EXPONENT")
#pragma pop_macro("_TAG_G")
#pragma pop_macro("_TAG_HMACOUTPUTLENGTH")
#pragma pop_macro("_TAG_J")
#pragma pop_macro("_TAG_KEYINFO")
#pragma pop_macro("_TAG_KEYINFOREFERENCE")
#pragma pop_macro("_TAG_KEYNAME")
#pragma pop_macro("_TAG_KEYVALUE")
#pragma pop_macro("_TAG_MANIFEST")
#pragma pop_macro("_TAG_METHODS")
#pragma pop_macro("_TAG_MGF")
#pragma pop_macro("_TAG_MGMTDATA")
#pragma pop_macro("_TAG_MODULUS")
#pragma pop_macro("_TAG_OBJECT")
#pragma pop_macro("_TAG_P")
#pragma pop_macro("_TAG_PGENCOUNTER")
#pragma pop_macro("_TAG_PGPDATA")
#pragma pop_macro("_TAG_PGPKEYID")
#pragma pop_macro("_TAG_PGPKEYPACKET")
#pragma pop_macro("_TAG_Q")
#pragma pop_macro("_TAG_RAWX509CERTIFICATE")
#pragma pop_macro("_TAG_REFERENCE")
#pragma pop_macro("_TAG_RETRIEVALMETHOD")
#pragma pop_macro("_TAG_RSAKEYVALUE")
#pragma pop_macro("_TAG_RSAPSSPARAMS")
#pragma pop_macro("_TAG_SALTLENGTH")
#pragma pop_macro("_TAG_SEED")
#pragma pop_macro("_TAG_SIGNATURE")
#pragma pop_macro("_TAG_SIGNATUREMETHOD")
#pragma pop_macro("_TAG_SIGNATUREPROPERTIES")
#pragma pop_macro("_TAG_SIGNATUREPROPERTY")
#pragma pop_macro("_TAG_SIGNATUREVALUE")
#pragma pop_macro("_TAG_SIGNEDINFO")
#pragma pop_macro("_TAG_SPKIDATA")
#pragma pop_macro("_TAG_SPKISEXP")
#pragma pop_macro("_TAG_TRAILERFIELD")
#pragma pop_macro("_TAG_TRANSFORM")
#pragma pop_macro("_TAG_TRANSFORMS")
#pragma pop_macro("_TAG_X509CERTIFICATE")
#pragma pop_macro("_TAG_X509CRL")
#pragma pop_macro("_TAG_X509DATA")
#pragma pop_macro("_TAG_X509DIGEST")
#pragma pop_macro("_TAG_X509ISSUERNAME")
#pragma pop_macro("_TAG_X509ISSUERSERIAL")
#pragma pop_macro("_TAG_X509SERIALNUMBER")
#pragma pop_macro("_TAG_X509SKI")
#pragma pop_macro("_TAG_X509SUBJECTNAME")
#pragma pop_macro("_TAG_XPATH")
#pragma pop_macro("_TAG_Y")

#endif // _com_sun_org_apache_xml_internal_security_utils_Constants_h_