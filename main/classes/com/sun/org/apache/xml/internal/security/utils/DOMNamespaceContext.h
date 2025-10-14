#ifndef _com_sun_org_apache_xml_internal_security_utils_DOMNamespaceContext_h_
#define _com_sun_org_apache_xml_internal_security_utils_DOMNamespaceContext_h_
//$ class com.sun.org.apache.xml.internal.security.utils.DOMNamespaceContext
//$ extends javax.xml.namespace.NamespaceContext

#include <javax/xml/namespace/NamespaceContext.h>

namespace java {
	namespace util {
		class Iterator;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Node;
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

class DOMNamespaceContext : public ::javax::xml::namespace$::NamespaceContext {
	$class(DOMNamespaceContext, $NO_CLASS_INIT, ::javax::xml::namespace$::NamespaceContext)
public:
	DOMNamespaceContext();
	void init$(::org::w3c::dom::Node* context);
	virtual $String* getNamespaceURI($String* prefix) override;
	virtual $String* getPrefix($String* namespaceURI) override;
	virtual ::java::util::Iterator* getPrefixes($String* namespaceURI) override;
	virtual void setContext(::org::w3c::dom::Node* context);
	::org::w3c::dom::Node* context = nullptr;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_utils_DOMNamespaceContext_h_