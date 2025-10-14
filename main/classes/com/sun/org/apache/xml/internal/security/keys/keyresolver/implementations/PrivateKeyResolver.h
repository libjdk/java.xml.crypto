#ifndef _com_sun_org_apache_xml_internal_security_keys_keyresolver_implementations_PrivateKeyResolver_h_
#define _com_sun_org_apache_xml_internal_security_keys_keyresolver_implementations_PrivateKeyResolver_h_
//$ class com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.PrivateKeyResolver
//$ extends com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi

#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>
#include <java/lang/Array.h>

#pragma push_macro("LOG")
#undef LOG

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace content {
									namespace x509 {
										class XMLX509Certificate;
										class XMLX509IssuerSerial;
										class XMLX509SKI;
										class XMLX509SubjectName;
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
		class KeyStore;
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
namespace javax {
	namespace crypto {
		class SecretKey;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
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
								namespace keyresolver {
									namespace implementations {

class PrivateKeyResolver : public ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi {
	$class(PrivateKeyResolver, 0, ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi)
public:
	PrivateKeyResolver();
	void init$(::java::security::KeyStore* keyStore, $chars* password);
	virtual bool engineCanResolve(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage) override;
	virtual ::java::security::PrivateKey* engineResolvePrivateKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	virtual ::java::security::PublicKey* engineResolvePublicKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	virtual ::javax::crypto::SecretKey* engineResolveSecretKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	virtual ::java::security::cert::X509Certificate* engineResolveX509Certificate(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	::java::security::PrivateKey* resolveX509Certificate(::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509Certificate* x509Cert);
	::java::security::PrivateKey* resolveX509Data(::org::w3c::dom::Element* element, $String* baseURI);
	::java::security::PrivateKey* resolveX509IssuerSerial(::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509IssuerSerial* x509Serial);
	::java::security::PrivateKey* resolveX509SKI(::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SKI* x509SKI);
	::java::security::PrivateKey* resolveX509SubjectName(::com::sun::org::apache::xml::internal::security::keys::content::x509::XMLX509SubjectName* x509SubjectName);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::java::security::KeyStore* keyStore = nullptr;
	$chars* password = nullptr;
};

									} // implementations
								} // keyresolver
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_keys_keyresolver_implementations_PrivateKeyResolver_h_