#ifndef _com_sun_org_apache_xml_internal_security_keys_keyresolver_KeyResolverSpi_h_
#define _com_sun_org_apache_xml_internal_security_keys_keyresolver_KeyResolverSpi_h_
//$ class com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolverSpi
//$ extends java.lang.Object

#include <java/lang/Array.h>

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

class KeyResolverSpi : public ::java::lang::Object {
	$class(KeyResolverSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	KeyResolverSpi();
	void init$();
	virtual bool engineCanResolve(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage) {return false;}
	virtual ::java::security::PrivateKey* engineLookupAndResolvePrivateKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation);
	virtual ::java::security::PublicKey* engineLookupAndResolvePublicKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation);
	virtual ::javax::crypto::SecretKey* engineLookupAndResolveSecretKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation);
	virtual ::java::security::cert::X509Certificate* engineLookupResolveX509Certificate(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation);
	virtual ::java::security::PrivateKey* engineResolvePrivateKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) {return nullptr;}
	virtual ::java::security::PublicKey* engineResolvePublicKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) {return nullptr;}
	virtual ::javax::crypto::SecretKey* engineResolveSecretKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) {return nullptr;}
	virtual ::java::security::cert::X509Certificate* engineResolveX509Certificate(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) {return nullptr;}
	static ::org::w3c::dom::Element* getDocFromBytes($bytes* bytes, bool secureValidation);
};

								} // keyresolver
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_keys_keyresolver_KeyResolverSpi_h_