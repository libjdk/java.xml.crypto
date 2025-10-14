#ifndef _com_sun_org_apache_xml_internal_security_Init$2_h_
#define _com_sun_org_apache_xml_internal_security_Init$2_h_
//$ class com.sun.org.apache.xml.internal.security.Init$2
//$ extends java.util.Enumeration

#include <java/util/Enumeration.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {

class Init$2 : public ::java::util::Enumeration {
	$class(Init$2, $NO_CLASS_INIT, ::java::util::Enumeration)
public:
	Init$2();
	void init$();
	virtual bool hasMoreElements() override;
	virtual $Object* nextElement() override;
};

						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_Init$2_h_