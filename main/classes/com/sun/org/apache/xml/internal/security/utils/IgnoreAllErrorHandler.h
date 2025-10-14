#ifndef _com_sun_org_apache_xml_internal_security_utils_IgnoreAllErrorHandler_h_
#define _com_sun_org_apache_xml_internal_security_utils_IgnoreAllErrorHandler_h_
//$ class com.sun.org.apache.xml.internal.security.utils.IgnoreAllErrorHandler
//$ extends org.xml.sax.ErrorHandler

#include <org/xml/sax/ErrorHandler.h>

#pragma push_macro("LOG")
#undef LOG

namespace com {
	namespace sun {
		namespace org {
			namespace slf4j {
				namespace internal {
					class Logger;
				}
			}
		}
	}
}
namespace java {
	namespace lang {
		class Boolean;
	}
}
namespace org {
	namespace xml {
		namespace sax {
			class SAXParseException;
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

class IgnoreAllErrorHandler : public ::org::xml::sax::ErrorHandler {
	$class(IgnoreAllErrorHandler, 0, ::org::xml::sax::ErrorHandler)
public:
	IgnoreAllErrorHandler();
	void init$();
	virtual void error(::org::xml::sax::SAXParseException* ex) override;
	virtual void fatalError(::org::xml::sax::SAXParseException* ex) override;
	static bool getProperty($String* name);
	static ::java::lang::Boolean* lambda$getProperty$0($String* name);
	virtual void warning(::org::xml::sax::SAXParseException* ex) override;
	static ::com::sun::org::slf4j::internal::Logger* LOG;
	static bool warnOnExceptions;
	static bool throwExceptions;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("LOG")

#endif // _com_sun_org_apache_xml_internal_security_utils_IgnoreAllErrorHandler_h_