#ifndef _com_sun_org_apache_xml_internal_security_c14n_implementations_XmlAttrStack$XmlsStackElement_h_
#define _com_sun_org_apache_xml_internal_security_c14n_implementations_XmlAttrStack$XmlsStackElement_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.implementations.XmlAttrStack$XmlsStackElement
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
							namespace c14n {
								namespace implementations {

class XmlAttrStack$XmlsStackElement : public ::java::lang::Object {
	$class(XmlAttrStack$XmlsStackElement, $NO_CLASS_INIT, ::java::lang::Object)
public:
	XmlAttrStack$XmlsStackElement();
	void init$();
	int32_t level = 0;
	bool rendered = false;
	::java::util::List* nodes = nullptr;
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

#endif // _com_sun_org_apache_xml_internal_security_c14n_implementations_XmlAttrStack$XmlsStackElement_h_