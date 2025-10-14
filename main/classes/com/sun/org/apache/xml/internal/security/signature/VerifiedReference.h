#ifndef _com_sun_org_apache_xml_internal_security_signature_VerifiedReference_h_
#define _com_sun_org_apache_xml_internal_security_signature_VerifiedReference_h_
//$ class com.sun.org.apache.xml.internal.security.signature.VerifiedReference
//$ extends java.lang.Object

#include <java/lang/Object.h>

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
							namespace signature {

class VerifiedReference : public ::java::lang::Object {
	$class(VerifiedReference, $NO_CLASS_INIT, ::java::lang::Object)
public:
	VerifiedReference();
	void init$(bool valid, $String* uri, ::java::util::List* manifestReferences);
	virtual ::java::util::List* getManifestReferences();
	virtual $String* getUri();
	virtual bool isValid();
	bool valid = false;
	$String* uri = nullptr;
	::java::util::List* manifestReferences = nullptr;
};

							} // signature
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_signature_VerifiedReference_h_