#ifndef _com_sun_org_apache_xml_internal_security_signature_Reference$2$1_h_
#define _com_sun_org_apache_xml_internal_security_signature_Reference$2$1_h_
//$ class com.sun.org.apache.xml.internal.security.signature.Reference$2$1
//$ extends java.util.Iterator

#include <java/util/Iterator.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace signature {
								class Reference$2;
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
							namespace signature {

class Reference$2$1 : public ::java::util::Iterator {
	$class(Reference$2$1, $NO_CLASS_INIT, ::java::util::Iterator)
public:
	Reference$2$1();
	void init$(::com::sun::org::apache::xml::internal::security::signature::Reference$2* this$1);
	virtual bool hasNext() override;
	virtual $Object* next() override;
	virtual void remove() override;
	::com::sun::org::apache::xml::internal::security::signature::Reference$2* this$1 = nullptr;
	::java::util::Iterator* sIterator = nullptr;
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_signature_Reference$2$1_h_