#ifndef _com_sun_org_apache_xml_internal_security_c14n_helper_AttrCompare_h_
#define _com_sun_org_apache_xml_internal_security_c14n_helper_AttrCompare_h_
//$ class com.sun.org.apache.xml.internal.security.c14n.helper.AttrCompare
//$ extends java.util.Comparator
//$ implements java.io.Serializable

#include <com/sun/org/apache/xml/internal/security/utils/Constants.h>
#include <java/io/Serializable.h>
#include <java/util/Comparator.h>

#pragma push_macro("ATTR0_BEFORE_ATTR1")
#undef ATTR0_BEFORE_ATTR1
#pragma push_macro("ATTR1_BEFORE_ATTR0")
#undef ATTR1_BEFORE_ATTR0
#pragma push_macro("XMLNS")
#undef XMLNS

namespace org {
	namespace w3c {
		namespace dom {
			class Attr;
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
							namespace c14n {
								namespace helper {

class AttrCompare : public ::java::util::Comparator, public ::java::io::Serializable {
	$class(AttrCompare, 0, ::java::util::Comparator, ::java::io::Serializable)
public:
	AttrCompare();
	virtual ::java::lang::Object0* toObject0$() const override {return (::java::lang::Object0*)(void*)this;}
	virtual $Object* clone() override;
	virtual bool equals(Object$* arg0) override;
	virtual void finalize() override;
	virtual int32_t hashCode() override;
	void init$();
	virtual int32_t compare(::org::w3c::dom::Attr* attr0, ::org::w3c::dom::Attr* attr1);
	virtual int32_t compare(Object$* attr0, Object$* attr1) override;
	virtual $String* toString() override;
	static const int64_t serialVersionUID = (int64_t)0x9D48A00DE2DC869A;
	static const int32_t ATTR0_BEFORE_ATTR1 = (-1);
	static const int32_t ATTR1_BEFORE_ATTR0 = 1;
	static $String* XMLNS;
};

								} // helper
							} // c14n
						} // security
					} // internal
				} // xml
			} // apache
		} // org
	} // sun
} // com

#pragma pop_macro("ATTR0_BEFORE_ATTR1")
#pragma pop_macro("ATTR1_BEFORE_ATTR0")
#pragma pop_macro("XMLNS")

#endif // _com_sun_org_apache_xml_internal_security_c14n_helper_AttrCompare_h_