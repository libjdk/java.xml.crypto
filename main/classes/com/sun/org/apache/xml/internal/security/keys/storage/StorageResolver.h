#ifndef _com_sun_org_apache_xml_internal_security_keys_storage_StorageResolver_h_
#define _com_sun_org_apache_xml_internal_security_keys_storage_StorageResolver_h_
//$ class com.sun.org.apache.xml.internal.security.keys.storage.StorageResolver
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
								namespace storage {
									class StorageResolverSpi;
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

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace storage {

class StorageResolver : public ::java::lang::Object {
	$class(StorageResolver, 0, ::java::lang::Object)
public:
	StorageResolver();
	void init$(::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverSpi* resolver);
	void init$(::java::security::KeyStore* keyStore);
	void init$(::java::security::cert::X509Certificate* x509certificate);
	virtual void add(::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverSpi* resolver);
	virtual void add(::java::security::KeyStore* keyStore);
	virtual void add(::java::security::cert::X509Certificate* x509certificate);
	virtual ::java::util::Iterator* getIterator();
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	::java::util::List* storageResolvers = nullptr;
};

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

#endif // _com_sun_org_apache_xml_internal_security_keys_storage_StorageResolver_h_