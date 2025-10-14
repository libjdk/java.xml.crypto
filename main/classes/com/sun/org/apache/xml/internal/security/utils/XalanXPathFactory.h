#ifndef _com_sun_org_apache_xml_internal_security_utils_XalanXPathFactory_h_
#define _com_sun_org_apache_xml_internal_security_utils_XalanXPathFactory_h_
//$ class com.sun.org.apache.xml.internal.security.utils.XalanXPathFactory
//$ extends com.sun.org.apache.xml.internal.security.utils.XPathFactory

#include <com/sun/org/apache/xml/internal/security/utils/XPathFactory.h>

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

class XalanXPathFactory : public ::com::sun::org::apache::xml::internal::security::utils::XPathFactory {
	$class(XalanXPathFactory, $NO_CLASS_INIT, ::com::sun::org::apache::xml::internal::security::utils::XPathFactory)
public:
	XalanXPathFactory();
	void init$();
	virtual ::com::sun::org::apache::xml::internal::security::utils::XPathAPI* newXPathAPI() override;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_utils_XalanXPathFactory_h_