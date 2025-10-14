#ifndef _com_sun_org_apache_xml_internal_security_signature_XMLSignature_h_
#define _com_sun_org_apache_xml_internal_security_signature_XMLSignature_h_
//$ class com.sun.org.apache.xml.internal.security.signature.XMLSignature
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>
#include <java/lang/Array.h>

#pragma push_macro("ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5")
#undef ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5
#pragma push_macro("ALGO_ID_MAC_HMAC_RIPEMD160")
#undef ALGO_ID_MAC_HMAC_RIPEMD160
#pragma push_macro("ALGO_ID_MAC_HMAC_SHA1")
#undef ALGO_ID_MAC_HMAC_SHA1
#pragma push_macro("ALGO_ID_MAC_HMAC_SHA224")
#undef ALGO_ID_MAC_HMAC_SHA224
#pragma push_macro("ALGO_ID_MAC_HMAC_SHA256")
#undef ALGO_ID_MAC_HMAC_SHA256
#pragma push_macro("ALGO_ID_MAC_HMAC_SHA384")
#undef ALGO_ID_MAC_HMAC_SHA384
#pragma push_macro("ALGO_ID_MAC_HMAC_SHA512")
#undef ALGO_ID_MAC_HMAC_SHA512
#pragma push_macro("ALGO_ID_SIGNATURE_DSA")
#undef ALGO_ID_SIGNATURE_DSA
#pragma push_macro("ALGO_ID_SIGNATURE_DSA_SHA256")
#undef ALGO_ID_SIGNATURE_DSA_SHA256
#pragma push_macro("ALGO_ID_SIGNATURE_ECDSA_RIPEMD160")
#undef ALGO_ID_SIGNATURE_ECDSA_RIPEMD160
#pragma push_macro("ALGO_ID_SIGNATURE_ECDSA_SHA1")
#undef ALGO_ID_SIGNATURE_ECDSA_SHA1
#pragma push_macro("ALGO_ID_SIGNATURE_ECDSA_SHA224")
#undef ALGO_ID_SIGNATURE_ECDSA_SHA224
#pragma push_macro("ALGO_ID_SIGNATURE_ECDSA_SHA256")
#undef ALGO_ID_SIGNATURE_ECDSA_SHA256
#pragma push_macro("ALGO_ID_SIGNATURE_ECDSA_SHA384")
#undef ALGO_ID_SIGNATURE_ECDSA_SHA384
#pragma push_macro("ALGO_ID_SIGNATURE_ECDSA_SHA512")
#undef ALGO_ID_SIGNATURE_ECDSA_SHA512
#pragma push_macro("ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5")
#undef ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5
#pragma push_macro("ALGO_ID_SIGNATURE_RSA")
#undef ALGO_ID_SIGNATURE_RSA
#pragma push_macro("ALGO_ID_SIGNATURE_RSA_PSS")
#undef ALGO_ID_SIGNATURE_RSA_PSS
#pragma push_macro("ALGO_ID_SIGNATURE_RSA_RIPEMD160")
#undef ALGO_ID_SIGNATURE_RSA_RIPEMD160
#pragma push_macro("ALGO_ID_SIGNATURE_RSA_SHA1")
#undef ALGO_ID_SIGNATURE_RSA_SHA1
#pragma push_macro("ALGO_ID_SIGNATURE_RSA_SHA1_MGF1")
#undef ALGO_ID_SIGNATURE_RSA_SHA1_MGF1
#pragma push_macro("ALGO_ID_SIGNATURE_RSA_SHA224")
#undef ALGO_ID_SIGNATURE_RSA_SHA224
#pragma push_macro("ALGO_ID_SIGNATURE_RSA_SHA256")
#undef ALGO_ID_SIGNATURE_RSA_SHA256
#pragma push_macro("ALGO_ID_SIGNATURE_RSA_SHA384")
#undef ALGO_ID_SIGNATURE_RSA_SHA384
#pragma push_macro("ALGO_ID_SIGNATURE_RSA_SHA512")
#undef ALGO_ID_SIGNATURE_RSA_SHA512
#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("MODE_SIGN")
#undef MODE_SIGN
#pragma push_macro("MODE_VERIFY")
#undef MODE_VERIFY

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								class KeyInfo;
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								class ObjectContainer;
								class SignedInfo;
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace transforms {
								class Transforms;
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {
								namespace resolver {
									class ResourceResolverSpi;
								}
							}
						}
					}
				}
			}
		}
	}
}
namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {
					class Logger;
				}
			}
		}
	}
}
namespace java {
	namespace security {
		class Key;
		class Provider;
		class PublicKey;
	}
}
namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
		}
	}
}
namespace java {
	namespace security {
		namespace spec {
			class AlgorithmParameterSpec;
		}
	}
}
namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
		}
	}
}

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {

class XMLSignature : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy {
	$class(XMLSignature, 0, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy)
public:
	XMLSignature();
	void init$(::org::w3c::dom::Document* doc, $String* baseURI, $String* signatureMethodURI);
	void init$(::org::w3c::dom::Document* doc, $String* baseURI, $String* signatureMethodURI, ::java::security::Provider* provider);
	void init$(::org::w3c::dom::Document* doc, $String* baseURI, $String* signatureMethodURI, int32_t hmacOutputLength);
	void init$(::org::w3c::dom::Document* doc, $String* baseURI, $String* signatureMethodURI, int32_t hmacOutputLength, ::java::security::Provider* provider);
	void init$(::org::w3c::dom::Document* doc, $String* baseURI, $String* signatureMethodURI, $String* canonicalizationMethodURI);
	void init$(::org::w3c::dom::Document* doc, $String* baseURI, $String* signatureMethodURI, $String* canonicalizationMethodURI, ::java::security::Provider* provider);
	void init$(::org::w3c::dom::Document* doc, $String* baseURI, $String* signatureMethodURI, int32_t hmacOutputLength, $String* canonicalizationMethodURI);
	void init$(::org::w3c::dom::Document* doc, $String* baseURI, $String* signatureMethodURI, int32_t hmacOutputLength, $String* canonicalizationMethodURI, ::java::security::Provider* provider, ::java::security::spec::AlgorithmParameterSpec* spec);
	void init$(::org::w3c::dom::Document* doc, $String* baseURI, ::org::w3c::dom::Element* signatureMethodElem, ::org::w3c::dom::Element* canonicalizationMethodElem);
	void init$(::org::w3c::dom::Document* doc, $String* baseURI, ::org::w3c::dom::Element* signatureMethodElem, ::org::w3c::dom::Element* canonicalizationMethodElem, ::java::security::Provider* provider);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	void init$(::org::w3c::dom::Element* element, $String* baseURI, ::java::security::Provider* provider);
	void init$(::org::w3c::dom::Element* element, $String* baseURI, bool secureValidation);
	void init$(::org::w3c::dom::Element* element, $String* baseURI, bool secureValidation, ::java::security::Provider* provider);
	void addDocument($String* referenceURI, ::com::sun::org::apache::xml::internal::security::transforms::Transforms* trans, $String* digestURI, $String* referenceId, $String* referenceType);
	void addDocument($String* referenceURI, ::com::sun::org::apache::xml::internal::security::transforms::Transforms* trans, $String* digestURI);
	void addDocument($String* referenceURI, ::com::sun::org::apache::xml::internal::security::transforms::Transforms* trans);
	void addDocument($String* referenceURI);
	void addKeyInfo(::java::security::cert::X509Certificate* cert);
	void addKeyInfo(::java::security::PublicKey* pk);
	void addResourceResolver(::com::sun::org::apache::xml::internal::security::utils::resolver::ResourceResolverSpi* resolver);
	void appendObject(::com::sun::org::apache::xml::internal::security::signature::ObjectContainer* object);
	bool checkSignatureValue(::java::security::cert::X509Certificate* cert);
	bool checkSignatureValue(::java::security::Key* pk);
	::javax::crypto::SecretKey* createSecretKey($bytes* secretKeyBytes);
	virtual $String* getBaseLocalName() override;
	$String* getId();
	::com::sun::org::apache::xml::internal::security::keys::KeyInfo* getKeyInfo();
	::com::sun::org::apache::xml::internal::security::signature::ObjectContainer* getObjectItem(int32_t i);
	int32_t getObjectLength();
	$bytes* getSignatureValue();
	::com::sun::org::apache::xml::internal::security::signature::SignedInfo* getSignedInfo();
	void setFollowNestedManifests(bool followManifests);
	void setId($String* id);
	void setSignatureValueElement($bytes* bytes);
	void sign(::java::security::Key* signingKey);
	static $String* ALGO_ID_MAC_HMAC_SHA1;
	static $String* ALGO_ID_SIGNATURE_DSA;
	static $String* ALGO_ID_SIGNATURE_DSA_SHA256;
	static $String* ALGO_ID_SIGNATURE_RSA;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA1;
	static $String* ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5;
	static $String* ALGO_ID_SIGNATURE_RSA_RIPEMD160;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA224;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA256;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA384;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA512;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA1_MGF1;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA224_MGF1;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA256_MGF1;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA384_MGF1;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA512_MGF1;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA3_224_MGF1;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA3_256_MGF1;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA3_384_MGF1;
	static $String* ALGO_ID_SIGNATURE_RSA_SHA3_512_MGF1;
	static $String* ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5;
	static $String* ALGO_ID_MAC_HMAC_RIPEMD160;
	static $String* ALGO_ID_MAC_HMAC_SHA224;
	static $String* ALGO_ID_MAC_HMAC_SHA256;
	static $String* ALGO_ID_MAC_HMAC_SHA384;
	static $String* ALGO_ID_MAC_HMAC_SHA512;
	static $String* ALGO_ID_SIGNATURE_ECDSA_SHA1;
	static $String* ALGO_ID_SIGNATURE_ECDSA_SHA224;
	static $String* ALGO_ID_SIGNATURE_ECDSA_SHA256;
	static $String* ALGO_ID_SIGNATURE_ECDSA_SHA384;
	static $String* ALGO_ID_SIGNATURE_ECDSA_SHA512;
	static $String* ALGO_ID_SIGNATURE_ECDSA_RIPEMD160;
	static $String* ALGO_ID_SIGNATURE_RSA_PSS;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::com::sun::org::apache::xml::internal::security::signature::SignedInfo* signedInfo = nullptr;
	::com::sun::org::apache::xml::internal::security::keys::KeyInfo* keyInfo = nullptr;
	bool followManifestsDuringValidation = false;
	::org::w3c::dom::Element* signatureValueElement = nullptr;
	static const int32_t MODE_SIGN = 0;
	static const int32_t MODE_VERIFY = 1;
	int32_t state = 0;
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ALGO_ID_MAC_HMAC_NOT_RECOMMENDED_MD5")
#pragma pop_macro("ALGO_ID_MAC_HMAC_RIPEMD160")
#pragma pop_macro("ALGO_ID_MAC_HMAC_SHA1")
#pragma pop_macro("ALGO_ID_MAC_HMAC_SHA224")
#pragma pop_macro("ALGO_ID_MAC_HMAC_SHA256")
#pragma pop_macro("ALGO_ID_MAC_HMAC_SHA384")
#pragma pop_macro("ALGO_ID_MAC_HMAC_SHA512")
#pragma pop_macro("ALGO_ID_SIGNATURE_DSA")
#pragma pop_macro("ALGO_ID_SIGNATURE_DSA_SHA256")
#pragma pop_macro("ALGO_ID_SIGNATURE_ECDSA_RIPEMD160")
#pragma pop_macro("ALGO_ID_SIGNATURE_ECDSA_SHA1")
#pragma pop_macro("ALGO_ID_SIGNATURE_ECDSA_SHA224")
#pragma pop_macro("ALGO_ID_SIGNATURE_ECDSA_SHA256")
#pragma pop_macro("ALGO_ID_SIGNATURE_ECDSA_SHA384")
#pragma pop_macro("ALGO_ID_SIGNATURE_ECDSA_SHA512")
#pragma pop_macro("ALGO_ID_SIGNATURE_NOT_RECOMMENDED_RSA_MD5")
#pragma pop_macro("ALGO_ID_SIGNATURE_RSA")
#pragma pop_macro("ALGO_ID_SIGNATURE_RSA_PSS")
#pragma pop_macro("ALGO_ID_SIGNATURE_RSA_RIPEMD160")
#pragma pop_macro("ALGO_ID_SIGNATURE_RSA_SHA1")
#pragma pop_macro("ALGO_ID_SIGNATURE_RSA_SHA1_MGF1")
#pragma pop_macro("ALGO_ID_SIGNATURE_RSA_SHA224")
#pragma pop_macro("ALGO_ID_SIGNATURE_RSA_SHA256")
#pragma pop_macro("ALGO_ID_SIGNATURE_RSA_SHA384")
#pragma pop_macro("ALGO_ID_SIGNATURE_RSA_SHA512")
#pragma pop_macro("LOG")
#pragma pop_macro("MODE_SIGN")
#pragma pop_macro("MODE_VERIFY")

#endif // _com_sun_org_apache_xml_internal_security_signature_XMLSignature_h_