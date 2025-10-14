#ifndef _com_sun_org_apache_xml_internal_security_keys_storage_StorageResolverSpi_h_
#define _com_sun_org_apache_xml_internal_security_keys_storage_StorageResolverSpi_h_
//$ class com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverSpi
//$ extends java.lang.Object

#include <java/lang/Object.h>

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

class StorageResolverSpi : public ::java::lang::Object {
	$class(StorageResolverSpi, $NO_CLASS_INIT, ::java::lang::Object)
public:
	StorageResolverSpi();
	void init$();
	virtual ::java::util::Iterator* getIterator() {return nullptr;}
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

#endif // _com_sun_org_apache_xml_internal_security_keys_storage_StorageResolverSpi_h_