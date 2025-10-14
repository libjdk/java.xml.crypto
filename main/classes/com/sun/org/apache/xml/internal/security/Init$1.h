#ifndef _com_sun_org_apache_xml_internal_security_Init$1_h_
#define _com_sun_org_apache_xml_internal_security_Init$1_h_
//$ class com.sun.org.apache.xml.internal.security.Init$1
//$ extends java.security.PrivilegedExceptionAction

#include <java/security/PrivilegedExceptionAction.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {

class Init$1 : public ::java::security::PrivilegedExceptionAction {
	$class(Init$1, $NO_CLASS_INIT, ::java::security::PrivilegedExceptionAction)
public:
	Init$1();
	void init$();
	virtual $Object* run() override;
};

						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_Init$1_h_