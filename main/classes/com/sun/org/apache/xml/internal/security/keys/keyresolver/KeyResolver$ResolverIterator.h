#ifndef _com_sun_org_apache_xml_internal_security_keys_keyresolver_KeyResolver$ResolverIterator_h_
#define _com_sun_org_apache_xml_internal_security_keys_keyresolver_KeyResolver$ResolverIterator_h_
//$ class com.sun.org.apache.xml.internal.security.keys.keyresolver.KeyResolver$ResolverIterator
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

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
								namespace keyresolver {

class KeyResolver$ResolverIterator : public ::java::util::Iterator {
	$class(KeyResolver$ResolverIterator, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	KeyResolver$ResolverIterator();
	void init$(::java::util::List* list);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::java::util::List* res = nullptr;
	::java::util::Iterator* it = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_security_keys_keyresolver_KeyResolver$ResolverIterator_h_