#ifndef _com_sun_org_apache_xml_internal_security_keys_keyresolver_implementations_X509DigestResolver_h_
#define _com_sun_org_apache_xml_internal_security_keys_keyresolver_implementations_X509DigestResolver_h_
//$ class com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.X509DigestResolver
//$ extends com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi

#include <com/sun/org/apache/xml/internal/security/keys/keyresolver/KeyResolverSpi.h>

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

class X509DigestResolver : public ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi {
	$class(X509DigestResolver, 0, ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi)
public:
	X509DigestResolver();
	void init$();
	void checkStorage(::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage);
	virtual bool engineCanResolve(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage) override;
	virtual ::java::security::PrivateKey* engineResolvePrivateKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	virtual ::java::security::PublicKey* engineResolvePublicKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	virtual ::javax::crypto::SecretKey* engineResolveSecretKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	virtual ::java::security::cert::X509Certificate* engineResolveX509Certificate(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	::java::security::cert::X509Certificate* resolveCertificate(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage);
	static ::com::sun::org::slf4j::internal::Logger* LOG;
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

#endif // _com_sun_org_apache_xml_internal_security_keys_keyresolver_implementations_X509DigestResolver_h_