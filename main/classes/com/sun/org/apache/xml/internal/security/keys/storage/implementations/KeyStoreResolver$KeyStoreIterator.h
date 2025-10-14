#ifndef _com_sun_org_apache_xml_internal_security_keys_storage_implementations_KeyStoreResolver$KeyStoreIterator_h_
#define _com_sun_org_apache_xml_internal_security_keys_storage_implementations_KeyStoreResolver$KeyStoreIterator_h_
//$ class com.sun.org.apache.xml.internal.security.keys.storage.implementations.KeyStoreResolver$KeyStoreIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace java {
	namespace security {
		class KeyStore;
	}
}
namespace java {
	namespace util {
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
									namespace implementations {

class KeyStoreResolver$KeyStoreIterator : public ::java::util::Iterator {
	$class(KeyStoreResolver$KeyStoreIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	KeyStoreResolver$KeyStoreIterator();
	void init$(::java::security::KeyStore* keyStore);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::List* certs = nullptr;
	int32_t i = 0;
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

#endif // _com_sun_org_apache_xml_internal_security_keys_storage_implementations_KeyStoreResolver$KeyStoreIterator_h_