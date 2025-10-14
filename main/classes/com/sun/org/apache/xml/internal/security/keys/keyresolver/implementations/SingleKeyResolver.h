#ifndef _com_sun_org_apache_xml_internal_security_keys_keyresolver_implementations_SingleKeyResolver_h_
#define _com_sun_org_apache_xml_internal_security_keys_keyresolver_implementations_SingleKeyResolver_h_
//$ class com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.SingleKeyResolver
//$ extends com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi

#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>

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

class SingleKeyResolver : public ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi {
	$class(SingleKeyResolver, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi)
public:
	SingleKeyResolver();
	void init$($String* keyName, ::java::security::PublicKey* publicKey);
	void init$($String* keyName, ::java::security::PrivateKey* privateKey);
	void init$($String* keyName, ::javax::crypto::SecretKey* secretKey);
	virtual bool engineCanResolve(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage) override;
	virtual ::java::security::PrivateKey* engineResolvePrivateKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	virtual ::java::security::PublicKey* engineResolvePublicKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	virtual ::javax::crypto::SecretKey* engineResolveSecretKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	virtual ::java::security::cert::X509Certificate* engineResolveX509Certificate(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	$String* keyName = nullptr;
	::java::security::PublicKey* publicKey = nullptr;
	::java::security::PrivateKey* privateKey = nullptr;
	::javax::crypto::SecretKey* secretKey = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_security_keys_keyresolver_implementations_SingleKeyResolver_h_