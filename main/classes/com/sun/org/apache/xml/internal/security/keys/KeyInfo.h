#ifndef _com_sun_org_apache_xml_internal_security_keys_KeyInfo_h_
#define _com_sun_org_apache_xml_internal_security_keys_KeyInfo_h_
//$ class com.sun.org.apache.xml.internal.security.keys.KeyInfo
//$ extends com.sun.org.apache.xml.internal.security.utils.SignatureElementProxy

#include <com/sun/org/apache/xml/internal/security/utils/SignatureElementProxy.h>

#pragma push_macro("LOG")
#undef LOG
#pragma push_macro("URI")
#undef URI

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace content {
									class DEREncodedKeyValue;
									class KeyInfoReference;
									class KeyName;
									class KeyValue;
									class MgmtData;
									class PGPData;
									class RetrievalMethod;
									class SPKIData;
									class X509Data;
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
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace content {
									namespace keyvalues {
										class DSAKeyValue;
										class RSAKeyValue;
									}
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
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace keyresolver {
									class KeyResolverSpi;
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
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace storage {
									class StorageResolver;
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
		class PrivateKey;
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
	namespace util {
		class List;
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
							namespace keys {

class KeyInfo : public ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy {
	$class(KeyInfo, 0, ::com::sun::org::apache::xml::internal::security::utils::SignatureElementProxy)
public:
	KeyInfo();
	void init$(::org::w3c::dom::Document* doc);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::KeyName* keyname);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::DSAKeyValue* dsakeyvalue);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::keyvalues::RSAKeyValue* rsakeyvalue);
	virtual void add(::java::security::PublicKey* pk);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::KeyValue* keyvalue);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::MgmtData* mgmtdata);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::PGPData* pgpdata);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::RetrievalMethod* retrievalmethod);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::SPKIData* spkidata);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::X509Data* x509data);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::DEREncodedKeyValue* derEncodedKeyValue);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoReference* keyInfoReference);
	virtual void addDEREncodedKeyValue(::java::security::PublicKey* pk);
	virtual void addKeyInfoReference($String* URI);
	virtual void addKeyName($String* keynameString);
	virtual void addKeyValue(::java::security::PublicKey* pk);
	virtual void addKeyValue(::org::w3c::dom::Element* unknownKeyValueElement);
	virtual void addMgmtData($String* mgmtdata);
	virtual void addRetrievalMethod($String* uri, ::com::sun::org::apache::xml::internal::security::transforms::Transforms* transforms, $String* Type);
	virtual void addStorageResolver(::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storageResolver);
	virtual void addUnknownElement(::org::w3c::dom::Element* element);
	::java::security::cert::X509Certificate* applyCurrentResolver($String* uri, ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi* keyResolver);
	virtual bool containsDEREncodedKeyValue();
	virtual bool containsKeyInfoReference();
	virtual bool containsKeyName();
	virtual bool containsKeyValue();
	virtual bool containsMgmtData();
	virtual bool containsPGPData();
	virtual bool containsRetrievalMethod();
	virtual bool containsSPKIData();
	virtual bool containsUnknownElement();
	virtual bool containsX509Data();
	virtual $String* getBaseLocalName() override;
	virtual $String* getId();
	virtual ::java::security::PrivateKey* getPrivateKey();
	virtual ::java::security::PrivateKey* getPrivateKeyFromInternalResolvers();
	virtual ::java::security::PrivateKey* getPrivateKeyFromStaticResolvers();
	virtual ::java::security::PublicKey* getPublicKey();
	virtual ::java::security::PublicKey* getPublicKeyFromInternalResolvers();
	virtual ::java::security::PublicKey* getPublicKeyFromStaticResolvers();
	virtual ::javax::crypto::SecretKey* getSecretKey();
	virtual ::javax::crypto::SecretKey* getSecretKeyFromInternalResolvers();
	virtual ::javax::crypto::SecretKey* getSecretKeyFromStaticResolvers();
	virtual ::java::security::cert::X509Certificate* getX509Certificate();
	virtual ::java::security::cert::X509Certificate* getX509CertificateFromInternalResolvers();
	virtual ::java::security::cert::X509Certificate* getX509CertificateFromStaticResolvers();
	virtual bool isEmpty();
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::DEREncodedKeyValue* itemDEREncodedKeyValue(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi* itemInternalKeyResolver(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::KeyInfoReference* itemKeyInfoReference(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::KeyName* itemKeyName(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::KeyValue* itemKeyValue(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::MgmtData* itemMgmtData(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::PGPData* itemPGPData(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::RetrievalMethod* itemRetrievalMethod(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::SPKIData* itemSPKIData(int32_t i);
	virtual ::org::w3c::dom::Element* itemUnknownElement(int32_t i);
	virtual ::com::sun::org::apache::xml::internal::security::keys::content::X509Data* itemX509Data(int32_t i);
	virtual int32_t lengthDEREncodedKeyValue();
	virtual int32_t lengthInternalKeyResolver();
	virtual int32_t lengthKeyInfoReference();
	virtual int32_t lengthKeyName();
	virtual int32_t lengthKeyValue();
	virtual int32_t lengthMgmtData();
	virtual int32_t lengthPGPData();
	virtual int32_t lengthRetrievalMethod();
	virtual int32_t lengthSPKIData();
	virtual int32_t lengthUnknownElement();
	virtual int32_t lengthX509Data();
	virtual void registerInternalKeyResolver(::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi* realKeyResolver);
	virtual void setId($String* id);
	virtual void setSecureValidation(bool secureValidation);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::java::util::List* x509Datas = nullptr;
	static ::java::util::List* nullList;
	::java::util::List* storageResolvers = nullptr;
	::java::util::List* internalKeyResolvers = nullptr;
	bool secureValidation = false;
};

							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")
#pragma pop_macro("URI")

#endif // _com_sun_org_apache_xml_internal_security_keys_KeyInfo_h_