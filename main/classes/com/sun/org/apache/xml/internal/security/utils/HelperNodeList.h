#ifndef _com_sun_org_apache_xml_internal_security_utils_HelperNodeList_h_
#define _com_sun_org_apache_xml_internal_security_utils_HelperNodeList_h_
//$ class com.sun.org.apache.xml.internal.security.utils.HelperNodeList
//$ extends org.w3c.dom.NodeList

#include <org/w3c/dom/NodeList.h>

namespace java {
	namespace util {
		class List;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
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

class HelperNodeList : public ::org::w3c::dom::NodeList {
	$class(HelperNodeList, $NO_CLASS_INIT, ::org::w3c::dom::NodeList)
public:
	HelperNodeList();
	void init$();
	void init$(bool allNodesMustHaveSameParent);
	virtual void appendChild(::org::w3c::dom::Node* node);
	virtual int32_t getLength() override;
	virtual ::org::w3c::dom::Document* getOwnerDocument();
	virtual ::org::w3c::dom::Node* item(int32_t index) override;
	::java::util::List* nodes = nullptr;
	bool allNodesMustHaveSameParent = false;
};

							} // utils
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#endif // _com_sun_org_apache_xml_internal_security_utils_HelperNodeList_h_