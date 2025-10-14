#ifndef _com_sun_org_apache_xml_internal_security_keys_storage_implementations_SingleCertificateResolver$InternalIterator_h_
#define _com_sun_org_apache_xml_internal_security_keys_storage_implementations_SingleCertificateResolver$InternalIterator_h_
//$ class com.sun.org.apache.xml.internal.security.keys.storage.implementations.SingleCertificateResolver$InternalIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace security {
		namespace cert {
			class X509Certificate;
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
									namespace implementations {

class SingleCertificateResolver$InternalIterator : public ::java::util::Iterator {
	$class(SingleCertificateResolver$InternalIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	SingleCertificateResolver$InternalIterator();
	void init$(::java::security::cert::X509Certificate* x509cert);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	bool alreadyReturned = false;
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

#endif // _com_sun_org_apache_xml_internal_security_keys_storage_implementations_SingleCertificateResolver$InternalIterator_h_