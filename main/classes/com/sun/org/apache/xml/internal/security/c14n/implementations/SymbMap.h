#ifndef _com_sun_org_apache_xml_internal_security_c14n_implementations_SymbMap_h_
#define _com_sun_org_apache_xml_internal_security_c14n_implementations_SymbMap_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.implementations.SymbMap
//$ extends java.lang.Cloneable

#include <java/lang/Array.h>
#include <java/lang/Cloneable.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace c14n {
								namespace implementations {
									class NameSpaceSymbEntry;
								}
							}
						}
					}
				}
			}
		}
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
							namespace c14n {
								namespace implementations {

class SymbMap : public ::java::lang::Cloneable {
	$class(SymbMap, $NO_CLASS_INIT, ::java::lang::Cloneable)
public:
	SymbMap();
	void init$();
	virtual ::com::sun::org::apache::xml::internal::security::c14n::implementations::SymbMap* clone() override;
	virtual ::java::util::List* entrySet();
	virtual ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbEntry* get($String* key);
	virtual int32_t index(Object$* obj);
	virtual void put($String* key, ::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbEntry* value);
	virtual void rehash(int32_t newCapacity);
	int32_t free = 0;
	$Array<::com::sun::org::apache::xml::internal::security::c14n::implementations::NameSpaceSymbEntry>* entries = nullptr;
	$StringArray* keys = nullptr;
};

								} // implementations
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_c14n_implementations_SymbMap_h_