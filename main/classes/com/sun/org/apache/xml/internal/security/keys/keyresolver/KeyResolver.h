#ifndef _com_sun_org_apache_xml_internal_security_keys_keyresolver_KeyResolver_h_
#define _com_sun_org_apache_xml_internal_security_keys_keyresolver_KeyResolver_h_
//$ class com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolver
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
		class Iterator;
		class List;
	}
}
namespace java {
	namespace util {
		namespace concurrent {
			namespace atomic {
				class AtomicBoolean;
			}
		}
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

class KeyResolver : public ::java::lang::Object {
	$class(KeyResolver, 0, ::java::lang::Object)
public:
	KeyResolver();
	void init$();
	static ::java::security::PublicKey* getPublicKey(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation);
	static ::java::security::cert::X509Certificate* getX509Certificate(::org::w3c::dom::Element* element, $String* baseURI, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolver* storage, bool secureValidation);
	static ::java::util::Iterator* iterator();
	static int32_t length();
	static void register$($String* className);
	static void register$(::com::sun::org::apache::xml::internal::security::keys::keyresolver::KeyResolverSpi* keyResolverSpi, bool start);
	static void registerAtStart($String* className);
	static void registerClassNames(::java::util::List* classNames);
	static void registerDefaultResolvers();
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static ::java::util::List* resolverList;
	static ::java::util::concurrent::atomic::AtomicBoolean* defaultResolversAdded;
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

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_keys_keyresolver_KeyResolver_h_