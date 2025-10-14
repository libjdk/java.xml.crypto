#ifndef _com_sun_org_apache_xml_internal_security_utils_XPathFactory_h_
#define _com_sun_org_apache_xml_internal_security_utils_XPathFactory_h_
//$ class com.sun.org.apache.xml.internal.security.utils.XPathFactory
//$ extends java.lang.Object

#include <java/lang/Object.h>

namespace com {
	namespace sun {
		namespace org {
			namespace apache {
				namespace xml {
					namespace internal {
						namespace security {
							namespace utils {
								class XPathAPI;
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
							namespace utils {

class XPathFactory : public ::java::lang::Object {
	$class(XPathFactory, 0, ::java::lang::Object)
public:
	XPathFactory();
	void init$();
	static ::com::sun::org::apache::xml::internal::security::utils::XPathFactory* newInstance();
	virtual ::com::sun::org::apache::xml::internal::security::utils::XPathAPI* newXPathAPI() {return nullptr;}
	static bool xalanInstalled;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_utils_XPathFactory_h_