#ifndef _com_sun_org_apache_xml_internal_security_keys_storage_implementations_KeyStoreResolver_h_
#define _com_sun_org_apache_xml_internal_security_keys_storage_implementations_KeyStoreResolver_h_
//$ class com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver
//$ extends com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverSpi

#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi.h>

#pragma push_macro("LOG")
#undef LOG

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
	}
}
namespace java {
	namespace util {
		class Iterator;
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
									namespace implementations {

class KeyStoreResolver : public ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverSpi {
	$class(KeyStoreResolver, 0, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverSpi)
public:
	KeyStoreResolver();
	void init$(::java::security::KeyStore* keyStore);
	virtual ::java::util::Iterator* getIterator() override;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::java::security::KeyStore* keyStore = nullptr;
};

									} // implementations
								} // storage
							} // keys
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_keys_storage_implementations_KeyStoreResolver_h_