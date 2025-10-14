#ifndef _com_sun_org_apache_xml_internal_security_transforms_params_InclusiveNamespaces_h_
#define _com_sun_org_apache_xml_internal_security_transforms_params_InclusiveNamespaces_h_
//$ class com.sun.org.apache.xml.internal.security.transforms.params.InclusiveNamespaces
//$ extends com.sun.org.apache.xml.internal.security.utils.ElementProxy
//$ implements com.sun.org.apache.xml.internal.security.transforms.TransformParam

#include <com/sun/org/apache/xml/internal/security/transforms/TransformParam.h>
#include <com/sun/org/apache/xml/internal/security/utils/ElementProxy.h>

#pragma push_macro("_ATT_EC_PREFIXLIST")
#undef _ATT_EC_PREFIXLIST
#pragma push_macro("_TAG_EC_INCLUSIVENAMESPACES")
#undef _TAG_EC_INCLUSIVENAMESPACES

namespace java {
	namespace util {
		class Set;
		class SortedSet;
	}
}
namespace org {
	namespace w3c {
		namespace dom {
			class Document;
			class Element;
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

class InclusiveNamespaces : public ::com::sun::org::apache::xml::internal::security::utils::ElementProxy, public ::com::sun::org::apache::xml::internal::security::transforms::TransformParam {
	$class(InclusiveNamespaces, 0, ::com::sun::org::apache::xml::internal::security::utils::ElementProxy, ::com::sun::org::apache::xml::internal::security::transforms::TransformParam)
public:
	InclusiveNamespaces();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$(::org::w3c::dom::Document* doc, $String* prefixList);
	void init$(::org::w3c::dom::Document* doc, ::java::util::Set* prefixes);
	void init$(::org::w3c::dom::Element* element, $String* baseURI);
	virtual $String* getBaseLocalName() override;
	virtual $String* getBaseNamespace() override;
	virtual $String* getInclusiveNamespaces();
	static ::java::util::SortedSet* prefixStr2Set($String* inclusiveNamespaces);
	virtual $String* toString() override;
	static $String* _TAG_EC_INCLUSIVENAMESPACES;
	static $String* _ATT_EC_PREFIXLIST;
	static $String* ExclusiveCanonicalizationNamespace;
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

#pragma pop_macro("_ATT_EC_PREFIXLIST")
#pragma pop_macro("_TAG_EC_INCLUSIVENAMESPACES")

#endif // _com_sun_org_apache_xml_internal_security_transforms_params_InclusiveNamespaces_h_