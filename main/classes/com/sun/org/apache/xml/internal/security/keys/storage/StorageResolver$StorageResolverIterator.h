#ifndef _com_sun_org_apache_xml_internal_security_keys_storage_StorageResolver$StorageResolverIterator_h_
#define _com_sun_org_apache_xml_internal_security_keys_storage_StorageResolver$StorageResolverIterator_h_
//$ class com.sun.org.apache.xml.internal.security.keys.storage.StorageResolver$StorageResolverIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace keys {
								namespace storage {

class StorageResolver$StorageResolverIterator : public ::java::util::Iterator {
	$class(StorageResolver$StorageResolverIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	StorageResolver$StorageResolverIterator();
	void init$(::java::util::Iterator* resolvers);
	::java::util::Iterator* findNextResolver();
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::Iterator* resolvers = nullptr;
	::java::util::Iterator* currentResolver = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_security_keys_storage_StorageResolver$StorageResolverIterator_h_