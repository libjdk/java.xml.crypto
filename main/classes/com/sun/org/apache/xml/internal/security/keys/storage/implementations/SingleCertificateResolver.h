#ifndef _com_sun_org_apache_xml_internal_security_keys_storage_implementations_SingleCertificateResolver_h_
#define _com_sun_org_apache_xml_internal_security_keys_storage_implementations_SingleCertificateResolver_h_
//$ class com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver
//$ extends com.sun.org.apache.xml.internal.security.keys.storage.StorageResolverSpi

#include <com/sun/org/apache/xml/internal/security/keys/storage/StorageResolverSpi.h>

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

class SingleCertificateResolver : public ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverSpi {
	$class(SingleCertificateResolver, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::keys::storage::StorageResolverSpi)
public:
	SingleCertificateResolver();
	void init$(::java::security::cert::X509Certificate* x509cert);
	virtual ::java::util::Iterator* getIterator() override;
	::java::security::cert::X509Certificate* certificate = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_security_keys_storage_implementations_SingleCertificateResolver_h_