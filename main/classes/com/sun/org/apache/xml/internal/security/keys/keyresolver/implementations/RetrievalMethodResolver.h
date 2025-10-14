#ifndef _com_sun_org_apache_xml_internal_security_keys_keyresolver_implementations_RetrievalMethodResolver_h_
#define _com_sun_org_apache_xml_internal_security_keys_keyresolver_implementations_RetrievalMethodResolver_h_
//$ class com.sun.org.apache.xml.internal.security.keys.keyresolver.implementations.RetrievalMethodResolver
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
								namespace content {
									class RetrievalMethod;
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
							namespace signature {
								class XMLSignatureInput;
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
		class Set;
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

class RetrievalMethodResolver : public ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi {
	$class(RetrievalMethodResolver, 0, ::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi)
public:
	RetrievalMethodResolver();
	void init$();
	virtual bool engineCanResolve(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage) override;
	virtual ::java::security::PrivateKey* engineResolvePrivateKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	virtual ::java::security::PublicKey* engineResolvePublicKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	virtual ::javax::crypto::SecretKey* engineResolveSecretKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	virtual ::java::security::cert::X509Certificate* engineResolveX509Certificate(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation) override;
	static ::org::w3c::dom::Element* getDocumentElement(::java::util::Set* set);
	static ::java::security::cert::X509Certificate* getRawCertificate(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* resource);
	static ::org::w3c::dom::Element* obtainReferenceElement(::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* resource, bool secureValidation);
	static ::java::security::cert::X509Certificate* resolveCertificate(::org::w3c::dom::Element* e, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation);
	static ::com::sun::org::apache::xml::internal::security::signature::XMLSignatureInput* resolveInput(::com::sun::org::apache::xml::internal::security::keys::content::RetrievalMethod* rm, $String* baseURI, bool secureValidation);
	static ::java::security::PublicKey* resolveKey(::org::w3c::dom::Element* e, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation);
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

#endif // _com_sun_org_apache_xml_internal_security_keys_keyresolver_implementations_RetrievalMethodResolver_h_