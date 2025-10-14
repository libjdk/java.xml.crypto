#ifndef _com_sun_org_apache_xml_internal_security_transforms_params_XPath2FilterContainer_h_
#define _com_sun_org_apache_xml_internal_security_transforms_params_XPath2FilterContainer_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.params.XPath2FilterContainer
//$ extends com.sun.org.apache.xml.internal.security.utils.ElementProxy
//$ implements com.sun.org.apache.xml.internal.security.transforms.TransformParam

#include <com/sun/org/apache/xml/internal/security/transforms/TransformParam.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>
#include <java/lang/Array.h>

#pragma push_macro("INTERSECT")
#undef INTERSECT
#pragma push_macro("SUBTRACT")
#undef SUBTRACT
#pragma push_macro("UNION")
#undef UNION
#pragma push_macro("_ATT_FILTER")
#undef _ATT_FILTER
#pragma push_macro("_ATT_FILTER_VALUE_INTERSECT")
#undef _ATT_FILTER_VALUE_INTERSECT
#pragma push_macro("_ATT_FILTER_VALUE_SUBTRACT")
#undef _ATT_FILTER_VALUE_SUBTRACT
#pragma push_macro("_ATT_FILTER_VALUE_UNION")
#undef _ATT_FILTER_VALUE_UNION
#pragma push_macro("_TAG_XPATH2")
#undef _TAG_XPATH2

namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
			class Node;
			class NodeList;
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
							namespace transforms {
								namespace params {

class XPath2FilterContainer : public ::com::sun::org::apache::xml::internal::security::utils::ElementProxy, public ::com::sun::org::apache::xml::internal::security::transforms::TransformParam {
	$class(XPath2FilterContainer, 0, ::com::sun::org::apache::xml::internal::security::utils::ElementProxy, ::com::sun::org::apache::xml::internal::security::transforms::TransformParam)
public:
	XPath2FilterContainer();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	void init$(::org::w3c::dom::Document* doc, $String* xpath2filter, $String* filterType);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual $String* getBaseLocalName() override;
	virtual $String* getBaseNamespace() override;
	$String* getXPathFilterStr();
	::org::w3c::dom::Node* getXPathFilterTextNode();
	bool isIntersect();
	bool isSubtract();
	bool isUnion();
	static ::com::sun::org::apache::xml::internal::security::transforms::params::XPath2FilterContainer* newInstance(::org::w3c::dom::Element* element, $String* baseURI);
	static ::com::sun::org::apache::xml::internal::security::transforms::params::XPath2FilterContainer* newInstanceIntersect(::org::w3c::dom::Document* doc, $String* xpath2filter);
	static ::com::sun::org::apache::xml::internal::security::transforms::params::XPath2FilterContainer* newInstanceSubtract(::org::w3c::dom::Document* doc, $String* xpath2filter);
	static ::com::sun::org::apache::xml::internal::security::transforms::params::XPath2FilterContainer* newInstanceUnion(::org::w3c::dom::Document* doc, $String* xpath2filter);
	static ::org::w3c::dom::NodeList* newInstances(::org::w3c::dom::Document* doc, $Array<::java::lang::String, 2>* params);
	virtual $String* toString() override;
	static $String* _ATT_FILTER;
	static $String* _ATT_FILTER_VALUE_INTERSECT;
	static $String* _ATT_FILTER_VALUE_SUBTRACT;
	static $String* _ATT_FILTER_VALUE_UNION;
	static $String* INTERSECT;
	static $String* SUBTRACT;
	static $String* UNION;
	static $String* _TAG_XPATH2;
	static $String* XPathFilter2NS;
};

								} // params
							} // transforms
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("INTERSECT")
#pragma pop_macro("SUBTRACT")
#pragma pop_macro("UNION")
#pragma pop_macro("_ATT_FILTER")
#pragma pop_macro("_ATT_FILTER_VALUE_INTERSECT")
#pragma pop_macro("_ATT_FILTER_VALUE_SUBTRACT")
#pragma pop_macro("_ATT_FILTER_VALUE_UNION")
#pragma pop_macro("_TAG_XPATH2")

#endif // _com_sun_org_apache_xml_internal_security_transforms_params_XPath2FilterContainer_h_